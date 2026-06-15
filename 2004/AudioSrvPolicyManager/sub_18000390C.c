/*
 * XREFs of sub_18000390C @ 0x18000390C
 * Callers:
 *     sub_180003B08 @ 0x180003B08 (sub_180003B08.c)
 *     sub_180021698 @ 0x180021698 (sub_180021698.c)
 * Callees:
 *     sub_180003780 @ 0x180003780 (sub_180003780.c)
 *     sub_1800038BC @ 0x1800038BC (sub_1800038BC.c)
 */

__int64 __fastcall sub_18000390C(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  signed int LastError; // ebx
  unsigned int v11; // ecx

  LastError = GetLastError();
  if ( !LastError )
  {
    sub_1800038BC(a1, a2, a3, 0LL, 0LL, a6, 2, -2147024228);
    LastError = 668;
  }
  v11 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v11 = LastError;
  sub_180003780(a1, a2, a3, 0LL, 0LL, a6, a7, v11, 0LL, 0);
  return (unsigned int)LastError;
}
