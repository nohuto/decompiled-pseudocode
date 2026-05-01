/*
 * XREFs of ?MoveVirtualCursor@CAltTabViewHost@@UEAAJPEAUtagPOINT@@@Z @ 0x18036DA60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAltTabViewHost::MoveVirtualCursor(CAltTabViewHost *this, struct tagPOINT *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 19);
  if ( !v2 )
  {
    v3 = -2147023728;
    v4 = 260LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
      (const char *)v3);
    return v3;
  }
  v7 = *a2;
  v3 = (*(__int64 (__fastcall **)(__int64, struct tagPOINT *))(*(_QWORD *)v2 + 120LL))(v2, &v7);
  if ( (v3 & 0x80000000) != 0 )
  {
    v4 = 261LL;
    goto LABEL_5;
  }
  return v3;
}
