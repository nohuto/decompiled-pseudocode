/*
 * XREFs of ?IsFrontBufferRenderingSupported@CD3DDeviceLevel1@@QEBA_NW4DXGI_FORMAT@@@Z @ 0x1800E47B4
 * Callers:
 *     ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAIPEA_N@Z @ 0x1800E45DC (-CalcSwapChainParameters@CDisplay@@QEBAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBV.c)
 * Callees:
 *     ?IsDriverWhitelisted@CComputeScribbleRenderer@@SA_NPEBVCD3DDeviceLevel1@@@Z @ 0x1800E3E24 (-IsDriverWhitelisted@CComputeScribbleRenderer@@SA_NPEBVCD3DDeviceLevel1@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?IsDriverBlacklisted@CComputeScribbleRenderer@@SA_NPEBVCD3DDeviceLevel1@@@Z @ 0x1801AC338 (-IsDriverBlacklisted@CComputeScribbleRenderer@@SA_NPEBVCD3DDeviceLevel1@@@Z.c)
 */

char __fastcall CD3DDeviceLevel1::IsFrontBufferRenderingSupported(CD3DDeviceLevel1 *this, __int64 a2)
{
  char v2; // bl
  int v4; // eax
  int v5; // ecx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((int *)this + 185) >= 45056 && !*((_QWORD *)this + 77) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 79) + 232LL))(
           *((_QWORD *)this + 79),
           a2,
           &v7);
    v5 = 0;
    if ( v4 >= 0 )
      v5 = v7;
    if ( (v5 & 0x2000000) != 0
      && !CComputeScribbleRenderer::IsDriverBlacklisted(this)
      && (CCommonRegistryData::m_fEnableFrontBufferRenderChecks && *(int *)(*((_QWORD *)this + 87) + 348LL) >= 2600
       || CComputeScribbleRenderer::IsDriverWhitelisted(this)) )
    {
      return 1;
    }
  }
  return v2;
}
