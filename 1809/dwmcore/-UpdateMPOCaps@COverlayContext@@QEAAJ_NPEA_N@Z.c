/*
 * XREFs of ?UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x1800D89C4
 * Callers:
 *     ?UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z @ 0x1800D8014 (-UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z.c)
 *     ?UpdateRenderTarget@COverlayContext@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x1800D86DC (-UpdateRenderTarget@COverlayContext@@QEAAJPEAVIRenderTargetDisplay@@@Z.c)
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x1800D9140 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180038C28 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     memcmp_0 @ 0x1800F006F (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x180148FA4 (McTemplateU0qq.c)
 */

__int64 __fastcall COverlayContext::UpdateMPOCaps(COverlayContext *this, char a2, bool *a3)
{
  bool v6; // r15
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rcx
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
    *((_BYTE *)this + 13421) = 1;
  v7 = *((_QWORD *)this + 2);
  v8 = 0;
  if ( !v7 )
  {
    v8 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2003292412, 0x67Cu);
    goto LABEL_22;
  }
  if ( !CCommonRegistryData::m_fOverlayTestMode || CCommonRegistryData::m_dwOverlayTestMode < 4 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v7 + 440LL))(v7, &Buf2);
    v20 = v9;
    v11 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x685u);
    TranslateDXGIorD3DErrorInContext(v11, 0, &v20);
    v8 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v20, 0x68Au);
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McTemplateU0qq(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_OVERLAY_GETCAPS,
        (unsigned int)Buf2,
        HIDWORD(Buf2));
    }
    if ( v8 >= 0 )
      goto LABEL_11;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v8, 0x644u);
    goto LABEL_12;
  }
  if ( CCommonRegistryData::m_dwOverlayTestMode == 4 )
  {
    HIDWORD(v22) = 0;
    v23 = 0x3F80000000000000LL;
    *(float *)&v22 = FLOAT_8_0;
    *(_QWORD *)((char *)&v22 + 4) = LODWORD(FLOAT_0_25);
    *(_QWORD *)&Buf2 = 0x300000003LL;
    *((_QWORD *)&Buf2 + 1) = 0x600000002LL;
    v24 = 1065353216;
  }
  else
  {
    memset_0(&Buf2, 0, 0x2CuLL);
  }
LABEL_11:
  if ( memcmp_0((char *)this + 144, &Buf2, 0x2CuLL) )
  {
    v14 = Buf2;
    v15 = v24;
    v16 = v22;
    *((_BYTE *)this + 13429) = 1;
    *((_OWORD *)this + 9) = v14;
    *(_QWORD *)&v14 = v23;
    *((_OWORD *)this + 10) = v16;
    *((_QWORD *)this + 22) = v14;
    *((_DWORD *)this + 46) = v15;
    v17 = *((_QWORD *)this + 1055);
    v18 = *((_QWORD *)this + 1054);
    if ( ((v17 - v18) & 0xFFFFFFFFFFFFFF00uLL) != 0 || *((_BYTE *)this + 13423) )
      v6 = 1;
    while ( v18 != v17 )
    {
      *(_DWORD *)(v18 + 216) = 0;
      *(_DWORD *)(v18 + 220) = 0;
      v18 += 256LL;
    }
    v19 = *((_QWORD *)this + 1661);
    if ( v19 )
    {
      *(_DWORD *)(v19 + 92) = 0;
      *(_DWORD *)(v19 + 96) = 0;
    }
  }
LABEL_12:
  if ( a3 )
    *a3 = v6;
  return (unsigned int)v8;
}
