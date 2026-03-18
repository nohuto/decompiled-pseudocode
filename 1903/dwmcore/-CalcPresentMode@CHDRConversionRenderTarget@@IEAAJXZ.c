/*
 * XREFs of ?CalcPresentMode@CHDRConversionRenderTarget@@IEAAJXZ @ 0x180168644
 * Callers:
 *     ?SetMultiplaneOverlayPresentInfo@CHDRConversionRenderTarget@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PEBXIPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAVCBitmapRealization@@@Z @ 0x180169E80 (-SetMultiplaneOverlayPresentInfo@CHDRConversionRenderTarget@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??8@YA_NAEBUtagRECT@@0@Z @ 0x1800BE560 (--8@YA_NAEBUtagRECT@@0@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?IsDesktopDXGIResource@CHDRConversionRenderTarget@@IEBA_NPEAUIDXGIResource@@@Z @ 0x18016915C (-IsDesktopDXGIResource@CHDRConversionRenderTarget@@IEBA_NPEAUIDXGIResource@@@Z.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::CalcPresentMode(CHDRConversionRenderTarget *this)
{
  unsigned int v2; // edi
  int v3; // ecx
  _DWORD *v4; // rdx
  _DWORD *v5; // r8
  __int64 v6; // r9
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // xmm0_8
  signed int v14; // eax
  __int64 v15; // rcx
  _BYTE v17[8]; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v18[2]; // [rsp+48h] [rbp-20h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = (_DWORD *)((char *)this + 636);
  v5 = (_DWORD *)((char *)this + 636);
  v6 = 2LL;
  do
  {
    v7 = v3 + 1;
    if ( !*v5 )
      v7 = v3;
    v5 += 34;
    v3 = v7;
    --v6;
  }
  while ( v6 );
  switch ( v7 )
  {
    case 0:
      *((_DWORD *)this + 157) = 0;
      goto LABEL_24;
    case 1:
      v8 = -1;
      v9 = 0;
      while ( !*v4 )
      {
        ++v9;
        v4 += 34;
        if ( v9 >= 2 )
          goto LABEL_18;
      }
      v8 = v9;
LABEL_18:
      *((_DWORD *)this + 157) = v8;
      if ( !CHDRConversionRenderTarget::IsDesktopDXGIResource(this, *((struct IDXGIResource **)this + 17 * v8 + 80)) )
      {
        v10 = *((_QWORD *)this + 21);
        v11 = *((unsigned int *)this + 157);
        v12 = *((_QWORD *)this + 22);
        v17[0] = 0;
        v13 = _mm_srli_si128(*(__m128i *)(v10 + 104), 8).m128i_u64[0];
        v18[0] = *(_QWORD *)(v10 + 104);
        v18[1] = v13;
        v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, char *, _QWORD *, _BYTE *))(*(_QWORD *)v12 + 104LL))(
                v12,
                *((_QWORD *)this + 17 * v11 + 80),
                *((unsigned int *)this + 34 * v11 + 183),
                (char *)this + 136 * v11 + 660,
                v18,
                v17);
        v2 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x26Du, 0LL);
        else
          *((_DWORD *)this + 156) = (v17[0] != 0) + 1;
        return v2;
      }
LABEL_24:
      *((_DWORD *)this + 156) = 0;
      return v2;
    case 2:
      if ( *((_DWORD *)this + 156) == 2 || !operator==((_DWORD *)this + 173, (_DWORD *)this + 152) )
        *((_BYTE *)this + 920) = 1;
      *((_DWORD *)this + 157) = 0;
      *((_DWORD *)this + 156) = 3;
      *((_OWORD *)this + 38) = *(_OWORD *)((char *)this + 692);
      break;
    default:
      v2 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)(v7 - 1), 0LL, 0, 0x88982F04, 0x291u, 0LL);
      break;
  }
  return v2;
}
