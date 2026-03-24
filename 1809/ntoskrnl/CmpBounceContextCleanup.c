/*
 * XREFs of CmpBounceContextCleanup @ 0x1405D3F34
 * Callers:
 *     NtQueryMultipleValueKey @ 0x1405B7130 (NtQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x1405D3890 (NtEnumerateValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5410 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

void __fastcall CmpBounceContextCleanup(__int64 a1)
{
  struct _SLIST_ENTRY *v2; // rcx

  v2 = *(struct _SLIST_ENTRY **)(a1 + 8);
  if ( v2 && v2 != *(struct _SLIST_ENTRY **)a1 && v2 != (struct _SLIST_ENTRY *)(a1 + 17) )
  {
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      ++dword_1404C6B1C;
      if ( LOWORD(CmpBounceBufferLookaside.Alignment) >= (unsigned __int16)word_1404C6B10 )
      {
        ++dword_1404C6B20;
        ((void (__fastcall *)(struct _SLIST_ENTRY *, union _SLIST_HEADER *))qword_1404C6B38)(
          v2,
          &CmpBounceBufferLookaside);
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
