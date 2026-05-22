/*
 * XREFs of _lambda_e98e55952b2f6a60ccdf995baa6b733c_::_lambda_invoker_cdecl_ @ 0x180033680
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x1800354F8 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x180035EE0 (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?ApplyCursorAttraction@CursorAttraction@@QEAA?AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z @ 0x1800C0320 (-ApplyCursorAttraction@CursorAttraction@@QEAA-AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_e98e55952b2f6a60ccdf995baa6b733c_::_lambda_invoker_cdecl_(ControllerProcessor *this)
{
  _DWORD *v2; // rsi
  int (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v4; // rcx
  POINT v5; // rbx
  int v6; // eax
  __int64 v8; // [rsp+20h] [rbp-50h] BYREF
  POINT pt; // [rsp+28h] [rbp-48h] BYREF
  __int128 v10; // [rsp+30h] [rbp-40h]
  __int64 v11; // [rsp+40h] [rbp-30h]
  _BYTE v12[16]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v11 = -2LL;
  v2 = (_DWORD *)((char *)this + 1780);
  *(_QWORD *)((char *)this + 1780) = **(_QWORD **)&ControllerProcessor::GetCursorPosition(this);
  v10 = 0uLL;
  v8 = 0LL;
  v3 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 836);
  if ( v3 && (**v3)(v3, &GUID_925481d1_82a9_4761_95ea_d779b9de7e6b, &v8) >= 0 )
    v10 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v8 + 24LL))(v8, v12);
  v4 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  CursorAttraction::ApplyCursorAttraction(
    (ControllerProcessor *)((char *)this + 6732),
    &pt,
    (const struct tagRECT *)((char *)this + 1780));
  v5 = pt;
  if ( ((*((_BYTE *)this + 1776) & 8) == 0 || PtInRect((const RECT *)((char *)this + 1828), pt))
    && (*v2 != v5.x || *((_DWORD *)this + 446) != pt.y) )
  {
    v6 = ControllerProcessor::SetPointerPosition(this, v5, 0);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xA7A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v6);
      JUMPOUT(0x1800337C8LL);
    }
  }
  return 0LL;
}
