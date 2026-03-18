/*
 * XREFs of RtlCSparseBitmapBitmaskRead @ 0x140116F10
 * Callers:
 *     RtlpHpFreeHeap @ 0x140003214 (RtlpHpFreeHeap.c)
 *     RtlpHpGetOwnerHeap @ 0x140003384 (RtlpHpGetOwnerHeap.c)
 *     ExFreeHeapPool @ 0x140064E50 (ExFreeHeapPool.c)
 *     RtlpHpMetadataCommit @ 0x14019AADC (RtlpHpMetadataCommit.c)
 *     RtlpHpExtrasSetPresent @ 0x14031B054 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpSizeHeapInternal @ 0x14031B1A4 (RtlpHpSizeHeapInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCSparseBitmapBitmaskRead(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax

  if ( _bittest64((const signed __int64 *)(a1 + 56), a2 >> 30) )
  {
    if ( _bittest64(*(const signed __int64 **)a1, a2 >> 15) )
      v2 = 2;
    else
      v2 = 1;
  }
  else
  {
    v2 = 0;
  }
  if ( v2 == 2 )
    return (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * (a2 >> 6)) >> (a2 & 0x3F)) & 3LL;
  else
    return 0LL;
}
