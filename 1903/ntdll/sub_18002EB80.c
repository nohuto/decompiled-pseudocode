/*
 * XREFs of sub_18002EB80 @ 0x18002EB80
 * Callers:
 *     sub_180062F34 @ 0x180062F34 (sub_180062F34.c)
 * Callees:
 *     sub_18002EBF0 @ 0x18002EBF0 (sub_18002EBF0.c)
 *     sub_180081740 @ 0x180081740 (sub_180081740.c)
 */

__int64 __fastcall sub_18002EB80(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ebx

  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 248) = 0;
  LOBYTE(a3) = 1;
  v5 = sub_18002EBF0(a1 + 8, a2, a3);
  if ( v5 >= 0 )
  {
    v5 = sub_18002EBF0(a1 + 128, a2, 0LL);
    if ( v5 < 0 )
      sub_180081740(a1 + 8);
  }
  return (unsigned int)v5;
}
