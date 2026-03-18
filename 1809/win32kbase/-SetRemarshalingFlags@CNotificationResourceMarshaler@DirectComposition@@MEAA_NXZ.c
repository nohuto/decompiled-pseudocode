/*
 * XREFs of ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C016AAD4
 * Callers:
 *     ?SetRemarshalingFlags@CManipulationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C016B6E0 (-SetRemarshalingFlags@CManipulationMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C016BEA8 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C016C8F0 (-SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C016E9B0 (-SetRemarshalingFlags@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0170BA0 (-SetRemarshalingFlags@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CHolographicCompositionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C017CDE0 (-SetRemarshalingFlags@CHolographicCompositionMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(
        DirectComposition::CNotificationResourceMarshaler *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 4);
  if ( *((_DWORD *)this + 10) )
  {
    v1 |= 0x20u;
    *((_DWORD *)this + 4) = v1;
  }
  return (v1 & 0x20) != 0;
}
