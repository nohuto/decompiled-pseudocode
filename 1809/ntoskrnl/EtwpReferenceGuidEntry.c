/*
 * XREFs of EtwpReferenceGuidEntry @ 0x1405C5288
 * Callers:
 *     EtwGetProviderIdFromHandle @ 0x14017386C (EtwGetProviderIdFromHandle.c)
 *     EtwpAddGuidEntry @ 0x1405C1A0C (EtwpAddGuidEntry.c)
 *     EtwpGetNextGuidEntry @ 0x1405C3614 (EtwpGetNextGuidEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C3750 (EtwpAddRegEntryToGroup.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405C5190 (EtwpFindGuidEntryByGuid.c)
 *     EtwpAddUmRegEntry @ 0x1405C54C0 (EtwpAddUmRegEntry.c)
 *     EtwpUpdateGuidEnableInfo @ 0x140657F14 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpCreateUmReplyObject @ 0x1406A7578 (EtwpCreateUmReplyObject.c)
 *     EtwpAddKmRegEntry @ 0x1406BFBD8 (EtwpAddKmRegEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
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
