/*
 * XREFs of ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C003F494
 * Callers:
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C003F198 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00FB910 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 * Callees:
 *     ?IsCddCddRemoteSessionFilteringAllowed@@YAHXZ @ 0x1C005465C (-IsCddCddRemoteSessionFilteringAllowed@@YAHXZ.c)
 */

__int64 __fastcall PDEVOBJ::bRenderLddmDriver(PDEVOBJ *this)
{
  __int64 v1; // rdx
  unsigned int v2; // eax
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // ecx

  v1 = *(_QWORD *)(*(_QWORD *)this + 2576LL);
  if ( ((v1 + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0 )
    return 0LL;
  v2 = *(_DWORD *)(v1 + 160);
  if ( (v2 & 0x4000000) == 0 )
    return (v2 >> 23) & 1;
  v4 = IsCddCddRemoteSessionFilteringAllowed();
  v6 = 0;
  if ( !v4 )
    return 0LL;
  LOBYTE(v6) = *(_QWORD *)(v5 + 280) != 0LL;
  return v6;
}
