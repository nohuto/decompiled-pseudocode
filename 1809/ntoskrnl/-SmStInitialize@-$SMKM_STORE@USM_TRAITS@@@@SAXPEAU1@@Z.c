/*
 * XREFs of ?SmStInitialize@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400E445C
 * Callers:
 *     SmProcessCreateRequest @ 0x14066BFB4 (SmProcessCreateRequest.c)
 * Callees:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400E4568 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStInitialize(__int64 a1)
{
  __int64 result; // rax

  memset((void *)a1, 0, 0x1A40uLL);
  *(_BYTE *)(a1 + 6020) = 2;
  ST_STORE<SM_TRAITS>::StInitialize(a1);
  *(_QWORD *)(a1 + 6056) = a1 + 6048;
  *(_QWORD *)(a1 + 6048) = 0LL;
  *(_QWORD *)(a1 + 6072) = a1 + 6064;
  *(_QWORD *)(a1 + 6064) = 0LL;
  *(_QWORD *)(a1 + 6088) = a1 + 6080;
  *(_QWORD *)(a1 + 6080) = 0LL;
  *(_QWORD *)(a1 + 6040) = 0LL;
  *(_WORD *)(a1 + 6152) = 0;
  *(_BYTE *)(a1 + 6154) = 6;
  *(_DWORD *)(a1 + 6156) = 0;
  *(_QWORD *)(a1 + 6168) = a1 + 6160;
  *(_QWORD *)(a1 + 6160) = a1 + 6160;
  *(_WORD *)(a1 + 6128) = 0;
  *(_BYTE *)(a1 + 6130) = 6;
  *(_DWORD *)(a1 + 6132) = 0;
  *(_QWORD *)(a1 + 6144) = a1 + 6136;
  *(_QWORD *)(a1 + 6136) = a1 + 6136;
  *(_WORD *)(a1 + 6176) = 1;
  *(_BYTE *)(a1 + 6178) = 6;
  *(_DWORD *)(a1 + 6180) = 0;
  *(_QWORD *)(a1 + 6192) = a1 + 6184;
  *(_QWORD *)(a1 + 6184) = a1 + 6184;
  memset((void *)(a1 + 6592), 0, 0x70uLL);
  result = a1 + 6608;
  *(_WORD *)(a1 + 6600) = 1;
  *(_BYTE *)(a1 + 6602) = 6;
  *(_DWORD *)(a1 + 6604) = 0;
  *(_QWORD *)(a1 + 6616) = a1 + 6608;
  *(_QWORD *)(a1 + 6608) = a1 + 6608;
  return result;
}
