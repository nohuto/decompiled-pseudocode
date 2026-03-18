/*
 * XREFs of bDeleteSurface @ 0x1C0015C30
 * Callers:
 *     bDeleteBrush @ 0x1C000DDC0 (bDeleteBrush.c)
 *     GreDeleteObject @ 0x1C0018180 (GreDeleteObject.c)
 *     NtGdiDeleteObjectApp @ 0x1C00225E0 (NtGdiDeleteObjectApp.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0068160 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00896C0 (-StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     EngDeleteSurface @ 0x1C00A0380 (EngDeleteSurface.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00B0548 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?StubDispDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00B78D0 (-StubDispDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C012226C (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C0125370 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C001E060 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C00229D0 (HmgShareLockCheckIgnoreStockBit.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00BAB5C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

__int64 __fastcall bDeleteSurface(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  struct OBJECT *v4; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(a2) = 5;
  v4 = (struct OBJECT *)HmgShareLockCheckIgnoreStockBit(a1, a2);
  if ( v4 )
  {
    v2 = SURFREF::bDeleteSurface(&v4, 0LL, 0LL);
    if ( v4 )
      HmgDecrementShareReferenceCountEx(v4);
  }
  else
  {
    return 0;
  }
  return v2;
}
