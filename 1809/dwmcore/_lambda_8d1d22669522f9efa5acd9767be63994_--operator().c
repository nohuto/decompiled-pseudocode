/*
 * XREFs of _lambda_8d1d22669522f9efa5acd9767be63994_::operator() @ 0x18020787C
 * Callers:
 *     ?ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z @ 0x180060130 (-ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015BA40 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall lambda_8d1d22669522f9efa5acd9767be63994_::operator()(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)(*(_QWORD *)a1 + 216LL);
  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 552LL) + 32LL);
  v3 = *(_QWORD *)(v2 + 216);
  v4 = *(_QWORD *)(v2 + 200);
  v5 = *(_QWORD *)(v1 + 240);
  *(_BYTE *)(v1 + 1028) = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v5 + 152LL))(v5, v3, v4);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x199,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.framebuffer.cpp",
      (const char *)(unsigned int)v6);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFD,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.cpp",
      (const char *)v7);
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xE7,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
      (const char *)v7);
  }
}
