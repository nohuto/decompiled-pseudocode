/*
 * XREFs of ?GetCanShowPopups@ViewEventDispatcher@@UEAAJIPEAE@Z @ 0x1802146D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180220CE0 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::GetCanShowPopups(RTL_SRWLOCK *this, unsigned int a2, bool *a3)
{
  RTL_SRWLOCK *v6; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IViewWrapperInternal *v11; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v12; // [rsp+60h] [rbp+18h]

  *a3 = 0;
  v6 = this + 10;
  AcquireSRWLockShared(this + 10);
  v12 = v6;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  v7 = ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)&this[-27], a2, &v11);
  v8 = v7;
  if ( v7 >= 0 )
  {
    *a3 = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v11 + 936LL))(v11) == 0;
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x761,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v7);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v8;
}
