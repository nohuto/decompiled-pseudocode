/*
 * XREFs of ?GetHostIdentifierForComponent@ViewEventDispatcher@@UEAAJIPEAW4CRSComponentRelationshipFlags@ViewEventHandlers@OneCore@Internal@Windows@@PEAUtagHostIdentifier@3456@@Z @ 0x180214B30
 * Callers:
 *     ?_ForEachTrueHost@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXAEBUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@@Z@std@@@Z @ 0x18021EC1C (-_ForEachTrueHost@ViewEventDispatcher@@AEAAXIAEBV-$function@$$A6AXAEBUtagHostIdentifier@ViewEven.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::GetHostIdentifierForComponent(
        ViewEventDispatcher *this,
        __int64 a2,
        enum Windows::Internal::OneCore::ViewEventHandlers::CRSComponentRelationshipFlags *a3,
        struct Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier *a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, enum Windows::Internal::OneCore::ViewEventHandlers::CRSComponentRelationshipFlags *, struct Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier *))(**((_QWORD **)this + 41) + 72LL))(
         *((_QWORD *)this + 41),
         a2,
         a3,
         a4);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53B,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v4);
  return v5;
}
