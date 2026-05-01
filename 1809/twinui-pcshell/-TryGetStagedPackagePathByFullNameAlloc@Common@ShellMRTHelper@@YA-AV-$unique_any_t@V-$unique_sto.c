/*
 * XREFs of ?TryGetStagedPackagePathByFullNameAlloc@Common@ShellMRTHelper@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x1803AC2D8
 * Callers:
 *     _lambda_79f009b23088b8a5ebca1297f4390c86_::operator() @ 0x1803A8C44 (_lambda_79f009b23088b8a5ebca1297f4390c86_--operator().c)
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18002A0F0 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004D38C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18004D3C0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18004D3F8 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800EFCD4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18013434C (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x1803AB1BC (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 */

Microsoft::WRL::WeakRef *__fastcall ShellMRTHelper::Common::TryGetStagedPackagePathByFullNameAlloc(
        Microsoft::WRL::WeakRef *a1,
        const WCHAR *a2)
{
  unsigned int StagedPackagePathByFullName; // eax
  void *v5; // rdx
  __int64 v6; // r8
  void **v7; // rax
  void **v8; // rdi
  unsigned int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  UINT32 pathLength; // [rsp+30h] [rbp+8h] BYREF
  void *v13; // [rsp+40h] [rbp+18h] BYREF

  Microsoft::WRL::WeakRef::WeakRef(a1);
  pathLength = 0;
  StagedPackagePathByFullName = GetStagedPackagePathByFullName(a2, &pathLength, 0LL);
  if ( StagedPackagePathByFullName == 122 )
  {
    v7 = (void **)wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
                    &v13,
                    0LL,
                    pathLength - 1);
    v8 = v7;
    if ( a1 != (Microsoft::WRL::WeakRef *)v7 )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)a1,
        *v7);
      *v8 = 0LL;
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>(&v13);
    if ( *(_QWORD *)a1 )
    {
      v9 = GetStagedPackagePathByFullName(a2, &pathLength, *(PWSTR *)a1);
      if ( v9 )
        wil::details::in1diag3::_Log_Win32(
          retaddr,
          216LL,
          (__int64)"internal\\onecoreuapshell\\inc\\shellmrthelper.common.h",
          (const char *)v9);
    }
    else
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        220LL,
        (__int64)"internal\\onecoreuapshell\\inc\\shellmrthelper.common.h",
        (const char *)0x8007000ELL);
    }
  }
  else if ( StagedPackagePathByFullName != 1168 && StagedPackagePathByFullName != 15701 )
  {
    wil::details::in1diag3::Log_Win32(retaddr, v5, v6, (const char *)StagedPackagePathByFullName);
  }
  return a1;
}
