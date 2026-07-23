/*
 * XREFs of MiSetGraphicsPtes @ 0x1402B2094
 * Callers:
 *     MmSetGraphicsPtes @ 0x140851710 (MmSetGraphicsPtes.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiLockLowestValidPageTable @ 0x14006C590 (MiLockLowestValidPageTable.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiWorkingSetIsContended @ 0x1400991E0 (MiWorkingSetIsContended.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
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
  __int64 v13; // r9
  __int64 v14; // rbx
  int v15; // esi
  unsigned __int64 v16; // r14
  unsigned __int64 valid; // r10
  unsigned __int64 v18; // r9
  __int64 v19; // r9
  unsigned __int64 v20; // rax
  unsigned __int64 v22[9]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v23; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp+10h]
  unsigned __int64 v25; // [rsp+88h] [rbp+20h]

  v25 = a4;
  v6 = a3;
  v7 = 0;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = a6;
  v10 = (((a2 + a1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  v23 = 0LL;
  v24 = v10;
  a5 = a6 & 1;
  if ( (a6 & 1) != 0 && a3 )
  {
    v6 = &v23;
    v23 = *a3;
  }
  v11 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  v12 = MiLockWorkingSetShared((__int64)v11);
  v14 = v23;
  a6 = v12;
  v15 = (v9 & 2) == 0;
  while ( 1 )
  {
    v16 = v8;
    if ( v8 <= v10 )
      break;
LABEL_22:
    if ( (unsigned int)++v15 >= 2 )
      goto LABEL_25;
  }
  while ( 1 )
  {
    if ( (v16 & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v24 )
      v10 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    valid = MiLockLowestValidPageTable((__int64)v11, v16, v22, v13);
    if ( valid == ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      break;
LABEL_13:
    if ( v15 )
    {
LABEL_14:
      v20 = (((__int64)(v10 - v16) >> 3) + 1) / (v25 >> 12);
      if ( a5 )
      {
        v14 += v25 * v20;
      }
      else if ( v6 )
      {
        v6 += v20;
      }
    }
LABEL_18:
    MiUnlockPageTableInternal((__int64)v11, valid);
    if ( MiWorkingSetIsContended((__int64)v11) || KeShouldYieldProcessor() )
    {
      MiUnlockWorkingSetShared((__int64)v11, a6);
      MiLockWorkingSetShared((__int64)v11);
    }
    v16 = v10 + 8;
    v10 = v24;
    if ( v16 > v24 )
      goto LABEL_22;
  }
  if ( v15 )
    goto LABEL_14;
  v18 = v16;
  if ( v16 > v10 )
    goto LABEL_18;
  while ( !MI_READ_PTE_LOCK_FREE(v18) )
  {
    v18 = v19 + 8;
    if ( v18 > v10 )
      goto LABEL_13;
  }
  v7 = -1073741800;
  MiUnlockPageTableInternal((__int64)v11, valid);
LABEL_25:
  MiUnlockWorkingSetShared((__int64)v11, a6);
  return v7;
}
