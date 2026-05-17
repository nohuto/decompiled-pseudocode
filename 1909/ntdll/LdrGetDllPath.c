/*
 * XREFs of LdrGetDllPath @ 0x180031F20
 * Callers:
 *     <none>
 * Callees:
 *     LdrpGetDllPath @ 0x180031F48 (LdrpGetDllPath.c)
 */

__int64 __fastcall LdrGetDllPath(const WCHAR *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return LdrpGetDllPath(a1, 0LL, 0LL, a4);
}
