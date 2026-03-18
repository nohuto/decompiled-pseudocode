/*
 * XREFs of ?SETFLAG@@YAXHAECKK@Z @ 0x1C01084E0
 * Callers:
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C003A8C0 (-bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ.c)
 *     UpdateGammaRampOnDevice @ 0x1C0080A30 (UpdateGammaRampOnDevice.c)
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C00AD034 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C011CB60 (-UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@.c)
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
