/*
 * XREFs of CmpDeleteTree @ 0x14083BF14
 * Callers:
 *     CmpSyncSubKeysAfterDelete @ 0x1408373C4 (CmpSyncSubKeysAfterDelete.c)
 *     CmRestoreKey @ 0x140839F74 (CmRestoreKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     CmpFreeKeyByCell @ 0x140635218 (CmpFreeKeyByCell.c)
 *     CmpFindSubKeyByNumber @ 0x1406D8A94 (CmpFindSubKeyByNumber.c)
 */

char __fastcall CmpDeleteTree(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  unsigned int i; // ebp
  _DWORD *v5; // rax
  unsigned int v6; // ebx
  int SubKeyByNumber; // ebx
  __int64 v8; // rax
  int v9; // ebx
  int v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+44h] [rbp+Ch]
  ULONG_PTR BugCheckParameter3; // [rsp+48h] [rbp+10h] BYREF

  v11 = -1;
  v12 = 0;
  for ( i = a2; ; i = v6 )
  {
    while ( 1 )
    {
      v5 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                       BugCheckParameter2,
                       i,
                       &v11);
      if ( !v5 )
        return 0;
      v6 = v5[4];
      if ( !(v5[5] + v5[6]) )
        break;
      SubKeyByNumber = CmpFindSubKeyByNumber(BugCheckParameter2, v5, 0, &BugCheckParameter3);
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v11);
      if ( SubKeyByNumber < 0 )
        return 0;
      if ( (_DWORD)BugCheckParameter3 == -1 )
        return 0;
      v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
             BugCheckParameter2,
             (unsigned int)BugCheckParameter3,
             &v11);
      if ( !v8 )
        return 0;
      v9 = *(_DWORD *)(v8 + 20) + *(_DWORD *)(v8 + 24);
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v11);
      if ( v9 )
      {
        i = BugCheckParameter3;
      }
      else if ( (int)CmpFreeKeyByCell(BugCheckParameter2, (unsigned int)BugCheckParameter3, 1) < 0 )
      {
        return 0;
      }
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v11);
    if ( i == a2 )
      break;
  }
  return 1;
}
