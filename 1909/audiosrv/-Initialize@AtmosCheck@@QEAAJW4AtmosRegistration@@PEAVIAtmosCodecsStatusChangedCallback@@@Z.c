/*
 * XREFs of ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x180058F90
 * Callers:
 *     ?GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ @ 0x180059CAC (-GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180037244 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180038224 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     ?IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ @ 0x180038280 (-IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ.c)
 *     ?InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ @ 0x180057F1C (-InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x180059428 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180059474 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c0a465a537957875493a7f1285b2ffbd___ @ 0x1800594A4 (Windows--Internal--ComTaskPool--QueueTask__lambda_c0a465a537957875493a7f1285b2ffbd___.c)
 *     ?InitializeCommonSpatialTechInfo@AtmosCheck@@AEAAJXZ @ 0x18005958C (-InitializeCommonSpatialTechInfo@AtmosCheck@@AEAAJXZ.c)
 *     ?UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ @ 0x180140168 (-UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ.c)
 */

__int64 __fastcall AtmosCheck::Initialize(__int64 a1)
{
  int Instance; // edi
  int UniqueContext; // eax
  HANDLE v4; // rax
  const GUID *v5; // r8
  const GUID *v6; // r9
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  AtmosCheck *v10; // rcx
  signed int LastError; // eax
  AtmosCheck *v13; // rcx
  const char *v14; // rdx
  void *v15; // rcx
  void *v16; // rcx
  __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  int v18; // [rsp+38h] [rbp-28h]
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+80h] [rbp+20h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+90h] [rbp+30h] BYREF

  *(_QWORD *)(a1 + 184) = 1LL;
  SecurityDescriptor = 0LL;
  Instance = 0;
  *(_BYTE *)(a1 + 600) = 0;
  if ( !*(_BYTE *)(a1 + 96) )
    AtmosCheck::InitializeLicenseMapLegacy((AtmosCheck *)a1);
  if ( AtmosCheck::IsDolbyLicenseCheckEnabledOnCurrentPlatform((AtmosCheck *)a1) && !*(_BYTE *)(a1 + 96) )
  {
    Instance = CoCreateInstance(
                 &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                 0LL,
                 0x17u,
                 &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                 (LPVOID *)(a1 + 224));
    if ( Instance < 0 )
      goto LABEL_27;
    Instance = AtmosCheck::InitializeCommonSpatialTechInfo((AtmosCheck *)a1);
    if ( Instance < 0 )
      goto LABEL_27;
  }
  if ( !AtmosCheck::IsLicenseEvaluationRequired((AtmosCheck *)a1) )
  {
    *(_BYTE *)(a1 + 96) = 1;
    return 0LL;
  }
  if ( *(_BYTE *)(a1 + 96) )
    goto LABEL_14;
  UniqueContext = SHTaskPoolGetUniqueContext();
  *(_BYTE *)(a1 + 99) = 1;
  *(_DWORD *)(a1 + 220) = UniqueContext;
  *(_QWORD *)(a1 + 40) = &g_AtmosCheckCallback;
  if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(L"D:(A;;GA;;;WD)(A;;GA;;;AC)", 1u, &SecurityDescriptor, 0LL) )
  {
    EventAttributes.nLength = 24;
    EventAttributes.lpSecurityDescriptor = SecurityDescriptor;
    EventAttributes.bInheritHandle = 0;
    v4 = CreateEventW(&EventAttributes, 1, 0, L"Global\\Client_Atmos_Check_Event");
    *(_QWORD *)(a1 + 104) = v4;
    if ( v4 )
    {
      *(_BYTE *)(a1 + 98) = 0;
      goto LABEL_12;
    }
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v14 = "Error ConvertStringSecurityDescriptorToSecurityDescriptor";
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v14 = "Error creating Global\\Client_Atmos_Check_Event";
  }
  AtmosCheck::Trace(v13, v14, LastError);
LABEL_12:
  if ( !*(_BYTE *)(a1 + 99) )
  {
    Instance = AtmosCheck::PerformLicenseCheck((AtmosCheck *)a1, 0, v5, v6);
    if ( Instance < 0 )
      goto LABEL_27;
  }
  *(_BYTE *)(a1 + 96) = 1;
  ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v20, a1);
  ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v17, v20);
  v7 = *(unsigned int *)(a1 + 220);
  v18 = 1;
  Instance = Windows::Internal::ComTaskPool::QueueTask__lambda_c0a465a537957875493a7f1285b2ffbd___(v9, v8, v7, &v17);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
LABEL_14:
  if ( Instance < 0 )
  {
LABEL_27:
    *(_BYTE *)(a1 + 96) = 0;
    AtmosCheck::UninitializeAppServiceMode((PVOID)a1);
    v15 = *(void **)(a1 + 112);
    if ( v15 )
    {
      UnregisterWaitEx(v15, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
      *(_QWORD *)(a1 + 112) = 0LL;
    }
    v16 = *(void **)(a1 + 104);
    if ( v16 )
    {
      CloseHandle(v16);
      *(_QWORD *)(a1 + 104) = 0LL;
    }
  }
  v10 = (AtmosCheck *)SecurityDescriptor;
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  AtmosCheck::Trace(v10, "Init result", Instance);
  return (unsigned int)Instance;
}
