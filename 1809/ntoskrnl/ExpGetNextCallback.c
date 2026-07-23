/*
 * XREFs of ExpGetNextCallback @ 0x1406CEDE0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400514C0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 */

unsigned __int64 __fastcall ExpGetNextCallback(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // r14
  int v2; // edi
  __int64 *v3; // rbp
  __int64 *v5; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v3 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&ExpCallbackListLock, 0LL);
  v5 = (__int64 *)ExpCallbackListHead;
  if ( Object )
    v5 = (__int64 *)Object[5];
  while ( v5 != &ExpCallbackListHead )
  {
    v3 = v5 - 5;
    if ( ObReferenceObjectSafeWithTag((__int64)(v5 - 5)) )
    {
      v2 = 1;
      break;
    }
    v5 = (__int64 *)*v5;
  }
  ExReleasePushLockEx((ULONG_PTR)&ExpCallbackListLock, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457845u);
  return (unsigned __int64)v3 & -(__int64)(v2 != 0);
}
