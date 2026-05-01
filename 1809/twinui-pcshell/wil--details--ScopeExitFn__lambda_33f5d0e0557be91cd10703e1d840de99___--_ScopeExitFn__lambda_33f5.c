/*
 * XREFs of wil::details::ScopeExitFn__lambda_33f5d0e0557be91cd10703e1d840de99___::_ScopeExitFn__lambda_33f5d0e0557be91cd10703e1d840de99___ @ 0x18019D18C
 * Callers:
 *     _DDAScreenCapture::GetScreenCaptureAsWicBitmapSource_::_1_::dtor$1 @ 0x18019D7EA (_DDAScreenCapture--GetScreenCaptureAsWicBitmapSource_--_1_--dtor$1.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_33f5d0e0557be91cd10703e1d840de99___::_ScopeExitFn__lambda_33f5d0e0557be91cd10703e1d840de99___(
        __int64 a1)
{
  _QWORD *v1; // rax
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 8) )
  {
    v1 = *(_QWORD **)a1;
    *(_BYTE *)(a1 + 8) = 0;
    v2 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 112LL))(*v1);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        142LL,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v2);
  }
}
