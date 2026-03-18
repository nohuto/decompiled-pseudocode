/*
 * XREFs of ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C00C7CE0
 * Callers:
 *     GreHintSpriteShape @ 0x1C0077BD8 (GreHintSpriteShape.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C0089860 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C00E6714 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C0110A0C (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     ?SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z @ 0x1C023B4F8 (-SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z.c)
 */

void __fastcall SFMLOGICALSURFACE::StartSfmStateTracking(SFMLOGICALSURFACE *this, HDEV a2, struct SfmState *a3)
{
  struct SfmState **v6; // r8
  struct SfmState *v7; // rcx
  int v8; // edi

  INC_SHARE_REF_CNT(this);
  v6 = (struct SfmState **)*((_QWORD *)a3 + 6);
  v7 = (SFMLOGICALSURFACE *)((char *)this + 32);
  if ( *v6 != (struct SfmState *)((char *)a3 + 40) )
    __fastfail(3u);
  *((_QWORD *)this + 5) = v6;
  *(_QWORD *)v7 = (char *)a3 + 40;
  *v6 = v7;
  *((_QWORD *)a3 + 6) = v7;
  ++*((_DWORD *)a3 + 14);
  v8 = 0;
  *((_DWORD *)this + 61) |= 0x18u;
  if ( *((_QWORD *)this + 3) )
  {
    if ( (int)SpNotifyLSurfaceTracking(a2, *(HLSURF *)this, 1) >= 0 )
      v8 = 128;
    *((_DWORD *)this + 61) = v8 | *((_DWORD *)this + 61) & 0xFFFFFF7F;
  }
  else
  {
    *((_DWORD *)this + 61) &= ~0x80u;
  }
}
