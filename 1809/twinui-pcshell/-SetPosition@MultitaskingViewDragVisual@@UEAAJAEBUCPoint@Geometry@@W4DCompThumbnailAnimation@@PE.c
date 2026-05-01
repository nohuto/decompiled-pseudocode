/*
 * XREFs of ?SetPosition@MultitaskingViewDragVisual@@UEAAJAEBUCPoint@Geometry@@W4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180324B50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MultitaskingViewDragVisual::SetPosition(__int64 a1, int *a2)
{
  int v2; // eax
  int v3; // edx
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  _DWORD v8[4]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(_QWORD *)(a1 + 72) = *(_QWORD *)a2;
  v2 = *a2;
  v3 = a2[1];
  v4 = *(_QWORD *)(a1 + 24);
  v8[0] = v2;
  v8[2] = v2 + 1;
  v8[1] = v3;
  v8[3] = v3 + 1;
  v5 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v4 + 24LL))(v4, v8);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5B,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragvisual.cpp",
      (const char *)(unsigned int)v5);
  return v6;
}
