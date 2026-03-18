/*
 * XREFs of ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x1800D20E0
 * Callers:
 *     ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x1800D2030 (-OnPresentComplete@CaptureBitsResponse@@UEAAJXZ.c)
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x1801AB910 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800444E8 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x18015EAF8 (McTemplateU0.c)
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1801ABB88 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x1801ABDAC (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 */

__int64 __fastcall CaptureBitsResponse::GetBits(CaptureBitsResponse *this)
{
  int v2; // ebx
  int v3; // edx
  __int64 v4; // rcx
  int RenderTargetBitmap; // eax
  int (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // esi
  int v11; // edx
  __m128i v12; // xmm0
  int v13; // ecx
  signed int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // r9d
  unsigned int v17; // [rsp+20h] [rbp-29h]
  __int64 v18; // [rsp+30h] [rbp-19h] BYREF
  __int128 v19; // [rsp+38h] [rbp-11h] BYREF
  __int64 v20; // [rsp+48h] [rbp-1h]
  unsigned int v21; // [rsp+50h] [rbp+7h]
  __m128i v22; // [rsp+58h] [rbp+Fh] BYREF
  __int64 v23; // [rsp+68h] [rbp+1Fh] BYREF
  int v24; // [rsp+70h] [rbp+27h]
  int v25; // [rsp+74h] [rbp+2Bh]
  _DWORD v26[4]; // [rsp+78h] [rbp+2Fh] BYREF

  v2 = -2147467259;
  v26[0] = *((_DWORD *)this + 20);
  v18 = 0LL;
  v3 = *((_DWORD *)this + 21);
  v26[2] = *((_DWORD *)this + 22) + v26[0];
  v4 = (unsigned int)(v3 + *((_DWORD *)this + 23));
  v26[1] = v3;
  v26[3] = v4;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_RTCAPTURE_GETBITS);
  if ( !*((_DWORD *)this + 27) )
  {
    v4 = *((_QWORD *)this + 5);
    if ( v4 )
    {
      if ( !*(_DWORD *)((*(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v4 + 24LL))(v4, &v22) + 8) )
      {
        v2 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD))(**((_QWORD **)this + 5) + 120LL))(
               *((_QWORD *)this + 5),
               v26,
               *((_QWORD *)this + 17));
        if ( v2 >= 0 )
          goto LABEL_7;
      }
    }
  }
  if ( !*((_QWORD *)this + 8) )
  {
    v16 = v2;
    v17 = 239;
    goto LABEL_32;
  }
  v24 = *((_DWORD *)this + 22);
  v25 = *((_DWORD *)this + 23);
  v23 = 0LL;
  RenderTargetBitmap = CaptureBitsResponse::CreateRenderTargetBitmap(this);
  v2 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    v17 = 198;
LABEL_29:
    v16 = RenderTargetBitmap;
LABEL_32:
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v16, v17, 0LL);
    goto LABEL_7;
  }
  RenderTargetBitmap = CaptureBitsResponse::RenderForCapture(this);
  v2 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    v17 = 201;
    goto LABEL_29;
  }
  v7 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 5);
  if ( !v7 || (**v7)(v7, &GUID_13a6c51a_a471_439c_9055_ad1418ff1971, &v18) < 0 )
  {
    RenderTargetBitmap = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(**((_QWORD **)this + 9)
                                                                                              + 64LL))(
                           *((_QWORD *)this + 9),
                           &v23,
                           *((_QWORD *)this + 17),
                           0LL,
                           0);
    v2 = RenderTargetBitmap;
    if ( RenderTargetBitmap >= 0 )
      goto LABEL_7;
    v17 = 234;
    goto LABEL_29;
  }
  v20 = 0LL;
  v19 = 0LL;
  v21 = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v18 + 272LL))(v18, &v19);
  v2 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xD4u, 0LL);
  }
  else
  {
    v10 = 0;
    if ( v21 )
    {
      while ( 1 )
      {
        v11 = -*((_DWORD *)this + 21);
        v13 = -*((_DWORD *)this + 20);
        v22 = *(__m128i *)(v19 + 16LL * v10);
        v12 = v22;
        v22.m128i_i32[1] += v11;
        v22.m128i_i32[2] += v13;
        v22.m128i_i32[3] += v11;
        v22.m128i_i32[0] = v13 + _mm_cvtsi128_si32(v12);
        if ( TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v22, &v23) )
        {
          v14 = (*(__int64 (__fastcall **)(_QWORD, __m128i *, _QWORD, _QWORD, __int32))(**((_QWORD **)this + 9) + 64LL))(
                  *((_QWORD *)this + 9),
                  &v22,
                  *((_QWORD *)this + 17),
                  v22.m128i_u32[0],
                  v22.m128i_i32[1]);
          v2 = v14;
          if ( v14 < 0 )
            break;
        }
        if ( ++v10 >= v21 )
          goto LABEL_25;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xE1u, 0LL);
    }
  }
LABEL_25:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v19);
LABEL_7:
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_RTCAPTURE_Stop);
  return (unsigned int)v2;
}
