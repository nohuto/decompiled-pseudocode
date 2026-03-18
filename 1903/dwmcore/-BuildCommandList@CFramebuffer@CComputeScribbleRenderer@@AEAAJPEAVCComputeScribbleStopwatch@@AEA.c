/*
 * XREFs of ?BuildCommandList@CFramebuffer@CComputeScribbleRenderer@@AEAAJPEAVCComputeScribbleStopwatch@@AEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x1801B5804
 * Callers:
 *     ?DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KAEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x1801B5B1C (-DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComp.c)
 * Callees:
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x18003D0C0 (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180167F50 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?clear@?$vector@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1801B65E0 (-clear@-$vector@V-$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V.c)
 */

__int64 __fastcall CComputeScribbleRenderer::CFramebuffer::BuildCommandList(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // r15d
  char v10; // r14
  __int64 v11; // rdx
  int appended; // eax
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rdx
  int v17; // eax
  int v19; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v20[2]; // [rsp+48h] [rbp-28h] BYREF
  int v21; // [rsp+58h] [rbp-18h]
  int v22; // [rsp+5Ch] [rbp-14h]
  __int64 v23; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 64LL))(*(_QWORD *)(a1 + 16));
  if ( v6 < 0 )
  {
    v7 = 283LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.framebuffer.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 80LL))(
         *(_QWORD *)(a1 + 24),
         *(_QWORD *)(a1 + 16),
         0LL);
  if ( v6 < 0 )
  {
    v7 = 284LL;
    goto LABEL_3;
  }
  v19 = 0;
  v8 = *(_QWORD *)(a1 + 104);
  v9 = 0;
  v10 = 1;
  if ( (*(_QWORD *)(a1 + 112) - v8) >> 3 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      appended = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *, __int64, _QWORD *))(**(_QWORD **)(v8 + 8 * v11)
                                                                                             + 32LL))(
                   *(_QWORD *)(v8 + 8 * v11),
                   *(_QWORD *)(a1 + 24),
                   *(_QWORD *)(a1 + 8),
                   &v19,
                   *a3 + 24 * v11,
                   v20);
      v6 = appended;
      if ( appended < 0 )
        break;
      appended = CRegion::AppendRects<tagRECT>((FastRegion::CRegion *)(a1 + 128), (__int64)v20, 1u);
      v6 = appended;
      if ( appended < 0 )
      {
        v16 = 308LL;
        goto LABEL_15;
      }
      v8 = *(_QWORD *)(a1 + 104);
      v11 = ++v9;
      if ( v9 >= (unsigned __int64)((*(_QWORD *)(a1 + 112) - v8) >> 3) )
        goto LABEL_11;
    }
    v16 = 307LL;
  }
  else
  {
LABEL_11:
    std::vector<wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>>::clear(a1 + 104);
    if ( v19 )
    {
      v13 = *(__int64 **)(a1 + 24);
      v20[1] = *(_QWORD *)(a1 + 8);
      v22 = v19;
      v21 = 0;
      v14 = *v13;
      v23 = 0LL;
      v20[0] = 0LL;
      (*(void (__fastcall **)(__int64 *, __int64, _QWORD *))(v14 + 208))(v13, 1LL, v20);
      v19 = 0;
    }
    v15 = *(_QWORD *)(a1 + 24);
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v15 + 424LL))(v15, *(_QWORD *)(a2 + 32), 2LL);
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int, _QWORD, _QWORD))(*(_QWORD *)v15 + 432LL))(
      v15,
      *(_QWORD *)(a2 + 32),
      2LL,
      0LL,
      1,
      *(_QWORD *)(a2 + 40),
      0LL);
    *(_BYTE *)(a2 + 64) = 0;
    v10 = 0;
    appended = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 72LL))(*(_QWORD *)(a1 + 24));
    v6 = appended;
    if ( appended >= 0 )
    {
      v6 = 0;
      goto LABEL_19;
    }
    v16 = 325LL;
  }
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.framebuffer.cpp",
    (const char *)(unsigned int)appended);
LABEL_19:
  if ( v10 )
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 72LL))(*(_QWORD *)(a1 + 24));
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x121,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.framebuffer.cpp",
        (const char *)(unsigned int)v17);
  }
  return (unsigned int)v6;
}
