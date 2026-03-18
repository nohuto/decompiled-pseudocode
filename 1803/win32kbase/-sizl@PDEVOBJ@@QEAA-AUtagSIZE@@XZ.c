/*
 * XREFs of ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0032FFC
 * Callers:
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C0026B90 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     GreCreateDisplayDC @ 0x1C002D5C0 (GreCreateDisplayDC.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0042CE4 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     bDynamicModeChange @ 0x1C0048884 (bDynamicModeChange.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00C1A54 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagSIZE __fastcall PDEVOBJ::sizl(PDEVOBJ *this, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x20000) != 0 )
    v3 = *(_QWORD *)(v2 + 1712);
  else
    v3 = *(_QWORD *)(v2 + 2144);
  *a2 = v3;
  return (struct tagSIZE)a2;
}
