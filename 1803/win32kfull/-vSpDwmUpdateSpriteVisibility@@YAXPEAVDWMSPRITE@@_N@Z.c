/*
 * XREFs of ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C0137060
 * Callers:
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C0089860 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0136AF0 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C0136E58 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C023AC68 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C023B354 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 * Callees:
 *     DwmAsyncShowSprite @ 0x1C00FEDA8 (DwmAsyncShowSprite.c)
 */

void __fastcall vSpDwmUpdateSpriteVisibility(struct DWMSPRITE *a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v4; // r9
  __int64 v5; // rbx
  void *v6; // rax

  v3 = (unsigned __int8)a2;
  if ( (unsigned __int8)a2 != (*((_DWORD *)a1 + 41) & 1) )
  {
    v4 = (unsigned __int8)a2 | *((_DWORD *)a1 + 41) & 0xFFFFFFFE;
    *((_DWORD *)a1 + 41) = v4;
    v5 = *(_QWORD *)a1;
    v6 = (void *)UserReferenceDwmApiPort(a1, a2, a3, v4);
    DwmAsyncShowSprite(v6, v5, v3);
  }
}
