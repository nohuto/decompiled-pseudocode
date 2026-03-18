/*
 * XREFs of MiFillCombinePage @ 0x1401428FC
 * Callers:
 *     MiConvertStandbyToProto @ 0x140140E3C (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140141C10 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiChangePageAttribute @ 0x1400DA6CC (MiChangePageAttribute.c)
 *     MiUnmapSinglePage @ 0x1401429B4 (MiUnmapSinglePage.c)
 *     MiMapSinglePage @ 0x140155170 (MiMapSinglePage.c)
 *     KeCopyPage @ 0x1401C8630 (KeCopyPage.c)
 */

__int64 __fastcall MiFillCombinePage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  unsigned __int8 v8; // cl
  __int64 result; // rax
  __int64 v10; // rbx

  v6 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v7 = ((unsigned __int64)v6 >> 63) + (v6 >> 3);
  v8 = *(_BYTE *)(a3 + 34);
  if ( ((v8 ^ *(_BYTE *)(a2 + 34)) & 0xC0) != 0 )
    MiChangePageAttribute(a2, v8 >> 6, 2);
  result = MiMapSinglePage(0LL, v7, 1073741840LL, 0LL);
  v10 = result;
  if ( result )
  {
    KeCopyPage(result, a4);
    MiUnmapSinglePage(v10);
    return 1LL;
  }
  return result;
}
