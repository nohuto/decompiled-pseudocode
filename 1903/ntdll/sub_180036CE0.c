/*
 * XREFs of sub_180036CE0 @ 0x180036CE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180036D88 @ 0x180036D88 (sub_180036D88.c)
 *     sub_18010B808 @ 0x18010B808 (sub_18010B808.c)
 */

__int64 __fastcall sub_180036CE0(__int64 a1, unsigned int a2, char a3, _DWORD *a4, _DWORD *a5)
{
  __int64 v8; // rax
  __int64 v9; // rsi

  v8 = sub_180036D88(a1, a2, a2, 0, a3 & 1 | (a2 < 0x10000 ? 0x8000000 : 134217732));
  *a4 = 0;
  v9 = v8;
  *a5 = 0;
  if ( v8
    && ((dword_180163534 & 0x80u) != 0 && BYTE1(*(_OWORD *)(a1 + 40)) >= 2u
     || (dword_180163534 & 0x100) != 0 && (*(_BYTE *)(a1 + 13) & 7) != 0 && (int)sub_18010B808(a1, v8, a2) <= 1) )
  {
    *a4 |= 1u;
  }
  return v9;
}
