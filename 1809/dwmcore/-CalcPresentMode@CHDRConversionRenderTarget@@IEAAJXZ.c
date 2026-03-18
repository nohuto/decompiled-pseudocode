/*
 * XREFs of ?CalcPresentMode@CHDRConversionRenderTarget@@IEAAJXZ @ 0x1802088CC
 * Callers:
 *     ?SetMultiplaneOverlayPresentInfo@CHDRConversionRenderTarget@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PEBXIPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAVCBitmapRealization@@@Z @ 0x18020A020 (-SetMultiplaneOverlayPresentInfo@CHDRConversionRenderTarget@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PE.c)
 * Callees:
 *     ??8@YA_NAEBUtagRECT@@0@Z @ 0x180067C3C (--8@YA_NAEBUtagRECT@@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?IsDesktopDXGIResource@CHDRConversionRenderTarget@@IEBA_NPEAUIDXGIResource@@@Z @ 0x18020935C (-IsDesktopDXGIResource@CHDRConversionRenderTarget@@IEBA_NPEAUIDXGIResource@@@Z.c)
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
  __int64 v11; // rcx
  unsigned __int64 v12; // xmm0_8
  int v13; // eax
  __int64 v14; // rcx
  _BYTE v16[8]; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v17[2]; // [rsp+48h] [rbp-20h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = (_DWORD *)((char *)this + 700);
  v5 = (_DWORD *)((char *)this + 700);
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
      *((_DWORD *)this + 173) = 0;
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
      *((_DWORD *)this + 173) = v8;
      if ( !CHDRConversionRenderTarget::IsDesktopDXGIResource(this, *((struct IDXGIResource **)this + 17 * v8 + 88)) )
      {
        v10 = *((_QWORD *)this + 29);
        v11 = *((_QWORD *)this + 30);
        v16[0] = 0;
        v12 = _mm_srli_si128(*(__m128i *)(v10 + 104), 8).m128i_u64[0];
        v17[0] = *(_QWORD *)(v10 + 104);
        v17[1] = v12;
        v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, char *, _QWORD *, _BYTE *))(*(_QWORD *)v11 + 104LL))(
                v11,
                *((_QWORD *)this + 17 * *((unsigned int *)this + 173) + 88),
                *((unsigned int *)this + 34 * *((unsigned int *)this + 173) + 199),
                (char *)this + 136 * *((unsigned int *)this + 173) + 724,
                v17,
                v16);
        v2 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x26Fu);
        else
          *((_DWORD *)this + 172) = (v16[0] != 0) + 1;
        return v2;
      }
LABEL_24:
      *((_DWORD *)this + 172) = 0;
      return v2;
    case 2:
      if ( *((_DWORD *)this + 172) == 2 || !operator==((_DWORD *)this + 189, (_DWORD *)this + 168) )
        *((_BYTE *)this + 984) = 1;
      *((_DWORD *)this + 173) = 0;
      *((_DWORD *)this + 172) = 3;
      *((_OWORD *)this + 42) = *(_OWORD *)((char *)this + 756);
      break;
    default:
      v2 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)(v7 - 1), 0LL, 0, -2003292412, 0x293u);
      break;
  }
  return v2;
}
