/*
 * XREFs of ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x1800546E4
 * Callers:
 *     ?GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ @ 0x180054608 (-GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ.c)
 * Callees:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180016490 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180016870 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     ?IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ @ 0x180016B00 (-IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ.c)
 *     ?IsDolbyOEMLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ @ 0x180019A34 (-IsDolbyOEMLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ.c)
 *     ?InitializeCommonSpatialTechInfo@AtmosCheck@@AEAAJXZ @ 0x180042550 (-InitializeCommonSpatialTechInfo@AtmosCheck@@AEAAJXZ.c)
 *     ?InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ @ 0x18004AEBC (-InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x1800549F8 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ?QueueCompleteInitialization@AtmosCheck@@AEAAJW4AtmosRegistration@@@Z @ 0x1800681BC (-QueueCompleteInitialization@AtmosCheck@@AEAAJW4AtmosRegistration@@@Z.c)
 *     ?UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ @ 0x18013C1EC (-UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ.c)
 */

__int64 __fastcall AtmosCheck::Initialize(__int64 a1)
{
  int Instance; // edi
  __int64 v3; // rcx
  int UniqueContext; // eax
  HANDLE v6; // rax
  signed int LastError; // eax
  AtmosCheck *v8; // rcx
  const char *v9; // rdx
  void *v10; // rdx
  signed int v11; // eax
  AtmosCheck *v12; // rcx
  PTP_TIMER ThreadpoolTimer; // rax
  signed int v14; // eax
  struct _TP_TIMER *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  AtmosCheck *v18; // rcx
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+30h] [rbp-38h] BYREF
  struct _FILETIME pftDueTime; // [rsp+70h] [rbp+8h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+80h] [rbp+18h] BYREF

  *(_QWORD *)(a1 + 152) = 1LL;
  SecurityDescriptor = 0LL;
  Instance = 0;
  *(_BYTE *)(a1 + 552) = 0;
  if ( !*(_BYTE *)(a1 + 72) )
    AtmosCheck::InitializeLicenseMapLegacy((AtmosCheck *)a1);
  if ( AtmosCheck::IsDolbyLicenseCheckEnabledOnCurrentPlatform((AtmosCheck *)a1) && !*(_BYTE *)(a1 + 72) )
  {
    Instance = CoCreateInstance(
                 &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                 0LL,
                 0x17u,
                 &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                 (LPVOID *)(a1 + 192));
    if ( Instance < 0 )
      goto LABEL_35;
    Instance = AtmosCheck::InitializeCommonSpatialTechInfo((LPOLESTR *)a1);
    if ( Instance < 0 )
      goto LABEL_35;
  }
  if ( !AtmosCheck::IsLicenseEvaluationRequired((AtmosCheck *)a1) )
  {
    if ( !AtmosCheck::IsDolbyOEMLicenseCheckEnabledOnCurrentPlatform((AtmosCheck *)a1)
      || (Instance = AtmosCheck::QueueCompleteInitialization(v3), Instance >= 0) )
    {
      *(_BYTE *)(a1 + 72) = 1;
      return 0LL;
    }
    goto LABEL_35;
  }
  if ( *(_BYTE *)(a1 + 72) )
    goto LABEL_34;
  UniqueContext = SHTaskPoolGetUniqueContext();
  *(_BYTE *)(a1 + 75) = 1;
  *(_DWORD *)(a1 + 188) = UniqueContext;
  *(_QWORD *)(a1 + 16) = &g_AtmosCheckCallback;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GA;;;WD)(A;;GA;;;AC)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v9 = "Error creating Global\\Client_Atmos_Check_Event";
    goto LABEL_21;
  }
  EventAttributes.nLength = 24;
  EventAttributes.lpSecurityDescriptor = SecurityDescriptor;
  EventAttributes.bInheritHandle = 0;
  v6 = CreateEventW(&EventAttributes, 1, 0, L"Global\\Client_Atmos_Check_Event");
  *(_QWORD *)(a1 + 80) = v6;
  if ( !v6 )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v9 = "Error ConvertStringSecurityDescriptorToSecurityDescriptor";
LABEL_21:
    AtmosCheck::Trace(v8, v9, LastError);
    goto LABEL_22;
  }
  *(_BYTE *)(a1 + 74) = 0;
LABEL_22:
  if ( !*(_BYTE *)(a1 + 75) )
  {
    Instance = AtmosCheck::PerformLicenseCheck((AtmosCheck *)a1, 0);
    if ( Instance < 0 )
      goto LABEL_35;
  }
  v10 = *(void **)(a1 + 80);
  if ( v10
    && !RegisterWaitForSingleObject(
          (PHANDLE)(a1 + 88),
          v10,
          AtmosCheck::StaticClientAtmosCheckEventFired,
          (PVOID)a1,
          0xFFFFFFFF,
          0x18u) )
  {
    v11 = GetLastError();
    if ( v11 > 0 )
      v11 = (unsigned __int16)v11 | 0x80070000;
    AtmosCheck::Trace(v12, "RegisterWaitForSingleObject Error", v11);
    *(_BYTE *)(a1 + 74) = 1;
  }
  *(_BYTE *)(a1 + 72) = 1;
  ThreadpoolTimer = CreateThreadpoolTimer(
                      (PTP_TIMER_CALLBACK)AtmosCheck::StaticAtmosRefreshTimerCallback,
                      (PVOID)a1,
                      0LL);
  *(_QWORD *)(a1 + 168) = ThreadpoolTimer;
  if ( !ThreadpoolTimer )
  {
    v14 = GetLastError();
    Instance = v14;
    if ( v14 > 0 )
      Instance = (unsigned __int16)v14 | 0x80070000;
    if ( Instance < 0 )
      goto LABEL_35;
  }
  v15 = *(struct _TP_TIMER **)(a1 + 168);
  pftDueTime.dwHighDateTime = -1;
  pftDueTime.dwLowDateTime = 1294967296;
  SetThreadpoolTimer(v15, &pftDueTime, 0x5265C00u, 0x7530u);
  Instance = AtmosCheck::QueueCompleteInitialization(a1);
LABEL_34:
  if ( Instance < 0 )
  {
LABEL_35:
    *(_BYTE *)(a1 + 72) = 0;
    AtmosCheck::UninitializeAppServiceMode((AtmosCheck *)a1);
    v16 = *(void **)(a1 + 88);
    if ( v16 )
    {
      UnregisterWaitEx(v16, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
      *(_QWORD *)(a1 + 88) = 0LL;
    }
    v17 = *(void **)(a1 + 80);
    if ( v17 )
    {
      CloseHandle(v17);
      *(_QWORD *)(a1 + 80) = 0LL;
    }
  }
  v18 = (AtmosCheck *)SecurityDescriptor;
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  AtmosCheck::Trace(v18, "Init result", Instance);
  return (unsigned int)Instance;
}
