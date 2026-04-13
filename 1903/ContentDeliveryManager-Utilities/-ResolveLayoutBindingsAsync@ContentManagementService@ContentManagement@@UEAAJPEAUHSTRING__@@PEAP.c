/*
 * XREFs of ?ResolveLayoutBindingsAsync@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x18002AD00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180020AA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 *     Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ResolveLayoutBindingsOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_986e623d0ce256a5f32fdc507965e6c2___ @ 0x180036590 (Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-_anonymou_ea_180036590.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::ContentManagementService::ResolveLayoutBindingsAsync(
        ContentManagement::ContentManagementService *this,
        HSTRING a2,
        struct Windows::Foundation::IAsyncAction **a3)
{
  HRESULT v5; // eax
  int v6; // edi
  __int64 v7; // r8
  volatile signed __int64 *v8; // rbx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  HSTRING v14; // [rsp+28h] [rbp-58h]
  _DWORD v15[4]; // [rsp+38h] [rbp-48h] BYREF
  HSTRING newString[3]; // [rsp+48h] [rbp-38h] BYREF
  volatile signed __int64 *v17; // [rsp+60h] [rbp-20h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h]
  char v19; // [rsp+70h] [rbp-10h]
  __int64 v20; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v20 = -2LL;
  v5 = WindowsDuplicateString(a2, newString);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x255,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v5);
  }
  else
  {
    v14 = newString[0];
    WindowsDeleteString(0LL);
    v8 = (volatile signed __int64 *)((char *)this - 80);
    if ( v8 )
    {
      v9 = *((_QWORD *)v8 + 14);
      newString[1] = (HSTRING)v9;
      while ( v9 >= 0 )
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange64(v8 + 14, v9 + 1, v9);
        if ( v10 == v9 )
          goto LABEL_7;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v9 + 16));
    }
LABEL_7:
    v17 = v8;
    if ( v8 )
    {
      v11 = *((_QWORD *)v8 + 14);
      newString[2] = (HSTRING)v11;
      while ( v11 >= 0 )
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange64(v8 + 14, v11 + 1, v11);
        if ( v12 == v11 )
          goto LABEL_12;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v11 + 16));
    }
LABEL_12:
    string = v14;
    v19 = 0;
    v15[0] = 3;
    v15[1] = 128;
    v15[2] = 0;
    v6 = Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::ResolveLayoutBindingsOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_986e623d0ce256a5f32fdc507965e6c2___(
           v15,
           a3,
           v7,
           &v17);
    if ( string )
      WindowsDeleteString(string);
    if ( v17 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(v17);
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x260,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v6);
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(v8);
  }
  return (unsigned int)v6;
}
