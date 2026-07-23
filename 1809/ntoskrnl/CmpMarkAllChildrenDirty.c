/*
 * XREFs of CmpMarkAllChildrenDirty @ 0x140800DDC
 * Callers:
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x1408057F8 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 *     CmpFindSubKeyByNumber @ 0x1406B3F28 (CmpFindSubKeyByNumber.c)
 */

char __fastcall CmpMarkAllChildrenDirty(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 v3; // rax
  char v4; // bl
  _DWORD *v5; // r14
  unsigned int v6; // edi
  unsigned int v7; // ebp
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+50h] [rbp+18h] BYREF
  int v11; // [rsp+54h] [rbp+1Ch]

  v10 = -1;
  v11 = 0;
  v3 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v10);
  v4 = 0;
  v5 = (_DWORD *)v3;
  if ( v3 )
  {
    v6 = 0;
    v7 = *(_DWORD *)(v3 + 20) + *(_DWORD *)(v3 + 24);
    if ( v7 )
    {
      while ( (int)CmpFindSubKeyByNumber(BugCheckParameter2, v5, v6, &BugCheckParameter3) >= 0
           && (_DWORD)BugCheckParameter3 != -1
           && HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3, 0) )
      {
        if ( ++v6 >= v7 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      v4 = 1;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v10);
  }
  return v4;
}
