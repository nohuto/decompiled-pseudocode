/*
 * XREFs of ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18024F14C
 * Callers:
 *     ?TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18024FE4C (-TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18005A24C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$query_to@VIDeviceResource@@@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVIDeviceResource@@@Z @ 0x1800EBBC4 (--$query_to@VIDeviceResource@@@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wi.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015EA50 (-reset@-$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18015F0B0 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlagsE.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVIRenderTarget@@$0A@@@QEAAJPEFBQEAVIRenderTarget@@I@Z @ 0x180195050 (-AddMultipleAndSet@-$DynArray@PEAVIRenderTarget@@$0A@@@QEAAJPEFBQEAVIRenderTarget@@I@Z.c)
 *     ??1DXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAA@XZ @ 0x18019E1B0 (--1DXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAA@XZ.c)
 *     ??I?$com_ptr_t@VIDeviceResource@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVIDeviceResource@@XZ @ 0x1801A560C (--I-$com_ptr_t@VIDeviceResource@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVIDeviceResource@@X.c)
 *     ??$_Emplace_reallocate@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@QEAAPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU23@AEBU23@@Z @ 0x18024EBC8 (--$_Emplace_reallocate@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@-$vector@UD.c)
 *     ??$construct@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@AEBU12@@?$_Default_allocator_traits@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@SAXAEAV?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@1@QEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@AEBU34@@Z @ 0x18024EE78 (--$construct@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@AEBU12@@-$_Default_alloca.c)
 *     ?GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ @ 0x18024F40C (-GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::CreateRenderTargetForFrameBuffer(CCaptureRenderTarget *this)
{
  _QWORD *v1; // rdi
  _QWORD *v3; // r8
  struct IDXGIResource *CurrentFrameBuffer; // rax
  struct IDXGIResource **v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct IDXGIResource *v8; // rbx
  signed int v9; // eax
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rcx
  signed int v13; // eax
  __int64 v14; // rcx
  struct IDXGIResource *v15; // rax
  __int64 v16; // rcx
  char *v17; // rdx
  __int64 *v18; // rax
  signed int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  signed int v22; // eax
  __int64 v23; // rcx
  __int64 v25[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v26; // [rsp+80h] [rbp+28h] BYREF
  __int64 v27; // [rsp+88h] [rbp+30h] BYREF
  __int64 v28; // [rsp+90h] [rbp+38h] BYREF
  __int64 v29; // [rsp+98h] [rbp+40h] BYREF

  v29 = 0LL;
  v1 = (_QWORD *)((char *)this + 424);
  v27 = 0LL;
  v3 = (_QWORD *)*((_QWORD *)this + 53);
  v28 = 1LL;
  while ( v3 != (_QWORD *)v1[1] )
  {
    CurrentFrameBuffer = CCaptureRenderTarget::GetCurrentFrameBuffer(this);
    if ( *v5 == CurrentFrameBuffer )
    {
      v6 = (__int64)v5[1];
      v27 = v6;
      if ( v6 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        v7 = v27;
        if ( v27 )
          goto LABEL_22;
      }
      break;
    }
    v3 = v5 + 2;
  }
  v8 = CCaptureRenderTarget::GetCurrentFrameBuffer(this);
  wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset(&v29);
  v9 = ((__int64 (__fastcall *)(struct IDXGIResource *, GUID *, __int64 *))v8->lpVtbl->QueryInterface)(
         v8,
         &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
         &v29);
  LODWORD(v26) = v9;
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x24Du, 0LL);
    goto LABEL_27;
  }
  v12 = v27;
  v27 = 0LL;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = CD3DDeviceManager::CreateRenderTargetBitmapFromTexture(
          (__int64)&qword_180340368,
          v28,
          0LL,
          (__int64)this + 360,
          *(struct _LUID *)((char *)this + 400),
          (unsigned int)DisplayId::All,
          v29,
          &v27);
  LODWORD(v26) = v13;
  v11 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x256u, 0LL);
    goto LABEL_27;
  }
  v15 = CCaptureRenderTarget::GetCurrentFrameBuffer(this);
  v16 = v27;
  v25[0] = (__int64)v15;
  v25[1] = v27;
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
  v17 = (char *)v1[1];
  if ( ((unsigned __int64)&v17[-*v1] & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
  {
    v28 = 0LL;
    v18 = wil::com_ptr_t<IDeviceResource,wil::err_returncode_policy>::operator&(&v28);
    v19 = wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::query_to<IDeviceResource>(&v27, (__int64)v18);
    LODWORD(v26) = v19;
    v11 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x262u, 0LL);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v28);
      CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair::~DXGIResourceRenderTargetBitmapPair((CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *)v25);
      goto LABEL_27;
    }
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v28 + 24LL))(v28, (char *)this + 80);
    v21 = v28;
    v28 = 0LL;
    *((_QWORD *)this + 17) = v21;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v28);
    v17 = (char *)v1[1];
  }
  if ( (char *)v1[2] == v17 )
  {
    std::vector<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>::_Emplace_reallocate<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair const &>(
      (__int64)v1,
      v17,
      v25);
  }
  else
  {
    std::_Default_allocator_traits<std::allocator<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>>::construct<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair,CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair const &>(
      v16,
      (__int64 *)v17,
      v25);
    v1[1] += 16LL;
  }
  CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair::~DXGIResourceRenderTargetBitmapPair((CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *)v25);
  v7 = v27;
LABEL_22:
  v26 = v7;
  v22 = DynArray<IRenderTarget *,0>::AddMultipleAndSet((__int64)this + 272, &v26);
  LODWORD(v26) = v22;
  v11 = v22;
  if ( v22 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x26Eu, 0LL);
  else
    v27 = 0LL;
LABEL_27:
  if ( v11 < 0 )
  {
    TranslateDXGIorD3DErrorInContext(v11, 0, &v26);
    v11 = v26;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v27);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v29);
  return (unsigned int)v11;
}
