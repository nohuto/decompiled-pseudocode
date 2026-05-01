/*
 * XREFs of _lambda_79f009b23088b8a5ebca1297f4390c86_::operator() @ 0x1803A8C44
 * Callers:
 *     ?TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z @ 0x1803ABFB8 (-TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18004D3C0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?TryGetStagedPackagePathByFullNameAlloc@Common@ShellMRTHelper@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x1803AC2D8 (-TryGetStagedPackagePathByFullNameAlloc@Common@ShellMRTHelper@@YA-AV-$unique_any_t@V-$unique_sto.c)
 */

__int64 __fastcall lambda_79f009b23088b8a5ebca1297f4390c86_::operator()(HSTRING *a1, const WCHAR *a2, PWSTR *a3)
{
  const WCHAR *StringRawBuffer; // rax
  HRESULT v6; // eax
  unsigned int v7; // ebx
  HSTRING v9; // rcx
  PCWSTR v10; // rax
  HRESULT v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PCWSTR pszPathIn; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *a1 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*a1, 0LL);
    v6 = PathAllocCombine(StringRawBuffer, a2, 1u, a3);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x102,
        (__int64)"internal\\onecoreuapshell\\inc\\shellmrthelper.common.h",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
  else
  {
    v9 = a1[1];
    if ( v9 )
    {
      v10 = WindowsGetStringRawBuffer(v9, 0LL);
      ShellMRTHelper::Common::TryGetStagedPackagePathByFullNameAlloc(&pszPathIn, v10);
      if ( pszPathIn )
      {
        v11 = PathAllocCombine(pszPathIn, a2, 1u, a3);
        v7 = v11;
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x108,
            (__int64)"internal\\onecoreuapshell\\inc\\shellmrthelper.common.h",
            (const char *)(unsigned int)v11);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>((void **)&pszPathIn);
          return v7;
        }
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>((void **)&pszPathIn);
    }
  }
  return 0LL;
}
