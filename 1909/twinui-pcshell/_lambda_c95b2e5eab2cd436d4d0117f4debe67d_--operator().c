/*
 * XREFs of _lambda_c95b2e5eab2cd436d4d0117f4debe67d_::operator() @ 0x180413600
 * Callers:
 *     ??$LambdaCustomPaintProc@V_lambda_c95b2e5eab2cd436d4d0117f4debe67d_@@PEAUHDC__@@@@YAXPEAUHDC__@@AEBUtagSIZE@@_J@Z @ 0x180412A50 (--$LambdaCustomPaintProc@V_lambda_c95b2e5eab2cd436d4d0117f4debe67d_@@PEAUHDC__@@@@YAXPEAUHDC__@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SelectObject@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@Z$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@@1@PEAUHDC__@@PEAX@Z @ 0x180401BEC (-SelectObject@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AXUselect_resu.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_c95b2e5eab2cd436d4d0117f4debe67d_::operator()(__int64 a1, HDC a2, int *a3)
{
  HDC CompatibleDC; // rax
  HDC hdcSrc; // rbx
  unsigned int v8; // edi
  __int128 h; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  CompatibleDC = CreateCompatibleDC(a2);
  hdcSrc = CompatibleDC;
  if ( CompatibleDC )
  {
    wil::SelectObject(&h, CompatibleDC, *(void **)(*(_QWORD *)a1 + 16LL));
    BitBlt(a2, 0, 0, *a3, a3[1], hdcSrc, 0, 0, 0xCC0020u);
    v8 = 0;
    if ( (_QWORD)h )
      SelectObject(*((HDC *)&h + 1), (HGDIOBJ)h);
  }
  else
  {
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF8,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)0x8007000ELL);
  }
  if ( hdcSrc )
    DeleteDC(hdcSrc);
  return v8;
}
