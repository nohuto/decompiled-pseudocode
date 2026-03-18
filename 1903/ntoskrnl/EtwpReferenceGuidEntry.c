/*
 * XREFs of EtwpReferenceGuidEntry @ 0x1405D4274
 * Callers:
 *     EtwGetProviderIdFromHandle @ 0x1401586DC (EtwGetProviderIdFromHandle.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C46E0 (EtwpAddRegEntryToGroup.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405D4180 (EtwpFindGuidEntryByGuid.c)
 *     EtwpAddUmRegEntry @ 0x1405D44B0 (EtwpAddUmRegEntry.c)
 *     EtwpUpdateGuidEnableInfo @ 0x140664ED4 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpGetNextGuidEntry @ 0x140665CEC (EtwpGetNextGuidEntry.c)
 *     EtwpAddGuidEntry @ 0x1406669DC (EtwpAddGuidEntry.c)
 *     EtwpCreateUmReplyObject @ 0x1406CD3F4 (EtwpCreateUmReplyObject.c)
 *     EtwpAddKmRegEntry @ 0x140718958 (EtwpAddKmRegEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

char __fastcall EtwpReferenceGuidEntry(ULONG_PTR BugCheckParameter2)
{
  signed __int64 v1; // r8
  signed __int64 v2; // rax

  _m_prefetchw((const void *)(BugCheckParameter2 + 32));
  v1 = *(_QWORD *)(BugCheckParameter2 + 32);
  if ( !v1 )
    return 0;
  while ( 1 )
  {
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 32), v1 + 1, v1);
    if ( v1 == v2 )
      break;
    v1 = v2;
    if ( !v2 )
      return 0;
  }
  if ( v1 < 0 )
    KeBugCheckEx(0x11Du, 9uLL, BugCheckParameter2, 0LL, 0LL);
  return 1;
}
