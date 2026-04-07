/*
 * XREFs of ?GetPillarBoxColor@CImmersiveState@@SAXPEAU_D3DCOLORVALUE@@@Z @ 0x1800B17C0
 * Callers:
 *     ?SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B1C90 (-SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     GetStaticImmersiveColorPrivForHighContrastState @ 0x18004F95C (GetStaticImmersiveColorPrivForHighContrastState.c)
 */

void __fastcall CImmersiveState::GetPillarBoxColor(struct _D3DCOLORVALUE *a1)
{
  int StaticImmersiveColorPrivForHighContrastState; // eax
  D3DVALUE v3; // xmm0_4

  StaticImmersiveColorPrivForHighContrastState = GetStaticImmersiveColorPrivForHighContrastState(
                                                   570,
                                                   *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 26));
  v3 = GammaLUT_sRGB_to_scRGB[(unsigned __int8)StaticImmersiveColorPrivForHighContrastState] / 255.0;
  a1->a = 1.0;
  a1->r = v3;
  a1->g = GammaLUT_sRGB_to_scRGB[(unsigned __int64)(unsigned __int16)StaticImmersiveColorPrivForHighContrastState >> 8]
        / 255.0;
  a1->b = GammaLUT_sRGB_to_scRGB[BYTE2(StaticImmersiveColorPrivForHighContrastState)] / 255.0;
}
