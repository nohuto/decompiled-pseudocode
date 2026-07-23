/*
 * XREFs of CmpBounceContextCleanup @ 0x1405D4F34
 * Callers:
 *     NtQueryMultipleValueKey @ 0x1405B8130 (NtQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x1405D4890 (NtEnumerateValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

void __fastcall CmpBounceContextCleanup(__int64 a1)
{
  _SLIST_ENTRY *v2; // rcx

  v2 = *(_SLIST_ENTRY **)(a1 + 8);
  if ( v2 && v2 != *(_SLIST_ENTRY **)a1 && v2 != (_SLIST_ENTRY *)(a1 + 17) )
  {
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      ++dword_1404C7BDC;
      if ( LOWORD(CmpBounceBufferLookaside.Alignment) >= (unsigned __int16)word_1404C7BD0 )
      {
        ++dword_1404C7BE0;
        ((void (__fastcall *)(_SLIST_ENTRY *, _SLIST_HEADER *))qword_1404C7BF8)(v2, &CmpBounceBufferLookaside);
      }
      else
      {
        RtlpInterlockedPushEntrySList(&CmpBounceBufferLookaside, v2);
      }
    }
    else
    {
      CmSiFreeMemory((PPRIVILEGE_SET)v2);
    }
  }
}
