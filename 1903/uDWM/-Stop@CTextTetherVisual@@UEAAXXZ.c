/*
 * XREFs of ?Stop@CTextTetherVisual@@UEAAXXZ @ 0x18009B410
 * Callers:
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x1800986B4 (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 *     ??1CTextTetherVisual@@MEAA@XZ @ 0x18009AF98 (--1CTextTetherVisual@@MEAA@XZ.c)
 *     ?SnapToAnchor@CTextTetherVisual@@QEAAJXZ @ 0x18009B314 (-SnapToAnchor@CTextTetherVisual@@QEAAJXZ.c)
 *     ?UpdateTransition@CTextTetherVisual@@MEAAJXZ @ 0x18009B510 (-UpdateTransition@CTextTetherVisual@@MEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180019F10 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002204C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     McTemplateU0 @ 0x18007E2D8 (McTemplateU0.c)
 *     ?StopTimer@CTextTetherVisual@@MEAAJXZ @ 0x18009B470 (-StopTimer@CTextTetherVisual@@MEAAJXZ.c)
 */

void __fastcall CTextTetherVisual::Stop(CTextTetherVisual *this)
{
  int v2; // r8d

  CRenderDataVisual::ClearInstructions(this);
  CTextTetherVisual::StopTimer(this);
  CVisual::SetOpacity(this, 0.0);
  if ( *((_BYTE *)this + 424) && (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0((int)&Microsoft_Windows_Dwm_Udwm_Provider_Context, (int)&UdwmTextTetherVisual_End, v2);
  *((_BYTE *)this + 424) = 0;
}
