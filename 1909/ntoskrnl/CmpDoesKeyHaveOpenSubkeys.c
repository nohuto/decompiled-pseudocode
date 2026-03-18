/*
 * XREFs of CmpDoesKeyHaveOpenSubkeys @ 0x1406BA404
 * Callers:
 *     CmpTryToRundownHive @ 0x1401129E0 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x1406B91E4 (CmpPerformUnloadKey.c)
 *     CmRestoreKey @ 0x140839F74 (CmRestoreKey.c)
 * Callees:
 *     CmpEnumerateAllOpenSubKeys @ 0x1406BA43C (CmpEnumerateAllOpenSubKeys.c)
 */

bool __fastcall CmpDoesKeyHaveOpenSubkeys(__int64 a1)
{
  __int64 v2; // [rsp+20h] [rbp-28h] BYREF
  __int128 v3; // [rsp+28h] [rbp-20h]

  v2 = a1;
  v3 = 0LL;
  ((void (__fastcall *)(__int64, _QWORD, __int64 (__fastcall *)(), __int64 *))CmpEnumerateAllOpenSubKeys)(
    a1,
    0LL,
    CmpDoesKeyHaveOpenSubkeysWorker,
    &v2);
  return (_DWORD)v3 != 0;
}
