/*
 * XREFs of ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C0108384
 * Callers:
 *     GreHintSpriteShape @ 0x1C00296D4 (GreHintSpriteShape.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C006B6E0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C0108014 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C013E734 (GreTransferSpriteStateToDwmState.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C026B2A8 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 *     GreDwmGetRedirectionStyle @ 0x1C026CE90 (GreDwmGetRedirectionStyle.c)
 *     GreProtectSpriteContent @ 0x1C026D5D8 (GreProtectSpriteContent.c)
 * Callees:
 *     <none>
 */

void __fastcall SFMLOGICALSURFACE::GetRedirectionInfo(
        SFMLOGICALSURFACE *this,
        enum _HLSURF_REDIRECTIONSTYLE *a2,
        unsigned int *a3,
        unsigned int *a4,
        void **a5,
        struct _LUID *a6)
{
  __int64 v6; // rcx
  __int64 v10; // rax

  v6 = *((_QWORD *)this + 23);
  if ( !v6 )
  {
    *(_DWORD *)a2 = 0;
    *a3 = 0;
    *a4 = 0;
    if ( a5 )
      *a5 = 0LL;
LABEL_6:
    if ( a6 )
    {
      a6->LowPart = 0;
      a6->HighPart = 0;
    }
    return;
  }
  v10 = SURFOBJ_TO_SURFACE_NOT_NULL(v6);
  *a3 = *(_DWORD *)(v10 + 56);
  *a4 = *(_DWORD *)(v10 + 60);
  if ( (*(_DWORD *)(v10 + 116) & 1) == 0 )
  {
    if ( (*(_DWORD *)(v10 + 112) & 0x800) == 0 )
      return;
    *(_DWORD *)a2 = 1;
    if ( a5 )
      *a5 = *(void **)(v10 + 32);
    goto LABEL_6;
  }
  *(_DWORD *)a2 = 2;
  if ( a5 )
    *a5 = *(void **)(v10 + 568);
  if ( a6 )
    *a6 = *(struct _LUID *)(v10 + 576);
}
