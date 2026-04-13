/*
 * XREFs of ?PeekLockScreenRegistryKeys@ContentManagementService@ContentManagement@@UEAAJPEAPEAUHSTRING__@@00PEAE@Z @ 0x18002C900
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000482C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11PEA_N@Z @ 0x180028240 (-PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11P.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::ContentManagementService::PeekLockScreenRegistryKeys(
        ContentManagement::ContentManagementService *this,
        HSTRING *a2,
        HSTRING *a3,
        HSTRING *a4,
        unsigned __int8 *a5)
{
  int v7; // eax
  unsigned int v8; // r14d
  WCHAR *v9; // rdi
  WCHAR *v10; // rsi
  WCHAR *v11; // rbx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rax
  HRESULT v14; // eax
  unsigned __int64 v15; // rax
  HRESULT v16; // eax
  HSTRING *v17; // r15
  HRESULT v18; // eax
  unsigned __int16 *v20; // [rsp+38h] [rbp-41h] BYREF
  PCWSTR sourceString; // [rsp+40h] [rbp-39h] BYREF
  PCWSTR v22; // [rsp+48h] [rbp-31h] BYREF
  PCWSTR v23; // [rsp+50h] [rbp-29h] BYREF
  HSTRING *newString; // [rsp+58h] [rbp-21h]
  __int64 v25; // [rsp+60h] [rbp-19h]
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-11h] BYREF
  HSTRING string; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+57h]

  v25 = -2LL;
  newString = a4;
  if ( a2 )
    *a2 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0;
  LOBYTE(v20) = 0;
  v23 = 0LL;
  v22 = 0LL;
  sourceString = 0LL;
  v7 = CreativeFramework::LockScreenCreativeConfigHelpers::PeekLockScreenRegistryKeys(
         0LL,
         (unsigned __int16 **)&sourceString,
         (unsigned __int16 **)&v22,
         (unsigned __int16 **)&v23,
         &v20);
  v8 = v7;
  v9 = (WCHAR *)sourceString;
  v10 = (WCHAR *)v22;
  v11 = (WCHAR *)v23;
  if ( v7 >= 0 )
  {
    v12 = -1LL;
    if ( a2 )
    {
      string = 0LL;
      v13 = -1LL;
      do
        ++v13;
      while ( sourceString[v13] );
      if ( v13 > 0xFFFFFFFF )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
        __debugbreak();
      }
      if ( (int)v13 + 1 < (unsigned int)v13 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
        __debugbreak();
      }
      v14 = WindowsCreateStringReference(sourceString, v13, &hstringHeader, &string);
      if ( v14 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
        __debugbreak();
      }
      WindowsDuplicateString(string, a2);
    }
    if ( a3 )
    {
      string = 0LL;
      v15 = -1LL;
      do
        ++v15;
      while ( v10[v15] );
      if ( v15 > 0xFFFFFFFF )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
        JUMPOUT(0x18002CB90LL);
      }
      if ( (int)v15 + 1 < (unsigned int)v15 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
        __debugbreak();
      }
      v16 = WindowsCreateStringReference(v10, v15, &hstringHeader, &string);
      if ( v16 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16);
        __debugbreak();
      }
      WindowsDuplicateString(string, a3);
    }
    v17 = newString;
    if ( newString )
    {
      string = 0LL;
      do
        ++v12;
      while ( v11[v12] );
      if ( v12 > 0xFFFFFFFF )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
        __debugbreak();
      }
      if ( (int)v12 + 1 < (unsigned int)v12 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
        __debugbreak();
      }
      v18 = WindowsCreateStringReference(v11, v12, &hstringHeader, &string);
      if ( v18 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v18);
        __debugbreak();
      }
      WindowsDuplicateString(string, v17);
    }
    if ( a5 )
      *a5 = (unsigned __int8)v20;
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x378,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v7);
  }
  if ( v11 )
    CoTaskMemFree(v11);
  if ( v10 )
    CoTaskMemFree(v10);
  if ( v9 )
    CoTaskMemFree(v9);
  return v8;
}
