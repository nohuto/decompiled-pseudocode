/*
 * XREFs of ?FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1801FF4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800234C0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180025878 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x180148FA4 (McTemplateU0qq.c)
 *     McTemplateU0ffff @ 0x180167760 (McTemplateU0ffff.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1801E8C7C (-IsKernelDebuggerPresent@@YAHXZ.c)
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1802001AC (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 *     ?GetColorSpace@CD2DTarget@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x1802063E0 (-GetColorSpace@CD2DTarget@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?scRGBTosRGB@@YAMM@Z @ 0x18021B564 (-scRGBTosRGB@@YAMM@Z.c)
 */

__int64 __fastcall CD2DContext::FillRectangleWithSolidColor(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const struct D2D_RECT_F *a3,
        const struct _D3DCOLORVALUE *a4,
        enum D2D1_ANTIALIAS_MODE a5,
        enum D2D1_PRIMITIVE_BLEND a6)
{
  int v10; // eax
  CD2DTarget *v11; // r12
  int v12; // eax
  int v13; // eax
  int v14; // r14d
  BOOL v15; // eax
  CHAR v16; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  __int128 v19; // xmm0
  __int64 v20; // r8
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax
  float g; // xmm6_4
  float b; // xmm7_4
  __int64 v24; // rcx
  int v25; // eax
  CHAR Response[16]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v28[4]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v29; // [rsp+90h] [rbp-70h]
  __int64 v30; // [rsp+A0h] [rbp-60h]
  int v31; // [rsp+A8h] [rbp-58h]
  __int64 v32; // [rsp+ACh] [rbp-54h]
  D3DVALUE r; // [rsp+C0h] [rbp-40h] BYREF
  float v34; // [rsp+C4h] [rbp-3Ch]
  float v35; // [rsp+C8h] [rbp-38h]
  float v36; // [rsp+CCh] [rbp-34h]
  struct D2D_MATRIX_3X2_F v37; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v38; // [rsp+E8h] [rbp-18h] BYREF

  CD2DContext::FlushDrawList(this);
  v10 = *((_DWORD *)this + 98);
  v11 = 0LL;
  if ( v10 )
    v11 = *(CD2DTarget **)(*((_QWORD *)this + 46) + 8LL * (unsigned int)(v10 - 1));
  CD2DContext::EnsureBeginDraw(this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v12 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 32LL))(a2);
    McTemplateU0qq(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Start, 2, v12);
  }
  if ( CCommonRegistryData::m_fEnableDisallowNonDrawListRendering
    && *(char *)((*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 40LL))(a2) + 94) < 0 )
  {
    while ( 1 )
    {
      v13 = IsKernelDebuggerPresent();
      strcpy(Response, "?");
      v14 = v13;
      if ( !v13 )
      {
        v15 = IsDebuggerPresent();
        v16 = Response[0];
        if ( v15 )
          v16 = 103;
        Response[0] = v16;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        word_180276388,
        word_180276388,
        L"!pD2DContextOwner->GetCurrentVisual()->DisallowNonDrawListRendering()",
        "Function: ",
        L"CD2DContext::FillRectangleWithSolidColor",
        ", ",
        L"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d2dcontext.cpp",
        1454);
      if ( !v14 )
      {
        DbgPrintEx(
          0x65u,
          0,
          "(No kernel debugger is present.) Respond with:\n"
          "  g                    -- Go (continue)\n"
          "  eb 0x%p 'p';g  -- terminate Process\n"
          "  eb 0x%p 't';g  -- terminate Thread\n"
          " or regular debugging.\n",
          Response,
          Response);
        __debugbreak();
      }
      DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", Response, 2u);
      switch ( Response[0] )
      {
        case 'B':
        case 'b':
          __debugbreak();
          goto LABEL_20;
        case 'G':
        case 'g':
          goto LABEL_20;
        case 'I':
        case 'i':
          DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
          continue;
        case 'P':
        case 'p':
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
          goto LABEL_18;
        case 'T':
        case 't':
          CurrentThread = GetCurrentThread();
          TerminateThread(CurrentThread, 0xC0000001);
          goto LABEL_18;
        default:
LABEL_18:
          DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
          break;
      }
    }
  }
LABEL_20:
  CD2DContext::SetCommonState(this, a2, a6, &a5, &v37);
  if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context[0], &EVTDESC_ETWGUID_DRAWEVENT) )
  {
    v28[2] = *(_QWORD *)&v37.m[1][0];
    v28[0] = *(_QWORD *)&v37.m11;
    v29 = _xmm;
    v19 = (__int128)*a3;
    v32 = 1065353216LL;
    v38 = v19;
    v28[1] = 0LL;
    v30 = *(_QWORD *)&v37.m[2][0];
    v28[3] = 0LL;
    v31 = 0;
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v28, (__int64)&v38, &v37.m11);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0ffff(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT,
        v20,
        v37.m12,
        SLOBYTE(v37.m[1][0]),
        SLOBYTE(v37.m[1][1]));
  }
  ColorSpace = CD2DTarget::GetColorSpace(v11);
  g = a4->g;
  b = a4->b;
  if ( ColorSpace )
  {
    r = a4->r;
    v34 = g;
    v35 = b;
  }
  else
  {
    r = scRGBTosRGB(a4->r);
    v34 = scRGBTosRGB(g);
    v35 = scRGBTosRGB(b);
  }
  v24 = *((_QWORD *)this + 44);
  v36 = fminf(1.0, fmaxf(a4->a, 0.0));
  (*(void (__fastcall **)(__int64, D3DVALUE *))(*(_QWORD *)v24 + 64LL))(v24, &r);
  (*(void (__fastcall **)(_QWORD, const struct D2D_RECT_F *, _QWORD))(**((_QWORD **)this + 29) + 136LL))(
    *((_QWORD *)this + 29),
    a3,
    *((_QWORD *)this + 44));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v25 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 32LL))(a2);
    McTemplateU0qq(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 2, v25);
  }
  return 0LL;
}
