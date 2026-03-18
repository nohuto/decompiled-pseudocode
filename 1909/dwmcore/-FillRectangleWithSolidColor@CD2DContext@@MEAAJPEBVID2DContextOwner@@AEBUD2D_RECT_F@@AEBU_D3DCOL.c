/*
 * XREFs of ?FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180160090
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180057918 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180057EDC (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18008C3D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180159F30 (-IsKernelDebuggerPresent@@YAHXZ.c)
 *     McTemplateU0qq @ 0x18015E0B4 (McTemplateU0qq.c)
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180160D04 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 *     McTemplateU0ffff @ 0x180160DB4 (McTemplateU0ffff.c)
 *     ?GetColorSpace@CD2DTarget@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x1801690A0 (-GetColorSpace@CD2DTarget@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?scRGBTosRGB@@YAMM@Z @ 0x180225BE0 (-scRGBTosRGB@@YAMM@Z.c)
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
  CD2DTarget *v11; // r15
  int v12; // eax
  int v13; // eax
  int v14; // esi
  BOOL v15; // eax
  CHAR v16; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  __int128 v19; // xmm0
  int v20; // r8d
  int v21; // r9d
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax
  float g; // xmm6_4
  float b; // xmm7_4
  __int64 v25; // rcx
  int v26; // eax
  CHAR Response[16]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+78h] [rbp-90h] BYREF
  int v30; // [rsp+80h] [rbp-88h]
  int v31; // [rsp+84h] [rbp-84h]
  __int64 v32; // [rsp+88h] [rbp-80h]
  __int64 v33; // [rsp+90h] [rbp-78h]
  __int64 v34; // [rsp+98h] [rbp-70h]
  int v35; // [rsp+A0h] [rbp-68h]
  int v36; // [rsp+A4h] [rbp-64h]
  __int64 v37; // [rsp+A8h] [rbp-60h]
  int v38; // [rsp+B0h] [rbp-58h]
  int v39; // [rsp+B4h] [rbp-54h]
  int v40; // [rsp+B8h] [rbp-50h]
  D3DVALUE r; // [rsp+C8h] [rbp-40h] BYREF
  float v42; // [rsp+CCh] [rbp-3Ch]
  float v43; // [rsp+D0h] [rbp-38h]
  float v44; // [rsp+D4h] [rbp-34h]
  struct D2D_MATRIX_3X2_F v45; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v46; // [rsp+F0h] [rbp-18h] BYREF

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
    && (*(_BYTE *)((*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 40LL))(a2) + 94) & 0x40) != 0 )
  {
    while ( 1 )
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
          &pwsz,
          &pwsz,
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
        if ( Response[0] <= 98 )
          break;
        if ( Response[0] == 103 )
          goto LABEL_32;
        if ( Response[0] != 105 )
        {
          if ( Response[0] != 112 )
          {
            if ( Response[0] != 116 )
              goto LABEL_28;
LABEL_26:
            CurrentThread = GetCurrentThread();
            TerminateThread(CurrentThread, 0xC0000001);
            goto LABEL_28;
          }
LABEL_27:
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
          goto LABEL_28;
        }
LABEL_29:
        DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
      }
      switch ( Response[0] )
      {
        case 'b':
        case 'B':
          __debugbreak();
          goto LABEL_32;
        case 'G':
          goto LABEL_32;
        case 'I':
          goto LABEL_29;
        case 'P':
          goto LABEL_27;
        case 'T':
          goto LABEL_26;
      }
LABEL_28:
      DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
    }
  }
LABEL_32:
  CD2DContext::SetCommonState(this, a2, a6, &a5, &v45);
  if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context[0], &EVTDESC_ETWGUID_DRAWEVENT) )
  {
    v40 = 0;
    v30 = 0;
    v31 = 0;
    v33 = 0LL;
    v34 = 0LL;
    v36 = 0;
    v38 = 0;
    v32 = *(_QWORD *)&v45.m[1][0];
    v29 = *(_QWORD *)&v45.m11;
    v37 = *(_QWORD *)&v45.m[2][0];
    v19 = (__int128)*a3;
    v35 = 1065353216;
    v46 = v19;
    v39 = 1065353216;
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)&v29, (__int64)&v46, &v45.m11);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0ffff(
        (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
        (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT,
        v20,
        v21,
        SLOBYTE(v45.m[1][0]),
        SLOBYTE(v45.m[1][1]));
  }
  ColorSpace = CD2DTarget::GetColorSpace(v11);
  g = a4->g;
  b = a4->b;
  if ( ColorSpace )
  {
    r = a4->r;
    v42 = g;
    v43 = b;
  }
  else
  {
    r = scRGBTosRGB(a4->r);
    v42 = scRGBTosRGB(g);
    v43 = scRGBTosRGB(b);
  }
  v25 = *((_QWORD *)this + 44);
  v44 = fminf(1.0, fmaxf(a4->a, 0.0));
  (*(void (__fastcall **)(__int64, D3DVALUE *))(*(_QWORD *)v25 + 64LL))(v25, &r);
  (*(void (__fastcall **)(_QWORD, const struct D2D_RECT_F *, _QWORD))(**((_QWORD **)this + 29) + 136LL))(
    *((_QWORD *)this + 29),
    a3,
    *((_QWORD *)this + 44));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v26 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 32LL))(a2);
    McTemplateU0qq(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 2, v26);
  }
  return 0LL;
}
