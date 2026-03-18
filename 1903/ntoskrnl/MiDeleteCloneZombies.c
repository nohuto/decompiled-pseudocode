/*
 * XREFs of MiDeleteCloneZombies @ 0x140134494
 * Callers:
 *     MiInsertClone @ 0x1402E4C28 (MiInsertClone.c)
 *     MmCleanProcessAddressSpace @ 0x140609ED8 (MmCleanProcessAddressSpace.c)
 *     MiDeleteInsertedCloneVads @ 0x14089B22C (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1402E3BBC (MiDeleteDeferredCloneDescriptors.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteCloneZombies(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  KIRQL v6; // si
  LONG *SharedVm; // rbx
  __int64 v8; // rdx
  _QWORD *v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rbx

  if ( *(_WORD *)(*(_QWORD *)(a1 + 1296) + 368LL) )
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
    v9 = (_QWORD *)MiDeleteDeferredCloneDescriptors(a1, a2, a3, a4);
    if ( v6 != 17 )
    {
      LOBYTE(v8) = v6;
      MiUnlockWorkingSetExclusive(v5, v8, v10, v11);
    }
    if ( v9 )
    {
      do
      {
        v12 = (_QWORD *)*v9;
        ExFreePoolWithTag(v9, 0);
        v9 = v12;
      }
      while ( v12 );
    }
  }
}
