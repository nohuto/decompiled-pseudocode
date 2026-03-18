/*
 * XREFs of ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C00137F0
 * Callers:
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C0013700 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0014A58 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     GreCreateDisplayDC @ 0x1C001D950 (GreCreateDisplayDC.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00F7D64 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     bDynamicModeChange @ 0x1C00FF45C (bDynamicModeChange.c)
 * Callees:
 *     <none>
 */

struct tagSIZE __fastcall PDEVOBJ::sizl(PDEVOBJ *this, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x20000) != 0 )
    v3 = *(_QWORD *)(v2 + 1720);
  else
    v3 = *(_QWORD *)(v2 + 2152);
  *a2 = v3;
  return (struct tagSIZE)a2;
}
