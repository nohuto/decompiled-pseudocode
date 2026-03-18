/*
 * XREFs of ?UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x18002AA44
 * Callers:
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x180028760 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ?UpdateMPOCaps@CHwndRenderTarget@@UEAAJ_N@Z @ 0x18002A9F0 (-UpdateMPOCaps@CHwndRenderTarget@@UEAAJ_N@Z.c)
 *     ?UpdateRenderTarget@COverlayContext@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x18002AE24 (-UpdateRenderTarget@COverlayContext@@QEAAJPEAVIRenderTargetDisplay@@@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18006402C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     memcmp_0 @ 0x1800F01FF (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x18015E0B4 (McTemplateU0qq.c)
 */

__int64 __fastcall COverlayContext::UpdateMPOCaps(COverlayContext *this, char a2, bool *a3)
{
  bool v6; // r15
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  unsigned int v12; // ecx
  __int128 v14; // xmm0
  int v15; // eax
  __int128 v16; // xmm1
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // [rsp+30h] [rbp-40h] BYREF
  __int128 Buf2; // [rsp+38h] [rbp-38h] BYREF
  __int128 v22; // [rsp+48h] [rbp-28h]
  __int64 v23; // [rsp+58h] [rbp-18h]
  int v24; // [rsp+60h] [rbp-10h]

  memset_0(&Buf2, 0, 0x2CuLL);
  v6 = 0;
  if ( a2 )
    *((_BYTE *)this + 13437) = 1;
  v7 = *((_QWORD *)this + 2);
  v8 = 0;
  if ( !v7 )
  {
    v8 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2003292412, 0x67Fu, 0LL);
    goto LABEL_22;
  }
  if ( !CCommonRegistryData::m_fOverlayTestMode || CCommonRegistryData::m_dwOverlayTestMode < 4 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v7 + 448LL))(v7, &Buf2);
    v20 = v9;
    v11 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x688u, 0LL);
    TranslateDXGIorD3DErrorInContext(v11, 0LL, &v20);
    v8 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v20, 0x68Du, 0LL);
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McTemplateU0qq(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_OVERLAY_GETCAPS,
        (unsigned int)Buf2,
        HIDWORD(Buf2));
    }
    if ( v8 >= 0 )
      goto LABEL_11;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v8, 0x647u, 0LL);
    goto LABEL_12;
  }
  if ( CCommonRegistryData::m_dwOverlayTestMode == 4 )
  {
    v22 = __PAIR64__(LODWORD(FLOAT_0_25), LODWORD(FLOAT_8_0));
    *(_QWORD *)&Buf2 = 0x300000003LL;
    *((_QWORD *)&Buf2 + 1) = 0x600000002LL;
    v23 = 0x3F80000000000000LL;
    v24 = 1065353216;
  }
LABEL_11:
  if ( memcmp_0((char *)this + 144, &Buf2, 0x2CuLL) )
  {
    v14 = Buf2;
    v15 = v24;
    v16 = v22;
    *((_BYTE *)this + 13445) = 1;
    *((_OWORD *)this + 9) = v14;
    *(_QWORD *)&v14 = v23;
    *((_OWORD *)this + 10) = v16;
    *((_QWORD *)this + 22) = v14;
    *((_DWORD *)this + 46) = v15;
    v17 = *((_QWORD *)this + 1055);
    v18 = *((_QWORD *)this + 1054);
    if ( ((v17 - v18) & 0xFFFFFFFFFFFFFF00uLL) != 0 || *((_BYTE *)this + 13439) )
      v6 = 1;
    while ( v18 != v17 )
    {
      *(_QWORD *)(v18 + 216) = 0LL;
      v18 += 256LL;
    }
    v19 = *((_QWORD *)this + 1663);
    if ( v19 )
      *(_QWORD *)(v19 + 108) = 0LL;
  }
LABEL_12:
  if ( a3 )
    *a3 = v6;
  return (unsigned int)v8;
}
