/*
 * XREFs of MiRemoveVadEvent @ 0x1402C7A10
 * Callers:
 *     MiMapViewOfImageSection @ 0x1405EAA40 (MiMapViewOfImageSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 */

void __fastcall MiRemoveVadEvent(__int64 a1, __int64 *a2)
{
  _KPROCESS *Process; // rbp
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 **v9; // rdi
  __int64 *v10; // r8

  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[6]);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v9 = (__int64 **)(a1 + 56);
  v10 = *v9;
  if ( *v9 != a2 )
  {
    do
    {
      v7 = *v10;
      v9 = (__int64 **)v10;
      v10 = (__int64 *)v7;
    }
    while ( (__int64 *)v7 != a2 );
  }
  LOBYTE(v7) = v6;
  *v9 = (__int64 *)*a2;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[6], v7, (__int64)v10, v8);
}
