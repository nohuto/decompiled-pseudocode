/*
 * XREFs of ?ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z @ 0x1C00F6988
 * Callers:
 *     ?UMPDDrvStartDoc@@YAHPEAU_SURFOBJ@@PEAGK@Z @ 0x1C00F6170 (-UMPDDrvStartDoc@@YAHPEAU_SURFOBJ@@PEAGK@Z.c)
 *     ?UMPDDrvEnableDriver@@YAHPEAGPEAPEAX@Z @ 0x1C00F6520 (-UMPDDrvEnableDriver@@YAHPEAGPEAPEAX@Z.c)
 *     ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00F65F0 (-UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@.c)
 * Callees:
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C009A1A8 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 */

__int64 __fastcall UMPDOBJ::ThunkStringW(UMPDOBJ *this, unsigned __int16 **a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rax
  unsigned __int64 v4; // rax

  v2 = 0;
  if ( !*a2 )
    return 1LL;
  v3 = -1LL;
  do
    ++v3;
  while ( (*a2)[v3] );
  v4 = v3 + 1;
  if ( v4 < 0x7FFFFFFF )
    return (unsigned int)UMPDOBJ::ThunkMemBlock(this, (const void **)a2, 2 * (int)v4);
  return v2;
}
