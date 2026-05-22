/*
 * XREFs of ?OnUpdateCursorMagnetismTimer@ControllerProcessor@@AEAAJXZ @ 0x180076994
 * Callers:
 *     _lambda_9acb6a30c2b0d5ba7ab65b24b73eef63_::_lambda_invoker_cdecl_ @ 0x1800741C0 (_lambda_9acb6a30c2b0d5ba7ab65b24b73eef63_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCursorClosestInteractiveBounds@ControllerProcessor@@AEAA?AUtagRECT@@XZ @ 0x180075CBC (-GetCursorClosestInteractiveBounds@ControllerProcessor@@AEAA-AUtagRECT@@XZ.c)
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x180075D84 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x180077634 (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?ApplyCursorAttraction@CursorAttraction@@QEAA?AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z @ 0x1800F7808 (-ApplyCursorAttraction@CursorAttraction@@QEAA-AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::OnUpdateCursorMagnetismTimer(ControllerProcessor *this)
{
  _DWORD *v2; // rsi
  POINT v3; // rbx
  int v4; // eax
  struct tagRECT v6; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  POINT pt; // [rsp+40h] [rbp+8h] BYREF

  v2 = (_DWORD *)((char *)this + 2236);
  *(_QWORD *)((char *)this + 2236) = **(_QWORD **)&ControllerProcessor::GetCursorPosition(this, &pt);
  ControllerProcessor::GetCursorClosestInteractiveBounds(this, &v6);
  CursorAttraction::ApplyCursorAttraction(
    (ControllerProcessor *)((char *)this + 11116),
    &pt,
    (const struct tagRECT *)((char *)this + 2236));
  v3 = pt;
  if ( ((*((_BYTE *)this + 2232) & 8) == 0 || PtInRect((const RECT *)((char *)this + 2284), pt))
    && (*v2 != v3.x || *((_DWORD *)this + 560) != pt.y) )
  {
    v4 = ControllerProcessor::SetPointerPosition(this, v3, 0);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        2716LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v4);
      __debugbreak();
    }
  }
  return 0LL;
}
