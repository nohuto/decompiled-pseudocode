/*
 * XREFs of CmpMarkCurrentValueDirty @ 0x140757E30
 * Callers:
 *     CmpLoadHiveThread @ 0x140757530 (CmpLoadHiveThread.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     HvpMarkCellDirty @ 0x1405D4FF0 (HvpMarkCellDirty.c)
 *     CmpFindNameInList @ 0x1406304D4 (CmpFindNameInList.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1407122F0 (CmpFindSubKeyByNameWithStatus.c)
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
    CmpFindSubKeyByNameWithStatus(BugCheckParameter2, v3, (unsigned __int16 *)&CmpSelectString, &BugCheckParameter3);
    LOBYTE(v3) = (*(__int64 (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v6);
    if ( (_DWORD)BugCheckParameter3 != -1 )
    {
      v3 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
             BugCheckParameter2,
             (unsigned int)BugCheckParameter3,
             &v6);
      if ( v3 )
      {
        CmpFindNameInList(
          BugCheckParameter2,
          (unsigned int *)(v3 + 36),
          &CmpCurrentString.Length,
          0,
          0LL,
          &BugCheckParameter3);
        LOBYTE(v3) = (*(__int64 (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v6);
        if ( (_DWORD)BugCheckParameter3 != -1 )
          LOBYTE(v3) = HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3, 0);
      }
    }
  }
  return v3;
}
