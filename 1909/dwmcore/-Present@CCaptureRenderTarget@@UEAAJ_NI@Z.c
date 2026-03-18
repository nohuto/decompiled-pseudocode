/*
 * XREFs of ?Present@CCaptureRenderTarget@@UEAAJ_NI@Z @ 0x18024DD70
 * Callers:
 *     <none>
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18006402C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDeviceLevel1@@XZ @ 0x1800EC8F4 (-GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDeviceLevel1@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ @ 0x18024DCFC (-GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::Present(CCaptureRenderTarget *this)
{
  CCaptureRenderTarget *v1; // rsi
  int v3; // ebx
  struct CD3DDeviceLevel1 *D3DDeviceNoRef; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  signed int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  signed int v13; // eax
  __int64 v14; // rcx
  signed int v15; // eax
  __int64 v16; // rcx
  char v18; // [rsp+20h] [rbp-29h]
  char v19; // [rsp+28h] [rbp-21h]
  unsigned int v20; // [rsp+50h] [rbp+7h] BYREF
  __int64 v21; // [rsp+58h] [rbp+Fh] BYREF
  int v22; // [rsp+60h] [rbp+17h]
  int v23; // [rsp+64h] [rbp+1Bh]
  __int128 v24; // [rsp+68h] [rbp+1Fh] BYREF
  int v25; // [rsp+78h] [rbp+2Fh]
  __int64 *v26; // [rsp+80h] [rbp+37h]

  v1 = (CCaptureRenderTarget *)((char *)this - 64);
  v3 = 0;
  v20 = 0;
  D3DDeviceNoRef = CCaptureRenderTarget::GetD3DDeviceNoRef((CCaptureRenderTarget *)((char *)this - 64));
  if ( D3DDeviceNoRef && CCaptureRenderTarget::GetCurrentFrameBuffer(v1) )
  {
    v5 = *((unsigned int *)this + 96);
    v6 = *(_QWORD *)(*((_QWORD *)this - 6) + 496LL);
    v22 = *((_DWORD *)this + 6);
    v23 = *((_DWORD *)this + 7);
    v26 = &v21;
    v21 = v6;
    v7 = *((_QWORD *)this + 53);
    v24 = xmmword_1802D6C90;
    v25 = 16;
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(*(_QWORD *)v7 + 24LL))(
           v7,
           *(_QWORD *)(*((_QWORD *)this + 59) + 8 * v5),
           1LL,
           &v24);
    v20 = v8;
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x222u, 0LL);
    }
    else
    {
      ++*((_QWORD *)this + 50);
      v10 = *((_QWORD *)D3DDeviceNoRef + 30);
      v11 = *((_QWORD *)this + 50);
      v12 = *((_QWORD *)this + 49);
      *((_BYTE *)D3DDeviceNoRef + 1164) = 0;
      v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v10 + 152LL))(v10, v12, v11);
      v20 = v13;
      v3 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x226u, 0LL);
      }
      else
      {
        v19 = 0;
        v18 = 0;
        v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char, char, _DWORD, _QWORD, _QWORD))(**((_QWORD **)this + 52) + 72LL))(
                *((_QWORD *)this + 52),
                *((_QWORD *)this + 49),
                *((_QWORD *)this + 50),
                0LL,
                v18,
                v19,
                0,
                0LL,
                0LL);
        v20 = v15;
        v3 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x231u, 0LL);
      }
    }
  }
  if ( CCaptureRenderTarget::GetCurrentFrameBuffer(v1) )
  {
    *((_DWORD *)this + 96) = -1;
    (*(void (**)(void))(*(_QWORD *)v1 + 368LL))();
  }
  if ( v3 < 0 )
  {
    TranslateDXGIorD3DErrorInContext(v3, 0, &v20);
    return v20;
  }
  return (unsigned int)v3;
}
