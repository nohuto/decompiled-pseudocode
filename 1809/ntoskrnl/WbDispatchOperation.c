/*
 * XREFs of WbDispatchOperation @ 0x140625364
 * Callers:
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 * Callees:
 *     PsGetProcessId @ 0x1400A56F0 (PsGetProcessId.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     WbDecryptEncryptionSegment @ 0x140583E04 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x140583EC8 (WbReEncryptEncryptionSegment.c)
 *     WbRemoveWarbirdProcess @ 0x140608988 (WbRemoveWarbirdProcess.c)
 *     WbHeapExecuteCall @ 0x140624ABC (WbHeapExecuteCall.c)
 *     sub_140624C6C @ 0x140624C6C (sub_140624C6C.c)
 *     WbAlloc @ 0x140624D14 (WbAlloc.c)
 *     sub_14062554C @ 0x14062554C (sub_14062554C.c)
 *     WbGetWarbirdProcess @ 0x140625584 (WbGetWarbirdProcess.c)
 *     WbProcessModuleUnload @ 0x1406B09E4 (WbProcessModuleUnload.c)
 *     WbProcessStartup @ 0x1406CFE14 (WbProcessStartup.c)
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
  __int64 *v14; // [rsp+60h] [rbp+8h] BYREF
  PVOID P; // [rsp+70h] [rbp+18h] BYREF

  v2 = (unsigned int)NumberOfBytes;
  v14 = 0LL;
  P = 0LL;
  if ( Src )
  {
    if ( (unsigned int)NumberOfBytes < 8 )
    {
      WarbirdProcess = -1073741811;
      goto LABEL_18;
    }
    v4 = &Src[(unsigned int)NumberOfBytes];
    if ( (unsigned __int64)v4 > 0x7FFFFFFF0000LL || v4 < Src )
      MEMORY[0x7FFFFFFF0000] = 0;
    WarbirdProcess = WbAlloc((unsigned int)NumberOfBytes, &P);
    if ( WarbirdProcess < 0 )
      goto LABEL_18;
    v6 = (int *)P;
    memmove(P, Src, v2);
    v7 = *v6;
    v13 = *v6;
  }
  else
  {
    v7 = 4;
    v13 = 4;
  }
  v8 = v7 != 7;
  ProcessId = PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
  WarbirdProcess = WbGetWarbirdProcess(ProcessId, v8, &v14);
  if ( WarbirdProcess < 0 )
    goto LABEL_18;
  switch ( v13 )
  {
    case 1:
      v11 = WbDecryptEncryptionSegment((__int64)v14, (__int64)P, (unsigned int)v2);
      goto LABEL_17;
    case 2:
      v11 = WbReEncryptEncryptionSegment((__int64)v14, (__int64)P, (unsigned int)v2);
      goto LABEL_17;
    case 3:
      v11 = WbHeapExecuteCall((__int64)v14, P, Src, v2);
      goto LABEL_17;
    case 4:
      if ( !P )
      {
        v11 = sub_140624C6C((__int64)v14, v10);
LABEL_17:
        WarbirdProcess = v11;
        goto LABEL_18;
      }
      break;
    case 5:
    case 6:
      WarbirdProcess = Src != 0LL ? -1073741822 : -1073741811;
      goto LABEL_18;
    case 7:
      v11 = WbRemoveWarbirdProcess(*v14);
      goto LABEL_17;
    case 8:
      v11 = WbProcessStartup(v14, P, (unsigned int)v2);
      goto LABEL_17;
    case 9:
      v11 = WbProcessModuleUnload(v14, P, (unsigned int)v2);
      goto LABEL_17;
  }
  WarbirdProcess = -1073741811;
LABEL_18:
  sub_14062554C(v14);
  if ( P )
    ExFreePoolWithTag(P, 0x42524157u);
  return (unsigned int)WarbirdProcess;
}
