/*
 * XREFs of CmpSplitLeaf @ 0x140838AD8
 * Callers:
 *     CmpSelectLeaf @ 0x14071CCEC (CmpSelectLeaf.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     HvFreeCell @ 0x140631B28 (HvFreeCell.c)
 *     HvAllocateCell @ 0x1406321FC (HvAllocateCell.c)
 *     HvReallocateCell @ 0x140632E5C (HvReallocateCell.c)
 *     HvMarkCellDirty @ 0x140839B58 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpSplitLeaf(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // r12
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(ULONG_PTR, ULONG_PTR, ULONG_PTR *); // rax
  unsigned int v7; // r15d
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // r13
  unsigned int v15; // r14d
  unsigned int Cell; // eax
  __int16 v17; // ax
  int v18; // edx
  int v19; // ebx
  unsigned int v20; // ebx
  __int64 v21; // rdx
  int v22; // ecx
  unsigned __int16 v23; // [rsp+30h] [rbp-30h]
  unsigned int BugCheckParameter3a; // [rsp+34h] [rbp-2Ch]
  ULONG_PTR BugCheckParameter3_4; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v26[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v27; // [rsp+48h] [rbp-18h] BYREF
  _DWORD v28[4]; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v29; // [rsp+A0h] [rbp+40h]

  v4 = a3;
  v28[1] = 0;
  v26[1] = 0;
  v5 = 0LL;
  v6 = *(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, ULONG_PTR *))(BugCheckParameter2 + 8);
  v7 = BugCheckParameter3;
  BugCheckParameter3_4 = 0xFFFFFFFFLL;
  v28[0] = -1;
  v26[0] = -1;
  v27 = 0LL;
  v9 = v6(BugCheckParameter2, BugCheckParameter3, &BugCheckParameter3_4);
  v10 = v9;
  if ( !v9 )
    return 0xFFFFFFFFLL;
  v12 = *(_DWORD *)(v9 + 4 * v4 + 4);
  v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, v12, v28);
  v14 = v13;
  if ( !v13 )
    goto LABEL_13;
  v23 = *(_WORD *)(v13 + 2) >> 1;
  v29 = *(_WORD *)(v13 + 2) - v23;
  BugCheckParameter3a = *(_DWORD *)(BugCheckParameter2 + 212);
  if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, v12, 0LL)
    || (v15 = v29 * (BugCheckParameter3a < 5 ? 4 : 8),
        Cell = HvAllocateCell(BugCheckParameter2, v15 + 5, a4, (__int64)&v27, (__int64)v26),
        v5 = v27,
        BugCheckParameter3a = Cell,
        Cell == -1) )
  {
LABEL_11:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v28);
    if ( v5 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v26);
LABEL_13:
    if ( v10 )
      (*(void (__fastcall **)(ULONG_PTR, ULONG_PTR *))(BugCheckParameter2 + 16))(
        BugCheckParameter2,
        &BugCheckParameter3_4);
    return 0xFFFFFFFFLL;
  }
  v17 = 26732;
  if ( *(_DWORD *)(BugCheckParameter2 + 212) < 5u )
    v17 = 26988;
  *(_WORD *)v27 = v17;
  v18 = *(_DWORD *)(v10 - 4);
  if ( ((-8 - 4 * *(unsigned __int16 *)(v10 + 2) - v18) & 0xFFFFFFFC) < 4 )
  {
    v19 = -4 - v18;
    (*(void (__fastcall **)(ULONG_PTR, ULONG_PTR *))(BugCheckParameter2 + 16))(
      BugCheckParameter2,
      &BugCheckParameter3_4);
    v27 = 0LL;
    v20 = HvReallocateCell(BugCheckParameter2, v7, v19 + 4, 0, &v27, (__int64 *)&BugCheckParameter3_4);
    if ( v20 == -1 )
    {
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v26);
      v5 = 0LL;
      HvFreeCell(BugCheckParameter2, BugCheckParameter3a);
      v10 = v27;
      goto LABEL_11;
    }
    if ( v7 != v20 )
    {
      HvFreeCell(BugCheckParameter2, v7);
      v7 = v20;
    }
    v10 = v27;
  }
  v21 = 8LL * v23 + 4;
  if ( *(_DWORD *)(BugCheckParameter2 + 212) < 5u )
    v21 = 4LL * v23 + 4;
  memmove((void *)(v5 + 4), (const void *)(v14 + v21), v15);
  *(_WORD *)(v14 + 2) = v23;
  *(_WORD *)(v5 + 2) = v29;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v28);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v26);
  v22 = *(unsigned __int16 *)(v10 + 2);
  if ( (unsigned int)v4 < v22 - 1 )
  {
    memmove(
      (void *)(v10 + 4 * ((unsigned int)(v4 + 2) + 1LL)),
      (const void *)(v10 + 4 * ((unsigned int)(v4 + 1) + 1LL)),
      4LL * (unsigned int)(v22 - v4 - 1));
    LOWORD(v22) = *(_WORD *)(v10 + 2);
  }
  *(_WORD *)(v10 + 2) = v22 + 1;
  *(_DWORD *)(v10 + 4LL * (unsigned int)(v4 + 1) + 4) = BugCheckParameter3a;
  (*(void (__fastcall **)(ULONG_PTR, ULONG_PTR *))(BugCheckParameter2 + 16))(BugCheckParameter2, &BugCheckParameter3_4);
  return v7;
}
