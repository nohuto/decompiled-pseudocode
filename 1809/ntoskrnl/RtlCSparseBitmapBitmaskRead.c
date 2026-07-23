/*
 * XREFs of RtlCSparseBitmapBitmaskRead @ 0x14000DE34
 * Callers:
 *     RtlpHpFreeHeap @ 0x140007BC0 (RtlpHpFreeHeap.c)
 *     RtlpHpGetOwnerHeap @ 0x14000E6C0 (RtlpHpGetOwnerHeap.c)
 *     RtlpHpSizeHeapInternal @ 0x1400BEAE0 (RtlpHpSizeHeapInternal.c)
 *     RtlpHpMetadataCommit @ 0x14019224C (RtlpHpMetadataCommit.c)
 *     RtlpHpExtrasSetPresent @ 0x1402FCC7C (RtlpHpExtrasSetPresent.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCSparseBitmapBitmaskRead(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax

  v2 = 0;
  if ( _bittest64((const signed __int64 *)a1, a2 >> 30) )
    v2 = (_bittest64(*(const signed __int64 **)(a1 + 8), a2 >> 15) != 0) + 1;
  if ( v2 == 2 )
    return (*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * (a2 >> 6)) >> (a2 & 0x3F)) & 3LL;
  else
    return 0LL;
}
