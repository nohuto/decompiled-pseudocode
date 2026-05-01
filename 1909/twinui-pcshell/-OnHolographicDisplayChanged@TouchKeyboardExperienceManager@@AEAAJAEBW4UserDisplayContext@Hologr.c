/*
 * XREFs of ?OnHolographicDisplayChanged@TouchKeyboardExperienceManager@@AEAAJAEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x1800AB9CC
 * Callers:
 *     wistd::__function::__func__lambda_d9ee84def1a346d2add6e809cc27b32a__void___cdecl(enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const_&)_::operator() @ 0x1800AB180 (wistd--__function--__func__lambda_d9ee84def1a346d2add6e809cc27b32a__void___cdecl(enum_Windows--I.c)
 *     ?InitializeHolographicAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800AB594 (-InitializeHolographicAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180344700 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnHolographicDisplayChanged(
        KeyboardHosting::TabTipAdapter **this,
        const enum Windows::Internal::Shell::Holographic::UserDisplayContext *a2)
{
  char v3; // si
  HSTRING v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  HSTRING v7; // rbx
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-48h] BYREF
  HSTRING v10; // [rsp+40h] [rbp-30h]
  HSTRING_HEADER v11; // [rsp+48h] [rbp-28h] BYREF
  HSTRING v12; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v3 = *(_DWORD *)a2 == 1;
  if ( this[91] && *((_BYTE *)this + 920) != v3 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      v10 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
      v4 = v10;
      v12 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v11, L"HeadMountedDisplayAttached", 0x1Bu, 0x1Au);
      v5 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[91], v12, v4);
      if ( v5 < 0 )
      {
        v6 = 2904LL;
LABEL_8:
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)v6,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v5);
      }
    }
    else
    {
      v12 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v11, L"0", 2u, 1u);
      v7 = v12;
      v10 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"HeadMountedDisplayAttached",
        0x1Bu,
        0x1Au);
      v5 = KeyboardHosting::TabTipAdapter::SetShellPreference(this[91], v10, v7);
      if ( v5 < 0 )
      {
        v6 = 2908LL;
        goto LABEL_8;
      }
    }
    *((_BYTE *)this + 920) = v3;
  }
  return 0LL;
}
