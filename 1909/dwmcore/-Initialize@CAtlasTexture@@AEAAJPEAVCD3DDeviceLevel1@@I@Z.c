/*
 * XREFs of ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDeviceLevel1@@I@Z @ 0x18001851C
 * Callers:
 *     ?Create@CAtlasTexture@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z @ 0x180018478 (-Create@CAtlasTexture@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180012158 (--4-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180017B68 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GenerateWhitePixel@CAtlasTexture@@AEAAXXZ @ 0x1800186B0 (-GenerateWhitePixel@CAtlasTexture@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x180049DF4 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??$As@VIDeviceResource@@@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VIDeviceResource@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800BF358 (--$As@VIDeviceResource@@@-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Com.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
  void *v13; // rax
  void *v14; // rcx
  char v16; // [rsp+30h] [rbp-19h]
  char v17; // [rsp+38h] [rbp-11h]
  char v18; // [rsp+40h] [rbp-9h]
  __int64 v19; // [rsp+50h] [rbp+7h] BYREF
  const char *v20; // [rsp+58h] [rbp+Fh] BYREF
  int v21; // [rsp+60h] [rbp+17h]
  __int64 v22; // [rsp+68h] [rbp+1Fh] BYREF
  _DWORD v23[4]; // [rsp+70h] [rbp+27h] BYREF

  v19 = 0LL;
  v22 = 0LL;
  v23[2] = 0;
  v23[0] = 87;
  v23[1] = 1;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v19);
  v21 = 17;
  v20 = "DWM Atlas surface";
  v18 = 0;
  v17 = 1;
  v16 = 0;
  RenderTargetBitmap = CRenderTargetBitmapCache::GetRenderTargetBitmap(
                         (char *)a2 + 520,
                         &v20,
                         2048LL,
                         a3,
                         (_DWORD)DisplayId::All,
                         v23,
                         v16,
                         v17,
                         v18,
                         &v19);
  v8 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, RenderTargetBitmap, 0x40u, 0LL);
    goto LABEL_8;
  }
  v20 = 0LL;
  v9 = Microsoft::WRL::ComPtr<IRenderTargetBitmap>::As<IDeviceResource>(&v19, &v20);
  v8 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x49u, 0LL);
    goto LABEL_12;
  }
  v11 = (*(__int64 (__fastcall **)(const char *, CAtlasTexture *))(*(_QWORD *)v20 + 24LL))(v20, this);
  v8 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x4Au, 0LL);
LABEL_12:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v20);
    goto LABEL_8;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::operator=((__int64 *)this + 1, &v19);
  *((_DWORD *)this + 6) = a3 - 1;
  *((_DWORD *)this + 7) = a3 - 1;
  v13 = DefaultHeap::Alloc(saturated_mul(a3 - 1, 8uLL));
  v14 = (void *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = v13;
  if ( v14 )
  {
    operator delete(v14);
    v13 = (void *)*((_QWORD *)this + 2);
  }
  if ( v13 )
  {
    memset_0(v13, 0, 8LL * *((unsigned int *)this + 6));
    CAtlasTexture::GenerateWhitePixel(this);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v14, 0LL, 0, -2147024882, 0x55u, 0LL);
  }
LABEL_8:
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v22);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v19);
  return v8;
}
