/*
 * XREFs of ?FindDefaultDevice@@YAJPEAPEAVID2DContext@@@Z @ 0x1801E3DE0
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DEffect@@@Z @ 0x180197420 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@Q.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x180198EF8 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x18019B0E4 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2D.c)
 * Callees:
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180064450 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x1801FAA20 (-GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?QueryInterface@CD3DDeviceLevel1@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801FD160 (-QueryInterface@CD3DDeviceLevel1@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall FindDefaultDevice(struct ID2DContext **a1)
{
  int DefaultD3DDevice; // eax
  __int64 v3; // rcx
  CD3DDeviceLevel1 *v4; // rdi
  unsigned int v5; // ebx
  int Interface; // eax
  __int64 v7; // rcx
  CD3DDeviceLevel1 *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  DefaultD3DDevice = CD3DDeviceManager::GetDefaultD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, &v9);
  v4 = v9;
  v5 = DefaultD3DDevice;
  if ( DefaultD3DDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, DefaultD3DDevice, 0x18u);
  }
  else
  {
    Interface = CD3DDeviceLevel1::QueryInterface(v9, &GUID_74cc6ad9_1f38_4fd9_9734_84cb3e5c0b1b, (void **)a1);
    v5 = Interface;
    if ( Interface < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, Interface, 0x1Au);
  }
  if ( v4 )
    CD3DSurface::Release((CD3DDeviceLevel1 *)((char *)v4 + 496));
  return v5;
}
