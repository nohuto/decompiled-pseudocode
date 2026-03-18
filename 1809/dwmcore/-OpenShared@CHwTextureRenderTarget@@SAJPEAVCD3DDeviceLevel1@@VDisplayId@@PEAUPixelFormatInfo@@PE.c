/*
 * XREFs of ?OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAX_NPEAPEAV1@@Z @ 0x1802032D4
 * Callers:
 *     ?OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAX_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x1801FAAF0 (-OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlags.c)
 * Callees:
 *     ??2CHwTextureRenderTarget@@KAPEAX_K@Z @ 0x18009159C (--2CHwTextureRenderTarget@@KAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z @ 0x1800DB180 (--0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX_N@Z @ 0x18020306C (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX_N@Z.c)
 */

__int64 __fastcall CHwTextureRenderTarget::OpenShared(
        struct CD3DDeviceLevel1 *a1,
        unsigned int a2,
        __int64 a3,
        void *a4,
        bool a5,
        CHwTextureRenderTarget **a6)
{
  LPVOID v10; // rax
  __int64 v11; // rcx
  CHwTextureRenderTarget *v12; // rbx
  unsigned int v13; // edi
  int v14; // eax
  __int64 v15; // rcx

  *a6 = 0LL;
  v10 = CHwTextureRenderTarget::operator new();
  if ( v10 )
    v12 = (CHwTextureRenderTarget *)CHwTextureRenderTarget::CHwTextureRenderTarget((__int64)v10, a2);
  else
    v12 = 0LL;
  if ( v12 )
  {
    (*(void (__fastcall **)(CHwTextureRenderTarget *))(*(_QWORD *)v12 + 8LL))(v12);
    v14 = CHwTextureRenderTarget::Init(v12, a1, (enum DXGI_ALPHA_MODE)*(_DWORD *)(a3 + 4), a4, a5);
    v13 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x88u);
      (*(void (__fastcall **)(CHwTextureRenderTarget *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    else
    {
      *a6 = v12;
    }
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0x85u);
  }
  return v13;
}
