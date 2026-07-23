/*
 * XREFs of CmpGetVirtualStoreRoot @ 0x1407F4688
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x1407F4998 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     CmpReferenceKeyControlBlock @ 0x140693BFC (CmpReferenceKeyControlBlock.c)
 *     CmpFindKcbInHashEntryByCellIndex @ 0x1407F21D8 (CmpFindKcbInHashEntryByCellIndex.c)
 *     CmpGetMappingHiveForString @ 0x1407F4574 (CmpGetMappingHiveForString.c)
 *     CmpGetVirtualizationID @ 0x1407F4744 (CmpGetVirtualizationID.c)
 */

__int64 __fastcall CmpGetVirtualStoreRoot(__int64 a1, __int64 *a2, int *a3, ULONG_PTR *a4)
{
  int VirtualizationID; // ebx
  __int64 v8; // rcx
  int v9; // edi
  ULONG_PTR KcbInHashEntryByCellIndex; // rsi
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&UnicodeString, 0LL);
  VirtualizationID = CmpGetVirtualizationID(&UnicodeString);
  if ( VirtualizationID >= 0 )
  {
    VirtualizationID = CmpGetMappingHiveForString((__m128i *)&UnicodeString, a2);
    if ( VirtualizationID >= 0 )
    {
      v8 = *a2;
      v9 = *(_DWORD *)(*(_QWORD *)(*a2 + 64) + 36LL);
      KcbInHashEntryByCellIndex = CmpFindKcbInHashEntryByCellIndex(v8, 0, v9);
      if ( CmpReferenceKeyControlBlock(KcbInHashEntryByCellIndex) )
      {
        *a3 = v9;
        *a4 = KcbInHashEntryByCellIndex;
      }
      else
      {
        VirtualizationID = -1073741670;
      }
    }
  }
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)VirtualizationID;
}
