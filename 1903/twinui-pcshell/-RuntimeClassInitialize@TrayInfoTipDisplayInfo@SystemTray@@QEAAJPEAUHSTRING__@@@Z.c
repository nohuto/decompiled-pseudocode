/*
 * XREFs of ?RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x18033EB38
 * Callers:
 *     ??$MakeAndInitialize@VTrayInfoTipDisplayInfo@SystemTray@@V12@PEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAVTrayInfoTipDisplayInfo@SystemTray@@$$QEAPEAUHSTRING__@@@Z @ 0x18033D594 (--$MakeAndInitialize@VTrayInfoTipDisplayInfo@SystemTray@@V12@PEAUHSTRING__@@@Details@WRL@Microso.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$IAsyncOperationCompletedHandler@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F520 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$IAsyncOperatio.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VTrayNotifyCallback@SystemTray@@V12@AEAPEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAVTrayNotifyCallback@SystemTray@@AEAPEAUHSTRING__@@@Z @ 0x18033DDDC (--$MakeAndInitialize@VTrayNotifyCallback@SystemTray@@V12@AEAPEAUHSTRING__@@@Details@WRL@Microsof.c)
 *     _anonymous_namespace_::GetBitmapStreamFromHICON @ 0x18033E1A4 (_anonymous_namespace_--GetBitmapStreamFromHICON.c)
 *     _anonymous_namespace_::GetFriendlyNameForExe @ 0x18033E388 (_anonymous_namespace_--GetFriendlyNameForExe.c)
 *     _anonymous_namespace_::GetFriendlyNameForTaskbarSpecialCases @ 0x18033E550 (_anonymous_namespace_--GetFriendlyNameForTaskbarSpecialCases.c)
 *     ?InitProperties@TrayInfoTipDisplayInfo@SystemTray@@AEAAXPEAUHSTRING__@@_N@Z @ 0x18033E7F4 (-InitProperties@TrayInfoTipDisplayInfo@SystemTray@@AEAAXPEAUHSTRING__@@_N@Z.c)
 *     _anonymous_namespace_::TryGetTaskbarCplResourceForTrayItem @ 0x18033ED3C (_anonymous_namespace_--TryGetTaskbarCplResourceForTrayItem.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemTray::TrayInfoTipDisplayInfo::RuntimeClassInitialize(HSTRING *this, HSTRING a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  volatile signed __int32 *v7; // rbx
  char TaskbarCplResourceForTrayItem; // al
  const wchar_t *v9; // r8
  __int64 *BitmapStreamFromHICON; // rax
  HSTRING v11; // rdx
  HSTRING v12; // rcx
  const char *v13; // r9
  HSTRING v14[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HSTRING v16; // [rsp+58h] [rbp+10h] BYREF
  __int64 uID; // [rsp+60h] [rbp+18h] BYREF
  volatile signed __int32 *v18; // [rsp+68h] [rbp+20h] BYREF

  v16 = a2;
  v14[1] = (HSTRING)-2LL;
  v18 = 0LL;
  v4 = Microsoft::WRL::Details::MakeAndInitialize<SystemTray::TrayNotifyCallback,SystemTray::TrayNotifyCallback,HSTRING__ * &>(
         &v18,
         &v16);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = v18;
    LODWORD(uID) = 0;
    TaskbarCplResourceForTrayItem = anonymous_namespace_::TryGetTaskbarCplResourceForTrayItem(&uID, v18 + 16);
    try
    {
      if ( TaskbarCplResourceForTrayItem )
        anonymous_namespace_::GetFriendlyNameForTaskbarSpecialCases(v14, uID);
      else
        anonymous_namespace_::GetFriendlyNameForExe((wchar_t *)v14, v9);
      WindowsDeleteString(this[9]);
      this[9] = v14[0];
      v14[0] = 0LL;
      WindowsDeleteString(0LL);
      BitmapStreamFromHICON = anonymous_namespace_::GetBitmapStreamFromHICON(&uID, *((_QWORD *)v7 + 7));
      v11 = (HSTRING)*BitmapStreamFromHICON;
      *BitmapStreamFromHICON = 0LL;
      v12 = this[10];
      this[10] = v11;
      if ( v12 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v12 + 16LL))(v12);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&uID);
      SystemTray::TrayInfoTipDisplayInfo::InitProperties(
        (SystemTray::TrayInfoTipDisplayInfo *)this,
        a2,
        *((_BYTE *)v7 + 80));
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *>>::Release(v7);
      result = 0LL;
    }
    catch ( ... )
    {
      LODWORD(uID) = wil::details::in1diag3::Return_CaughtException(
                       retaddr,
                       (void *)0x8F,
                       (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
                       v13);
      return (unsigned int)uID;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x86,
      (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
      (const char *)(unsigned int)v4);
    if ( v18 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *>>::Release(v18);
    return v5;
  }
  return result;
}
