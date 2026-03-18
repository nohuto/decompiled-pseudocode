/*
 * XREFs of ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@AEAAJXZ @ 0x180157F88
 * Callers:
 *     ?TryTargetNextBuffer@CCaptureRenderTarget@@AEAAJXZ @ 0x180159020 (-TryTargetNextBuffer@CCaptureRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@QEAAPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU23@AEBU23@@Z @ 0x180157864 (--$_Emplace_reallocate@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@-$vector@UD.c)
 *     ?GetCurrentFrameBuffer@CCaptureRenderTarget@@AEAAPEAUIDXGIResource@@XZ @ 0x180158500 (-GetCurrentFrameBuffer@CCaptureRenderTarget@@AEAAPEAUIDXGIResource@@XZ.c)
 *     ?reset@?$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015930C (-reset@-$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801FA840 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlagsE.c)
 */

__int64 __fastcall CCaptureRenderTarget::CreateRenderTargetForFrameBuffer(CCaptureRenderTarget *this, __int64 a2)
{
  char *v2; // rdi
  _QWORD *v4; // r8
  struct IDXGIResource *CurrentFrameBuffer; // rax
  struct IDXGIResource **v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct IDXGIResource *v9; // rax
  int RenderTargetBitmapFromTexture; // eax
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // rcx
  struct IDXGIResource *v14; // rax
  __int64 v15; // rbx
  struct IDXGIResource *v16; // r14
  __int64 v17; // rdx
  unsigned int v18; // eax
  unsigned int v19; // edx
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v23; // [rsp+20h] [rbp-30h]
  struct IDXGIResource *v24; // [rsp+40h] [rbp-10h] BYREF
  __int64 v25; // [rsp+48h] [rbp-8h] BYREF
  __int64 v26; // [rsp+80h] [rbp+30h] BYREF
  __int64 v27; // [rsp+88h] [rbp+38h] BYREF
  __int64 v28; // [rsp+90h] [rbp+40h] BYREF

  v27 = 0LL;
  v2 = (char *)this + 432;
  v26 = 0LL;
  v4 = (_QWORD *)*((_QWORD *)this + 54);
  v28 = 1LL;
  while ( 1 )
  {
    if ( v4 == *((_QWORD **)v2 + 1) )
      goto LABEL_8;
    CurrentFrameBuffer = CCaptureRenderTarget::GetCurrentFrameBuffer(this);
    if ( *v6 == CurrentFrameBuffer )
      break;
    v4 = v6 + 2;
  }
  v7 = (__int64)v6[1];
  v26 = v7;
  if ( !v7 || ((*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7), (v8 = v26) == 0) )
  {
LABEL_8:
    wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset(&v27, a2);
    v9 = CCaptureRenderTarget::GetCurrentFrameBuffer(this);
    RenderTargetBitmapFromTexture = ((__int64 (__fastcall *)(struct IDXGIResource *, GUID *, __int64 *))v9->lpVtbl->QueryInterface)(
                                      v9,
                                      &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
                                      &v27);
    v12 = RenderTargetBitmapFromTexture;
    if ( RenderTargetBitmapFromTexture < 0 )
    {
      v23 = 578;
    }
    else
    {
      v13 = v26;
      v26 = 0LL;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      RenderTargetBitmapFromTexture = CD3DDeviceManager::CreateRenderTargetBitmapFromTexture(
                                        (int)&qword_180308A48,
                                        v28,
                                        0,
                                        (int)this + 368,
                                        *(struct _LUID *)((char *)this + 408),
                                        DisplayId::All,
                                        v27,
                                        (__int64)&v26);
      v12 = RenderTargetBitmapFromTexture;
      if ( RenderTargetBitmapFromTexture >= 0 )
      {
        v14 = CCaptureRenderTarget::GetCurrentFrameBuffer(this);
        v15 = v26;
        v16 = v14;
        v24 = v14;
        v25 = v26;
        if ( v26 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
        v17 = *((_QWORD *)v2 + 1);
        if ( *((_QWORD *)v2 + 2) == v17 )
        {
          std::vector<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>::_Emplace_reallocate<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair const &>(
            (char **)v2,
            (char *)v17,
            &v24);
        }
        else
        {
          *(_QWORD *)v17 = v16;
          *(_QWORD *)(v17 + 8) = v15;
          if ( v15 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
          *((_QWORD *)v2 + 1) += 16LL;
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v25);
        v8 = v26;
        goto LABEL_20;
      }
      v23 = 587;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, RenderTargetBitmapFromTexture, v23);
    goto LABEL_32;
  }
LABEL_20:
  v28 = v8;
  v18 = *((_DWORD *)this + 74);
  v19 = v18 + 1;
  v12 = v18 + 1 < v18 ? 0x80070216 : 0;
  if ( v18 + 1 < v18 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v12, 0xB5u);
  }
  else if ( v19 > *((_DWORD *)this + 73) )
  {
    v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 272, 8, 1, &v28);
    v12 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v21, 0xC0u);
  }
  else
  {
    v20 = v18;
    *(_QWORD *)(*((_QWORD *)this + 34) + 8LL * v18) = v28;
    *((_DWORD *)this + 74) = v19;
  }
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v12, 0x256u);
  else
    v26 = 0LL;
LABEL_32:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v26);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v27);
  return (unsigned int)v12;
}
