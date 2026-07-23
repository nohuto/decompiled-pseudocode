/*
 * XREFs of CmpGetCallbackObjectContext @ 0x14069D278
 * Callers:
 *     CmpCallbackFillObjectContext @ 0x1405E7060 (CmpCallbackFillObjectContext.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 */

__int64 __fastcall CmpGetCallbackObjectContext(_DWORD *a1, __int64 *a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx

  v2 = 0LL;
  if ( !a1 )
    return 0LL;
  if ( *a1 != 1803104306 )
    return 0LL;
  v4 = a1 + 18;
  if ( (_QWORD *)*v4 == v4 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
  v7 = (_QWORD *)*v4;
  if ( (_QWORD *)*v4 != v4 )
  {
    v8 = *a2;
    while ( 1 )
    {
      v9 = v7[4];
      if ( v9 == v8 )
        break;
      if ( v9 >= v8 )
      {
        v7 = (_QWORD *)*v7;
        if ( v7 != v4 )
          continue;
      }
      goto LABEL_12;
    }
    v2 = v7[7];
  }
LABEL_12:
  ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v2;
}
