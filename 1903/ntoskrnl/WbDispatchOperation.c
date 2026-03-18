/*
 * XREFs of WbDispatchOperation @ 0x1405CA8A0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 * Callees:
 *     PsGetProcessId @ 0x1400045E0 (PsGetProcessId.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     WbDecryptEncryptionSegment @ 0x1405B35EC (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x1405B36BC (WbReEncryptEncryptionSegment.c)
 *     sub_1405C9A80 @ 0x1405C9A80 (sub_1405C9A80.c)
 *     WbHeapExecuteCall @ 0x1405CA1C8 (WbHeapExecuteCall.c)
 *     WbAlloc @ 0x1405CA590 (WbAlloc.c)
 *     sub_1405CA880 @ 0x1405CA880 (sub_1405CA880.c)
 *     WbGetWarbirdProcess @ 0x1405CAA80 (WbGetWarbirdProcess.c)
 *     sub_1405CAC58 @ 0x1405CAC58 (sub_1405CAC58.c)
 *     WbRemoveWarbirdProcess @ 0x140671CFC (WbRemoveWarbirdProcess.c)
 *     WbProcessModuleUnload @ 0x1406D5B04 (WbProcessModuleUnload.c)
 *     WbProcessStartup @ 0x1406EE3B4 (WbProcessStartup.c)
 */

__int64 __fastcall WbDispatchOperation(char *Src, SIZE_T NumberOfBytes)
{
  size_t v2; // rsi
  char *v4; // rax
  int WarbirdProcess; // ebx
  int *v6; // rbx
  int v7; // eax
  BOOL v8; // ebx
  HANDLE ProcessId; // rax
  __int64 v10; // rdx
  int v11; // eax
  int v13; // [rsp+28h] [rbp-30h]
  _QWORD *v14; // [rsp+60h] [rbp+8h] BYREF
  void *v15; // [rsp+70h] [rbp+18h] BYREF

  v2 = (unsigned int)NumberOfBytes;
  v14 = 0LL;
  v15 = 0LL;
  if ( !Src )
  {
    v7 = 4;
    v13 = 4;
LABEL_10:
    v8 = v7 != 7;
    ProcessId = PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
    WarbirdProcess = WbGetWarbirdProcess(ProcessId, v8, &v14);
    if ( WarbirdProcess >= 0 )
    {
      if ( v13 == 1 )
      {
        v11 = WbDecryptEncryptionSegment((__int64)v14, (__int64)v15, (unsigned int)v2);
        goto LABEL_18;
      }
      if ( v13 == 2 )
      {
        v11 = WbReEncryptEncryptionSegment((__int64)v14, (__int64)v15, (unsigned int)v2);
        goto LABEL_18;
      }
      if ( v13 != 3 )
      {
        switch ( v13 )
        {
          case 4:
            if ( !v15 )
            {
              v11 = sub_1405C9A80((__int64)v14, v10);
LABEL_18:
              WarbirdProcess = v11;
              goto LABEL_19;
            }
            break;
          case 5:
          case 6:
            WarbirdProcess = Src != 0LL ? -1073741822 : -1073741811;
            goto LABEL_19;
          case 7:
            v11 = WbRemoveWarbirdProcess(*v14);
            goto LABEL_18;
          case 8:
            v11 = WbProcessStartup(v14, v15, (unsigned int)v2);
            goto LABEL_18;
          case 9:
            v11 = WbProcessModuleUnload(v14, v15, (unsigned int)v2);
            goto LABEL_18;
        }
        WarbirdProcess = -1073741811;
        goto LABEL_19;
      }
      v11 = WbHeapExecuteCall((__int64)v14, v15, Src, v2);
      goto LABEL_18;
    }
    goto LABEL_19;
  }
  if ( (unsigned int)NumberOfBytes < 8 )
  {
    WarbirdProcess = -1073741811;
    goto LABEL_19;
  }
  v4 = &Src[(unsigned int)NumberOfBytes];
  if ( (unsigned __int64)v4 > 0x7FFFFFFF0000LL || v4 < Src )
    MEMORY[0x7FFFFFFF0000] = 0;
  WarbirdProcess = WbAlloc((unsigned int)NumberOfBytes, &v15);
  if ( WarbirdProcess >= 0 )
  {
    v6 = (int *)v15;
    memmove(v15, Src, v2);
    v7 = *v6;
    v13 = *v6;
    goto LABEL_10;
  }
LABEL_19:
  sub_1405CAC58(v14);
  sub_1405CA880(v15);
  return (unsigned int)WarbirdProcess;
}
