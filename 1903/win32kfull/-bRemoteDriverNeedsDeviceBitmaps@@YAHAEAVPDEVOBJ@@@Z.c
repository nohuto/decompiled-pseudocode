/*
 * XREFs of ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0127FEC
 * Callers:
 *     hsurfCreateCompatibleSurface @ 0x1C0034F34 (hsurfCreateCompatibleSurface.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C006B6E0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C0127EBC (-hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bRemoteDriverNeedsDeviceBitmaps(struct PDEVOBJ *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 3440LL)
    && (*(_DWORD *)(*(_QWORD *)a1 + 2128LL) & 0x400) != 0
    && (!g_pDwmState || !(unsigned int)UserIsRemoteAndNotDisconnectConnection()) )
  {
    return 1;
  }
  return v1;
}
