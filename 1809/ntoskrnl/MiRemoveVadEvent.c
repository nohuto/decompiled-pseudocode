/*
 * XREFs of MiRemoveVadEvent @ 0x1402B0058
 * Callers:
 *     MiMapViewOfImageSection @ 0x1405F4660 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiRemoveVadEvent(__int64 a1, _QWORD *a2)
{
  _KPROCESS *Process; // rbp
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  __int64 v7; // r9
  _QWORD **v8; // rdi
  _QWORD *i; // r8

  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v8 = (_QWORD **)(a1 + 56);
  for ( i = *v8; i != a2; i = (_QWORD *)*i )
    v8 = (_QWORD **)i;
  *v8 = (_QWORD *)*a2;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v6, (__int64)i, v7);
}
