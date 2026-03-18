/*
 * XREFs of ?OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800DFD00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800677FC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?HasValidTemplate@CEffectBrush@@AEBA_NXZ @ 0x1800DFD50 (-HasValidTemplate@CEffectBrush@@AEBA_NXZ.c)
 *     ?TryCreateEffectInstance@CEffectBrush@@AEAAJXZ @ 0x1800DFD6C (-TryCreateEffectInstance@CEffectBrush@@AEAAJXZ.c)
 */

__int64 __fastcall CEffectBrush::OnChanged(__int64 *a1, int a2)
{
  bool HasValidTemplate; // al
  unsigned int v5; // r8d

  CEffectBrush::TryCreateEffectInstance((CEffectBrush *)a1);
  HasValidTemplate = CEffectBrush::HasValidTemplate((CEffectBrush *)a1);
  v5 = 0;
  if ( HasValidTemplate )
  {
    if ( a2 == 14 )
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(a1 + 8);
    return 1;
  }
  return v5;
}
