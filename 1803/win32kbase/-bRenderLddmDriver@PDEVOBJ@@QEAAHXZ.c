/*
 * XREFs of ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0031BBC
 * Callers:
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C004E708 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00C7670 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 * Callees:
 *     <none>
 */

char __fastcall PDEVOBJ::bRenderLddmDriver(PDEVOBJ *this)
{
  __int64 v1; // rcx
  unsigned int v2; // eax
  int v3; // eax

  v1 = *(_QWORD *)(*(_QWORD *)this + 2568LL);
  if ( ((v1 + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0 )
  {
LABEL_4:
    LOBYTE(v3) = 0;
    return v3;
  }
  v2 = *(_DWORD *)(v1 + 160);
  if ( (v2 & 0x4000000) != 0 )
  {
    if ( !gbDisableCddRemoteSessionFiltering )
    {
      LOBYTE(v3) = *(_QWORD *)(v1 + 280) != 0LL;
      return v3;
    }
    goto LABEL_4;
  }
  return (v2 >> 23) & 1;
}
