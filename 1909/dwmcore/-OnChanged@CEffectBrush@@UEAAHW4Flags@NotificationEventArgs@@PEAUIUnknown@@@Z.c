/*
 * XREFs of ?OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180047100
 * Callers:
 *     <none>
 * Callees:
 *     ?HasValidTemplate@CEffectBrush@@AEBA_NXZ @ 0x180047154 (-HasValidTemplate@CEffectBrush@@AEBA_NXZ.c)
 *     ?TryCreateEffectInstance@CEffectBrush@@AEAAJXZ @ 0x180047170 (-TryCreateEffectInstance@CEffectBrush@@AEAAJXZ.c)
 *     ?OnChanged@CSpriteVisualContent@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180047270 (-OnChanged@CSpriteVisualContent@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CEffectBrush::OnChanged(CEffectBrush *a1, unsigned int a2, __int64 a3)
{
  bool HasValidTemplate; // al
  __int64 v7; // rcx
  unsigned int v8; // r9d

  CEffectBrush::TryCreateEffectInstance(a1);
  HasValidTemplate = CEffectBrush::HasValidTemplate(a1);
  v8 = 0;
  if ( HasValidTemplate )
    return (unsigned int)CSpriteVisualContent::OnChanged(v7, a2, a3);
  return v8;
}
