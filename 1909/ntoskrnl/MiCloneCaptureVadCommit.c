/*
 * XREFs of MiCloneCaptureVadCommit @ 0x1402CFE8C
 * Callers:
 *     MiAllocateChildVads @ 0x14089A0E0 (MiAllocateChildVads.c)
 * Callees:
 *     MiGetNextPageTable @ 0x14005E020 (MiGetNextPageTable.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     MiCloneDiscardVadCommit @ 0x140891E58 (MiCloneDiscardVadCommit.c)
 */

__int64 __fastcall MiCloneCaptureVadCommit(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rdi
  __int64 *v5; // r15
  int v6; // ebp
  unsigned __int16 *v7; // r12
  unsigned __int64 v8; // rsi
  LONG *SharedVm; // rbx
  KIRQL v10; // al
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 v13; // r9
  char v14; // r14
  unsigned __int64 v15; // rbx
  __int64 NextPageTable; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // r14
  _QWORD *v20; // rax
  LONG *v21; // rbx
  KIRQL v22; // [rsp+78h] [rbp+10h]
  int v23; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp+20h]

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x6356694Du);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0LL;
  v5 = PoolWithTag + 1;
  PoolWithTag[1] = 0LL;
  v6 = 0;
  v7 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[6];
  v8 = 8 * ((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  v24 = 8 * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  SharedVm = MiGetSharedVm((__int64)v7);
  v10 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v14 = v10;
  v15 = v24;
  v22 = v10;
  while ( v8 <= v15 )
  {
    NextPageTable = MiGetNextPageTable(v8, v15, 0LL, v14, 4, &v23);
    if ( !NextPageTable )
      break;
    v17 = NextPageTable & 0xFFFFFFFFFFFFF000uLL;
    v18 = *v5;
    v19 = (__int64)((NextPageTable & 0xFFFFFFFFFFFFF000uLL) << 25) >> 16;
    if ( *v5
      && (v13 = v3[v18 + 1], v11 = v13 & 0x1FFFFF, v11 + 1 >= v11)
      && v11 != 0x1FFFFF
      && (v12 = v13 & 0xFFFFFFFFFFE00000uLL, (v13 & 0xFFFFFFFFFFE00000uLL) + ((v11 + 1) << 21) == v19) )
    {
      v3[v18 + 1] = v12 | (v13 + 1) & 0x1FFFFF;
    }
    else
    {
      if ( v18 == 16 )
      {
        LOBYTE(v11) = v22;
        MiUnlockWorkingSetExclusive((__int64)v7, v11, v12, v13);
        v20 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x6356694Du);
        if ( !v20 )
        {
          v6 = -1073741670;
          goto LABEL_18;
        }
        v5 = v20 + 1;
        *v20 = v3;
        v20[1] = 0LL;
        v3 = v20;
        v21 = MiGetSharedVm((__int64)v7);
        ExAcquireSpinLockExclusive(v21);
        v21[1] = 0;
        v18 = *v5;
        v15 = v24;
      }
      v3[v18 + 2] = v19;
      ++*v5;
    }
    v14 = v22;
    v8 = v17 + 4096;
  }
  LOBYTE(v11) = v14;
  MiUnlockWorkingSetExclusive((__int64)v7, v11, v12, v13);
LABEL_18:
  *(_QWORD *)(a1 + 8) = v3;
  if ( v6 < 0 )
    MiCloneDiscardVadCommit(a1);
  return (unsigned int)v6;
}
