/*
 * XREFs of ?VirtualDesktopAcessibility_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180412688
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x180402B70 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VVirtualDesktopAcessibility@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopAcessibility@@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x180411EB0 (--$MakeAndInitialize@VVirtualDesktopAcessibility@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDeskt.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIVirtualDesktopAccessibility@@UIVirtualDesktopAccessibilityInternal@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180412264 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIVirtualDesktopAccessi.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopAcessibility@@@WRL@Microsoft@@IEAAKXZ @ 0x18041234C (-InternalRelease@-$ComPtr@VVirtualDesktopAcessibility@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 VirtualDesktopAcessibility_CreateInstance(unsigned int a1, ...)
{
  VirtualDesktopAcessibility *v1; // rdi
  int CanCastTo; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v7; // [rsp+60h] [rbp+20h] BYREF
  __int64 v8; // [rsp+68h] [rbp+28h] BYREF
  va_list va; // [rsp+68h] [rbp+28h]
  __int64 v10; // [rsp+70h] [rbp+30h] BYREF
  va_list va1; // [rsp+70h] [rbp+30h]
  __int64 v12; // [rsp+78h] [rbp+38h] BYREF
  va_list va2; // [rsp+78h] [rbp+38h]
  __int64 v14; // [rsp+80h] [rbp+40h] BYREF
  va_list va3; // [rsp+80h] [rbp+40h]
  __int64 v16; // [rsp+88h] [rbp+48h]
  VirtualDesktopAcessibility *v17; // [rsp+90h] [rbp+50h] BYREF
  va_list va4; // [rsp+90h] [rbp+50h]
  va_list va5; // [rsp+98h] [rbp+58h] BYREF

  va_start(va5, a1);
  va_start(va4, a1);
  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v12 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v14 = va_arg(va4, _QWORD);
  v16 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v17 = va_arg(va5, VirtualDesktopAcessibility *);
  v7 = a1;
  v1 = v17;
  *(_QWORD *)v17 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<VirtualDesktopAcessibility>::InternalRelease((volatile int **)va4);
  CanCastTo = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopAcessibility,VirtualDesktopAcessibility,enum _TABLETMODESTATE &,IVirtualDesktopNotificationServicePrivate * &,IVirtualDesktopCollection * &,IVirtualDesktopManagerPrivate * &,IVirtualDesktopLock * &>(
                (VirtualDesktopAcessibility **)va4,
                &v7,
                (__int64 *)va,
                (__int64 *)va1,
                (__int64 *)va2,
                (__int64 *)va3);
  v3 = CanCastTo;
  if ( CanCastTo < 0 )
  {
    v4 = 143LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopaccessibility.cpp",
      (const char *)(unsigned int)CanCastTo);
    goto LABEL_7;
  }
  *(_QWORD *)v1 = 0LL;
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IVirtualDesktopAccessibility,IVirtualDesktopAccessibilityInternal,Microsoft::WRL::FtmBase>::CanCastTo(
                (__int64)v17 + 8,
                &GUID_06ca098c_9621_4172_8a11_a49c3c499839);
  v3 = CanCastTo;
  if ( CanCastTo < 0 )
  {
    v4 = 144LL;
    goto LABEL_6;
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v1 + 8LL))(*(_QWORD *)v1);
LABEL_7:
  Microsoft::WRL::ComPtr<VirtualDesktopAcessibility>::InternalRelease((volatile int **)va4);
  return v3;
}
