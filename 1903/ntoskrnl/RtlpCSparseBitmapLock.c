/*
 * XREFs of RtlpCSparseBitmapLock @ 0x14010FE44
 * Callers:
 *     RtlpCSparseBitmapPageDecommit @ 0x14010ECFC (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpCSparseBitmapPageCommit @ 0x14010FCE8 (RtlpCSparseBitmapPageCommit.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockShared @ 0x140061980 (ExAcquireSpinLockShared.c)
 */

KIRQL __fastcall RtlpCSparseBitmapLock(__int64 a1, int a2, __int64 a3)
{
  volatile LONG *v5; // rcx
  KIRQL result; // al
  struct _KTHREAD *CurrentThread; // rax

  v5 = (volatile LONG *)(a1 + 24);
  if ( *(_BYTE *)(a1 + 48) )
  {
    if ( a2 == 1 )
      result = ExAcquireSpinLockExclusive(v5);
    else
      result = ExAcquireSpinLockShared(v5);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    if ( a2 == 1 )
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
    else
      ExAcquirePushLockSharedEx((ULONG_PTR)v5, 0LL);
    result = -1;
  }
  *(_BYTE *)(a3 + 4) = result;
  *(_QWORD *)(a3 + 8) = a1;
  *(_DWORD *)a3 = a2;
  return result;
}
