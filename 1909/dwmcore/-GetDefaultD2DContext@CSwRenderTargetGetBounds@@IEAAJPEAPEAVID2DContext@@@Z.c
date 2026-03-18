/*
 * XREFs of ?GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x18023DBB8
 * Callers:
 *     ?CreateD2DInk@CSwRenderTargetGetBounds@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DInk@@@Z @ 0x18023D7C0 (-CreateD2DInk@CSwRenderTargetGetBounds@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@.c)
 *     ?CreateGenericInk@CSwRenderTargetGetBounds@@UEAAJPEAPEAVCD2DGenericInk@@@Z @ 0x18023D880 (-CreateGenericInk@CSwRenderTargetGetBounds@@UEAAJPEAPEAVCD2DGenericInk@@@Z.c)
 *     ?CreateLegacyCommandList@CSwRenderTargetGetBounds@@UEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap@@_K12PEAPEAUID2D1PrivateCompositorPrimitiveProperties@@2PEAPEAVCD2DCommandList@@@Z @ 0x18023D930 (-CreateLegacyCommandList@CSwRenderTargetGetBounds@@UEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPE.c)
 *     ?CreatePrimitiveProperties@CSwRenderTargetGetBounds@@UEAAJPEAPEAVCD2DPrimitiveProperties@@@Z @ 0x18023DA50 (-CreatePrimitiveProperties@CSwRenderTargetGetBounds@@UEAAJPEAPEAVCD2DPrimitiveProperties@@@Z.c)
 *     ?GetCachedEffectNoRef@CSwRenderTargetGetBounds@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x18023DB00 (-GetCachedEffectNoRef@CSwRenderTargetGetBounds@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z.c)
 *     ?IntersectGeometryWithSafeBounds@CSwRenderTargetGetBounds@@UEAAJPEAUID2D1Geometry@@0PEBUD2D_MATRIX_3X2_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAU2@@Z @ 0x18023DC60 (-IntersectGeometryWithSafeBounds@CSwRenderTargetGetBounds@@UEAAJPEAUID2D1Geometry@@0PEBUD2D_MATR.c)
 * Callees:
 *     ?QueryInterface@CD3DDeviceLevel1@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180057840 (-QueryInterface@CD3DDeviceLevel1@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7F30 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x18015DBC0 (-GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::GetDefaultD2DContext(
        CSwRenderTargetGetBounds *this,
        struct ID2DContext **a2)
{
  signed int DefaultD3DDevice; // eax
  __int64 v4; // rcx
  CD3DDeviceLevel1 *v5; // rdi
  unsigned int v6; // ebx
  signed int Interface; // eax
  __int64 v8; // rcx
  CD3DDeviceLevel1 *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  DefaultD3DDevice = CD3DDeviceManager::GetDefaultD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, &v10);
  v5 = v10;
  v6 = DefaultD3DDevice;
  if ( DefaultD3DDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, DefaultD3DDevice, 0x15Fu, 0LL);
  }
  else
  {
    Interface = CD3DDeviceLevel1::QueryInterface(v10, &GUID_74cc6ad9_1f38_4fd9_9734_84cb3e5c0b1b, (void **)a2);
    v6 = Interface;
    if ( Interface < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, Interface, 0x162u, 0LL);
  }
  if ( v5 )
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v5 + 496));
  return v6;
}
