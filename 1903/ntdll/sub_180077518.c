/*
 * XREFs of sub_180077518 @ 0x180077518
 * Callers:
 *     sub_180077500 @ 0x180077500 (sub_180077500.c)
 * Callees:
 *     sub_180036D88 @ 0x180036D88 (sub_180036D88.c)
 *     sub_18010B808 @ 0x18010B808 (sub_18010B808.c)
 */

void *__fastcall sub_180077518(__int64 a1, unsigned int a2, unsigned int a3, _DWORD *a4, _DWORD *a5)
{
  unsigned int v6; // eax
  void *v9; // rax
  void *v10; // rsi

  v6 = a3 | 4;
  if ( a2 < 0x10000 )
    v6 = a3;
  v9 = sub_180036D88(a1, a2, a2, 0LL, v6);
  *a4 = 0;
  v10 = v9;
  *a5 = 0;
  if ( v9
    && ((dword_180163534 & 0x80u) != 0 && BYTE1(*(_OWORD *)(a1 + 40)) >= 2u
     || (dword_180163534 & 0x100) != 0 && (*(_BYTE *)(a1 + 13) & 7) != 0 && (int)sub_18010B808(a1, v9, a2) <= 1) )
  {
    *a4 |= 1u;
  }
  return v10;
}
