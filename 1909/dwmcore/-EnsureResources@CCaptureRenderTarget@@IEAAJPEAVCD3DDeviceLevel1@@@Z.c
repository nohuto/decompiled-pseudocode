/*
 * XREFs of ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x1800EDEC0
 * Callers:
 *     ?CheckOcclusionState@CCaptureRenderTarget@@UEAAJXZ @ 0x1800EDE00 (-CheckOcclusionState@CCaptureRenderTarget@@UEAAJXZ.c)
 *     ?Render@CCaptureRenderTarget@@UEAAJPEA_N@Z @ 0x18024E330 (-Render@CCaptureRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z @ 0x1800488C4 (-IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x180053A30 (-OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18006402C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z @ 0x18015A4B4 (--0-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18015A4E4 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ?CreateSupportedFence@CD3DDeviceLevel1@@QEAAJ_KPEAPEAUID3D11Fence@@@Z @ 0x18015B0B4 (-CreateSupportedFence@CD3DDeviceLevel1@@QEAAJ_KPEAPEAUID3D11Fence@@@Z.c)
 *     ?reset@?$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015D370 (-reset@-$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180199CBC (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?push_back@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@Z @ 0x1801A5B90 (-push_back@-$vector@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18024D638 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@-$vect.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x18024E1EC (-ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?ResetBuffers@CCaptureRenderTarget@@IEAAXXZ @ 0x18024E5F8 (-ResetBuffers@CCaptureRenderTarget@@IEAAXXZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::EnsureResources(CCaptureRenderTarget *this, struct CD3DDeviceLevel1 *a2)
{
  int v2; // ebx
  struct ID3D11Fence **v3; // r8
  signed int SupportedFence; // eax
  __int64 v7; // rcx
  __int64 i; // r14
  __int64 v9; // r12
  struct D3D11_SUBRESOURCE_DATA *v10; // r8
  signed int v11; // eax
  __int64 v12; // rcx
  enum DXGI_FORMAT v13; // ecx
  signed int updated; // eax
  __int64 v15; // rcx
  signed int v16; // eax
  __int64 v17; // rcx
  signed int v18; // eax
  __int64 v19; // rcx
  signed int v20; // eax
  __int64 v21; // rcx
  unsigned int v23; // [rsp+30h] [rbp-69h] BYREF
  struct ID3D11Texture2D *v24; // [rsp+38h] [rbp-61h] BYREF
  __int64 v25; // [rsp+40h] [rbp-59h] BYREF
  __int64 v26; // [rsp+48h] [rbp-51h] BYREF
  __int64 v27; // [rsp+50h] [rbp-49h] BYREF
  _DWORD v28[12]; // [rsp+58h] [rbp-41h] BYREF
  struct D3D11_TEXTURE2D_DESC v29; // [rsp+88h] [rbp-11h] BYREF

  v2 = 0;
  v3 = (struct ID3D11Fence **)((char *)this + 456);
  v23 = 0;
  if ( *((_QWORD *)this + 57) )
    goto LABEL_4;
  *v3 = 0LL;
  SupportedFence = CD3DDeviceLevel1::CreateSupportedFence(a2, (unsigned __int64)a2, v3);
  v23 = SupportedFence;
  v2 = SupportedFence;
  if ( SupportedFence >= 0 )
  {
    *((_QWORD *)this + 58) = 0LL;
LABEL_4:
    for ( i = (__int64)(*((_QWORD *)this + 65) - *((_QWORD *)this + 64)) >> 3; ; LODWORD(i) = i + 1 )
    {
      v9 = *((_QWORD *)this + 67);
      if ( (unsigned int)i >= (unsigned __int64)((*((_QWORD *)this + 68) - v9) >> 3) )
        goto LABEL_28;
      v24 = 0LL;
      wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset(&v24);
      v11 = CD3DDeviceLevel1::OpenSharedTexture(a2, &v29, v10, *(void **)(v9 + 8LL * (unsigned int)i), 1, &v24);
      v23 = v11;
      v2 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x144u, 0LL);
        goto LABEL_27;
      }
      memset_0(v28, 0, 0x2CuLL);
      ((void (__fastcall *)(struct ID3D11Texture2D *, _DWORD *))v24->lpVtbl->GetDesc)(v24, v28);
      if ( !IsValidPixelFormat(v28[4]) )
      {
        CCaptureRenderTarget::ResetBuffers(this);
        goto LABEL_27;
      }
      if ( ((*((_QWORD *)this + 65) - *((_QWORD *)this + 64)) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
      {
        updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, v13);
        v23 = updated;
        v2 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, updated, 0x155u, 0LL);
          goto LABEL_27;
        }
        if ( !*((_BYTE *)this + 418) )
        {
          *((_DWORD *)this + 22) = v28[0];
          *((_DWORD *)this + 23) = v28[1];
        }
      }
      v25 = 0LL;
      v16 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, __int64 *))v24->lpVtbl->QueryInterface)(
              v24,
              &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
              &v25);
      v23 = v16;
      v2 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x162u, 0LL);
LABEL_22:
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v25);
LABEL_27:
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v24);
        goto LABEL_28;
      }
      v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 60) + 48LL))(
              *((_QWORD *)this + 60),
              0LL,
              0LL,
              *(_QWORD *)(v9 + 8LL * (unsigned int)i),
              *((_QWORD *)this + 50));
      v23 = v18;
      v2 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x165u, 0LL);
        goto LABEL_22;
      }
      if ( *((_QWORD *)this + 66) == *((_QWORD *)this + 65) )
      {
        std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy> const &>(
          (char *)this + 512,
          *((_QWORD *)this + 65),
          &v25);
      }
      else
      {
        wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
          *((_QWORD *)this + 65),
          v25);
        *((_QWORD *)this + 65) += 8LL;
      }
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 60) + 64LL))(
              *((_QWORD *)this + 60),
              *(_QWORD *)(v9 + 8LL * (unsigned int)i),
              &v27);
      v23 = v20;
      v2 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x16Cu, 0LL);
        goto LABEL_22;
      }
      v26 = v27;
      std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::push_back(
        (char *)this + 560,
        &v26);
      wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&v26);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v25);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v24);
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, SupportedFence, 0x12Fu, 0LL);
LABEL_28:
  if ( v2 < 0 )
  {
    TranslateDXGIorD3DErrorInContext(v2, 0, &v23);
    CCaptureRenderTarget::ReleaseRenderingResources(this);
    return v23;
  }
  return (unsigned int)v2;
}
