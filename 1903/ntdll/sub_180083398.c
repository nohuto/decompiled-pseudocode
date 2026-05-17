/*
 * XREFs of sub_180083398 @ 0x180083398
 * Callers:
 *     sub_180029EFC @ 0x180029EFC (sub_180029EFC.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     sub_1800255A8 @ 0x1800255A8 (sub_1800255A8.c)
 *     sub_18002CAA8 @ 0x18002CAA8 (sub_18002CAA8.c)
 *     sub_180083400 @ 0x180083400 (sub_180083400.c)
 */

__int64 __fastcall sub_180083398(__int64 a1)
{
  int v2; // edi

  *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) = 6;
  v2 = sub_180083400(a1);
  if ( v2 >= 0 )
  {
    sub_18002CAA8(a1, 1u);
    sub_1800255A8(*(_QWORD *)(a1 + 48), a1 + 72, 0x14ADu);
    *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) = 7;
  }
  return (unsigned int)v2;
}
