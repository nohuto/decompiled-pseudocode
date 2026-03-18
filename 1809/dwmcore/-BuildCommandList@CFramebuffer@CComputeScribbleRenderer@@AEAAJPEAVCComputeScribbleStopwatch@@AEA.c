/*
 * XREFs of ?BuildCommandList@CFramebuffer@CComputeScribbleRenderer@@AEAAJPEAVCComputeScribbleStopwatch@@AEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x18022D8EC
 * Callers:
 *     ?DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KAEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x18022DBE0 (-DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComp.c)
 * Callees:
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x1800A7240 (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015BA40 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     TransitionResourceBarrier_0 @ 0x18022E3F8 (TransitionResourceBarrier_0.c)
 *     ?clear@?$vector@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18022E67C (-clear@-$vector@V-$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V.c)
 */

__int64 __fastcall CComputeScribbleRenderer::CFramebuffer::BuildCommandList(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // r14d
  char v10; // bp
  __int64 v11; // rdx
  int appended; // eax
  __int64 v13; // rbx
  __int64 v14; // rdx
  int v15; // eax
  int v17; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v18[16]; // [rsp+48h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

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
  v17 = 0;
  v8 = *(_QWORD *)(a1 + 104);
  v9 = 0;
  v10 = 1;
  if ( (*(_QWORD *)(a1 + 112) - v8) >> 3 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      appended = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *, __int64, _BYTE *))(**(_QWORD **)(v8 + 8 * v11)
                                                                                            + 32LL))(
                   *(_QWORD *)(v8 + 8 * v11),
                   *(_QWORD *)(a1 + 24),
                   *(_QWORD *)(a1 + 8),
                   &v17,
                   *a3 + 24 * v11,
                   v18);
      v6 = appended;
      if ( appended < 0 )
        break;
      appended = CRegion::AppendRects<tagRECT>((struct FastRegion::Internal::CRgnData **)(a1 + 128), (__int64)v18, 1u);
      v6 = appended;
      if ( appended < 0 )
      {
        v14 = 308LL;
        goto LABEL_15;
      }
      v8 = *(_QWORD *)(a1 + 104);
      v11 = ++v9;
      if ( v9 >= (unsigned __int64)((*(_QWORD *)(a1 + 112) - v8) >> 3) )
        goto LABEL_11;
    }
    v14 = 307LL;
  }
  else
  {
LABEL_11:
    std::vector<wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>>::clear(a1 + 104);
    if ( v17 )
    {
      TransitionResourceBarrier_0(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 8));
      v17 = 0;
    }
    v13 = *(_QWORD *)(a1 + 24);
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v13 + 424LL))(v13, *(_QWORD *)(a2 + 32), 2LL);
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int, _QWORD, _QWORD))(*(_QWORD *)v13 + 432LL))(
      v13,
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
    v14 = 325LL;
  }
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.framebuffer.cpp",
    (const char *)(unsigned int)appended);
LABEL_19:
  if ( v10 )
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 72LL))(*(_QWORD *)(a1 + 24));
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x121,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.framebuffer.cpp",
        (const char *)(unsigned int)v15);
  }
  return (unsigned int)v6;
}
