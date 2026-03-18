/*
 * XREFs of ?GetD2DContext@CHwSurfaceRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z @ 0x180047C60
 * Callers:
 *     ?GetD2DContext@CHwTextureRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z @ 0x180047C50 (-GetD2DContext@CHwTextureRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z.c)
 * Callees:
 *     ?QueryInterface@CD3DDeviceLevel1@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800480C0 (-QueryInterface@CD3DDeviceLevel1@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::GetD2DContext(CHwSurfaceRenderTarget *this, struct ID2DContext **a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  int Interface; // eax
  unsigned int v7; // ecx
  CD3DDeviceLevel1 *v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = (*(__int64 (__fastcall **)(CHwSurfaceRenderTarget *, CD3DDeviceLevel1 **))(*(_QWORD *)this + 248LL))(this, &v9);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x41u, 0LL);
  }
  else
  {
    Interface = CD3DDeviceLevel1::QueryInterface(v9, &GUID_74cc6ad9_1f38_4fd9_9734_84cb3e5c0b1b, (void **)a2);
    v5 = Interface;
    if ( Interface < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, Interface, 0x44u, 0LL);
  }
  return v5;
}
