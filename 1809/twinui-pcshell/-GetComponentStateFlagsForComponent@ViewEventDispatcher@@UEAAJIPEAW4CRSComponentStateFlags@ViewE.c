/*
 * XREFs of ?GetComponentStateFlagsForComponent@ViewEventDispatcher@@UEAAJIPEAW4CRSComponentStateFlags@ViewEventHandlers@OneCore@Internal@Windows@@@Z @ 0x180214870
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::GetComponentStateFlagsForComponent(
        ViewEventDispatcher *this,
        __int64 a2,
        enum Windows::Internal::OneCore::ViewEventHandlers::CRSComponentStateFlags *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, enum Windows::Internal::OneCore::ViewEventHandlers::CRSComponentStateFlags *))(**((_QWORD **)this + 41) + 112LL))(
         *((_QWORD *)this + 41),
         a2,
         a3);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x559,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
