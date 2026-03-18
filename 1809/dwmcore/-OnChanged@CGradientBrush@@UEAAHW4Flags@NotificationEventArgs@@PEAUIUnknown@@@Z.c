/*
 * XREFs of ?OnChanged@CGradientBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18001D760
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStop@CGradientBrush@@AEAAXPEAVCColorGradientStop@@@Z @ 0x18001D798 (-UpdateStop@CGradientBrush@@AEAAXPEAVCColorGradientStop@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800677FC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CGradientBrush::OnChanged(CGradientBrush *a1, int a2, struct CColorGradientStop *a3)
{
  int v3; // r10d
  CGradientBrush *v4; // r9

  v3 = a2;
  v4 = a1;
  if ( a2 == 10 )
  {
    if ( !a3 )
      return 1LL;
    CGradientBrush::UpdateStop(a1, a3);
  }
  if ( v3 == 14 )
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((char *)v4 + 64);
  return 1LL;
}
