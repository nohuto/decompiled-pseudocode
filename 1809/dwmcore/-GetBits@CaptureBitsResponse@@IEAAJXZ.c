/*
 * XREFs of ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x1800744A0
 * Callers:
 *     ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x1800743F0 (-OnPresentComplete@CaptureBitsResponse@@UEAAJXZ.c)
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x180161400 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180145780 (McTemplateU0.c)
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180177228 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180177458 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 */

__int64 __fastcall CaptureBitsResponse::GetBits(CaptureBitsResponse *this)
{
  CaptureBitsResponse *v1; // rdi
  int v2; // ebx
  int v3; // edx
  int RenderTargetBitmap; // eax
  int (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // r10d
  unsigned int v10; // esi
  __int32 v11; // r11d
  __int32 v12; // r15d
  __int32 v13; // r12d
  __int32 v14; // r13d
  int v15; // edx
  int v16; // ecx
  __int32 v17; // r14d
  __int32 v18; // edx
  __int32 v19; // r8d
  __int32 v20; // eax
  __int32 v21; // r9d
  __int32 v22; // ecx
  __int32 v23; // eax
  __int32 v24; // eax
  int v25; // eax
  unsigned int v26; // ecx
  int v27; // r9d
  unsigned int v28; // [rsp+28h] [rbp-39h]
  __int64 v29; // [rsp+38h] [rbp-29h] BYREF
  __int128 v30; // [rsp+40h] [rbp-21h] BYREF
  __int64 v31; // [rsp+50h] [rbp-11h]
  unsigned int v32; // [rsp+58h] [rbp-9h]
  __m128i v33; // [rsp+60h] [rbp-1h] BYREF
  __int64 v34; // [rsp+70h] [rbp+Fh] BYREF
  __int32 v35; // [rsp+78h] [rbp+17h]
  __int32 v36; // [rsp+7Ch] [rbp+1Bh]
  _DWORD v37[4]; // [rsp+80h] [rbp+1Fh] BYREF

  v1 = this;
  v2 = -2147467259;
  v37[0] = *((_DWORD *)this + 20);
  v29 = 0LL;
  v3 = *((_DWORD *)this + 21);
  v37[2] = *((_DWORD *)this + 22) + v37[0];
  LODWORD(this) = v3 + *((_DWORD *)this + 23);
  v37[1] = v3;
  v37[3] = (_DWORD)this;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_RTCAPTURE_GETBITS);
  if ( !*((_DWORD *)v1 + 27) )
  {
    this = (CaptureBitsResponse *)*((_QWORD *)v1 + 5);
    if ( this )
    {
      if ( !*(_DWORD *)((*(__int64 (__fastcall **)(CaptureBitsResponse *, __m128i *))(*(_QWORD *)this + 24LL))(
                          this,
                          &v33)
                      + 8) )
      {
        v2 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD))(**((_QWORD **)v1 + 5) + 120LL))(
               *((_QWORD *)v1 + 5),
               v37,
               *((_QWORD *)v1 + 17));
        if ( v2 >= 0 )
          goto LABEL_7;
      }
    }
  }
  if ( !*((_QWORD *)v1 + 8) )
  {
    v28 = 241;
    v27 = v2;
    goto LABEL_47;
  }
  v35 = *((_DWORD *)v1 + 22);
  v36 = *((_DWORD *)v1 + 23);
  v34 = 0LL;
  RenderTargetBitmap = CaptureBitsResponse::CreateRenderTargetBitmap(v1);
  v2 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    v28 = 200;
LABEL_44:
    v27 = RenderTargetBitmap;
LABEL_47:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v27, v28);
    goto LABEL_7;
  }
  RenderTargetBitmap = CaptureBitsResponse::RenderForCapture(v1);
  v2 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    v28 = 203;
    goto LABEL_44;
  }
  v6 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)v1 + 5);
  if ( !v6 || (**v6)(v6, &GUID_13a6c51a_a471_439c_9055_ad1418ff1971, &v29) < 0 )
  {
    RenderTargetBitmap = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(**((_QWORD **)v1 + 9)
                                                                                              + 64LL))(
                           *((_QWORD *)v1 + 9),
                           &v34,
                           *((_QWORD *)v1 + 17),
                           0LL,
                           0);
    v2 = RenderTargetBitmap;
    if ( RenderTargetBitmap >= 0 )
      goto LABEL_7;
    v28 = 236;
    goto LABEL_44;
  }
  v31 = 0LL;
  v30 = 0LL;
  v32 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v29 + 272LL))(v29, &v30);
  v2 = v7;
  if ( v7 >= 0 )
  {
    v9 = v32;
    v10 = 0;
    if ( !v32 )
      goto LABEL_40;
    v11 = v36;
    v12 = v35;
    v13 = HIDWORD(v34);
    v14 = v34;
    while ( 1 )
    {
      v15 = -*((_DWORD *)v1 + 21);
      v16 = -*((_DWORD *)v1 + 20);
      v33 = *(__m128i *)(v30 + 16LL * v10);
      v17 = v15 + v33.m128i_i32[1];
      v18 = v33.m128i_i32[3] + v15;
      v19 = v16 + v33.m128i_i32[2];
      v20 = v16 + v33.m128i_i32[2];
      v21 = v16 + _mm_cvtsi128_si32(v33);
      v22 = v12;
      if ( v14 > v21 )
        v21 = v14;
      v33.m128i_i32[0] = v21;
      if ( v13 > v17 )
        v17 = v13;
      v33.m128i_i32[1] = v17;
      if ( v12 >= v19 )
        v22 = v19;
      else
        v20 = v12;
      v33.m128i_i32[2] = v20;
      v23 = v18;
      if ( v11 < v18 )
        v23 = v11;
      v33.m128i_i32[3] = v23;
      if ( v22 <= v21 )
        goto LABEL_35;
      v24 = v11;
      if ( v11 >= v18 )
        v24 = v18;
      if ( v24 <= v17 )
      {
LABEL_35:
        v33 = 0uLL;
      }
      else
      {
        v25 = (*(__int64 (__fastcall **)(_QWORD, __m128i *, _QWORD))(**((_QWORD **)v1 + 9) + 64LL))(
                *((_QWORD *)v1 + 9),
                &v33,
                *((_QWORD *)v1 + 17));
        v2 = v25;
        if ( v25 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0xE3u);
          goto LABEL_40;
        }
        v11 = v36;
        v12 = v35;
        v13 = HIDWORD(v34);
        v14 = v34;
        v9 = v32;
      }
      if ( ++v10 >= v9 )
        goto LABEL_40;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xD6u);
LABEL_40:
  DynArrayImpl<1>::~DynArrayImpl<1>(&v30);
LABEL_7:
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_RTCAPTURE_Stop);
  return (unsigned int)v2;
}
