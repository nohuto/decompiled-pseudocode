/*
 * XREFs of ?MoveVirtualCursor@CMultitaskingViewFrame@@UEAAJAEBUCPoint@Geometry@@@Z @ 0x1802FB8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMultitaskingViewFrame::MoveVirtualCursor(
        CMultitaskingViewFrame *this,
        const struct Geometry::CPoint *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, const struct Geometry::CPoint *))(**((_QWORD **)this + 315) + 112LL))(
         *((_QWORD *)this + 315),
         a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24C,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
