/*
 * XREFs of sub_18004C2EC @ 0x18004C2EC
 * Callers:
 *     sub_18004C420 @ 0x18004C420 (sub_18004C420.c)
 * Callees:
 *     RtlQueryResourcePolicy @ 0x180009B00 (RtlQueryResourcePolicy.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_18004C2EC(
        unsigned __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        __int64 a5,
        __int16 a6,
        _DWORD *a7)
{
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  _DWORD *v14; // rax
  __int64 i; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  int v19; // [rsp+40h] [rbp+18h] BYREF

  memset((void *)a1, 0, 0x4C0uLL);
  v11 = a5;
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 57) = a4;
  v12 = *(_OWORD *)(v11 + 16);
  *(_OWORD *)(a1 + 8) = *(_OWORD *)v11;
  v13 = *(_QWORD *)(v11 + 32);
  *(_WORD *)(a1 + 58) = a6 - a1;
  v14 = a7;
  *(_OWORD *)(a1 + 24) = v12;
  *(_QWORD *)(a1 + 40) = v13;
  *(_DWORD *)(a1 + 60) = *v14;
  for ( i = 0LL; i < 4; ++i )
    *(_QWORD *)(a1 + 8 * i + 8) ^= a1 ^ qword_180163540;
  v16 = *(_QWORD *)(a1 + 40);
  if ( v16 )
    *(_QWORD *)(a1 + 40) = a1 ^ qword_180163540 ^ v16;
  if ( (int)RtlQueryResourcePolicy(0, 0, &v19, 4LL) >= 0 && v19 <= 10 )
    a3 = 1;
  v17 = 64LL;
  if ( a3 > 0x40 )
    LOBYTE(a3) = 64;
  *(_BYTE *)(a1 + 56) = a3;
  if ( (unsigned __int8)a3 > 1u )
  {
    v17 = 64 - (unsigned int)(unsigned __int8)a3;
    *(_QWORD *)(a1 + 48) = (char *)&unk_18011CCB0 + ((unsigned __int64)(unsigned int)((62 - v17) * (v17 + 61)) >> 1);
  }
  a5 = 1LL;
  memset64((void *)(a1 + 128), 1uLL, 0x81uLL);
  return sub_180049E98(0LL, v17);
}
