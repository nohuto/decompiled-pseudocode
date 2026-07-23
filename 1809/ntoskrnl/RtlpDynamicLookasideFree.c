/*
 * XREFs of RtlpDynamicLookasideFree @ 0x1401B7C90
 * Callers:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall RtlpDynamicLookasideFree(__int64 a1, _SLIST_ENTRY *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r9

  v3 = 1;
  v4 = a1 + ((a3 + 1LL) << 6);
  ++*(_DWORD *)(v4 + 28);
  if ( *(_WORD *)v4 >= *(_WORD *)(v4 + 16) )
  {
    ++*(_DWORD *)(v4 + 32);
    return 0;
  }
  else
  {
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + ((a3 + 1LL) << 6)), a2);
  }
  return v3;
}
