/*
 * XREFs of ?OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18009532C
 * Callers:
 *     ?OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180091708 (-OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0 @ 0x18007E2D8 (McTemplateU0.c)
 *     ?UpdateRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@M@Z @ 0x1800947D0 (-UpdateRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@M@Z.c)
 */

__int64 __fastcall CWindowArrangementTransition::OnWindowArrangementContinue(
        CAnimatedGlassSheet **this,
        const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *a2)
{
  unsigned int v2; // ebx
  const struct tagRECT *v3; // rdx
  CAnimatedGlassSheet *v4; // rcx
  int updated; // eax
  int v6; // r8d
  int v7; // eax

  v2 = 0;
  if ( *((_BYTE *)this + 24) )
  {
    v3 = (const struct tagRECT *)((char *)a2 + 16);
    v4 = *this;
    if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) )
    {
      updated = CAnimatedGlassSheet::UpdateRectAnimation(v4, v3, 0.2);
      v2 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0xAEu);
        return v2;
      }
    }
    else
    {
      v7 = CAnimatedGlassSheet::UpdateRectAnimation(v4, v3, 0.000001);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xB2u);
        return v2;
      }
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0((int)&Microsoft_Windows_Dwm_Udwm_Provider_Context, (int)&UdwmGlassSheetAnimation_Update, v6);
  }
  return v2;
}
