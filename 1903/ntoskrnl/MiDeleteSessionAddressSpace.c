/*
 * XREFs of MiDeleteSessionAddressSpace @ 0x140166510
 * Callers:
 *     MiDereferenceSessionFinal @ 0x140727B5C (MiDereferenceSessionFinal.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 *     MiDeletePagablePteRange @ 0x1400ACB20 (MiDeletePagablePteRange.c)
 *     MiDeleteWorkingSetList @ 0x1400AD800 (MiDeleteWorkingSetList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDrainSystemAccessLog @ 0x14012F468 (MiDrainSystemAccessLog.c)
 *     MiIncrementPfn @ 0x140181D98 (MiIncrementPfn.c)
 */

void __fastcall MiDeleteSessionAddressSpace(unsigned __int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rax
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  KIRQL v10; // r14
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v11 = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v4 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v11);
  MiIncrementPfn(48 * ((v4 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  MiDrainSystemAccessLog(a1 + 256);
  SharedVm = MiGetSharedVm(a1 + 256);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v10 = v6;
  if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0 )
    MiDeleteWorkingSetList(a1 + 256);
  LOBYTE(v7) = v10;
  MiUnlockWorkingSetExclusive(a1 + 256, v7, v8, v9);
  MiDeletePagablePteRange(a1 + 256, 0x11u, qword_1404659D0, qword_1404659D0 + 0x7FFFFFFFFFLL, 0, 0, (__int64)a2);
  --a2[1];
  --a2[3];
  --*a2;
}
