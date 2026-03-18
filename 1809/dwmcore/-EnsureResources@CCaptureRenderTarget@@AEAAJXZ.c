/*
 * XREFs of ?EnsureResources@CCaptureRenderTarget@@AEAAJXZ @ 0x1801581E0
 * Callers:
 *     ?Render@CCaptureRenderTarget@@UEAAJPEA_N@Z @ 0x180158C70 (-Render@CCaptureRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z @ 0x180092D30 (-IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x180098E9C (-OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1801579EC (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@-$vect.c)
 *     ??$_Emplace_reallocate@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAPEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180157B50 (--$_Emplace_reallocate@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@AEAAXXZ @ 0x180158B24 (-ReleaseRenderingResources@CCaptureRenderTarget@@AEAAXXZ.c)
 *     ?clear@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1801592B4 (-clear@-$vector@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-Cl.c)
 *     ?reset@?$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015930C (-reset@-$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180176404 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?CreateSupportedFence@CD3DDeviceLevel1@@QEAAJ_KPEAPEAUID3D11Fence@@@Z @ 0x1801FBCE0 (-CreateSupportedFence@CD3DDeviceLevel1@@QEAAJ_KPEAPEAUID3D11Fence@@@Z.c)
 */

__int64 __fastcall CCaptureRenderTarget::EnsureResources(CCaptureRenderTarget *this, unsigned __int64 a2)
{
  int v2; // ebx
  struct ID3D11Fence **v3; // r8
  int SupportedFence; // eax
  __int64 v6; // rcx
  __int64 i; // r14
  struct D3D11_SUBRESOURCE_DATA *v8; // r8
  int v9; // eax
  __int64 v10; // rcx
  enum DXGI_FORMAT v11; // ecx
  int updated; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  char *v18; // rdx
  int v19; // eax
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  __int64 v22; // r12
  struct ID3D11Texture2D *v24; // [rsp+38h] [rbp-59h] BYREF
  __int64 v25; // [rsp+40h] [rbp-51h] BYREF
  HANDLE hObject; // [rsp+48h] [rbp-49h] BYREF
  void *v27; // [rsp+50h] [rbp-41h] BYREF
  _DWORD v28[12]; // [rsp+58h] [rbp-39h] BYREF
  struct D3D11_TEXTURE2D_DESC v29; // [rsp+88h] [rbp-9h] BYREF

  v2 = 0;
  v3 = (struct ID3D11Fence **)((char *)this + 464);
  if ( *((_QWORD *)this + 58) )
    goto LABEL_4;
  *v3 = 0LL;
  SupportedFence = CD3DDeviceLevel1::CreateSupportedFence(*((CD3DDeviceLevel1 **)this + 50), a2, v3);
  v2 = SupportedFence;
  if ( SupportedFence >= 0 )
  {
    *((_QWORD *)this + 59) = 0LL;
LABEL_4:
    for ( i = (__int64)(*((_QWORD *)this + 65) - *((_QWORD *)this + 64)) >> 3; ; LODWORD(i) = i + 1 )
    {
      v22 = *((_QWORD *)this + 67);
      if ( (unsigned int)i >= (unsigned __int64)((*((_QWORD *)this + 68) - v22) >> 3) )
        goto LABEL_35;
      v24 = 0LL;
      wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset(&v24, a2);
      v9 = CD3DDeviceLevel1::OpenSharedTexture(
             *((CD3DDeviceLevel1 **)this + 50),
             &v29,
             v8,
             *(void **)(v22 + 8LL * (unsigned int)i),
             1,
             &v24);
      v2 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x152u);
        goto LABEL_34;
      }
      memset_0(v28, 0, 0x2CuLL);
      ((void (__fastcall *)(struct ID3D11Texture2D *, _DWORD *))v24->lpVtbl->GetDesc)(v24, v28);
      if ( !IsValidPixelFormat(v28[4]) )
      {
        std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::clear((char *)this + 536);
        CCaptureRenderTarget::ReleaseRenderingResources(this);
        goto LABEL_34;
      }
      if ( ((*((_QWORD *)this + 65) - *((_QWORD *)this + 64)) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
      {
        updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, v11);
        v2 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, updated, 0x163u);
          goto LABEL_34;
        }
        if ( !*((_BYTE *)this + 426) )
        {
          *((_DWORD *)this + 90) = v28[0];
          *((_DWORD *)this + 91) = v28[1];
        }
      }
      v25 = 0LL;
      v14 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, __int64 *))v24->lpVtbl->QueryInterface)(
              v24,
              &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
              &v25);
      v2 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x170u);
LABEL_29:
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v25);
LABEL_34:
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v24);
        goto LABEL_35;
      }
      v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 60) + 48LL))(
              *((_QWORD *)this + 60),
              0LL,
              0LL,
              *(_QWORD *)(v22 + 8LL * (unsigned int)i),
              *((_QWORD *)this + 51));
      v2 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x173u);
        goto LABEL_29;
      }
      v18 = (char *)*((_QWORD *)this + 65);
      if ( *((char **)this + 66) == v18 )
      {
        std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy> const &>(
          (char **)this + 64,
          v18,
          &v25);
      }
      else
      {
        *(_QWORD *)v18 = v25;
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
        *((_QWORD *)this + 65) += 8LL;
      }
      v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void **))(**((_QWORD **)this + 60) + 64LL))(
              *((_QWORD *)this + 60),
              *(_QWORD *)(v22 + 8LL * (unsigned int)i),
              &v27);
      v2 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x17Au);
        goto LABEL_29;
      }
      v21 = (_QWORD *)*((_QWORD *)this + 71);
      hObject = v27;
      if ( *((_QWORD **)this + 72) == v21 )
      {
        std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::_Emplace_reallocate<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(
          (_QWORD *)this + 70,
          v21,
          &hObject);
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(hObject);
      }
      else
      {
        *v21 = v27;
        *((_QWORD *)this + 71) += 8LL;
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v25);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v24);
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, SupportedFence, 0x13Du);
LABEL_35:
  if ( v2 < 0 )
    CCaptureRenderTarget::ReleaseRenderingResources(this);
  return (unsigned int)v2;
}
