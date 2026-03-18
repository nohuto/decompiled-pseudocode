/*
 * XREFs of CmpUpdateKeyNodeAccessBits @ 0x140631924
 * Callers:
 *     CmpCreateTombstone @ 0x14028097C (CmpCreateTombstone.c)
 *     CmSetValueKey @ 0x140630930 (CmSetValueKey.c)
 *     CmQueryMultipleValueKey @ 0x140633EC0 (CmQueryMultipleValueKey.c)
 *     CmpCreateChild @ 0x140634398 (CmpCreateChild.c)
 *     CmDeleteValueKey @ 0x14063CCDC (CmDeleteValueKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14063EB80 (CmpSetSecurityDescriptorInfo.c)
 *     CmpGetSecurityDescriptorNode @ 0x14064052C (CmpGetSecurityDescriptorNode.c)
 *     CmEnumerateKey @ 0x1406630F0 (CmEnumerateKey.c)
 *     CmpWalkOneLevel @ 0x140665590 (CmpWalkOneLevel.c)
 *     CmpGetKeyNodeForKcb @ 0x140669AE0 (CmpGetKeyNodeForKcb.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1405D57B0 (HvpMarkCellDirty.c)
 */

void __fastcall CmpUpdateKeyNodeAccessBits(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  if ( (*(_DWORD *)(a1 + 160) & 0x8001) == 0 && (*(_BYTE *)(a2 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
  {
    if ( HvpMarkCellDirty(a1, a3, 0) )
      *(_BYTE *)(a2 + 12) |= CmpAccessBitForPhase;
  }
}
