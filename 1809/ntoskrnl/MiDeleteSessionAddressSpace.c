/*
 * XREFs of MiDeleteSessionAddressSpace @ 0x1401543C0
 * Callers:
 *     MiDereferenceSessionFinal @ 0x1406E1858 (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiDrainSystemAccessLog @ 0x14000FF28 (MiDrainSystemAccessLog.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiDeletePagablePteRange @ 0x140067FD0 (MiDeletePagablePteRange.c)
 *     MiDeleteWorkingSetList @ 0x14009176C (MiDeleteWorkingSetList.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     MiIncrementPfn @ 0x1401780F8 (MiIncrementPfn.c)
 */

void __fastcall MiDeleteSessionAddressSpace(unsigned __int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  LONG *SharedVm; // rbx
  KIRQL v9; // al
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int8 v12; // r14
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 3LL;
  do
  {
    v13 = MI_READ_PTE_LOCK_FREE(v4);
    v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v13);
    MiIncrementPfn(48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    v4 += 8LL;
    --v5;
  }
  while ( v5 );
  MiDrainSystemAccessLog(a1 + 3008, v7);
  SharedVm = MiGetSharedVm(a1 + 3008);
  v9 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v12 = v9;
  if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0 )
    MiDeleteWorkingSetList(a1 + 3008);
  MiUnlockWorkingSetExclusive(a1 + 3008, v12, v10, v11);
  MiDeletePagablePteRange(a1 + 3008, 0x11u, qword_14043B078, qword_14043B078 + 0x7FFFFFFFFFLL, 0, 0, (__int64)a2);
  a2[1] -= 3LL;
  a2[3] -= 3LL;
  *a2 -= 3LL;
}
