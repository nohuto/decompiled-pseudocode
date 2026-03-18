/*
 * XREFs of PspGetNextJob @ 0x140615390
 * Callers:
 *     PspEnforceLimits @ 0x140612870 (PspEnforceLimits.c)
 *     PspGetNextSilo @ 0x140615358 (PspGetNextSilo.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     ObReferenceObjectSafeWithTag @ 0x14003F810 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockJobListShared @ 0x140615440 (PspUnlockJobListShared.c)
 */

__int64 *__fastcall PspGetNextJob(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *v2; // rbp
  __int64 *v4; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PspJobListLock, 0LL);
  v4 = (__int64 *)PspJobList;
  if ( Object )
    v4 = (__int64 *)Object[3];
  while ( v4 != &PspJobList )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)(v4 - 3)) )
    {
      v2 = v4 - 3;
      break;
    }
    v4 = (__int64 *)*v4;
  }
  PspUnlockJobListShared(CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return v2;
}
