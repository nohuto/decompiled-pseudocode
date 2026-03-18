/*
 * XREFs of ?OnChanged@CGradientBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18001DA50
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStop@CGradientBrush@@AEAAXPEAVCColorGradientStop@@@Z @ 0x18001DA88 (-UpdateStop@CGradientBrush@@AEAAXPEAVCColorGradientStop@@@Z.c)
 */

__int64 __fastcall CGradientBrush::OnChanged(CGradientBrush *a1, unsigned int a2, struct CColorGradientStop *a3)
{
  struct CColorGradientStop *v3; // r10
  CGradientBrush *v5; // r11

  v3 = a3;
  v5 = a1;
  if ( a2 == 10 && a3 )
    CGradientBrush::UpdateStop(a1, a3);
  return CSpriteVisualContent::OnChanged(v5, a2, v3);
}
