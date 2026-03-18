/*
 * XREFs of MiRotateComplete @ 0x140118E8C
 * Callers:
 *     MmRotatePhysicalView @ 0x1406BFCA0 (MmRotatePhysicalView.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 */

void __fastcall MiRotateComplete(unsigned __int64 *a1)
{
  _KPROCESS *Process; // rdx
  __int64 v3; // rbp
  unsigned __int64 *v4; // rdi
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  unsigned __int64 *i; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = (__int64)&Process[1].IdealNode[6];
  v4 = &Process[1].Affinity.Bitmap[9];
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[6]);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  LOBYTE(v9) = v6;
  for ( i = (unsigned __int64 *)*v4; i != a1; i = (unsigned __int64 *)*i )
    v4 = i;
  *v4 = *i;
  MiUnlockWorkingSetExclusive(v3, v9, v7, v8);
}
