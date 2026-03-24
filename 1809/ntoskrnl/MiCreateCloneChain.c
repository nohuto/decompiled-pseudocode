/*
 * XREFs of MiCreateCloneChain @ 0x1402C92F0
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14085E024 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140063CE0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D30 (MiGetSharedVm.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x140076C10 (PsChargeProcessNonPagedPoolQuota.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC4E0 (ExAcquireSpinLockExclusive.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateCloneChain(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v4; // ebp
  _QWORD *v5; // rsi
  unsigned __int64 v6; // r14
  _KPROCESS *Process; // rdi
  LONG *SharedVm; // rbx
  KIRQL v9; // al
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int8 v12; // r13
  _QWORD *v13; // rcx
  _QWORD *i; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD **v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rcx
  _QWORD *v19; // rbx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  *a2 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  Process = CurrentThread->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v9 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v12 = v9;
  v13 = (_QWORD *)Process[1].Affinity.Bitmap[12];
  i = 0LL;
  while ( v13 )
  {
    i = v13;
    v13 = (_QWORD *)*v13;
  }
  while ( i )
  {
    if ( i[6] )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x64436D4Du);
      if ( !PoolWithTag )
      {
        v4 = -1073741670;
        break;
      }
      *PoolWithTag = v5;
      v5 = PoolWithTag;
      PoolWithTag[8] = i[8];
      v6 += i[8];
    }
    v16 = (_QWORD **)i[1];
    v17 = i;
    if ( v16 )
    {
      v18 = *v16;
      for ( i = (_QWORD *)i[1]; v18; v18 = (_QWORD *)*v18 )
        i = v18;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v17 )
          break;
        v17 = i;
      }
    }
  }
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v12, v10, v11);
  if ( v4 < 0 )
    goto LABEL_22;
  if ( v6 )
    v4 = PsChargeProcessNonPagedPoolQuota(a1, v6);
  if ( v4 < 0 )
  {
LABEL_22:
    if ( v5 )
    {
      do
      {
        v19 = (_QWORD *)*v5;
        ExFreePoolWithTag(v5, 0);
        v5 = v19;
      }
      while ( v19 );
    }
    v5 = 0LL;
  }
  result = (unsigned int)v4;
  *a2 = v5;
  return result;
}
