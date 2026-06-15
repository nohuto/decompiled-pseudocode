/*
 * XREFs of ?GetCurrentPadding@CSpatialCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140058890
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 */

void __fastcall CSpatialCrossProcessBaseEndpoint::GetCurrentPadding(
        CSpatialCrossProcessBaseEndpoint *this,
        __int64 *a2,
        struct AE_CURRENT_POSITION *a3)
{
  if ( a2 )
    *a2 = 0LL;
  if ( a3 )
    memset_0(a3, 0, sizeof(struct AE_CURRENT_POSITION));
}
