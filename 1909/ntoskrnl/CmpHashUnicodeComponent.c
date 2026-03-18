/*
 * XREFs of CmpHashUnicodeComponent @ 0x1406C533C
 * Callers:
 *     CmDeleteLayeredKey @ 0x140280474 (CmDeleteLayeredKey.c)
 *     CmpCheckLeaf @ 0x1406627D0 (CmpCheckLeaf.c)
 *     CmpGetNameControlBlock @ 0x140667B50 (CmpGetNameControlBlock.c)
 *     CmpAddToLeaf @ 0x1406C50F8 (CmpAddToLeaf.c)
 *     CmpGetMappingHiveForString @ 0x1406F6C1C (CmpGetMappingHiveForString.c)
 *     CmpFindSubKeyByHashWithStatus @ 0x14071424C (CmpFindSubKeyByHashWithStatus.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140714FD4 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpAddStringToMapping @ 0x1407479C4 (CmpAddStringToMapping.c)
 *     CmpWaitForHiveMount @ 0x14077E0E8 (CmpWaitForHiveMount.c)
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140832F94 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpPartialPromoteSubkeys @ 0x14083E220 (CmpPartialPromoteSubkeys.c)
 *     CmInitSystem1 @ 0x140A0D1F0 (CmInitSystem1.c)
 *     CmpCreateRegistryRoot @ 0x140A0EAE8 (CmpCreateRegistryRoot.c)
 * Callees:
 *     NLS_UPCASE @ 0x1400CFCA0 (NLS_UPCASE.c)
 */

__int64 __fastcall CmpHashUnicodeComponent(__m128i *a1)
{
  unsigned int v1; // r9d
  __int16 v2; // ax
  unsigned __int16 *v3; // r10
  __int64 v4; // r11
  unsigned __int16 v5; // ax

  v1 = 0;
  v2 = _mm_cvtsi128_si32(*a1);
  if ( v2 )
  {
    v3 = (unsigned __int16 *)a1->m128i_i64[1];
    v4 = (unsigned __int16)(((unsigned __int16)(v2 - 1) >> 1) + 1);
    do
    {
      v5 = *v3;
      if ( *v3 >= 0x61u )
      {
        if ( v5 > 0x7Au )
          v5 = NLS_UPCASE(v5);
        else
          v5 -= 32;
      }
      ++v3;
      v1 = v5 + 37 * v1;
      --v4;
    }
    while ( v4 );
  }
  return v1;
}
