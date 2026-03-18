/*
 * XREFs of CmpHashUnicodeComponent @ 0x1405AF2C4
 * Callers:
 *     CmDeleteLayeredKey @ 0x14026CBCC (CmDeleteLayeredKey.c)
 *     CmpAddToLeaf @ 0x1405AEEC0 (CmpAddToLeaf.c)
 *     CmpGetNameControlBlock @ 0x1405D6490 (CmpGetNameControlBlock.c)
 *     CmpCheckLeaf @ 0x1405D8BC0 (CmpCheckLeaf.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1406F81FC (CmpFindSubkeyInHashByChildCell.c)
 *     CmpAddStringToMapping @ 0x14071E7A4 (CmpAddStringToMapping.c)
 *     CmpFindSubKeyByHashWithStatus @ 0x14073D230 (CmpFindSubKeyByHashWithStatus.c)
 *     CmpWaitForHiveMount @ 0x1407555C4 (CmpWaitForHiveMount.c)
 *     CmRenameKey @ 0x1407EDB14 (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x1407F2A38 (CmpDoBuildVirtualStack.c)
 *     CmpGetMappingHiveForString @ 0x1407F3394 (CmpGetMappingHiveForString.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x1407FA5CC (CmpSubtreeEnumeratorAdvance.c)
 *     CmpPartialPromoteSubkeys @ 0x140805410 (CmpPartialPromoteSubkeys.c)
 *     CmInitSystem1 @ 0x1409C3050 (CmInitSystem1.c)
 *     CmpCreateRegistryRoot @ 0x1409C3FAC (CmpCreateRegistryRoot.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1405D5C10 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpHashUnicodeComponent(__m128i *a1)
{
  unsigned int v1; // ebx
  __int16 v2; // ax
  WCHAR *v3; // rdi
  __int64 v4; // rsi
  WCHAR v5; // ax

  v1 = 0;
  v2 = _mm_cvtsi128_si32(*a1);
  if ( v2 )
  {
    v3 = (WCHAR *)a1->m128i_i64[1];
    v4 = (unsigned __int16)(((unsigned __int16)(v2 - 1) >> 1) + 1);
    do
    {
      v5 = *v3;
      if ( *v3 >= 0x61u )
      {
        if ( v5 > 0x7Au )
          v5 = RtlUpcaseUnicodeChar(v5);
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
