/*
 * XREFs of CmpBounceContextCleanup @ 0x1405FFA80
 * Callers:
 *     NtQueryValueKey @ 0x1405FEFD0 (NtQueryValueKey.c)
 *     NtQueryMultipleValueKey @ 0x14063E0F0 (NtQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x140660AE0 (NtEnumerateValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

void __fastcall CmpBounceContextCleanup(__int64 a1)
{
  _SLIST_ENTRY *v1; // r8

  v1 = *(_SLIST_ENTRY **)(a1 + 8);
  if ( v1 && v1 != *(_SLIST_ENTRY **)a1 && v1 != (_SLIST_ENTRY *)(a1 + 17) )
  {
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      ++dword_1404F2D9C;
      if ( LOWORD(CmpBounceBufferLookaside.Alignment) >= (unsigned __int16)word_1404F2D90 )
      {
        ++dword_1404F2DA0;
        ((void (__fastcall *)(_SLIST_ENTRY *, _SLIST_HEADER *))qword_1404F2DB8)(v1, &CmpBounceBufferLookaside);
      }
      else
      {
        RtlpInterlockedPushEntrySList(&CmpBounceBufferLookaside, v1);
      }
    }
    else
    {
      CmSiFreeMemory(*(PPRIVILEGE_SET *)(a1 + 8));
    }
  }
}
