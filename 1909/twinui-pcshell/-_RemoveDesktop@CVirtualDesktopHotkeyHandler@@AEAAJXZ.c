/*
 * XREFs of ?_RemoveDesktop@CVirtualDesktopHotkeyHandler@@AEAAJXZ @ 0x180411D1C
 * Callers:
 *     ?HandleHotkey@CVirtualDesktopHotkeyHandler@@UEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x1804119E0 (-HandleHotkey@CVirtualDesktopHotkeyHandler@@UEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800500AC (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualDesktopHotkeyHandler::_RemoveDesktop(CVirtualDesktopHotkeyHandler *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rbx
  int v4; // eax
  int v5; // ebx
  unsigned int v6; // r14d
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64, __int64, __int64 *); // rbx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64, __int64, __int64 *); // rbx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v16; // [rsp+70h] [rbp+30h] BYREF
  __int64 v17; // [rsp+78h] [rbp+38h] BYREF
  RTL_SRWLOCK *v18; // [rsp+80h] [rbp+40h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4), &v18);
  v17 = 0LL;
  v2 = *((_QWORD *)this + 2);
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 224LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  v4 = v3(v2, &v17);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = 0;
    v16 = 0LL;
    v7 = *((_QWORD *)this + 2);
    v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v7 + 240LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    v5 = v8(v7, v17, 6LL, &v16);
    if ( v5 == -2147316575 )
    {
      v6 = 1;
      v9 = *((_QWORD *)this + 2);
      v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v9 + 240LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      v5 = v10(v9, v17, 5LL, &v16);
    }
    if ( v5 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**((_QWORD **)this + 3) + 32LL))(
              *((_QWORD *)this + 3),
              v17,
              v16,
              v6);
      v5 = v13;
      if ( v13 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
        goto LABEL_11;
      }
      v11 = (unsigned int)v13;
      v12 = 84LL;
    }
    else
    {
      v11 = (unsigned int)v5;
      v12 = 83LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
      (const char *)v11);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x48,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
    (const char *)(unsigned int)v4);
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v18);
  return (unsigned int)v5;
}
