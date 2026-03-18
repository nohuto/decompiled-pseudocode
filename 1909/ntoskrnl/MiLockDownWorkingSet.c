/*
 * XREFs of MiLockDownWorkingSet @ 0x1402E4A0C
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14089A6F4 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAddLockedPageCharge @ 0x1400CBA88 (MiAddLockedPageCharge.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CED60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

unsigned __int64 __fastcall MiLockDownWorkingSet(_KPROCESS *BugCheckParameter1, int a2)
{
  __int64 v4; // rsi
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  KIRQL v7; // bp
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v13; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v14[48]; // [rsp+28h] [rbp-40h] BYREF

  memset(v14, 0, sizeof(v14));
  v4 = (__int64)&BugCheckParameter1[1].IdealNode[6];
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v14);
  SharedVm = MiGetSharedVm((__int64)&BugCheckParameter1[1].IdealNode[6]);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v7 = v6;
  v8 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v13 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v13);
    while ( *(__int64 *)(v8 + 24) < 0 );
  }
  if ( a2 == 1 )
    MiAddLockedPageCharge(v8, 1);
  else
    MiRemoveLockedPageChargeAndDecRef(v8);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v9) = v7;
  MiUnlockWorkingSetExclusive(v4, v9, v10, v11);
  return KiUnstackDetachProcess((struct _KTHREAD *)v14, 0);
}
