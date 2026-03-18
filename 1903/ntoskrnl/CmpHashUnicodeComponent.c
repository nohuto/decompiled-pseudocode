/*
 * XREFs of CmpHashUnicodeComponent @ 0x140632D10
 * Callers:
 *     CmDeleteLayeredKey @ 0x140280714 (CmDeleteLayeredKey.c)
 *     CmpAddToLeaf @ 0x1406328AC (CmpAddToLeaf.c)
 *     CmpCheckLeaf @ 0x14064F610 (CmpCheckLeaf.c)
 *     CmpGetNameControlBlock @ 0x140654A50 (CmpGetNameControlBlock.c)
 *     CmpGetMappingHiveForString @ 0x1406F4EAC (CmpGetMappingHiveForString.c)
 *     CmpFindSubKeyByHashWithStatus @ 0x14071246C (CmpFindSubKeyByHashWithStatus.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1407131F4 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpAddStringToMapping @ 0x140745AC4 (CmpAddStringToMapping.c)
 *     CmpWaitForHiveMount @ 0x14077B818 (CmpWaitForHiveMount.c)
 *     CmRenameKey @ 0x14082855C (CmRenameKey.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140833934 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpPartialPromoteSubkeys @ 0x14083EBC0 (CmpPartialPromoteSubkeys.c)
 *     CmInitSystem1 @ 0x140A0CCC4 (CmInitSystem1.c)
 *     CmpCreateRegistryRoot @ 0x140A0E368 (CmpCreateRegistryRoot.c)
 * Callees:
 *     NLS_UPCASE @ 0x140092980 (NLS_UPCASE.c)
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
