/*
 * XREFs of ?Stop@CTetherVisual@@UEAAXXZ @ 0x18009DFB0
 * Callers:
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x180098340 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 *     ??1CTetherVisual@@MEAA@XZ @ 0x18009D8F0 (--1CTetherVisual@@MEAA@XZ.c)
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x18009DEBC (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     ?UpdateTransition@CTetherVisual@@MEAAJXZ @ 0x18009E3A0 (-UpdateTransition@CTetherVisual@@MEAAJXZ.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002204C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     McTemplateU0 @ 0x18007E2D8 (McTemplateU0.c)
 *     ?StopTimer@CTetherVisual@@MEAAJXZ @ 0x18009E050 (-StopTimer@CTetherVisual@@MEAAJXZ.c)
 */

void __fastcall CTetherVisual::Stop(CTetherVisual *this)
{
  int v2; // r8d

  CRenderDataVisual::ClearInstructions(this);
  CTetherVisual::StopTimer(this);
  if ( *((_BYTE *)this + 416) && (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0((int)&Microsoft_Windows_Dwm_Udwm_Provider_Context, (int)&UdwmTetherVisual_End, v2);
  *((_BYTE *)this + 416) = 0;
}
