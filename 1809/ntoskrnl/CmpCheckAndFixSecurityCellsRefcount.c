/*
 * XREFs of CmpCheckAndFixSecurityCellsRefcount @ 0x1406BDD20
 * Callers:
 *     CmpCheckRegistry2 @ 0x1405D9EF0 (CmpCheckRegistry2.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x140138058 (CmpRemoveSecurityCellList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x1405AEBD8 (HvFreeCell.c)
 *     HvMarkCellDirty @ 0x1408021B4 (HvMarkCellDirty.c)
 */

char __fastcall CmpCheckAndFixSecurityCellsRefcount(ULONG_PTR BugCheckParameter2)
{
  unsigned int *v1; // rdi
  unsigned int v2; // r14d
  char v4; // bp
  unsigned int *v5; // rsi
  unsigned int v6; // r15d
  __int64 v7; // rax
  int v9; // [rsp+40h] [rbp+8h] BYREF
  __int16 v10; // [rsp+44h] [rbp+Ch]
  __int16 v11; // [rsp+46h] [rbp+Eh]

  v1 = 0LL;
  v11 = 0;
  v2 = 0;
  v9 = -1;
  v10 = 0;
  v4 = 1;
  if ( *(_DWORD *)(BugCheckParameter2 + 1864) )
  {
    while ( 1 )
    {
      v5 = (unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 1880) + 16LL * v2);
      v6 = *v5;
      v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, *v5, &v9);
      v1 = (unsigned int *)v7;
      if ( !v7 )
        return 0;
      if ( *(_DWORD *)(v7 + 12) != *(_DWORD *)(*((_QWORD *)v5 + 1) + 28LL) )
      {
        if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, *v5, 0LL) )
        {
          v4 = 0;
          goto LABEL_11;
        }
        v1[3] = *(_DWORD *)(*((_QWORD *)v5 + 1) + 28LL);
      }
      if ( !*(_DWORD *)(*((_QWORD *)v5 + 1) + 28LL) )
      {
        HvMarkCellDirty(BugCheckParameter2, v6, 0LL);
        HvMarkCellDirty(BugCheckParameter2, v1[1], 0LL);
        HvMarkCellDirty(BugCheckParameter2, v1[2], 0LL);
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v9);
        v1 = 0LL;
        CmpRemoveSecurityCellList(BugCheckParameter2, v6);
        HvFreeCell(BugCheckParameter2, v6);
        --v2;
      }
      if ( v1 )
      {
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v9);
        v1 = 0LL;
      }
      if ( ++v2 >= *(_DWORD *)(BugCheckParameter2 + 1864) )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    if ( v1 )
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v9);
  }
  return v4;
}
