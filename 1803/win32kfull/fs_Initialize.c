/*
 * XREFs of fs_Initialize @ 0x1C02B1B94
 * Callers:
 *     bLoadTTF @ 0x1C021995C (bLoadTTF.c)
 *     bReloadGlyphSet @ 0x1C021A0A4 (bReloadGlyphSet.c)
 *     pvHandleKerningPairs @ 0x1C0220004 (pvHandleKerningPairs.c)
 *     bInitInAndOut @ 0x1C02227F4 (bInitInAndOut.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall fs_Initialize(__int64 a1, int *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rcx
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  __int64 v7; // rdx
  unsigned int v8; // r10d
  unsigned __int32 v9; // eax

  v2 = a1 + 8;
  v3 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(*a2 + v3 - 4) = 1936092788;
  memset((void *)v3, 0, 0x488uLL);
  v4 = 0LL;
  v5 = -1;
  *(_QWORD *)(v3 + 232) = v2;
  *(_OWORD *)(v3 + 320) = xmmword_1C02EC820;
  *(_DWORD *)(v3 + 420) = 0;
  v6 = -1;
  *(_OWORD *)(v3 + 1084) = xmmword_1C02EC820;
  v7 = 31LL;
  v8 = 0x80000000;
  *(_OWORD *)(v3 + 336) = xmmword_1C02EC830;
  *(_DWORD *)(v3 + 352) = 0x10000;
  *(_OWORD *)(v3 + 1100) = xmmword_1C02EC830;
  *(_DWORD *)(v3 + 1116) = 0x10000;
  do
  {
    v4 += 4LL;
    *(_DWORD *)((char *)&unk_1C032243C + v4) = _byteswap_ulong(v5);
    aulStopBits[v7] = _byteswap_ulong(v6);
    v6 *= 2;
    v5 >>= 1;
    v9 = _byteswap_ulong(v8);
    v8 >>= 1;
    --v7;
    *(_DWORD *)((char *)&unk_1C032253C + v4) = v9;
  }
  while ( v7 > -1 );
  return 0LL;
}
