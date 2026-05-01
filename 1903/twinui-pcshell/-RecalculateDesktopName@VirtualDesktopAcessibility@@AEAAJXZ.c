/*
 * XREFs of ?RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJXZ @ 0x1803F2C20
 * Callers:
 *     ?CurrentVirtualDesktopChanged@VirtualDesktopAcessibility@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1803F2B80 (-CurrentVirtualDesktopChanged@VirtualDesktopAcessibility@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?RuntimeClassInitialize@VirtualDesktopAcessibility@@QEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@@Z @ 0x1803F2E00 (-RuntimeClassInitialize@VirtualDesktopAcessibility@@QEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktop.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18004DC78 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?CompareOrdinal@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPEBG_K@Z @ 0x1801100E8 (-CompareOrdinal@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPE.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180129204 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x1802E3370 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     ??4?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAAEAV012@$$QEAV012@@Z @ 0x180354530 (--4-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAAEAV012@$$QEAV01.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopAcessibility::RecalculateDesktopName(VirtualDesktopAcessibility *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, struct IUnknown **); // rbx
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  __int64 v7; // r8
  const WCHAR *v8; // rdx
  HWND DesktopWindow; // rax
  const WCHAR *v11; // [rsp+28h] [rbp-18h] BYREF
  __int64 v12; // [rsp+30h] [rbp-10h]
  __int64 v13; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct IUnknown *v15; // [rsp+70h] [rbp+30h] BYREF
  __int64 v16; // [rsp+78h] [rbp+38h] BYREF
  RTL_SRWLOCK *v17; // [rsp+80h] [rbp+40h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 27) + 32LL))(*((_QWORD *)this + 27), &v17);
  v15 = 0LL;
  v2 = *((_QWORD *)this + 25);
  v3 = *(__int64 (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v2 + 224LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  v4 = v3(v2, &v15);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *, __int64 *))(**((_QWORD **)this + 24) + 104LL))(
           *((_QWORD *)this + 24),
           v15,
           &v16);
    if ( v5 >= 0 )
    {
      v11 = 0LL;
      v12 = 0LL;
      v13 = 0LL;
      v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
             (__int64)&v11,
             &_ImageBase,
             13501LL,
             v16 + 1,
             -2LL);
      v5 = v6;
      if ( v6 >= 0 )
      {
        if ( !(unsigned int)SHIsSameObject(v15, *((struct IUnknown **)this + 26)) )
          goto LABEL_15;
        v7 = v12;
        if ( v12 == -1 )
        {
          if ( v11 )
          {
            do
              ++v7;
            while ( v11[v7] );
          }
          else
          {
            LODWORD(v7) = 0;
          }
        }
        v8 = &String2;
        if ( v11 )
          v8 = v11;
        if ( Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinal(
               (const WCHAR **)this + 28,
               v8,
               v7) != 2 )
        {
LABEL_15:
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::operator=(
            (_QWORD *)this + 28,
            (__int64 *)&v11);
          Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 26, (__int64 *)&v15);
          DesktopWindow = GetDesktopWindow();
          NotifyWinEvent(0x800Cu, DesktopWindow, 0, 0);
        }
        v5 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x48,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopaccessibility.cpp",
          (const char *)(unsigned int)v6);
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v11);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopaccessibility.cpp",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v17);
  return (unsigned int)v5;
}
