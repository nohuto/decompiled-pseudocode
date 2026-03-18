/*
 * XREFs of ?Present@CCaptureRenderTarget@@UEAAJ_NI@Z @ 0x1801585C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentFrameBuffer@CCaptureRenderTarget@@AEAAPEAUIDXGIResource@@XZ @ 0x180158500 (-GetCurrentFrameBuffer@CCaptureRenderTarget@@AEAAPEAUIDXGIResource@@XZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::Present(CCaptureRenderTarget *this)
{
  CCaptureRenderTarget *v1; // rsi
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  char v19; // [rsp+20h] [rbp-78h]
  char v20; // [rsp+28h] [rbp-70h]
  __int64 v21; // [rsp+50h] [rbp-48h] BYREF
  int v22; // [rsp+58h] [rbp-40h]
  int v23; // [rsp+5Ch] [rbp-3Ch]
  __int128 v24; // [rsp+60h] [rbp-38h] BYREF
  int v25; // [rsp+70h] [rbp-28h]
  __int64 *v26; // [rsp+78h] [rbp-20h]

  v1 = (CCaptureRenderTarget *)((char *)this - 64);
  v3 = 0;
  if ( CCaptureRenderTarget::GetCurrentFrameBuffer((CCaptureRenderTarget *)((char *)this - 64)) )
  {
    v4 = *((_QWORD *)this + 53);
    v5 = *(_QWORD *)(*((_QWORD *)this - 6) + 480LL);
    v22 = *((_DWORD *)this + 74);
    v23 = *((_DWORD *)this + 75);
    v26 = &v21;
    v6 = *((_QWORD *)this + 59);
    v21 = v5;
    v7 = *((unsigned int *)this + 98);
    v24 = xmmword_1802BC218;
    v25 = 16;
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(*(_QWORD *)v4 + 24LL))(
           v4,
           *(_QWORD *)(v6 + 8 * v7),
           1LL,
           &v24);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x203u);
    }
    else
    {
      ++*((_QWORD *)this + 51);
      v10 = *((_QWORD *)this + 42);
      v11 = *((_QWORD *)this + 51);
      v12 = *((_QWORD *)this + 50);
      v13 = *(_QWORD *)(v10 + 240);
      *(_BYTE *)(v10 + 1028) = 0;
      v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v13 + 152LL))(v13, v12, v11);
      v3 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x207u);
      }
      else
      {
        v20 = 0;
        v19 = 0;
        v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char, char, _DWORD, _QWORD, _QWORD))(**((_QWORD **)this + 52) + 72LL))(
                *((_QWORD *)this + 52),
                *((_QWORD *)this + 50),
                *((_QWORD *)this + 51),
                0LL,
                v19,
                v20,
                0,
                0LL,
                0LL);
        v3 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x212u);
      }
    }
  }
  if ( CCaptureRenderTarget::GetCurrentFrameBuffer(v1) )
  {
    *((_DWORD *)this + 98) = -1;
    (*(void (**)(void))(*(_QWORD *)v1 + 224LL))();
  }
  return v3;
}
