/*
 * XREFs of PopTransitionToSleep @ 0x14059D270
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     PopDiagTraceEventNoPayload @ 0x140138684 (PopDiagTraceEventNoPayload.c)
 *     MmFlushAllPagesEx @ 0x14016A6EC (MmFlushAllPagesEx.c)
 *     MmEmptyAllWorkingSets @ 0x1402C93B4 (MmEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x1402C9538 (MmTrimFilePagesFromWorkingSets.c)
 *     PopInvokeSystemStateHandler @ 0x14059871C (PopInvokeSystemStateHandler.c)
 *     MmDuplicateMemory @ 0x14059D3EC (MmDuplicateMemory.c)
 *     PopEnlargeHiberFile @ 0x14072B494 (PopEnlargeHiberFile.c)
 */

LONG __fastcall PopTransitionToSleep(struct _KEVENT *a1)
{
  int Lock; // esi
  int v3; // eax
  char v4; // cl
  char v5; // r14
  char v6; // r15
  unsigned int v7; // r12d
  int v8; // eax
  LONG v9; // eax
  LONG v10; // ecx
  _QWORD v12[4]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h]
  char v14; // [rsp+90h] [rbp+30h] BYREF

  Lock = a1[3].Header.Lock;
  v13 = 0LL;
  v14 = 0;
  BugCheckParameter4 = (ULONG_PTR)KeGetCurrentThread();
  if ( Lock == 3 || Lock == 6 )
  {
    if ( (PopSimulateHiberBugcheck & 0x20) != 0 )
    {
      KeSetEvent(a1, 0, 1u);
      KeWaitForSingleObject(&a1[1], Executive, 0, 0, 0LL);
      v10 = 0;
      goto LABEL_16;
    }
    v3 = PopEnlargeHiberFile(&v14);
    v4 = v14;
    if ( v3 < 0 )
      v4 = 1;
    v12[0] = xHalPciEarlyRestore;
    v12[3] = 0LL;
    v12[1] = PopEndMirroring;
    v5 = 0;
    v6 = 0;
    v12[2] = PopMirrorPhysicalMemory;
    v7 = 60;
    if ( v4 )
    {
      MmEmptyAllWorkingSets();
      v8 = 17;
      v6 = 1;
    }
    else
    {
      if ( (dword_140442FCC & 0x20) != 0 && PopEnableMinimalHiberFile || PopForceMinimalHiberFile )
      {
        MmEmptyAllWorkingSets();
        v6 = 1;
      }
      else
      {
        if ( Lock == 6 )
        {
          MmTrimFilePagesFromWorkingSets();
          v8 = 17;
          goto LABEL_12;
        }
        v7 = 8;
      }
      v8 = 20;
    }
    v5 = 1;
LABEL_12:
    LODWORD(v13) = v8;
    byte_140443E5C = v5;
    byte_140443E5D = v6;
    dword_140443E58 = v8;
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHALLPAGES);
    if ( v5 )
      MmFlushAllPagesEx(v6, v7);
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHALLPAGES_END);
    PopHibernatePowerStateHandlerType = Lock;
    PopSleeperHandoff = a1;
    v9 = MmDuplicateMemory(v12);
    PopSleeperHandoff = 0LL;
    PopHibernatePowerStateHandlerType = 7;
    goto LABEL_15;
  }
  KeSetEvent(a1, 0, 1u);
  KeWaitForSingleObject(&a1[1], Executive, 0, 0, 0LL);
  v9 = PopInvokeSystemStateHandler(Lock, qword_140443000);
LABEL_15:
  v10 = v9;
LABEL_16:
  qword_1404435E0 = __rdtsc();
  a1[3].Header.SignalState = v10;
  return KeSetEvent(a1 + 2, 0, 0);
}
