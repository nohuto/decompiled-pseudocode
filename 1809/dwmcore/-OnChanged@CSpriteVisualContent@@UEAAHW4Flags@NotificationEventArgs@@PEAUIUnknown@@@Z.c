/*
 * XREFs of ?OnChanged@CSpriteVisualContent@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180066A60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800677FC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CSpriteVisualContent::OnChanged(__int64 a1, int a2)
{
  if ( a2 == 14 )
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(a1 + 64);
  return 1LL;
}
