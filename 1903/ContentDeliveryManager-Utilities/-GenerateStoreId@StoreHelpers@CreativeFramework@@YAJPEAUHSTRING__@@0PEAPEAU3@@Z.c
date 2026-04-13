/*
 * XREFs of ?GenerateStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0PEAPEAU3@@Z @ 0x180055394
 * Callers:
 *     ?StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z @ 0x180056F40 (-StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z.c)
 *     ?GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@000E0@Z @ 0x180057264 (-GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@000E0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000482C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 */

__int64 __fastcall CreativeFramework::StoreHelpers::GenerateStoreId(
        HSTRING string1,
        HSTRING string2,
        HSTRING *newString,
        HSTRING *a4)
{
  HRESULT v7; // eax
  unsigned int v8; // ebx
  HRESULT v10; // eax
  HRESULT v11; // eax
  __int64 v12; // rdx
  HSTRING newStringa; // [rsp+20h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-28h] BYREF
  HSTRING string; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  *newString = 0LL;
  if ( !WindowsIsStringEmpty(string2) )
  {
    newStringa = 0LL;
    string = 0LL;
    v10 = WindowsCreateStringReference(L"/", 1u, &hstringHeader, &string);
    if ( v10 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
      JUMPOUT(0x1800554C5LL);
    }
    WindowsDeleteString(newStringa);
    newStringa = 0LL;
    v11 = WindowsConcatString(string1, string, &newStringa);
    v8 = v11;
    if ( v11 >= 0 )
    {
      v11 = WindowsConcatString(newStringa, string2, newString);
      v8 = v11;
      if ( v11 >= 0 )
      {
        WindowsDeleteString(newStringa);
        return 0LL;
      }
      v12 = 30LL;
    }
    else
    {
      v12 = 28LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\storehelpers.h",
      (const char *)(unsigned int)v11);
    WindowsDeleteString(newStringa);
    return v8;
  }
  v7 = WindowsDuplicateString(string1, newString);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\storehelpers.h",
      (const char *)(unsigned int)v7);
    return v8;
  }
  return 0LL;
}
