/*
 * XREFs of PopTransitionToSleep @ 0x14056D0F0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     PopDiagTraceEventNoPayload @ 0x140135B30 (PopDiagTraceEventNoPayload.c)
 *     MmFlushAllPagesEx @ 0x1401531EC (MmFlushAllPagesEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MmEmptyAllWorkingSets @ 0x1402B43A4 (MmEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x1402B4528 (MmTrimFilePagesFromWorkingSets.c)
 *     PopInvokeSystemStateHandler @ 0x140569DB8 (PopInvokeSystemStateHandler.c)
 *     MmDuplicateMemory @ 0x14056D274 (MmDuplicateMemory.c)
 *     PopEnlargeHiberFile @ 0x1406E0EF4 (PopEnlargeHiberFile.c)
 */

LONG __fastcall PopTransitionToSleep(PRKEVENT Event)
{
  volatile LONG Lock; // esi
  int v3; // eax
  char v4; // cl
  char v5; // r14
  char v6; // r15
  unsigned int v7; // r12d
  int v8; // eax
  LONG v9; // eax
  LONG v10; // ecx
  _QWORD v12[6]; // [rsp+30h] [rbp-30h] BYREF
  char v13; // [rsp+90h] [rbp+30h] BYREF

  memset(v12, 0, 0x28uLL);
  Lock = Event[3].Header.Lock;
  qword_140418990 = (__int64)KeGetCurrentThread();
  v13 = 0;
  if ( Lock == 3 || Lock == 6 )
  {
    if ( (PopSimulateHiberBugcheck & 0x20) != 0 )
    {
      KeSetEvent(Event, 0, 1u);
      KeWaitForSingleObject(&Event[1], Executive, 0, 0, 0LL);
      v10 = 0;
      goto LABEL_16;
    }
    v3 = PopEnlargeHiberFile(&v13);
    v4 = v13;
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
      if ( (dword_1404187AC & 0x20) != 0 && PopEnableMinimalHiberFile || PopForceMinimalHiberFile )
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
    LODWORD(v12[4]) = v8;
    byte_1404195BC = v5;
    byte_1404195BD = v6;
    dword_1404195B8 = v8;
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHALLPAGES);
    if ( v5 )
      MmFlushAllPagesEx(v6, v7);
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHALLPAGES_END);
    PopHibernatePowerStateHandlerType = Lock;
    PopSleeperHandoff = Event;
    v9 = MmDuplicateMemory(v12);
    PopSleeperHandoff = 0LL;
    PopHibernatePowerStateHandlerType = 7;
    goto LABEL_15;
  }
  KeSetEvent(Event, 0, 1u);
  KeWaitForSingleObject(&Event[1], Executive, 0, 0, 0LL);
  v9 = PopInvokeSystemStateHandler(Lock, BugCheckParameter4);
LABEL_15:
  v10 = v9;
LABEL_16:
  qword_140418D40 = __rdtsc();
  Event[3].Header.SignalState = v10;
  return KeSetEvent(Event + 2, 0, 0);
}
