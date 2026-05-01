/*
 * XREFs of ?RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJXZ @ 0x18038CEA0
 * Callers:
 *     ?CurrentVirtualDesktopChanged@VirtualDesktopAcessibility@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x18038CE00 (-CurrentVirtualDesktopChanged@VirtualDesktopAcessibility@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?RuntimeClassInitialize@VirtualDesktopAcessibility@@QEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@@Z @ 0x18038D088 (-RuntimeClassInitialize@VirtualDesktopAcessibility@@QEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktop.c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?CompareOrdinal@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPEBG_K@Z @ 0x1800ECCD8 (-CompareOrdinal@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPE.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x180289C20 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     ??4?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAAEAV012@$$QEAV012@@Z @ 0x1802F3A10 (--4-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAAEAV012@$$QEAV01.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopAcessibility::RecalculateDesktopName(VirtualDesktopAcessibility *this)
{
  __int64 v2; // rbx
  int v3; // eax
  int v4; // ebx
  int v5; // eax
  __int64 *v6; // rbx
  __int64 v7; // r8
  const WCHAR *v8; // rdx
  const WCHAR **v9; // rdi
  HWND DesktopWindow; // rax
  const WCHAR *v12; // [rsp+28h] [rbp-18h] BYREF
  __int64 v13; // [rsp+30h] [rbp-10h]
  __int64 v14; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IUnknown *v16; // [rsp+60h] [rbp+20h] BYREF
  __int64 v17; // [rsp+68h] [rbp+28h] BYREF
  RTL_SRWLOCK *v18; // [rsp+70h] [rbp+30h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 26) + 32LL))(*((_QWORD *)this + 26), &v18);
  v16 = 0LL;
  v2 = *((_QWORD *)this + 24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  v3 = (*(__int64 (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v2 + 224LL))(v2, &v16);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *, __int64 *))(**((_QWORD **)this + 23) + 104LL))(
           *((_QWORD *)this + 23),
           v16,
           &v17);
    if ( v4 < 0 )
      goto LABEL_20;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
           (__int64)&v12,
           &_ImageBase,
           13501LL,
           v17 + 1,
           -2LL);
    v4 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x48,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopaccessibility.cpp",
        (const char *)(unsigned int)v5);
LABEL_19:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v12);
      goto LABEL_20;
    }
    v6 = (__int64 *)((char *)this + 200);
    if ( (unsigned int)SHIsSameObject(v16, *((struct IUnknown **)this + 25)) )
    {
      v7 = v13;
      if ( v13 == -1 )
      {
        if ( v12 )
        {
          do
            ++v7;
          while ( v12[v7] );
        }
        else
        {
          LODWORD(v7) = 0;
        }
      }
      v8 = &word_180411F30;
      if ( v12 )
        v8 = v12;
      v9 = (const WCHAR **)((char *)this + 216);
      if ( Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinal(
             v9,
             v8,
             v7) == 2 )
        goto LABEL_18;
    }
    else
    {
      v9 = (const WCHAR **)((char *)this + 216);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::operator=(v9, (__int64 *)&v12);
    Microsoft::WRL::ComPtr<IApplicationView>::operator=(v6, (__int64 *)&v16);
    DesktopWindow = GetDesktopWindow();
    NotifyWinEvent(0x800Cu, DesktopWindow, 0, 0);
LABEL_18:
    v4 = 0;
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x42,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopaccessibility.cpp",
    (const char *)(unsigned int)v3);
LABEL_20:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v18);
  return (unsigned int)v4;
}
