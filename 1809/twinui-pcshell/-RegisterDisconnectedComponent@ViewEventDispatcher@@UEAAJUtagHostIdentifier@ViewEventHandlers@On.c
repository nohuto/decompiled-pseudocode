/*
 * XREFs of ?RegisterDisconnectedComponent@ViewEventDispatcher@@UEAAJUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@IPEAUIInspectable@@@Z @ 0x180217250
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::RegisterDisconnectedComponent(__int64 a1, __int64 *a2)
{
  __int64 v2; // xmm0_8
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF
  int v8; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *a2;
  v3 = *(_QWORD *)(a1 + 328);
  v8 = *((_DWORD *)a2 + 2);
  v7 = v2;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 184LL))(v3, &v7);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x59D,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
