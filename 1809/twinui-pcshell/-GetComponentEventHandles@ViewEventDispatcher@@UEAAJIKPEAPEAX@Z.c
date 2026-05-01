/*
 * XREFs of ?GetComponentEventHandles@ViewEventDispatcher@@UEAAJIKPEAPEAX@Z @ 0x1802147B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIViewCUIEventStore@@@?$ComPtr@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewCUIEventStore@@@WRL@Microsoft@@@Details@12@@Z @ 0x18020EAB0 (--$As@UIViewCUIEventStore@@@-$ComPtr@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Inte.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::GetComponentEventHandles(
        ViewEventDispatcher *this,
        unsigned int a2,
        unsigned int a3,
        void **a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0LL;
  v7 = Microsoft::WRL::ComPtr<Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore>::As<IViewCUIEventStore>(
         (_QWORD *)this + 40,
         &v12);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, void **))(*(_QWORD *)v12 + 40LL))(v12, a2, a3, a4);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v8 = 0;
      goto LABEL_7;
    }
    v9 = 1473LL;
  }
  else
  {
    v9 = 1472LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)(unsigned int)v7);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  return v8;
}
