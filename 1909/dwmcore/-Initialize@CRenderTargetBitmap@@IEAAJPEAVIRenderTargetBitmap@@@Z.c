/*
 * XREFs of ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z @ 0x1800BF3A8
 * Callers:
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIRenderTargetBitmap@@PEAPEAV1@@Z @ 0x1800BEE78 (-Create@CRenderTargetBitmap@@SAJPEAVIRenderTargetBitmap@@PEAPEAV1@@Z.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z @ 0x1800BEF5C (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z @ 0x180263234 (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z.c)
 * Callees:
 *     ??4?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z @ 0x1800120C8 (--4-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800207E8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x1800BF2BC (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::Initialize(
        CRenderTargetBitmap *this,
        __int64 (__fastcall ***a2)(struct IRenderTargetBitmap *, GUID *, __int64 *))
{
  __int64 (__fastcall **v2)(struct IRenderTargetBitmap *, GUID *, __int64 *); // rax
  signed int v5; // eax
  __int64 v6; // rcx
  int v7; // ebx
  signed int v8; // eax
  __int64 v9; // rcx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, struct IRenderTargetBitmap **); // rdi
  __int64 (__fastcall *v12)(_QWORD, GUID *, struct IRenderTargetBitmap **); // rbx
  signed int v13; // eax
  __int64 v14; // rcx
  struct IRenderTargetBitmap *v15; // [rsp+58h] [rbp+28h] BYREF
  __int64 v16; // [rsp+60h] [rbp+30h] BYREF

  v2 = *a2;
  v16 = 0LL;
  v5 = (*v2)((struct IRenderTargetBitmap *)a2, &GUID_475af409_d8b1_4ca5_8177_4562f6260b68, &v16);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x32u, 0LL);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v16 + 24LL))(
           v16,
           ((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x33u, 0LL);
    }
    else
    {
      v15 = (struct IRenderTargetBitmap *)a2;
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v15);
      v15 = (struct IRenderTargetBitmap *)*((_QWORD *)this + 19);
      *((_QWORD *)this + 19) = a2;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v15);
      Microsoft::WRL::ComPtr<ID3D11PixelShader>::operator=((__int64 *)this + 20, (__int64)a2);
      if ( !*((_BYTE *)this + 176) )
      {
        v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IRenderTargetBitmap **))*((_QWORD *)this + 20);
        v15 = 0LL;
        v12 = **v11;
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v15);
        v13 = v12(v11, &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3, &v15);
        v7 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x3Cu, 0LL);
        else
          (*(void (__fastcall **)(char *, struct IRenderTargetBitmap *))(*((_QWORD *)this + 2) + 24LL))(
            (char *)this + 16,
            v15);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v15);
      }
    }
  }
  if ( v7 < 0 )
    CRenderTargetBitmap::ReleaseRenderTargetBitmap(this);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return (unsigned int)v7;
}
