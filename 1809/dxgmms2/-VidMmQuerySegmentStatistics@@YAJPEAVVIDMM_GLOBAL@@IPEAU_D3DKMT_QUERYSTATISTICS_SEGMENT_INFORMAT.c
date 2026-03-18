/*
 * XREFs of ?VidMmQuerySegmentStatistics@@YAJPEAVVIDMM_GLOBAL@@IPEAU_D3DKMT_QUERYSTATISTICS_SEGMENT_INFORMATION@@@Z @ 0x1C0024F60
 * Callers:
 *     <none>
 * Callees:
 *     ?QuerySegmentStatistics@VIDMM_GLOBAL@@QEAAJIPEAU_D3DKMT_QUERYSTATISTICS_SEGMENT_INFORMATION@@@Z @ 0x1C00276F0 (-QuerySegmentStatistics@VIDMM_GLOBAL@@QEAAJIPEAU_D3DKMT_QUERYSTATISTICS_SEGMENT_INFORMATION@@@Z.c)
 */

__int64 __fastcall VidMmQuerySegmentStatistics(
        struct VIDMM_GLOBAL *a1,
        unsigned int a2,
        struct _D3DKMT_QUERYSTATISTICS_SEGMENT_INFORMATION *a3)
{
  return VIDMM_GLOBAL::QuerySegmentStatistics(a1, a2, a3);
}
