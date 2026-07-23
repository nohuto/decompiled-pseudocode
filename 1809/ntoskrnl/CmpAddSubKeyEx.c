/*
 * XREFs of CmpAddSubKeyEx @ 0x1405AFA60
 * Callers:
 *     CmpCreateChild @ 0x1405AC7A4 (CmpCreateChild.c)
 *     CmpCopySyncTree2 @ 0x1407FDE04 (CmpCopySyncTree2.c)
 *     CmpAddSubKey @ 0x1407FFC80 (CmpAddSubKey.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140806468 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x1405AEBD8 (HvFreeCell.c)
 *     CmpAddSubKeyToList @ 0x1405AFCF4 (CmpAddSubKeyToList.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 *     HvAllocateCell @ 0x1405FCE54 (HvAllocateCell.c)
 */

char __fastcall CmpAddSubKeyEx(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 (__fastcall *v6)(ULONG_PTR, __int64, _DWORD *); // rax
  unsigned int v7; // r14d
  int v9; // r15d
  __int64 v10; // rax
  char v11; // di
  __int64 v12; // rdx
  __int64 v13; // r13
  int v14; // eax
  unsigned int v15; // ecx
  __int16 v16; // r12
  int v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // rbx
  int *v20; // r15
  unsigned int i; // edx
  __int64 v22; // rcx
  unsigned int Cell; // eax
  char v24; // al
  __int64 v25; // rcx
  int v26; // eax
  int v28; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v29; // [rsp+34h] [rbp-2Ch]
  _DWORD *v30; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v31[2]; // [rsp+40h] [rbp-20h] BYREF
  _DWORD v32[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v33; // [rsp+50h] [rbp-10h]
  int v34; // [rsp+A0h] [rbp+40h]

  v32[1] = 0;
  v32[0] = -1;
  v31[0] = -1;
  v31[1] = 0;
  v6 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter2 + 8);
  v7 = -1;
  v28 = -1;
  v30 = 0LL;
  v9 = 0;
  v34 = 0;
  v10 = v6(BugCheckParameter2, a2, v32);
  v33 = v10;
  if ( !v10 )
    return 0;
  v12 = a3 >> 31;
  v29 = a3 >> 31;
  v13 = v12;
  if ( *(_DWORD *)(v10 + 4 * v12 + 20) )
  {
    v20 = (int *)(v10 + 4 * (v12 + 7));
    v19 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            (unsigned int)*v20,
            v31);
    if ( v19 )
    {
      v11 = 1;
      if ( *(_WORD *)v19 == 26220 && *(_WORD *)(v19 + 2) >= 0x1FBu )
      {
        if ( !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, (unsigned int)*v20) )
          goto LABEL_15;
        for ( i = 0; i < *(unsigned __int16 *)(v19 + 2); *(_DWORD *)(v19 + 4 * v22 + 4) = *(_DWORD *)(v19 + 8 * v22 + 4) )
          v22 = i++;
        *(_WORD *)v19 = 26988;
      }
      if ( ((*(_WORD *)v19 - 26732) & 0xFEFF) != 0 || *(_WORD *)(v19 + 2) < 0x3F5u )
        goto LABEL_26;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v31);
      v30 = 0LL;
      Cell = HvAllocateCell(BugCheckParameter2, 12, v29, (unsigned int)&v30, (__int64)v31);
      v19 = (__int64)v30;
      v7 = Cell;
      if ( Cell != -1 )
      {
        *v30 = 92530;
        *(_DWORD *)(v19 + 4) = *v20;
        *v20 = Cell;
        v28 = -1;
        goto LABEL_26;
      }
    }
LABEL_15:
    v11 = 0;
    goto LABEL_29;
  }
  v11 = 1;
  if ( *(_DWORD *)(BugCheckParameter2 + 212) < 5u )
  {
    v17 = 12;
    v16 = 26220;
  }
  else
  {
    v14 = 1012;
    v15 = 1;
    v16 = 26732;
    if ( a4 )
      v15 = a4;
    if ( v15 < 0x3F4 )
      v14 = v15;
    v17 = 8 * v14 + 4;
  }
  v18 = HvAllocateCell(BugCheckParameter2, v17, v12, (unsigned int)&v30, (__int64)v31);
  v19 = (__int64)v30;
  v28 = v18;
  v7 = v18;
  if ( v18 != -1 )
  {
    *(_WORD *)v30 = v16;
    v20 = &v28;
    v34 = 1;
    *(_WORD *)(v19 + 2) = 0;
LABEL_26:
    v24 = CmpAddSubKeyToList(BugCheckParameter2);
    v7 = v28;
    if ( !v24 )
    {
      v9 = v34;
      v11 = 0;
      goto LABEL_30;
    }
    v25 = v33;
    v26 = *v20;
    ++*(_DWORD *)(v33 + 4 * v13 + 20);
    *(_DWORD *)(v25 + 4 * v13 + 28) = v26;
LABEL_29:
    v9 = 0;
    goto LABEL_30;
  }
  v11 = 0;
LABEL_30:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v32);
  if ( v19 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v31);
  if ( v9 )
    HvFreeCell(BugCheckParameter2, v7);
  return v11;
}
