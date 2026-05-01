/*
 * XREFs of ?SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x180094280
 * Callers:
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180094024 (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@UCore.c)
 *     ?RequestShellStateChange@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardRequestType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardViewType@789UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x1800940C8 (-RequestShellStateChange@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@UCoreKeybo.c)
 *     ?RequestShow@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x1800941C0 (-RequestShow@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@UCoreKeyboardPositionA.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18004059C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Floating_to_wstring@N@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEBGN@Z @ 0x180093D9C (--$_Floating_to_wstring@N@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@0@PE.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1802C6A38 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapter::SetOverrideMonitorSizeForSIP(
        KeyboardHosting::TabTipAdapter *this,
        __int64 a2)
{
  __int64 v3; // rcx
  double v4; // xmm6_8
  int *v5; // rax
  HSTRING_HEADER *v6; // rbx
  int v7; // eax
  const char *v8; // r9
  int v10[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v11; // [rsp+28h] [rbp-90h]
  int v12[2]; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-70h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-68h] BYREF
  HSTRING v15; // [rsp+68h] [rbp-50h]
  HSTRING_HEADER v16; // [rsp+70h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v11 = -2LL;
  v3 = *(_QWORD *)(*((_QWORD *)this + 12) + 200LL);
  v4 = *(double *)(v3 + 176);
  if ( v4 != *((double *)this + 14) )
  {
    try
    {
      std::_Floating_to_wstring<double>((wchar_t *)v12, a2, *(double *)(v3 + 176));
      v5 = v12;
      if ( v13 >= 8 )
        v5 = *(int **)v12;
      *(_QWORD *)v10 = v5;
      v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v16, (const WCHAR **)v10);
      v15 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"OverrideScaleFactor", 0x14u, 0x13u);
      v7 = KeyboardHosting::TabTipAdapter::SetShellPreference(this, v15, (HSTRING)v6[1].Reserved.Reserved1);
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1603LL,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v7);
        JUMPOUT(0x180094398LL);
      }
      std::wstring::_Tidy_deallocate(v12);
      *((double *)this + 14) = v4;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x645,
                             (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
                             v8);
    }
  }
  return 0LL;
}
