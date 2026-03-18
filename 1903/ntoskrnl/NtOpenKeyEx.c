/*
 * XREFs of NtOpenKeyEx @ 0x1405FFE80
 * Callers:
 *     <none>
 * Callees:
 *     CmOpenKey @ 0x1405FDBD0 (CmOpenKey.c)
 */

__int64 __fastcall NtOpenKeyEx(HANDLE *a1, int a2, __int64 a3, int a4)
{
  return CmOpenKey(a1, a2, a3, a4, 0LL);
}
