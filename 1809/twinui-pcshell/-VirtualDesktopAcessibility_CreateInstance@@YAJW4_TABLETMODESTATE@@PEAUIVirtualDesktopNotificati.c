/*
 * XREFs of ?VirtualDesktopAcessibility_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18038D1B8
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x18037D5B0 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VVirtualDesktopAcessibility@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopAcessibility@@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18038C958 (--$MakeAndInitialize@VVirtualDesktopAcessibility@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDeskt.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIVirtualDesktopAccessibility@@UIVirtualDesktopAccessibilityInternal@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18038CD8C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIVirtualDesktopAccessi.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopAcessibility@@@WRL@Microsoft@@IEAAKXZ @ 0x18038CE7C (-InternalRelease@-$ComPtr@VVirtualDesktopAcessibility@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 VirtualDesktopAcessibility_CreateInstance(unsigned int a1, ...)
{
  VirtualDesktopAcessibility *v1; // rdi
  int v2; // eax
  int CanCastTo; // ebx
  unsigned __int64 v4; // r9
  __int64 v5; // rdx
  _DWORD *v6; // rcx
  _DWORD *v7; // r9
  VirtualDesktopAcessibility *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v11; // [rsp+60h] [rbp+20h] BYREF
  __int64 v12; // [rsp+68h] [rbp+28h] BYREF
  va_list va; // [rsp+68h] [rbp+28h]
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF
  va_list va1; // [rsp+70h] [rbp+30h]
  __int64 v16; // [rsp+78h] [rbp+38h] BYREF
  va_list va2; // [rsp+78h] [rbp+38h]
  __int64 v18; // [rsp+80h] [rbp+40h] BYREF
  va_list va3; // [rsp+80h] [rbp+40h]
  __int64 v20; // [rsp+88h] [rbp+48h]
  VirtualDesktopAcessibility *v21; // [rsp+90h] [rbp+50h] BYREF
  va_list va4; // [rsp+90h] [rbp+50h]
  va_list va5; // [rsp+98h] [rbp+58h] BYREF

  va_start(va5, a1);
  va_start(va4, a1);
  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v16 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v18 = va_arg(va4, _QWORD);
  v20 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v21 = va_arg(va5, VirtualDesktopAcessibility *);
  v11 = a1;
  v1 = v21;
  *(_QWORD *)v21 = 0LL;
  v21 = 0LL;
  Microsoft::WRL::ComPtr<VirtualDesktopAcessibility>::InternalRelease((volatile int **)va4);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopAcessibility,VirtualDesktopAcessibility,enum _TABLETMODESTATE &,IVirtualDesktopNotificationServicePrivate * &,IVirtualDesktopCollection * &,IVirtualDesktopManagerPrivate * &,IVirtualDesktopLock * &>(
         (VirtualDesktopAcessibility **)va4,
         &v11,
         (__int64 *)va,
         (__int64 *)va1,
         (__int64 *)va2,
         (__int64 *)va3);
  CanCastTo = v2;
  if ( v2 < 0 )
  {
    v4 = (unsigned int)v2;
    v5 = 143LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopaccessibility.cpp",
      (const char *)v4);
    goto LABEL_12;
  }
  *(_QWORD *)v1 = 0LL;
  if ( InlineIsEqualGUID(&GUID_06ca098c_9621_4172_8a11_a49c3c499839, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v8 = v21;
    *(_QWORD *)v1 = v21;
    (*(void (__fastcall **)(VirtualDesktopAcessibility *))(*(_QWORD *)v8 + 8LL))(v8);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v6, &GUID_c179334c_4295_40d3_bea1_c654d965605a) )
    {
      *(_QWORD *)v1 = v21;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IVirtualDesktopAccessibility,IVirtualDesktopAccessibilityInternal,Microsoft::WRL::FtmBase>::CanCastTo(
                    (__int64)v21 + 8,
                    v7);
      if ( CanCastTo < 0 )
        goto LABEL_9;
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v1 + 8LL))(*(_QWORD *)v1);
  }
LABEL_9:
  if ( CanCastTo < 0 )
  {
    v4 = (unsigned int)CanCastTo;
    v5 = 144LL;
    goto LABEL_11;
  }
LABEL_12:
  Microsoft::WRL::ComPtr<VirtualDesktopAcessibility>::InternalRelease((volatile int **)va4);
  return (unsigned int)CanCastTo;
}
