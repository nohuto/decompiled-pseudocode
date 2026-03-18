/*
 * XREFs of MiSetGraphicsPtes @ 0x1402C3040
 * Callers:
 *     MmSetGraphicsPtes @ 0x140889F60 (MmSetGraphicsPtes.c)
 * Callees:
 *     MiWorkingSetIsContended @ 0x140023050 (MiWorkingSetIsContended.c)
 *     MiLockLowestValidPageTable @ 0x14004AD90 (MiLockLowestValidPageTable.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140109950 (KeShouldYieldProcessor.c)
 */

__int64 __fastcall MiSetGraphicsPtes(
        unsigned __int64 a1,
        __int64 a2,
        __int64 *a3,
        unsigned __int64 a4,
        int a5,
        unsigned __int8 a6)
{
  __int64 *v6; // r15
  unsigned int v7; // edi
  unsigned __int64 v8; // r12
  unsigned __int8 v9; // si
  unsigned __int64 v10; // r13
  unsigned __int16 *v11; // rbp
  unsigned __int8 v12; // al
  __int64 v13; // rbx
  int v14; // esi
  unsigned __int64 v15; // r14
  unsigned __int64 valid; // r10
  unsigned __int64 v17; // r9
  __int64 v18; // r9
  unsigned __int64 v19; // rax
  unsigned __int64 v21[9]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v23; // [rsp+78h] [rbp+10h]
  unsigned __int64 v24; // [rsp+88h] [rbp+20h]

  v24 = a4;
  v6 = a3;
  v7 = 0;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = a6;
  v10 = (((a2 + a1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  v22 = 0LL;
  v23 = v10;
  a5 = a6 & 1;
  if ( (a6 & 1) != 0 && a3 )
  {
    v6 = &v22;
    v22 = *a3;
  }
  v11 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[6];
  v12 = MiLockWorkingSetShared((__int64)v11);
  v13 = v22;
  a6 = v12;
  v14 = (v9 & 2) == 0;
  while ( 1 )
  {
    v15 = v8;
    if ( v8 <= v10 )
      break;
LABEL_22:
    if ( (unsigned int)++v14 >= 2 )
      goto LABEL_25;
  }
  while ( 1 )
  {
    if ( (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v23 )
      v10 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    valid = MiLockLowestValidPageTable((__int64)v11, v15, v21);
    if ( valid == ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      break;
LABEL_13:
    if ( v14 )
    {
LABEL_14:
      v19 = (((__int64)(v10 - v15) >> 3) + 1) / (v24 >> 12);
      if ( a5 )
      {
        v13 += v24 * v19;
      }
      else if ( v6 )
      {
        v6 += v19;
      }
    }
LABEL_18:
    MiUnlockPageTableInternal((__int64)v11, valid);
    if ( MiWorkingSetIsContended((__int64)v11) || KeShouldYieldProcessor() )
    {
      MiUnlockWorkingSetShared((__int64)v11, a6);
      MiLockWorkingSetShared((__int64)v11);
    }
    v15 = v10 + 8;
    v10 = v23;
    if ( v15 > v23 )
      goto LABEL_22;
  }
  if ( v14 )
    goto LABEL_14;
  v17 = v15;
  if ( v15 > v10 )
    goto LABEL_18;
  while ( !MI_READ_PTE_LOCK_FREE(v17) )
  {
    v17 = v18 + 8;
    if ( v17 > v10 )
      goto LABEL_13;
  }
  v7 = -1073741800;
  MiUnlockPageTableInternal((__int64)v11, valid);
LABEL_25:
  MiUnlockWorkingSetShared((__int64)v11, a6);
  return v7;
}
