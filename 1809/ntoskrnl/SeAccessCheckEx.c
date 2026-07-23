/*
 * XREFs of SeAccessCheckEx @ 0x14015B760
 * Callers:
 *     <none>
 * Callees:
 *     SepCommonAccessCheckEx @ 0x14015B78C (SepCommonAccessCheckEx.c)
 */

__int64 __fastcall SeAccessCheckEx(int a1, int a2, int a3, int a4, __int64 a5, char a6)
{
  return SepCommonAccessCheckEx(a1, a2, a3, a4, a5, a6, 0);
}
