/*
 * XREFs of RtlCompareMemoryUlong @ 0x1800A0F00
 * Callers:
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 *     sub_18003F020 @ 0x18003F020 (sub_18003F020.c)
 *     sub_180041AB0 @ 0x180041AB0 (sub_180041AB0.c)
 *     sub_1800445F8 @ 0x1800445F8 (sub_1800445F8.c)
 *     sub_18004622C @ 0x18004622C (sub_18004622C.c)
 *     sub_180046728 @ 0x180046728 (sub_180046728.c)
 *     sub_180106954 @ 0x180106954 (sub_180106954.c)
 *     sub_180107184 @ 0x180107184 (sub_180107184.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCompareMemoryUlong(_DWORD *a1, unsigned __int64 a2, int a3)
{
  bool v4; // zf
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx

  v5 = a2 >> 2;
  v4 = v5 == 0;
  if ( v5 )
  {
    v6 = v5;
    do
    {
      if ( !v6 )
        break;
      v4 = *a1++ == a3;
      --v6;
    }
    while ( v4 );
    if ( !v4 )
      v5 -= v6 + 1;
  }
  return 4 * v5;
}
