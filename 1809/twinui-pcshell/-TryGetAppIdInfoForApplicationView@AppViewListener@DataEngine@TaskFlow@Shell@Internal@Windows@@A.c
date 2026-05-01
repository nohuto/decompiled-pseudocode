/*
 * XREFs of ?TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$tuple@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@W4AppIdKind@Activities@Data@Internal@Windows@@@std@@PEAUIApplicationView@@I@Z @ 0x18008EF8C
 * Callers:
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x18008E870 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18003374C (--1-$unique_any_t@V-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18004D3F8 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ??$FailedToRetreiveAppIdInfo@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z @ 0x18008DC8C (--$FailedToRetreiveAppIdInfo@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z.c)
 *     ?DetermineAppIdKind@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AW4AppIdKind@Activities@Data@56@PEBG@Z @ 0x18008E66C (-DetermineAppIdKind@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA-AW4AppIdKin.c)
 *     _alloca_probe @ 0x18009B250 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800FA588 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801AD2AC (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?EncodeCommonRelativePath@@YAXPEAG_KPEBG@Z @ 0x1801AD46C (-EncodeCommonRelativePath@@YAXPEAG_KPEBG@Z.c)
 *     ?GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1803A2264 (-GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryGetAppIdInfoForApplicationView(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        DWORD a4)
{
  void *v4; // rsp
  int v7; // edi
  __int64 v8; // rcx
  char *v9; // rbx
  unsigned __int16 **v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  const char *v13; // r9
  signed int LastError; // eax
  LPVOID pv; // [rsp+20h] [rbp-E0h] BYREF
  const WCHAR *v17; // [rsp+28h] [rbp-D8h] BYREF
  DWORD dwSize; // [rsp+30h] [rbp-D0h] BYREF
  void *v19[3]; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR ExeName[264]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v21[2088]; // [rsp+260h] [rbp+160h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+12D8h] [rbp+11D8h]

  v4 = alloca(4800LL);
  v19[1] = (void *)-2LL;
  v17 = 0LL;
  v7 = -1;
  if ( (*(int (__fastcall **)(__int64, const WCHAR **))(*(_QWORD *)a3 + 136LL))(a3, &v17) < 0 )
  {
    if ( !a4 )
      goto LABEL_16;
    v9 = (char *)OpenProcess(0x1000u, 0, a4);
    v19[0] = v9;
    if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      if ( (int)CallerIdentity::GetProcessAppIdWithAppResolverFallback(v9, &v17, v10) >= 0 )
      {
        v7 = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::DetermineAppIdKind(v11, v17);
LABEL_15:
        wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(v19);
        goto LABEL_16;
      }
      dwSize = 260;
      memset_0(ExeName, 0, 0x208uLL);
      if ( QueryFullProcessImageNameW(v9, 0, ExeName, &dwSize) )
      {
        memset_0(v21, 0, 0x1048uLL);
        EncodeCommonRelativePath(v21, v12, ExeName);
        wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
          &pv,
          (char *)v21,
          0xFFFFFFFFFFFFFFFFuLL);
        if ( !pv )
        {
          wil::details::in1diag3::_Throw_NullAlloc(
            retaddr,
            (void *)0xD86,
            (unsigned int)"internal\\sdk\\inc\\wil\\resource.h",
            v13);
          JUMPOUT(0x18008F175LL);
        }
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::operator=(
          &v17,
          &pv);
        if ( pv )
          CoTaskMemFree(pv);
        v7 = 2;
        goto LABEL_15;
      }
    }
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    LODWORD(pv) = LastError;
    TaskFlowDataEngineTelemetry::FailedToRetreiveAppIdInfo<long &>((int *)&pv);
    goto LABEL_15;
  }
  v7 = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::DetermineAppIdKind(v8, v17);
LABEL_16:
  *(_DWORD *)a2 = v7;
  *(_QWORD *)(a2 + 8) = v17;
  return a2;
}
