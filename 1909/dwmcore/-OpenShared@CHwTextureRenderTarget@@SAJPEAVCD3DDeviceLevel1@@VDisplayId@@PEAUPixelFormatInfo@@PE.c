/*
 * XREFs of ?OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAX_NPEAPEAV1@@Z @ 0x180162230
 * Callers:
 *     ?OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAX_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18015DCA0 (-OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlags.c)
 * Callees:
 *     ??0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z @ 0x18004A7FC (--0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX_N@Z @ 0x180161F8C (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX_N@Z.c)
 */

__int64 __fastcall CHwTextureRenderTarget::OpenShared(
        struct CD3DDeviceLevel1 *a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        bool a5,
        CHwTextureRenderTarget **a6)
{
  LPVOID v9; // rax
  __int64 v10; // rcx
  CHwTextureRenderTarget *v11; // rbx
  unsigned int v12; // edi
  signed int v13; // eax
  __int64 v14; // rcx

  *a6 = 0LL;
  v9 = operator new(0xD0uLL);
  if ( v9 )
    v11 = (CHwTextureRenderTarget *)CHwTextureRenderTarget::CHwTextureRenderTarget((__int64)v9);
  else
    v11 = 0LL;
  if ( v11 )
  {
    (*(void (__fastcall **)(CHwTextureRenderTarget *))(*(_QWORD *)v11 + 8LL))(v11);
    v13 = CHwTextureRenderTarget::Init(v11, a1, (enum DXGI_ALPHA_MODE)*(_DWORD *)(a3 + 4), a4, a5);
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x85u, 0LL);
      (*(void (__fastcall **)(CHwTextureRenderTarget *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    else
    {
      *a6 = v11;
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, 0x8007000E, 0x82u, 0LL);
  }
  return v12;
}
