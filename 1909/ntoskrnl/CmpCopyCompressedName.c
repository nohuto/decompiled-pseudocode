/*
 * XREFs of CmpCopyCompressedName @ 0x140660810
 * Callers:
 *     CmpInitializeValueNameString @ 0x14063630C (CmpInitializeValueNameString.c)
 *     CmpQueryKeyValueData @ 0x140661170 (CmpQueryKeyValueData.c)
 *     CmpConstructNameFromKeyNodes @ 0x1406689D0 (CmpConstructNameFromKeyNodes.c)
 *     CmAddLogForAction @ 0x1406BB324 (CmAddLogForAction.c)
 *     CmpAddSubKeyToList @ 0x1406C4F28 (CmpAddSubKeyToList.c)
 *     CmpPopulateNodeInformation @ 0x1406D2390 (CmpPopulateNodeInformation.c)
 *     CmpRemoveSubKeyFromList @ 0x1406D642C (CmpRemoveSubKeyFromList.c)
 *     CmpMarkIndexDirty @ 0x1406D86CC (CmpMarkIndexDirty.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x140729870 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpInitializeKeyNameString @ 0x14083629C (CmpInitializeKeyNameString.c)
 *     CmpLoadHiveVolatile @ 0x14083B3D0 (CmpLoadHiveVolatile.c)
 *     CmpGetNodeName @ 0x140A13970 (CmpGetNodeName.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A13ADC (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpCopyCompressedName(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4)
{
  unsigned int v4; // edx
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // r11
  unsigned __int64 result; // rax
  unsigned int v10; // ebx
  unsigned __int8 *v11; // rcx
  _WORD *v12; // r8
  __int64 v13; // rdx

  v4 = a2 >> 1;
  if ( v4 < a4 )
    a4 = v4;
  v6 = 0LL;
  if ( a4 )
  {
    if ( a4 >= 0x20 )
    {
      v7 = a4 - 1;
      v8 = a1 + 2 * v7;
      result = a3 + v7;
      if ( a1 > result || v8 < a3 )
      {
        v10 = 16;
        do
        {
          *(__m128i *)(a1 + 2 * v6) = _mm_unpacklo_epi8(_mm_loadl_epi64((const __m128i *)(v6 + a3)), (__m128i)0LL);
          v6 = (unsigned int)(v6 + 32);
          *(__m128i *)(a1 + 2LL * (v10 - 8)) = _mm_unpacklo_epi8(
                                                 _mm_loadl_epi64((const __m128i *)(v10 - 8 + a3)),
                                                 (__m128i)0LL);
          *(__m128i *)(a1 + 2LL * v10) = _mm_unpacklo_epi8(_mm_loadl_epi64((const __m128i *)(v10 + a3)), (__m128i)0LL);
          result = v10 + 8;
          v10 += 32;
          *(__m128i *)(a1 + 2 * result) = _mm_unpacklo_epi8(
                                            _mm_loadl_epi64((const __m128i *)(result + a3)),
                                            (__m128i)0LL);
        }
        while ( (unsigned int)v6 < (a4 & 0xFFFFFFE0) );
      }
    }
    if ( (unsigned int)v6 < a4 )
    {
      v11 = (unsigned __int8 *)(v6 + a3);
      v12 = (_WORD *)(a1 + 2 * v6);
      v13 = a4 - (unsigned int)v6;
      do
      {
        result = *v11++;
        *v12++ = result;
        --v13;
      }
      while ( v13 );
    }
  }
  return result;
}
