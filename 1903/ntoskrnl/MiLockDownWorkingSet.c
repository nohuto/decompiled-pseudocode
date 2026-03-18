/*
 * XREFs of MiLockDownWorkingSet @ 0x1402E4CAC
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14089AED4 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140091A00 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiAddLockedPageCharge @ 0x1400A7374 (MiAddLockedPageCharge.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

unsigned __int64 __fastcall MiLockDownWorkingSet(_KPROCESS *BugCheckParameter1, int a2)
{
  __int64 v4; // rsi
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  KIRQL v7; // bp
  unsigned __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v15; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v16[48]; // [rsp+28h] [rbp-40h] BYREF

  memset(v16, 0, sizeof(v16));
  v4 = (__int64)&BugCheckParameter1[1].IdealNode[6];
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v16);
  SharedVm = MiGetSharedVm((__int64)&BugCheckParameter1[1].IdealNode[6]);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v7 = v6;
  v8 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v15 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v15);
    while ( *(__int64 *)(v8 + 24) < 0 );
  }
  if ( a2 == 1 )
    MiAddLockedPageCharge(v8, 1);
  else
    MiRemoveLockedPageChargeAndDecRef(v8, 1LL, v9, v10);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v11) = v7;
  MiUnlockWorkingSetExclusive(v4, v11, v12, v13);
  return KiUnstackDetachProcess((struct _KTHREAD *)v16, 0);
}
