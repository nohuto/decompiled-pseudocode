/*
 * XREFs of SeAccessCheckEx @ 0x140155BA0
 * Callers:
 *     <none>
 * Callees:
 *     SepCommonAccessCheckEx @ 0x140155BCC (SepCommonAccessCheckEx.c)
 */

__int64 __fastcall SeAccessCheckEx(int a1, int a2, int a3, int a4, __int64 a5, char a6)
{
  return SepCommonAccessCheckEx(a1, a2, a3, a4, a5, a6, 0);
}
