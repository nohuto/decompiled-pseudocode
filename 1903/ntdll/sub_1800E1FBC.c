/*
 * XREFs of sub_1800E1FBC @ 0x1800E1FBC
 * Callers:
 *     LdrProcessRelocationBlockEx_0 @ 0x180083200 (LdrProcessRelocationBlockEx_0.c)
 *     sub_1800E2088 @ 0x1800E2088 (sub_1800E2088.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800E1FBC(_WORD *a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  __int16 v4; // r11
  unsigned int v5; // r10d
  unsigned int v6; // r8d

  v3 = a2 + (*a1 & 0xFFC);
  v4 = a3;
  v5 = 1;
  if ( (*a1 & 0xF000) == 0x5000 )
  {
    v6 = (a3
        + (((*(_WORD *)(v3 + 4) & 0xFFF) << 16) | ((unsigned __int16)(*(_DWORD *)(v3 + 4) >> 4) << 16) & 0xF0000000 | (unsigned __int16)(*(_DWORD *)v3 >> 4) ^ ((unsigned __int16)*(_DWORD *)v3 ^ (*(_DWORD *)v3 >> 4)) & 0xFFF)) >> 16;
    *(_DWORD *)v3 = *(_DWORD *)v3 & 0xFFF0F000 | (v4
                                                + ((unsigned __int16)(*(_DWORD *)v3 >> 4) ^ ((unsigned __int16)*(_DWORD *)v3 ^ (unsigned __int16)(*(_DWORD *)v3 >> 4)) & 0xFFF)) & 0xFFF | (16 * ((v4 + ((unsigned __int16)(*(_DWORD *)v3 >> 4) ^ ((unsigned __int16)*(_DWORD *)v3 ^ (unsigned __int16)(*(_DWORD *)v3 >> 4)) & 0xFFF)) & 0xF000));
    *(_DWORD *)(v3 + 4) &= 0xFFF0F000;
    *(_DWORD *)(v3 + 4) |= v6 & 0xFFF | (16 * (v6 & 0xF000));
  }
  else
  {
    return 0;
  }
  return v5;
}
