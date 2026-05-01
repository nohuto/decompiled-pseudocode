/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopAcessibility@@QEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@@Z @ 0x1803F2E00
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopAcessibility@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopAcessibility@@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x1803F2760 (--$MakeAndInitialize@VVirtualDesktopAcessibility@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDeskt.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005B3A0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x1801418E8 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 *     ?FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEBGPEAG@Z @ 0x18022F2AC (-FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEBGPEAG@Z.c)
 *     ??$Register@UIVirtualDesktopNotificationServicePrivate@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAVVirtualDesktopAcessibility@@@SmartCookie@@QEAAJPEAUIVirtualDesktopNotificationServicePrivate@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAVVirtualDesktopAcessibility@@@Z @ 0x1803F2844 (--$Register@UIVirtualDesktopNotificationServicePrivate@@P81@EAAJPEAUIVirtualDesktopNotification@.c)
 *     ?RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJXZ @ 0x1803F2C20 (-RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJXZ.c)
 */

__int64 __fastcall VirtualDesktopAcessibility::RuntimeClassInitialize(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v9; // r8
  int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned __int16 *v14; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int16 v16; // [rsp+50h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)(a1 + 192), a4);
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)(a1 + 200), a5);
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)(a1 + 216), a6);
  v10 = SmartCookie::Register<IVirtualDesktopNotificationServicePrivate,long (IVirtualDesktopNotificationServicePrivate::*)(IVirtualDesktopNotification *,unsigned long *),long (IVirtualDesktopNotificationServicePrivate::*)(unsigned long),VirtualDesktopAcessibility *>(
          a1 + 64,
          a3,
          v9);
  if ( v10 >= 0 )
  {
    if ( a2 )
    {
      v10 = -2147467259;
      if ( !Windows::Internal::ResourceString::FindAndSize(
              &_ImageBase,
              0x34BEu,
              v11,
              (const unsigned __int16 **)&v14,
              &v16)
        || (v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                    (LPVOID *)(a1 + 224),
                    (__int64)v14,
                    v16),
            v10 < 0) )
      {
        v12 = 125LL;
        goto LABEL_10;
      }
    }
    else
    {
      v10 = VirtualDesktopAcessibility::RecalculateDesktopName((VirtualDesktopAcessibility *)a1);
      if ( v10 < 0 )
      {
        v12 = 120LL;
        goto LABEL_10;
      }
    }
    return 0LL;
  }
  v12 = 116LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopaccessibility.cpp",
    (const char *)(unsigned int)v10);
  return (unsigned int)v10;
}
