/*
 * XREFs of ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z @ 0x18004EC34
 * Callers:
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x18004DED0 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIRenderTargetBitmap@@PEAPEAV1@@Z @ 0x18008B5A0 (-Create@CRenderTargetBitmap@@SAJPEAVIRenderTargetBitmap@@PEAPEAV1@@Z.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z @ 0x1802298C8 (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x18004E2CC (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ??4?$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionTrackerPositionAnimation@@@Z @ 0x18004ED70 (--4-$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionT.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::Initialize(
        CRenderTargetBitmap *this,
        __int64 (__fastcall ***a2)(struct IRenderTargetBitmap *, GUID *, __int64 *))
{
  __int64 (__fastcall **v2)(struct IRenderTargetBitmap *, GUID *, __int64 *); // rax
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // ebx
  int v8; // eax
  unsigned int v9; // ecx
  __int64 v10; // rcx
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  v2 = *a2;
  v15 = 0LL;
  v5 = (*v2)((struct IRenderTargetBitmap *)a2, &GUID_475af409_d8b1_4ca5_8177_4562f6260b68, &v15);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x35u);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 24LL))(
           v15,
           ((unsigned __int64)this + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x36u);
    }
    else
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(struct IRenderTargetBitmap *, GUID *, __int64 *)))(*a2)[1])(a2);
      v10 = *((_QWORD *)this + 19);
      *((_QWORD *)this + 19) = a2;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      Microsoft::WRL::ComPtr<CInteractionTrackerPositionAnimation>::operator=((char *)this + 160, a2);
      if ( !*((_BYTE *)this + 176) )
      {
        v14 = 0LL;
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v14);
        v12 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 20))(
                *((_QWORD *)this + 20),
                &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3,
                &v14);
        v7 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x3Fu);
        else
          (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 2) + 24LL))((char *)this + 16, v14);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v14);
      }
    }
  }
  if ( v7 < 0 )
    CRenderTargetBitmap::ReleaseRenderTargetBitmap(this);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return (unsigned int)v7;
}
