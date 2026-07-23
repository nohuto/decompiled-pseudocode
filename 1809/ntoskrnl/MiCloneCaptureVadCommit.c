/*
 * XREFs of MiCloneCaptureVadCommit @ 0x1402BA108
 * Callers:
 *     MiAllocateChildVads @ 0x14085EC58 (MiAllocateChildVads.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiGetNextPageTable @ 0x140084230 (MiGetNextPageTable.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     MiCloneDiscardVadCommit @ 0x140859C34 (MiCloneDiscardVadCommit.c)
 */

__int64 __fastcall MiCloneCaptureVadCommit(__int64 a1)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v3; // rdi
  int *v5; // r15
  int v6; // ebp
  unsigned __int16 *v7; // r12
  unsigned __int64 v8; // rsi
  LONG *SharedVm; // rbx
  KIRQL v10; // al
  unsigned __int64 v11; // r8
  __int64 v12; // r9
  KIRQL v13; // r14
  unsigned __int64 v14; // rbx
  __int64 NextPageTable; // rax
  unsigned __int64 v16; // rsi
  int v17; // edx
  __int64 v18; // r14
  unsigned __int64 v19; // rcx
  _DWORD *v20; // rax
  LONG *v21; // rbx
  unsigned __int8 v22; // [rsp+78h] [rbp+10h]
  int v23; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp+20h]

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x6356694Du);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *(_QWORD *)PoolWithTag = 0LL;
  v5 = PoolWithTag + 2;
  PoolWithTag[2] = 0;
  v6 = 0;
  v7 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  v8 = 8 * ((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  v24 = 8 * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  SharedVm = MiGetSharedVm((__int64)v7);
  v10 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v13 = v10;
  v14 = v24;
  v22 = v10;
  while ( v8 <= v14 )
  {
    NextPageTable = MiGetNextPageTable(v8, v14, 0LL, v13, 4, &v23);
    if ( !NextPageTable )
      break;
    v16 = NextPageTable & 0xFFFFFFFFFFFFF000uLL;
    v17 = *v5;
    v18 = (__int64)((NextPageTable & 0xFFFFFFFFFFFFF000uLL) << 25) >> 16;
    if ( *v5
      && (v12 = *(_QWORD *)&v3[2 * (v17 - 1) + 4], v19 = v12 & 0x1FFFFF, v19 + 1 >= v19)
      && v19 != 0x1FFFFF
      && (v11 = v12 & 0xFFFFFFFFFFE00000uLL, (v12 & 0xFFFFFFFFFFE00000uLL) + ((v19 + 1) << 21) == v18) )
    {
      *(_QWORD *)&v3[2 * (v17 - 1) + 4] = v11 | (v12 + 1) & 0x1FFFFF;
    }
    else
    {
      if ( v17 == 16 )
      {
        MiUnlockWorkingSetExclusive((__int64)v7, v22, v11, v12);
        v20 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x6356694Du);
        if ( !v20 )
        {
          v6 = -1073741670;
          goto LABEL_18;
        }
        v5 = v20 + 2;
        *(_QWORD *)v20 = v3;
        v20[2] = 0;
        v3 = v20;
        v21 = MiGetSharedVm((__int64)v7);
        ExAcquireSpinLockExclusive(v21);
        v21[1] = 0;
        v17 = *v5;
        v14 = v24;
      }
      *(_QWORD *)&v3[2 * v17 + 4] = v18;
      ++*v5;
    }
    v13 = v22;
    v8 = v16 + 4096;
  }
  MiUnlockWorkingSetExclusive((__int64)v7, v13, v11, v12);
LABEL_18:
  *(_QWORD *)(a1 + 8) = v3;
  if ( v6 < 0 )
    MiCloneDiscardVadCommit(a1);
  return (unsigned int)v6;
}
