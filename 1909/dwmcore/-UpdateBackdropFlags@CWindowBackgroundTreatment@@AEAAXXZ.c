/*
 * XREFs of ?UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ @ 0x180034298
 * Callers:
 *     ?OnChanged@CWindowBackgroundTreatment@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034270 (-OnChanged@CWindowBackgroundTreatment@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCSpriteVisualContent@@@Z @ 0x180034680 (--0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCSpriteVisualContent@@@Z.c)
 * Callees:
 *     ?GetBrushGraph@CSpriteVisualContent@@QEAAPEAVCBrushRenderingGraph@@XZ @ 0x18007BD9C (-GetBrushGraph@CSpriteVisualContent@@QEAAPEAVCBrushRenderingGraph@@XZ.c)
 */

void __fastcall CWindowBackgroundTreatment::UpdateBackdropFlags(CSpriteVisualContent **this)
{
  struct CBrushRenderingGraph *BrushGraph; // rax
  char v3; // dl

  BrushGraph = CSpriteVisualContent::GetBrushGraph(this[8]);
  v3 = 0;
  *((_BYTE *)this + 360) = 0;
  if ( BrushGraph )
  {
    if ( this != (CSpriteVisualContent **)-360LL )
      *((_BYTE *)this + 360) = *((_BYTE *)BrushGraph + 197);
    if ( *((_BYTE *)BrushGraph + 196) )
      v3 = 1;
  }
  *((_BYTE *)this + 359) = v3;
}
