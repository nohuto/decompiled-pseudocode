/*
 * XREFs of bDeleteSurface @ 0x1C0044990
 * Callers:
 *     GreDeleteObject @ 0x1C001CBF0 (GreDeleteObject.c)
 *     NtGdiDeleteObjectApp @ 0x1C00207E0 (NtGdiDeleteObjectApp.c)
 *     EngDeleteSurface @ 0x1C00434C0 (EngDeleteSurface.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C006D02C (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     bDeleteBrush @ 0x1C007DE80 (bDeleteBrush.c)
 *     ?StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00869E0 (-StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?StubDispDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00951E0 (-StubDispDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C009C000 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00F7D64 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00FB800 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0020520 (HmgShareLockCheckIgnoreStockBit.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0023B70 (--1SURFREF@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00A9FA8 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C00FEFEC (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall bDeleteSurface(unsigned int a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  _BYTE v5[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v5);
  v2 = HmgShareLockCheckIgnoreStockBit(a1, 5);
  v3 = 0;
  v6 = v2;
  if ( v2 )
    v3 = SURFREF::bDeleteSurface(v5, 0LL);
  SURFREF::~SURFREF((SURFREF *)v5);
  return v3;
}
