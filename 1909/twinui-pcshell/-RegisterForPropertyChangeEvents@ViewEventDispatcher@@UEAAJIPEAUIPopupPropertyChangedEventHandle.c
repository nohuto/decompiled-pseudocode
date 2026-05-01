/*
 * XREFs of ?RegisterForPropertyChangeEvents@ViewEventDispatcher@@UEAAJIPEAUIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18028CCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180295548 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::RegisterForPropertyChangeEvents(
        RTL_SRWLOCK *this,
        unsigned int a2,
        struct Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler *a3,
        struct EventRegistrationToken *a4)
{
  RTL_SRWLOCK *v8; // rsi
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IViewWrapperInternal *v13; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v14; // [rsp+68h] [rbp+20h]

  a4->value = 0LL;
  v13 = 0LL;
  v8 = this + 10;
  AcquireSRWLockShared(this + 10);
  v14 = v8;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)&this[-25], a2, &v13) < 0 )
    a4->value = (__int64)a3;
  if ( v8 )
    ReleaseSRWLockShared(v8);
  if ( v13
    && (v9 = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *, struct Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler *, struct EventRegistrationToken *))(*(_QWORD *)v13 + 912LL))(
               v13,
               a3,
               a4),
        v10 = v9,
        v9 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x67D,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v9);
  }
  else
  {
    v10 = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  return v10;
}
