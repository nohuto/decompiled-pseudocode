/*
 * XREFs of ?_CycleInDirection@CVirtualDesktopHotkeyHandler@@AEAAJW4VirtualDesktopSwitchDirection@@@Z @ 0x18038C67C
 * Callers:
 *     ?HandleHotkey@CVirtualDesktopHotkeyHandler@@UEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x18038C4A0 (-HandleHotkey@CVirtualDesktopHotkeyHandler@@UEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualDesktopHotkeyHandler::_CycleInDirection(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  int v5; // eax
  int v6; // ebx
  __int64 v7; // rbx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v11; // [rsp+60h] [rbp+20h] BYREF
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF
  RTL_SRWLOCK *v13; // [rsp+78h] [rbp+38h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**(_QWORD **)(a1 + 32) + 32LL))(*(_QWORD *)(a1 + 32), &v13);
  v12 = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 224LL))(v4, &v12);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v11 = 0LL;
    v7 = *(_QWORD *)(a1 + 16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 240LL))(
           v7,
           v12,
           (unsigned int)(a2 != 0) + 3,
           &v11);
    if ( v6 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(
             *(_QWORD *)(a1 + 24),
             v11,
             a2);
      v6 = v8;
      if ( v8 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x37,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
          (const char *)(unsigned int)v8);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v13);
  return (unsigned int)v6;
}
