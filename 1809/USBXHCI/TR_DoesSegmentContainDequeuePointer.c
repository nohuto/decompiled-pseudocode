/*
 * XREFs of TR_DoesSegmentContainDequeuePointer @ 0x1C00242A0
 * Callers:
 *     Isoch_FindTrbMatch @ 0x1C00297F4 (Isoch_FindTrbMatch.c)
 *     Bulk_FindStage @ 0x1C002F800 (Bulk_FindStage.c)
 *     Bulk_IsTransferEventLikelyDuplicate_Internal @ 0x1C002FB50 (Bulk_IsTransferEventLikelyDuplicate_Internal.c)
 * Callees:
 *     <none>
 */

bool __fastcall TR_DoesSegmentContainDequeuePointer(__int64 a1, int a2, unsigned int a3, signed __int64 a4)
{
  unsigned __int64 v4; // r10
  __int64 v5; // rcx
  unsigned __int64 v6; // r11
  int v7; // r8d

  v4 = *(unsigned int *)(a1 + 44);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = 16LL * a3;
  if ( a4 < v5 + (unsigned int)(16 * a2) )
    return 0;
  v7 = 16 * a3;
  if ( v6 <= v4 )
    LODWORD(v4) = v7;
  return a4 < v5 + (unsigned int)v4;
}
