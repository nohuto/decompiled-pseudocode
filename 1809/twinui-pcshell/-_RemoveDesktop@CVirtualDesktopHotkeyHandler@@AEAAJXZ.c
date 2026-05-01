/*
 * XREFs of ?_RemoveDesktop@CVirtualDesktopHotkeyHandler@@AEAAJXZ @ 0x18038C7CC
 * Callers:
 *     ?HandleHotkey@CVirtualDesktopHotkeyHandler@@UEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x18038C4A0 (-HandleHotkey@CVirtualDesktopHotkeyHandler@@UEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualDesktopHotkeyHandler::_RemoveDesktop(CVirtualDesktopHotkeyHandler *this)
{
  __int64 v2; // rbx
  int v3; // eax
  int v4; // ebx
  unsigned int v5; // esi
  __int64 v6; // rbx
  __int64 v7; // rbx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v13; // [rsp+60h] [rbp+20h] BYREF
  __int64 v14; // [rsp+68h] [rbp+28h] BYREF
  RTL_SRWLOCK *v15; // [rsp+70h] [rbp+30h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4), &v15);
  v14 = 0LL;
  v2 = *((_QWORD *)this + 2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 224LL))(v2, &v14);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = 0;
    v13 = 0LL;
    v6 = *((_QWORD *)this + 2);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v6 + 240LL))(v6, v14, 6LL, &v13);
    if ( v4 == -2147316575 )
    {
      v5 = 1;
      v7 = *((_QWORD *)this + 2);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v7 + 240LL))(v7, v14, 5LL, &v13);
    }
    if ( v4 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**((_QWORD **)this + 3) + 32LL))(
              *((_QWORD *)this + 3),
              v14,
              v13,
              v5);
      v4 = v10;
      if ( v10 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
        goto LABEL_11;
      }
      v8 = (unsigned int)v10;
      v9 = 84LL;
    }
    else
    {
      v8 = (unsigned int)v4;
      v9 = 83LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
      (const char *)v8);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x48,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
    (const char *)(unsigned int)v3);
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v15);
  return (unsigned int)v4;
}
