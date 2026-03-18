/*
 * XREFs of MiCreateCloneChain @ 0x1402E3644
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14089AED4 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x140073230 (PsChargeProcessNonPagedPoolQuota.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  KIRQL v13; // r13
  _QWORD *v14; // rcx
  _QWORD *i; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD **v17; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // rcx
  _QWORD *v20; // rbx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  *a2 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  Process = CurrentThread->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[6]);
  v9 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v13 = v9;
  v14 = (_QWORD *)Process[1].Affinity.Bitmap[12];
  i = 0LL;
  while ( v14 )
  {
    i = v14;
    v14 = (_QWORD *)*v14;
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
    v17 = (_QWORD **)i[1];
    v18 = i;
    if ( v17 )
    {
      v19 = *v17;
      for ( i = (_QWORD *)i[1]; v19; v19 = (_QWORD *)*v19 )
        i = v19;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v18 )
          break;
        v18 = i;
      }
    }
  }
  LOBYTE(v10) = v13;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[6], v10, v11, v12);
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
        v20 = (_QWORD *)*v5;
        ExFreePoolWithTag(v5, 0);
        v5 = v20;
      }
      while ( v20 );
    }
    v5 = 0LL;
  }
  result = (unsigned int)v4;
  *a2 = v5;
  return result;
}
