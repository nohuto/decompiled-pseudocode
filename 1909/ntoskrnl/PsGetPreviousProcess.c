/*
 * XREFs of PsGetPreviousProcess @ 0x1408CC978
 * Callers:
 *     NtGetNextProcess @ 0x140743DC0 (NtGetNextProcess.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     ObReferenceObjectSafeWithTag @ 0x14003F810 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockProcessListShared @ 0x14017FC10 (PspUnlockProcessListShared.c)
 */

unsigned __int64 __fastcall PsGetPreviousProcess(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *v2; // r14
  int v3; // esi
  __int64 *v5; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v3 = 0;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
  v5 = (__int64 *)qword_140436B28;
  if ( Object )
    v5 = (__int64 *)Object[95];
  while ( v5 != &PsActiveProcessHead )
  {
    v2 = v5 - 94;
    if ( ObReferenceObjectSafeWithTag((__int64)(v5 - 94)) )
    {
      v3 = 1;
      break;
    }
    v5 = (__int64 *)v5[1];
  }
  PspUnlockProcessListShared((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return (unsigned __int64)v2 & -(__int64)(v3 != 0);
}
