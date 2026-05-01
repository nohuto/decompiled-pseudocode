/*
 * XREFs of ?IsLowCostDevice@CortanaStoreAppHelper@@YAJV?$ComPtr@UIOneSettingsPayload@OneSettings@Flighting@Internal@Windows@@@WRL@Microsoft@@PEAE@Z @ 0x1801C6DBC
 * Callers:
 *     ?UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ @ 0x1801CBF3C (-UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18000F610 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$Undocking_LowCostDiskLimit@AEA_K@CortanaUndocking_IsLowCostDevice@CortanaProactiveTelemetry@@QEAAXAEA_K@Z @ 0x1801C29B8 (--$Undocking_LowCostDiskLimit@AEA_K@CortanaUndocking_IsLowCostDevice@CortanaProactiveTelemetry@@.c)
 *     ??$Undocking_TotalDiskSpace@AEA_K@CortanaUndocking_IsLowCostDevice@CortanaProactiveTelemetry@@QEAAXAEA_K@Z @ 0x1801C36E0 (--$Undocking_TotalDiskSpace@AEA_K@CortanaUndocking_IsLowCostDevice@CortanaProactiveTelemetry@@QE.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801C4438 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgRef_ea_1801C4438.c)
 *     ??1CortanaUndocking_IsLowCostDevice@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801C4EB4 (--1CortanaUndocking_IsLowCostDevice@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@CortanaUndocking_IsLowCostDevice@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1801C8DCC (-StartActivity@CortanaUndocking_IsLowCostDevice@CortanaProactiveTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801C936C (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CortanaStoreAppHelper::IsLowCostDevice(__int64 *a1, _BYTE *a2)
{
  HRESULT v4; // eax
  unsigned int LastError; // ebx
  const char *v6; // r9
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64, double *); // rbx
  int v9; // eax
  unsigned __int64 v10; // rcx
  double v11; // xmm0_8
  PWSTR ppszPath; // [rsp+28h] [rbp-E0h] BYREF
  _ULARGE_INTEGER v14; // [rsp+30h] [rbp-D8h] BYREF
  _ULARGE_INTEGER TotalNumberOfBytes; // [rsp+38h] [rbp-D0h] BYREF
  double v16[3]; // [rsp+40h] [rbp-C8h] BYREF
  union _ULARGE_INTEGER TotalNumberOfFreeBytes; // [rsp+58h] [rbp-B0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+78h] [rbp-90h]
  _QWORD v20[40]; // [rsp+88h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v16[1] = NAN;
  *(_QWORD *)&v16[2] = a1;
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v20,
    (__int64)"CortanaUndocking_IsLowCostDevice");
  v20[0] = &CortanaProactiveTelemetry::CortanaUndocking_IsLowCostDevice::`vftable';
  CortanaProactiveTelemetry::CortanaUndocking_IsLowCostDevice::StartActivity((CortanaProactiveTelemetry::CortanaUndocking_IsLowCostDevice *)v20);
  *a2 = 1;
  ppszPath = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&ppszPath,
    0LL);
  v4 = SHGetKnownFolderPath(&FOLDERID_LocalAppData, 0x4000u, 0LL, &ppszPath);
  LastError = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_5;
  }
  if ( !GetDiskFreeSpaceExW(ppszPath, 0LL, &TotalNumberOfBytes, &TotalNumberOfFreeBytes) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x56,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
                  v6);
LABEL_5:
    if ( ppszPath )
      CoTaskMemFree(ppszPath);
    goto LABEL_19;
  }
  v7 = *a1;
  v8 = *(__int64 (__fastcall **)(__int64, __int64, double *))(*(_QWORD *)*a1 + 80LL);
  v19 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"LowCostDiskLimitGB", 0x13u, 0x12u);
  v9 = v8(v7, v19, v16);
  v14.QuadPart = 0x1000000000LL;
  if ( v9 >= 0 )
  {
    v10 = 0LL;
    v11 = v16[0];
    if ( v16[0] >= 9.223372036854776e18 )
    {
      v11 = v16[0] - 9.223372036854776e18;
      if ( v16[0] - 9.223372036854776e18 < 9.223372036854776e18 )
        v10 = 0x8000000000000000uLL;
    }
    v14.QuadPart = (v10 + (unsigned int)(int)v11) << 30;
  }
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x60,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
      (const char *)(unsigned int)v9);
  CortanaProactiveTelemetry::CortanaUndocking_IsLowCostDevice::Undocking_LowCostDiskLimit<unsigned __int64 &>(
    (__int64)v20,
    (__int64)&v14);
  CortanaProactiveTelemetry::CortanaUndocking_IsLowCostDevice::Undocking_TotalDiskSpace<unsigned __int64 &>(
    (__int64)v20,
    (__int64)&TotalNumberOfBytes);
  if ( TotalNumberOfBytes.QuadPart > v14.QuadPart )
    *a2 = 0;
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(v20);
  if ( ppszPath )
    CoTaskMemFree(ppszPath);
  LastError = 0;
LABEL_19:
  CortanaProactiveTelemetry::CortanaUndocking_IsLowCostDevice::~CortanaUndocking_IsLowCostDevice((CortanaProactiveTelemetry::CortanaUndocking_IsLowCostDevice *)v20);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
  return LastError;
}
