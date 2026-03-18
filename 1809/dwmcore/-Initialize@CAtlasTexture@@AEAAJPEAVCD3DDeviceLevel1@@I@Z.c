/*
 * XREFs of ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDeviceLevel1@@I@Z @ 0x180004810
 * Callers:
 *     ?Create@CAtlasTexture@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z @ 0x180004758 (-Create@CAtlasTexture@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?GenerateWhitePixel@CAtlasTexture@@AEAAXXZ @ 0x1800049B0 (-GenerateWhitePixel@CAtlasTexture@@AEAAXXZ.c)
 *     ??4?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000656C (--4-$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$As@VIDeviceResource@@@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VIDeviceResource@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000696C (--$As@VIDeviceResource@@@-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Com.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800183E0 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800DAA24 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasTexture::Initialize(CAtlasTexture *this, struct CD3DDeviceLevel1 *a2, unsigned int a3)
{
  int RenderTargetBitmap; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int v12; // ecx
  SIZE_T v13; // rax
  void *v14; // rax
  void *v15; // rcx
  char v17; // [rsp+30h] [rbp-29h]
  char v18; // [rsp+38h] [rbp-21h]
  char v19; // [rsp+40h] [rbp-19h]
  __int64 v20; // [rsp+50h] [rbp-9h] BYREF
  const char *v21; // [rsp+58h] [rbp-1h] BYREF
  int v22; // [rsp+60h] [rbp+7h]
  __int64 v23; // [rsp+68h] [rbp+Fh] BYREF
  _DWORD v24[4]; // [rsp+70h] [rbp+17h] BYREF

  v20 = 0LL;
  v23 = 0LL;
  v24[2] = 0;
  v24[1] = 1;
  v24[0] = 87;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v20);
  v22 = 17;
  v21 = "DWM Atlas surface";
  v19 = 0;
  v18 = 1;
  v17 = 0;
  RenderTargetBitmap = CRenderTargetBitmapCache::GetRenderTargetBitmap(
                         (char *)a2 + 520,
                         &v21,
                         2048LL,
                         a3,
                         DisplayId::All,
                         v24,
                         v17,
                         v18,
                         v19,
                         &v20);
  v8 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, RenderTargetBitmap, 0x42u);
    goto LABEL_12;
  }
  v21 = 0LL;
  v9 = Microsoft::WRL::ComPtr<IRenderTargetBitmap>::As<IDeviceResource>(&v20, &v21);
  v8 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x4Bu);
    goto LABEL_16;
  }
  v11 = (*(__int64 (__fastcall **)(const char *, CAtlasTexture *))(*(_QWORD *)v21 + 24LL))(v21, this);
  v8 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x4Cu);
LABEL_16:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v21);
    goto LABEL_12;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<CBaseExpression>::operator=((char *)this + 8, &v20);
  *((_DWORD *)this + 6) = a3 - 1;
  *((_DWORD *)this + 7) = a3 - 1;
  v13 = 8LL * (a3 - 1);
  if ( !is_mul_ok(a3 - 1, 8uLL) )
    v13 = -1LL;
  if ( !v13 )
    v13 = 1LL;
  v14 = HeapAlloc(WPF::g_processHeap, 0, v13);
  v15 = (void *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = v14;
  if ( v15 )
  {
    WPF::ProcessHeapImpl::Free(v15);
    v14 = (void *)*((_QWORD *)this + 2);
  }
  if ( v14 )
  {
    memset_0(v14, 0, 8LL * *((unsigned int *)this + 6));
    CAtlasTexture::GenerateWhitePixel(this);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v15, 0LL, 0, -2147024882, 0x57u);
  }
LABEL_12:
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v23);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v20);
  return v8;
}
