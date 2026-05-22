/*
 * XREFs of ?OnVerticalDrag@EdgyProcessorTarget@@AEAAJXZ @ 0x180103EF4
 * Callers:
 *     ?OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z @ 0x180103A9C (-OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?OnSwipe@EdgyProcessorTarget@@AEAA?AW4State@1@_NH@Z @ 0x180103C4C (-OnSwipe@EdgyProcessorTarget@@AEAA-AW4State@1@_NH@Z.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnVerticalDrag(EdgyProcessorTarget *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5[6]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5[0] = 24;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 19) + 88LL))(
         *((_QWORD *)this + 19),
         5LL,
         v5);
  v3 = v2;
  if ( v2 >= 0 )
  {
    *((_DWORD *)this + 8) = EdgyProcessorTarget::OnSwipe((__int64)this, 0, v5[4]);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
