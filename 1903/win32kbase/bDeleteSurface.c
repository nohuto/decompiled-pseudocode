/*
 * XREFs of bDeleteSurface @ 0x1C0054290
 * Callers:
 *     GreDeleteObject @ 0x1C0016C60 (GreDeleteObject.c)
 *     NtGdiDeleteObjectApp @ 0x1C0022090 (NtGdiDeleteObjectApp.c)
 *     EngDeleteSurface @ 0x1C0052500 (EngDeleteSurface.c)
 *     bDeleteBrush @ 0x1C0052910 (bDeleteBrush.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0054DA0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C008DB70 (-StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00B3478 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?StubDispDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00BA990 (-StubDispDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C0124ADC (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C0127C40 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C001D340 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0022480 (HmgShareLockCheckIgnoreStockBit.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00BDBC8 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

__int64 __fastcall bDeleteSurface(unsigned int a1)
{
  unsigned int v1; // ebx
  struct OBJECT *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = (struct OBJECT *)HmgShareLockCheckIgnoreStockBit(a1, 5);
  if ( v3 )
  {
    v1 = SURFREF::bDeleteSurface(&v3, 0LL);
    if ( v3 )
      HmgDecrementShareReferenceCountEx(v3, 0LL);
  }
  else
  {
    return 0;
  }
  return v1;
}
