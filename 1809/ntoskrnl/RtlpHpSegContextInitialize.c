/*
 * XREFs of RtlpHpSegContextInitialize @ 0x140140ED8
 * Callers:
 *     RtlpHpHeapCreate @ 0x140140BE0 (RtlpHpHeapCreate.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 RtlpHpSegContextInitialize(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 *a7,
        char a8,
        ...)
{
  __int64 v9; // rdi
  unsigned __int64 v12; // r9
  unsigned int v13; // eax
  unsigned int v14; // ecx
  int v15; // edx
  unsigned int v16; // edx
  __int128 v17; // xmm0
  __int64 result; // rax

  v9 = a2;
  memset(a1, 0, 0xC0uLL);
  *(_WORD *)((char *)a1 + 11) = 1031;
  v12 = (unsigned int)v9 >> 8;
  *a1 = ~(v9 - 1);
  _BitScanReverse(&v13, v12);
  *((_BYTE *)a1 + 8) = v13;
  _BitScanForward(&v14, (unsigned int)v9 >> 20);
  *((_BYTE *)a1 + 9) = v14;
  v15 = ~*(_DWORD *)a1;
  *((_BYTE *)a1 + 10) = (v12 + 0x1FFF) / v12;
  v16 = ((((_DWORD)v12 - 1) & (unsigned int)(v12 + 0x1FFF)) - (unsigned int)v12 + v15 - 8190) >> 1;
  *((_DWORD *)a1 + 4) = v16 - ((v12 - 1) & v16);
  *((_BYTE *)a1 + 13) = a8;
  a1[8] = 0LL;
  v17 = *a7;
  a1[10] = (__int64)(a1 + 9);
  a1[9] = (__int64)(a1 + 9);
  a1[12] = 0LL;
  a1[13] = 0LL;
  a1[3] = a4;
  a1[7] = a3;
  *((_WORD *)a1 + 10) = a6 + ((unsigned int)v9 >= 0x200000 ? 0x10 : 0) - (_WORD)a1 + 32;
  *((_WORD *)a1 + 11) = a6 - (_WORD)a1;
  result = a5;
  a1[4] = a5;
  *(_OWORD *)(a1 + 5) = v17;
  return result;
}
