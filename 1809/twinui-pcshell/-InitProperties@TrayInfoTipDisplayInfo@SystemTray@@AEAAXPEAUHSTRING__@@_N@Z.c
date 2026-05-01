/*
 * XREFs of ?InitProperties@TrayInfoTipDisplayInfo@SystemTray@@AEAAXPEAUHSTRING__@@_N@Z @ 0x1802DD52C
 * Callers:
 *     ?RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x1802DD868 (-RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$?0$0BAE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BAE@_W@Z @ 0x1802DC960 (--$-0$0BAE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BAE@_W@Z.c)
 *     ??$GetAs@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@PropertySetAssembler@@AEAA?AV?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@XZ @ 0x1802DCA80 (--$GetAs@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@PropertySetA.c)
 *     ??$InsertHString@PEB_W@PropertySetAssembler@@QEAA_NPEB_WPEAUHSTRING__@@1@Z @ 0x1802DCB30 (--$InsertHString@PEB_W@PropertySetAssembler@@QEAA_NPEB_WPEAUHSTRING__@@1@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall SystemTray::TrayInfoTipDisplayInfo::InitProperties(
        SystemTray::TrayInfoTipDisplayInfo *this,
        HSTRING a2,
        unsigned __int8 a3)
{
  HRESULT v6; // eax
  LPVOID v7; // rbx
  __int64 v8; // rdi
  PCWSTR StringRawBuffer; // rdx
  HSTRING Reserved1; // r8
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  LPVOID ppv; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v18; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+58h] [rbp-B0h]
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-A8h] BYREF
  WCHAR sourceString[264]; // [rsp+88h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2D0h] [rbp+1C8h]

  v19 = -2LL;
  ppv = 0LL;
  v6 = CoCreateInstance(
         &GUID_561df0d0_72eb_46f1_8d0a_5597dbbe6578,
         0LL,
         4u,
         &GUID_63672622_6d18_42ce_9cef_7a0118cd4dfe,
         &ppv);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      174LL,
      (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v18 = 0LL;
  v7 = ppv;
  v8 = *(_QWORD *)ppv;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  if ( (*(int (__fastcall **)(LPVOID, PCWSTR, _QWORD, WCHAR *, int))(v8 + 24))(
         v7,
         StringRawBuffer,
         a3,
         sourceString,
         260) >= 0 )
  {
    Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, sourceString)[1].Reserved.Reserved1;
    PropertySetAssembler::InsertHString<wchar_t const *>((PropertySetAssembler *)&v18, v11, Reserved1, v12);
  }
  PropertySetAssembler::GetAs<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(&v18, &v17);
  v13 = v17;
  if ( v17 )
  {
    v14 = *((_QWORD *)this + 11);
    *((_QWORD *)this + 11) = 0LL;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v15 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v13 + 72LL))(v13, (char *)this + 88);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        188LL,
        (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
        (const char *)(unsigned int)v15);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18 + 1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
}
