/*
 * XREFs of MiDeleteCloneZombies @ 0x140132D90
 * Callers:
 *     MiInsertClone @ 0x1402CAACC (MiInsertClone.c)
 *     MmCleanProcessAddressSpace @ 0x1405F2BC8 (MmCleanProcessAddressSpace.c)
 *     MiDeleteInsertedCloneVads @ 0x14085F5C8 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1402C9A58 (MiDeleteDeferredCloneDescriptors.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteCloneZombies(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  KIRQL v6; // si
  LONG *SharedVm; // rbx
  _QWORD *v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rbx

  if ( *(_WORD *)(*(_QWORD *)(a1 + 1296) + 320LL) )
  {
    v5 = a1 + 1280;
    if ( (_DWORD)a2 )
    {
      v6 = 17;
    }
    else
    {
      SharedVm = MiGetSharedVm(a1 + 1280);
      v6 = ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
    }
    v8 = (_QWORD *)MiDeleteDeferredCloneDescriptors(a1, a2, a3, a4);
    if ( v6 != 17 )
      MiUnlockWorkingSetExclusive(v5, v6, v9, v10);
    if ( v8 )
    {
      do
      {
        v11 = (_QWORD *)*v8;
        ExFreePoolWithTag(v8, 0);
        v8 = v11;
      }
      while ( v11 );
    }
  }
}
