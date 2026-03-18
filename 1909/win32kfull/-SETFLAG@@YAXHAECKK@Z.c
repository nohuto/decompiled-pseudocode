/*
 * XREFs of ?SETFLAG@@YAXHAECKK@Z @ 0x1C00E2390
 * Callers:
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C004DE54 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C00C4FDC (-bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ.c)
 *     ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00F65F0 (-UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@.c)
 *     UpdateGammaRampOnDevice @ 0x1C013AF60 (UpdateGammaRampOnDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall SETFLAG(int a1, volatile unsigned int *a2, int a3)
{
  signed __int32 v3; // eax
  signed __int32 v4; // r9d

  do
  {
    v3 = *a2;
    if ( a1 )
      v4 = a3 | v3;
    else
      v4 = v3 & ~a3;
  }
  while ( v3 != _InterlockedCompareExchange((volatile signed __int32 *)a2, v4, v3) );
}
