/*
 * XREFs of ?GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z @ 0x1800A9040
 * Callers:
 *     ?AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x18007A100 (-AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCreat.c)
 *     ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x18007A780 (-RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800035B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800242C0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AHPEAX@Z$1?CloseState@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180099200 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AHPEAX@Z$1-CloseState@@YAH0@ZU-$int.c)
 *     IsOpenStateExplicitPresent @ 0x1800CBD84 (IsOpenStateExplicitPresent.c)
 */

__int64 __fastcall GetSoftLandingFolderForUser(HANDLE hToken, WCHAR *lpPathName, __int64 a3)
{
  __int64 v5; // rax
  const char *v6; // r9
  __int64 v7; // rdx
  HRESULT v8; // eax
  unsigned int v9; // ebx
  DWORD LastError; // ebx
  unsigned int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF
  __int64 v15; // [rsp+48h] [rbp+20h] BYREF

  v14 = a3;
  if ( (unsigned __int8)IsOpenStateExplicitPresent() && (unsigned __int8)IsOpenStateExplicitPresent() )
  {
    v5 = OpenStateExplicit(hToken, L"Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy");
    v15 = v5;
    if ( v5 )
    {
      v14 = 260LL;
      if ( (unsigned int)GetStateFolder(v5, 1LL, lpPathName, &v14) )
      {
        v14 = 260LL;
        v8 = PathCchCombine(lpPathName, 0x104uLL, lpPathName, L"Tips");
        v9 = v8;
        if ( v8 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1E,
            (__int64)"onecoreuap\\shell\\twinui\\softlanding\\published\\softlandingcampaign.cpp",
            (const char *)(unsigned int)v8);
LABEL_22:
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CloseState(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CloseState(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>(&v15);
          return v9;
        }
        if ( ImpersonateLoggedOnUser(hToken) )
        {
          if ( CreateDirectoryW(lpPathName, 0LL) || (LastError = GetLastError(), LastError == 183) )
          {
            if ( !RevertToSelf() )
            {
              v7 = 44LL;
              goto LABEL_19;
            }
          }
          else
          {
            if ( !RevertToSelf() )
            {
              v7 = 39LL;
              goto LABEL_19;
            }
            if ( LastError )
            {
              v11 = wil::details::in1diag3::Return_Win32(
                      retaddr,
                      (void *)0x28,
                      (__int64)"onecoreuap\\shell\\twinui\\softlanding\\published\\softlandingcampaign.cpp",
                      (const char *)LastError);
LABEL_20:
              v9 = v11;
              goto LABEL_22;
            }
          }
          v9 = 0;
          goto LABEL_22;
        }
        v7 = 32LL;
      }
      else
      {
        v7 = 26LL;
      }
    }
    else
    {
      v7 = 23LL;
    }
LABEL_19:
    v11 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)v7,
            (__int64)"onecoreuap\\shell\\twinui\\softlanding\\published\\softlandingcampaign.cpp",
            v6);
    goto LABEL_20;
  }
  return 2147942527LL;
}
