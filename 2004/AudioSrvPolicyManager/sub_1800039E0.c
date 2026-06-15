/*
 * XREFs of sub_1800039E0 @ 0x1800039E0
 * Callers:
 *     sub_180003AE8 @ 0x180003AE8 (sub_180003AE8.c)
 * Callees:
 *     sub_180003780 @ 0x180003780 (sub_180003780.c)
 *     sub_1800038BC @ 0x1800038BC (sub_1800038BC.c)
 */

__int64 __fastcall sub_1800039E0(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  signed int LastError; // eax
  unsigned int v10; // ebx

  LastError = GetLastError();
  if ( !LastError )
  {
    sub_1800038BC(a1, a2, a3, 0LL, 0LL, a6, 2, -2147024228);
    LastError = 668;
  }
  v10 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v10 = LastError;
  sub_180003780(a1, a2, a3, 0LL, 0LL, a6, 1, v10, 0LL, 0);
  return v10;
}
