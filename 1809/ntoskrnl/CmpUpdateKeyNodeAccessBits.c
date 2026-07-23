/*
 * XREFs of CmpUpdateKeyNodeAccessBits @ 0x1405D03BC
 * Callers:
 *     CmpCreateTombstone @ 0x14026D34C (CmpCreateTombstone.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x140581AB8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpGetKeyNodeForKcb @ 0x1405AB400 (CmpGetKeyNodeForKcb.c)
 *     CmpCreateChild @ 0x1405AC7A4 (CmpCreateChild.c)
 *     CmDeleteValueKey @ 0x1405B7634 (CmDeleteValueKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1405B8C5C (CmpSetSecurityDescriptorInfo.c)
 *     CmSetValueKey @ 0x1405CCE28 (CmSetValueKey.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1405CE560 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmQueryMultipleValueKey @ 0x1405D1194 (CmQueryMultipleValueKey.c)
 *     CmEnumerateKey @ 0x1405D3A20 (CmEnumerateKey.c)
 *     CmpWalkOneLevel @ 0x1405D5560 (CmpWalkOneLevel.c)
 *     CmpCreateKeyControlBlock @ 0x1405D6EB0 (CmpCreateKeyControlBlock.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 */

void __fastcall CmpUpdateKeyNodeAccessBits(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  if ( (*(_DWORD *)(a1 + 160) & 0x8001) == 0 && (*(_BYTE *)(a2 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
  {
    if ( (unsigned __int8)HvpMarkCellDirty(a1, a3) )
      *(_BYTE *)(a2 + 12) |= CmpAccessBitForPhase;
  }
}
