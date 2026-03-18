/*
 * XREFs of ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x180160EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180026410 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18004CF4C (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18015B610 (-IsKernelDebuggerPresent@@YAHXZ.c)
 *     ?SetAntiAliasMode@CD2DContext@@IEAAXW4D2D1_ANTIALIAS_MODE@@@Z @ 0x1801623AC (-SetAntiAliasMode@CD2DContext@@IEAAXW4D2D1_ANTIALIAS_MODE@@@Z.c)
 */

__int64 __fastcall CD2DContext::DrawLegacyCommandList(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        enum D2D1_ANTIALIAS_MODE a5,
        unsigned int a6,
        int a7,
        char a8)
{
  _BYTE *v11; // rbx
  int v12; // eax
  int v13; // esi
  BOOL v14; // eax
  CHAR v15; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  CHAR Response[8]; // [rsp+68h] [rbp-79h] BYREF
  __int128 v22; // [rsp+70h] [rbp-71h] BYREF
  int v23; // [rsp+80h] [rbp-61h]
  int v24; // [rsp+84h] [rbp-5Dh]
  _BYTE v25[64]; // [rsp+88h] [rbp-59h] BYREF

  CD2DContext::FlushDrawList((CD2DContext *)a1);
  v11 = 0LL;
  if ( !CCommonRegistryData::m_fEnableDisallowNonDrawListRendering
    || (*(_BYTE *)((*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2) + 94) & 0x40) == 0 )
  {
    goto LABEL_28;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = IsKernelDebuggerPresent();
      strcpy(Response, "?");
      v13 = v12;
      if ( !v12 )
      {
        v14 = IsDebuggerPresent();
        v15 = Response[0];
        if ( v14 )
          v15 = 103;
        Response[0] = v15;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        &pwsz,
        &pwsz,
        L"!pD2DContextOwner->GetCurrentVisual()->DisallowNonDrawListRendering()",
        "Function: ",
        L"CD2DContext::DrawLegacyCommandList",
        ", ",
        L"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d2dcontext.cpp",
        1532);
      if ( !v13 )
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
        goto LABEL_28;
      if ( Response[0] != 105 )
      {
        if ( Response[0] != 112 )
        {
          if ( Response[0] != 116 )
            goto LABEL_24;
LABEL_22:
          CurrentThread = GetCurrentThread();
          TerminateThread(CurrentThread, 0xC0000001);
          goto LABEL_24;
        }
LABEL_23:
        CurrentProcess = GetCurrentProcess();
        TerminateProcess(CurrentProcess, 0xC0000001);
        goto LABEL_24;
      }
LABEL_25:
      DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
    }
    if ( Response[0] == 98 || Response[0] == 66 )
      break;
    switch ( Response[0] )
    {
      case 'G':
        goto LABEL_28;
      case 'I':
        goto LABEL_25;
      case 'P':
        goto LABEL_23;
      case 'T':
        goto LABEL_22;
    }
LABEL_24:
    DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
  }
  __debugbreak();
LABEL_28:
  CD2DContext::EnsureBeginDraw((CD2DContext *)a1);
  v18 = *a2;
  if ( a8 )
  {
    (*(void (__fastcall **)(__int64 *, _BYTE *))(v18 + 24))(a2, v25);
    v19 = *(_QWORD *)(a1 + 232);
    v23 = 0;
    v24 = 0;
    v22 = _xmm;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v19 + 240LL))(v19, &v22);
    v11 = v25;
  }
  else
  {
    (*(void (__fastcall **)(__int64 *, __int128 *))(v18 + 16))(a2, &v22);
    (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 232) + 240LL))(*(_QWORD *)(a1 + 232), &v22);
  }
  CD2DContext::SetAntiAliasMode((CD2DContext *)a1, a5);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _BYTE *, unsigned int, int))(**(_QWORD **)(a1 + 240) + 32LL))(
    *(_QWORD *)(a1 + 240),
    a3,
    a6,
    v11,
    a6,
    a7);
  return 0LL;
}
