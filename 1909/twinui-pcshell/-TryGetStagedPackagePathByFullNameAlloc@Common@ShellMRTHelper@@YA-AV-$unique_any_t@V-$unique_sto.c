/*
 * XREFs of ?TryGetStagedPackagePathByFullNameAlloc@Common@ShellMRTHelper@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x18042DAE0
 * Callers:
 *     _lambda_0c37c1600930a15155a5eb9c2ae4abb7_::operator() @ 0x180429190 (_lambda_0c37c1600930a15155a5eb9c2ae4abb7_--operator().c)
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18003B250 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180054690 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800546D4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800546EC (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801339D8 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18017CFEC (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x18042C4F8 (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 */

Microsoft::WRL::WeakRef *__fastcall ShellMRTHelper::Common::TryGetStagedPackagePathByFullNameAlloc(
        Microsoft::WRL::WeakRef *a1,
        const WCHAR *a2)
{
  unsigned int StagedPackagePathByFullName; // eax
  void *v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  void **v8; // rax
  void **v9; // rdi
  unsigned int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  UINT32 pathLength; // [rsp+30h] [rbp+8h] BYREF
  void *v14; // [rsp+40h] [rbp+18h] BYREF

  Microsoft::WRL::WeakRef::WeakRef(a1);
  pathLength = 0;
  StagedPackagePathByFullName = GetStagedPackagePathByFullName(a2, &pathLength, 0LL);
  if ( StagedPackagePathByFullName == 122 )
  {
    v8 = (void **)wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
                    &v14,
                    0LL,
                    pathLength - 1,
                    v7);
    v9 = v8;
    if ( a1 != (Microsoft::WRL::WeakRef *)v8 )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)a1,
        *v8);
      *v9 = 0LL;
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v14);
    if ( *(_QWORD *)a1 )
    {
      v10 = GetStagedPackagePathByFullName(a2, &pathLength, *(PWSTR *)a1);
      if ( v10 )
        wil::details::in1diag3::_Log_Win32(
          retaddr,
          222LL,
          (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\shellmrthelper.common.h",
          (const char *)v10);
    }
    else
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        226LL,
        (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\shellmrthelper.common.h",
        (const char *)0x8007000ELL);
    }
  }
  else if ( StagedPackagePathByFullName != 1168 && StagedPackagePathByFullName != 15701 )
  {
    wil::details::in1diag3::Log_Win32(retaddr, v5, v6, (const char *)StagedPackagePathByFullName);
  }
  return a1;
}
