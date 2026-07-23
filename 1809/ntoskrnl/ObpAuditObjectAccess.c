/*
 * XREFs of ObpAuditObjectAccess @ 0x1408625F4
 * Callers:
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     NtWriteFile @ 0x140639C60 (NtWriteFile.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExLockHandleTableEntry @ 0x140053220 (ExLockHandleTableEntry.c)
 *     ExfUnblockPushLock @ 0x1401B75B0 (ExfUnblockPushLock.c)
 *     SeOperationAuditAlarm @ 0x14089EC94 (SeOperationAuditAlarm.c)
 *     ExpGetHandleExtraInfo @ 0x1408CF3D0 (ExpGetHandleExtraInfo.c)
 */

char __fastcall ObpAuditObjectAccess(__int64 a1, __int64 a2, volatile signed __int64 *a3, __int64 a4, int a5)
{
  int v7; // r12d
  int *HandleExtraInfo; // rdi
  struct _KTHREAD *CurrentThread; // r15
  char v11; // di
  int v12; // ecx
  int v13; // r8d
  __int64 v14; // r10
  __int64 *v15; // rcx
  signed __int32 v17[12]; // [rsp+0h] [rbp-58h] BYREF

  v7 = a2;
  if ( !*(_DWORD *)(a1 + 4) )
    return 1;
  HandleExtraInfo = (int *)ExpGetHandleExtraInfo(a1, a2);
  if ( !HandleExtraInfo )
    return 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExLockHandleTableEntry(a1, (signed __int64 *)a3) )
  {
    _m_prefetchw(HandleExtraInfo);
    v12 = *HandleExtraInfo;
    if ( a4 == ((*(__int64 *)a3 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      v13 = a5 & v12;
      if ( (a5 & v12) != 0 )
      {
        v14 = 0LL;
        *HandleExtraInfo = v12 & ~a5;
        if ( (*(_BYTE *)(a4 + 26) & 0x20) != 0 )
          v15 = (__int64 *)(a4 - ObpInfoMaskToOffset[*(_BYTE *)(a4 + 26) & 0x3F]);
        else
          v15 = 0LL;
        if ( v15 )
          v14 = *v15;
        SeOperationAuditAlarm(
          (_DWORD)v15,
          a4 + 48,
          v7,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a4 + 24) ^ (unsigned __int64)BYTE1(a4)]
        + 16,
          v13,
          v17[10],
          v14);
      }
      v11 = 1;
    }
    else
    {
      v11 = 0;
    }
    _InterlockedExchangeAdd64(a3, 1uLL);
    _InterlockedOr(v17, 0);
    if ( *(_QWORD *)(a1 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  }
  else
  {
    v11 = 0;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v11;
}
