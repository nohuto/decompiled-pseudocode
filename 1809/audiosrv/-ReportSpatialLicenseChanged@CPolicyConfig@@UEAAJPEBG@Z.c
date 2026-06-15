/*
 * XREFs of ?ReportSpatialLicenseChanged@CPolicyConfig@@UEAAJPEBG@Z @ 0x1800D3A50
 * Callers:
 *     <none>
 * Callees:
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180042B80 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004C07C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??_GReportSpatialChangeContext@CPolicyConfig@@QEAAPEAXI@Z @ 0x1800CEF6C (--_GReportSpatialChangeContext@CPolicyConfig@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CPolicyConfig::ReportSpatialLicenseChanged(CPolicyConfig *this, char *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  void **v7; // rbx
  void *v8; // rcx
  LPVOID pv[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a2 )
  {
    v4 = -2147024809;
    v5 = 4694LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v5,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)v4);
    return v4;
  }
  (*(void (__fastcall **)(CPolicyConfig *))(*(_QWORD *)this + 8LL))(this);
  v7 = (void **)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    *v7 = 0LL;
    v7[1] = 0LL;
    *v7 = 0LL;
    v7[1] = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
  {
    v4 = -2147024882;
    v5 = 4700LL;
    goto LABEL_3;
  }
  *v7 = this;
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
    pv,
    a2,
    0xFFFFFFFFFFFFFFFFuLL);
  if ( v7 + 1 == pv )
  {
    v8 = pv[0];
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
      v7 + 1,
      pv[0]);
    v8 = 0LL;
  }
  if ( v8 )
    CoTaskMemFree(v8);
  if ( !v7[1] )
  {
    v4 = -2147024882;
    v5 = 4704LL;
    goto LABEL_3;
  }
  if ( !TrySubmitThreadpoolCallback(CPolicyConfig::ReportSpatialLicenseChangedCallback, v7, 0LL) )
  {
    CPolicyConfig::ReportSpatialChangeContext::`scalar deleting destructor'((CPolicyConfig::ReportSpatialChangeContext *)v7);
    (*(void (__fastcall **)(CPolicyConfig *))(*(_QWORD *)this + 16LL))(this);
  }
  return 0LL;
}
