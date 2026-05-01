/*
 * XREFs of ?IsHostProcessOwnerOfComponent@ViewEventDispatcher@@UEAAJIIPEAE@Z @ 0x180215BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::IsHostProcessOwnerOfComponent(
        ViewEventDispatcher *this,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, unsigned __int8 *))(**((_QWORD **)this + 41) + 128LL))(
         *((_QWORD *)this + 41),
         a2,
         a3,
         a4);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x565,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v4);
  return v5;
}
