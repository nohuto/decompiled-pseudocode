/*
 * XREFs of CmpMarkCurrentValueDirty @ 0x1407379A4
 * Callers:
 *     CmpLoadHiveThread @ 0x140736D20 (CmpLoadHiveThread.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpFindNameInList @ 0x1405D162C (CmpFindNameInList.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x14073E2EC (CmpFindSubKeyByNameWithStatus.c)
 */

char __fastcall CmpMarkCurrentValueDirty(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 v3; // rax
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+50h] [rbp+18h] BYREF
  int v7; // [rsp+54h] [rbp+1Ch]

  v6 = -1;
  v7 = 0;
  v3 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v6);
  if ( v3 )
  {
    CmpFindSubKeyByNameWithStatus(BugCheckParameter2, v3, &CmpSelectString, &BugCheckParameter3);
    LOBYTE(v3) = (*(__int64 (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v6);
    if ( (_DWORD)BugCheckParameter3 != -1 )
    {
      v3 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
             BugCheckParameter2,
             (unsigned int)BugCheckParameter3,
             &v6);
      if ( v3 )
      {
        CmpFindNameInList(BugCheckParameter2, v3 + 36, (int)&CmpCurrentString, 0, 0LL, (__int64)&BugCheckParameter3);
        LOBYTE(v3) = (*(__int64 (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v6);
        if ( (_DWORD)BugCheckParameter3 != -1 )
          LOBYTE(v3) = HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3, 0);
      }
    }
  }
  return v3;
}
