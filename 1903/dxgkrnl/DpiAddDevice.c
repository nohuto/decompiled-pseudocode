/*
 * XREFs of DpiAddDevice @ 0x1C01617D0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000CF44 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0018EF0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DxgkDiagCalcDuration1us @ 0x1C001E190 (DxgkDiagCalcDuration1us.c)
 *     DpiGetDeviceRegistryPaths @ 0x1C001EF34 (DpiGetDeviceRegistryPaths.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x1C00231F0 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     McTemplateK0ppq @ 0x1C003DB58 (McTemplateK0ppq.c)
 *     ?Feature_ReportWddm2_6ToDriver_Intel__private_IsEnabledPreCheck@@YAHXZ @ 0x1C004B4A4 (-Feature_ReportWddm2_6ToDriver_Intel__private_IsEnabledPreCheck@@YAHXZ.c)
 *     ?Feature_ReportWddm2_6ToDriver_Nvidia__private_IsEnabledPreCheck@@YAHXZ @ 0x1C004B4D8 (-Feature_ReportWddm2_6ToDriver_Nvidia__private_IsEnabledPreCheck@@YAHXZ.c)
 *     DpiDxgkDdiLinkDevice @ 0x1C0052318 (DpiDxgkDdiLinkDevice.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D489C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiReadPnpRegistryValue @ 0x1C0142644 (DpiReadPnpRegistryValue.c)
 *     DpEvalAcpiMethod @ 0x1C01449C0 (DpEvalAcpiMethod.c)
 *     DpiFdoDetectPostDevice @ 0x1C0158DC4 (DpiFdoDetectPostDevice.c)
 *     DpiGetDevicePropertyString @ 0x1C0160DB4 (DpiGetDevicePropertyString.c)
 *     DpiFdoInitializeFdo @ 0x1C016362C (DpiFdoInitializeFdo.c)
 *     DpiQueryBusInterface @ 0x1C0164174 (DpiQueryBusInterface.c)
 *     DpiDxgkDdiAddDevice @ 0x1C017DE8C (DpiDxgkDdiAddDevice.c)
 *     DpiAcpiRegisterAcpiCallbacks @ 0x1C017E798 (DpiAcpiRegisterAcpiCallbacks.c)
 *     DpiGetAgpStatus @ 0x1C017EDF4 (DpiGetAgpStatus.c)
 *     DpiGetVgaStatus @ 0x1C017EEC0 (DpiGetVgaStatus.c)
 *     DpiDxgkDdiExchangePreStartInfo @ 0x1C017FE64 (DpiDxgkDdiExchangePreStartInfo.c)
 *     ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1C02001FC (-DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYP.c)
 *     ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C02002C4 (-DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINF.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C0200390 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     ?DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C02004E8 (-DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     DpiSetDeviceUsageType @ 0x1C029E7FC (DpiSetDeviceUsageType.c)
 *     DpiFdoResetFdo @ 0x1C02A247C (DpiFdoResetFdo.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x1C02ACAD8 (DpiAcpiUnregisterAcpiCallbacks.c)
 *     DpiLdaLinkDeviceToChain @ 0x1C02AE224 (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C02AE9C0 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiDxgkDdiRemoveDevice @ 0x1C02AEF5C (DpiDxgkDdiRemoveDevice.c)
 */

__int64 __fastcall DpiAddDevice(struct _DRIVER_OBJECT *ClientIdentificationAddress, struct _DEVICE_OBJECT *a2)
{
  BOOL v2; // r12d
  char *DeviceExtension; // rbx
  char *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  char *DriverObjectExtension; // r13
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 started; // rsi
  __int64 v15; // rax
  const UNICODE_STRING *p_DriverName; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  char v19; // al
  int DevicePropertyString; // eax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  BOOL v26; // r12d
  char v27; // al
  __int64 v28; // rdx
  int RegistryValues; // eax
  __int64 v30; // r8
  __int64 v31; // rax
  struct _KMUTANT *v32; // rdi
  _DWORD *v33; // rcx
  _DWORD *v34; // rcx
  void (__fastcall *v35)(_QWORD); // rax
  void (__fastcall *v36)(_QWORD); // rax
  void (__fastcall *v37)(_QWORD); // rax
  void (__fastcall *v38)(_QWORD); // rax
  void *v39; // rcx
  __int64 v40; // rcx
  struct _DEVICE_OBJECT *v41; // rcx
  char v42; // bl
  __int64 v43; // r8
  ULONG v44; // edi
  int v45; // r12d
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  NTSTATUS v52; // eax
  char v53; // r12
  char v54; // al
  struct _DEVICE_OBJECT *v55; // rdi
  PDEVICE_OBJECT v56; // rax
  __int64 v57; // rdx
  __int64 v58; // r8
  int DeviceRegistryPaths; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  int v63; // eax
  int v64; // ecx
  struct _DEVICE_OBJECT *v65; // r12
  NTSTATUS DeviceProperty; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rsi
  __int64 v71; // rax
  _DWORD *v72; // rdi
  NTSTATUS v73; // eax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // rsi
  __int64 v78; // rax
  struct _DEVICE_OBJECT *v79; // rdi
  __int64 v80; // rax
  int v81; // eax
  __int64 v82; // rax
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  bool v84; // al
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rdi
  __int64 v88; // rax
  PVOID PoolWithTag; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r9
  __int64 v93; // rax
  unsigned __int16 *v94; // rcx
  int v95; // edx
  int v96; // edi
  char v97; // al
  struct _DEVICE_OBJECT *v98; // rcx
  int AgpStatus; // eax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // rdi
  __int64 v104; // rax
  char v105; // al
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rcx
  __int64 v109; // rax
  int v110; // eax
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // rdi
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rax
  __int64 v118; // rax
  struct _DEVICE_OBJECT *v119; // rdi
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  int v123; // eax
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  PVOID v127; // rdi
  __int16 v128; // r10
  const wchar_t **v129; // r9
  unsigned int v130; // edx
  const wchar_t *v131; // rax
  char *v132; // rcx
  __int64 v133; // rax
  _DWORD *v134; // rdx
  unsigned __int64 v135; // r8
  int v136; // eax
  int v137; // eax
  __int64 v138; // rax
  char v139; // r15
  int v140; // eax
  PVOID *v141; // rcx
  _DWORD *v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // r9
  __int64 v147; // rax
  NTSTATUS v148; // eax
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // r8
  __int64 v152; // rax
  _DWORD *v153; // rax
  _DWORD *v154; // rax
  __int64 v155; // rcx
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // rax
  __int64 v160; // rdx
  __int64 v161; // rdx
  __int64 v162; // r8
  __int64 v163; // rax
  __int64 v164; // rax
  _QWORD *v165; // rax
  _QWORD *v166; // rcx
  PVOID *v167; // rax
  __int64 DiagnosticInfoArgs; // rax
  __int64 v169; // rdi
  unsigned int v170; // r14d
  struct _DEVICE_OBJECT *v171; // r15
  unsigned int v172; // eax
  __int64 v173; // r8
  BOOLEAN Exclusive[8]; // [rsp+28h] [rbp-D8h]
  char v176; // [rsp+40h] [rbp-C0h]
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-B8h] BYREF
  char v178; // [rsp+50h] [rbp-B0h]
  char v179; // [rsp+51h] [rbp-AFh]
  char v180; // [rsp+52h] [rbp-AEh]
  char v181; // [rsp+53h] [rbp-ADh]
  char v182; // [rsp+54h] [rbp-ACh]
  char v183; // [rsp+55h] [rbp-ABh]
  char v184; // [rsp+56h] [rbp-AAh] BYREF
  char v185; // [rsp+57h] [rbp-A9h]
  char v186; // [rsp+58h] [rbp-A8h]
  char v187; // [rsp+59h] [rbp-A7h]
  ULONG ResultLength; // [rsp+5Ch] [rbp-A4h] BYREF
  int v189; // [rsp+60h] [rbp-A0h]
  PDEVICE_OBJECT TargetDevice; // [rsp+68h] [rbp-98h]
  int v191; // [rsp+70h] [rbp-90h]
  unsigned int v192; // [rsp+74h] [rbp-8Ch] BYREF
  BOOL v193; // [rsp+78h] [rbp-88h]
  int v194; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v195; // [rsp+80h] [rbp-80h] BYREF
  void *Source1; // [rsp+88h] [rbp-78h] BYREF
  PVOID P; // [rsp+90h] [rbp-70h] BYREF
  __int64 v198; // [rsp+98h] [rbp-68h] BYREF
  PDRIVER_OBJECT DriverObject; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING String1; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING v201; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING v202; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING v203; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING v204; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING v205; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v206; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v207[14]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v208[3]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v209; // [rsp+198h] [rbp+98h] BYREF
  int v210; // [rsp+1A0h] [rbp+A0h]
  _QWORD v211[8]; // [rsp+1B0h] [rbp+B0h] BYREF
  _DWORD v212[2]; // [rsp+1F0h] [rbp+F0h]
  const wchar_t *v213; // [rsp+1F8h] [rbp+F8h] BYREF
  int v214; // [rsp+200h] [rbp+100h]
  const wchar_t *v215; // [rsp+208h] [rbp+108h]
  int v216; // [rsp+210h] [rbp+110h]
  const wchar_t *v217; // [rsp+218h] [rbp+118h]
  int v218; // [rsp+220h] [rbp+120h]
  const wchar_t *v219; // [rsp+228h] [rbp+128h]
  _DWORD v220[10]; // [rsp+230h] [rbp+130h] BYREF
  __int128 v221; // [rsp+258h] [rbp+158h] BYREF
  __int64 v222; // [rsp+268h] [rbp+168h]
  int v223; // [rsp+270h] [rbp+170h]
  wchar_t v224; // [rsp+274h] [rbp+174h]
  __int128 v225; // [rsp+278h] [rbp+178h] BYREF
  __int64 v226; // [rsp+288h] [rbp+188h]
  wchar_t v227; // [rsp+290h] [rbp+190h]
  _OWORD v228[2]; // [rsp+298h] [rbp+198h] BYREF
  __int64 v229; // [rsp+2B8h] [rbp+1B8h]
  wchar_t v230; // [rsp+2C0h] [rbp+1C0h]
  _OWORD v231[2]; // [rsp+2C8h] [rbp+1C8h] BYREF
  wchar_t v232; // [rsp+2E8h] [rbp+1E8h]
  _OWORD v233[2]; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int64 v234; // [rsp+310h] [rbp+210h]
  int v235; // [rsp+318h] [rbp+218h]
  _OWORD v236[2]; // [rsp+320h] [rbp+220h] BYREF
  __int64 v237; // [rsp+340h] [rbp+240h]

  v209 = 0LL;
  LOBYTE(v2) = 0;
  v210 = 0;
  DeviceExtension = 0LL;
  v227 = aDriverVgpu[12];
  v6 = 0LL;
  v225 = *(_OWORD *)L"\\Driver\\VGPU";
  TargetDevice = a2;
  v203.Buffer = (wchar_t *)&v225;
  v232 = aDriverWddmwarp[16];
  v231[0] = *(_OWORD *)L"\\Driver\\WddmWarp";
  v201.Buffer = (wchar_t *)v231;
  String1.Buffer = (wchar_t *)v236;
  v226 = *(_QWORD *)L"VGPU";
  v230 = aDriverBasicdis[20];
  v236[0] = *(_OWORD *)L"\\Driver\\BasicRender";
  v204.Buffer = (wchar_t *)v228;
  v237 = *(_QWORD *)L"der";
  v223 = *(_DWORD *)L"md";
  v231[1] = *(_OWORD *)L"WddmWarp";
  v224 = aDriverSrakmd[14];
  DriverObject = ClientIdentificationAddress;
  v228[0] = *(_OWORD *)L"\\Driver\\BasicDisplay";
  v195 = 0LL;
  v236[1] = *(_OWORD *)L"BasicRender";
  v187 = 0;
  DeviceObject = 0LL;
  v229 = *(_QWORD *)L"play";
  LOBYTE(v191) = 0;
  v228[1] = *(_OWORD *)L"BasicDisplay";
  v185 = 0;
  v221 = *(_OWORD *)L"\\Driver\\srakmd";
  v181 = 0;
  v222 = *(_QWORD *)L"srakmd";
  v186 = 0;
  v233[0] = *(_OWORD *)L"\\Driver\\VirtualRender";
  v176 = 0;
  v180 = 0;
  v178 = 0;
  v183 = 0;
  v184 = 0;
  v179 = 0;
  v193 = v2;
  v182 = 0;
  v189 = 3;
  *(_QWORD *)&v203.Length = 1703960LL;
  *(_QWORD *)&v201.Length = 2228256LL;
  *(_QWORD *)&String1.Length = 2621478LL;
  *(_QWORD *)&v204.Length = 2752552LL;
  *(_QWORD *)&v205.Length = 1966108LL;
  v205.Buffer = (wchar_t *)&v221;
  v233[1] = *(_OWORD *)L"VirtualRender";
  v235 = *(_DWORD *)L"r";
  v202.Buffer = (wchar_t *)v233;
  v234 = *(_QWORD *)L"ender";
  *(_QWORD *)&v202.Length = 2883626LL;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0ppq((__int64)&DxgkControlGuid_Context, &EventEnterDpiAddDevice, 0LL, ClientIdentificationAddress, a2, 0);
  v206 = MEMORY[0xFFFFF78000000320];
  DriverObjectExtension = (char *)IoGetDriverObjectExtension(ClientIdentificationAddress, ClientIdentificationAddress);
  if ( !DriverObjectExtension
    || *((_DWORD *)DriverObjectExtension + 4) != 1953656900
    || *((_DWORD *)DriverObjectExtension + 5) != 1 )
  {
    LODWORD(started) = -1073741811;
    v165 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v7);
    v165[3] = 275LL;
    v165[4] = 21LL;
    v165[5] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v165);
    goto LABEL_242;
  }
  v10 = DpiDxgkDdiAddDevice(DriverObjectExtension, a2, &v195);
  started = v10;
  if ( v10 < 0 )
  {
    v15 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v15 + 24) = *((_QWORD *)DriverObjectExtension + 18);
    *(_QWORD *)(v15 + 32) = started;
LABEL_9:
    WdLogEvent5_WdError(v15);
LABEL_242:
    v139 = 0;
    goto LABEL_243;
  }
  p_DriverName = &ClientIdentificationAddress->DriverName;
  v187 = 1;
  if ( !RtlCompareUnicodeString(&String1, &ClientIdentificationAddress->DriverName, 1u) )
  {
    v18 = 1LL;
    v19 = 1;
    v176 = 1;
    v178 = 1;
    goto LABEL_70;
  }
  if ( RtlCompareUnicodeString(&v201, p_DriverName, 1u) )
  {
    if ( RtlCompareUnicodeString(&v202, p_DriverName, 1u) )
    {
      if ( RtlCompareUnicodeString(&v203, p_DriverName, 1u) )
      {
        if ( RtlCompareUnicodeString(&v204, p_DriverName, 1u) )
        {
          v26 = RtlCompareUnicodeString(&v205, p_DriverName, 1u) == 0;
          v27 = DriverObjectExtension[134];
          v193 = v26;
          v179 = v27;
          memset(v207, 0, sizeof(v207));
          v28 = *((_QWORD *)DriverObjectExtension + 6);
          v207[2] = L"Start";
          LODWORD(v207[1]) = 292;
          v207[3] = &v192;
          LODWORD(v207[4]) = 67108868;
          LODWORD(v207[6]) = 4;
          RegistryValues = RtlQueryRegistryValuesEx(0LL, v28, v207, 0LL, 0LL);
          started = RegistryValues;
          if ( RegistryValues < 0 )
            goto LABEL_30;
          if ( v192 == 3 )
            goto LABEL_69;
          v31 = WdLogNewEntry5_WdError(v18, v17, v30);
          *(_QWORD *)(v31 + 24) = v192;
          WdLogEvent5_WdError(v31);
          LODWORD(started) = -1073741637;
        }
        else
        {
          Source1 = 0LL;
          v180 = 1;
          DevicePropertyString = DpiGetDevicePropertyString(
                                   TargetDevice,
                                   DevicePropertyHardwareID,
                                   PagedPool,
                                   &Source1,
                                   &ResultLength);
          started = DevicePropertyString;
          if ( DevicePropertyString < 0 )
          {
            v23 = WdLogNewEntry5_WdError(v21, v17, v22);
            *(_QWORD *)(v23 + 24) = started;
            WdLogEvent5_WdError(v23);
            goto LABEL_242;
          }
          if ( ResultLength >= 0x24 && RtlCompareMemory(Source1, L"ROOT\\BasicDisplay", 0x24uLL) == 36 )
          {
            v176 = 1;
            if ( byte_1C00A2752 )
            {
              LODWORD(started) = -1073741637;
              v25 = WdLogNewEntry5_WdEvent(v24);
              *(_QWORD *)(v25 + 24) = 0LL;
              WdLogEvent5_WdEvent(v25);
            }
          }
          v18 = (__int64)Source1;
          if ( Source1 )
            ExFreePoolWithTag(Source1, 0);
          if ( (int)started >= 0 )
          {
            v19 = v176;
            goto LABEL_70;
          }
        }
LABEL_33:
        v32 = (struct _KMUTANT *)(DriverObjectExtension + 72);
        goto LABEL_34;
      }
      v183 = 1;
    }
    else
    {
      v182 = 1;
    }
  }
  else
  {
    v178 = 1;
  }
LABEL_69:
  v19 = 0;
LABEL_70:
  v43 = v195;
  if ( v195 )
  {
    v44 = 5768;
    v45 = 2;
    v189 = 0;
    if ( *((_QWORD *)DriverObjectExtension + 77) )
    {
      if ( v19 )
      {
        LODWORD(started) = -1073741637;
        v46 = WdLogNewEntry5_WdError(v18, v17, v195);
        *(_QWORD *)(v46 + 24) = *((_QWORD *)DriverObjectExtension + 77);
        *(_QWORD *)(v46 + 32) = -1073741637LL;
        goto LABEL_73;
      }
      v47 = DpiDxgkDdiLinkDevice((__int64)DriverObjectExtension, (__int64)TargetDevice, v195, (int *)&v209);
      started = v47;
      if ( v47 < 0 )
      {
        v51 = WdLogNewEntry5_WdError(v49, v48, v50);
        *(_QWORD *)(v51 + 24) = *((_QWORD *)DriverObjectExtension + 77);
        *(_QWORD *)(v51 + 32) = started;
        WdLogEvent5_WdError(v51);
        goto LABEL_242;
      }
      if ( HIDWORD(v209) > 0x100 )
      {
        LODWORD(started) = -1073741756;
        v46 = WdLogNewEntry5_WdError(v49, v48, v50);
        *(_QWORD *)(v46 + 24) = -1073741756LL;
        goto LABEL_73;
      }
      if ( HIDWORD(v209) && !(_BYTE)v210 )
      {
        v44 = 2744;
        v189 = 1;
        v45 = 3;
      }
    }
  }
  else
  {
    v189 = 2;
    v44 = 496;
    v45 = 4;
    if ( v19 )
    {
LABEL_72:
      LODWORD(started) = -1073741637;
      v46 = WdLogNewEntry5_WdError(v18, v17, v43);
      *(_QWORD *)(v46 + 24) = -1073741637LL;
LABEL_73:
      WdLogEvent5_WdError(v46);
      goto LABEL_33;
    }
  }
  v52 = IoCreateDevice(DriverObject, v44, 0LL, 0x23u, v179 == 0 ? 0x100 : 0, 0, &DeviceObject);
  started = v52;
  if ( v52 < 0 )
  {
LABEL_30:
    v15 = WdLogNewEntry5_WdError(v18, v17, v30);
    *(_QWORD *)(v15 + 24) = started;
    goto LABEL_9;
  }
  v189 |= (unsigned int)DeviceObject & 0xFFFF00;
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  *((_DWORD *)DeviceExtension + 5) = v45;
  v53 = v176;
  *((_DWORD *)DeviceExtension + 4) = 1953656900;
  *((_QWORD *)DeviceExtension + 3) = DeviceObject;
  *((_QWORD *)DeviceExtension + 4) = DeviceObject;
  *((_QWORD *)DeviceExtension + 5) = DriverObjectExtension;
  *((_QWORD *)DeviceExtension + 6) = v195;
  v54 = v182;
  DeviceExtension[56] = 1;
  DeviceExtension[481] = v54;
  DeviceExtension[480] = v176;
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
  v55 = TargetDevice;
  *((_QWORD *)DeviceExtension + 19) = TargetDevice;
  v56 = IoAttachDeviceToDeviceStack(DeviceObject, v55);
  *((_QWORD *)DeviceExtension + 20) = v56;
  if ( !v56 )
  {
    LODWORD(started) = -1073741810;
    v46 = WdLogNewEntry5_WdError(0LL, v57, v58);
    *(_QWORD *)(v46 + 24) = -1073741810LL;
    goto LABEL_73;
  }
  *((_DWORD *)DeviceExtension + 71) = 1;
  *((_DWORD *)DeviceExtension + 70) = 1;
  *((_QWORD *)DeviceExtension + 38) = DpiFdoHandleRemoveDevice;
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && (unsigned int)(*((_DWORD *)DeviceExtension + 5) - 2) <= 1 )
  {
    v6 = DeviceExtension;
    DeviceExtension[2693] = v178;
    DeviceExtension[1155] = v180;
    DeviceExtension[1159] = v179;
    DeviceExtension[2694] = v183;
    DeviceExtension[2695] = v193;
    *((_DWORD *)DeviceExtension + 680) = 0;
    *((_QWORD *)DeviceExtension + 36) = &DpiFdoHandleStartDevice;
    *((_QWORD *)DeviceExtension + 59) = &DpiFdoHandleSurpriseRemoval;
    *((_QWORD *)DeviceExtension + 49) = &DpiFdoHandleFilterResources;
    if ( !byte_1C00A2751 && !DeviceExtension[480] )
      *((_QWORD *)DeviceExtension + 40) = &DpiFdoHandleStopDevice;
    *(_QWORD *)(DeviceExtension + 500) = v209;
    *((_DWORD *)DeviceExtension + 127) = v210;
    DeviceRegistryPaths = DpiGetDeviceRegistryPaths((__int64)DeviceObject, (__int64)v55, (__int64)DriverObjectExtension);
    started = DeviceRegistryPaths;
    if ( DeviceRegistryPaths < 0 )
      goto LABEL_204;
    if ( (int)DpiQueryBusInterface(*((PDEVICE_OBJECT *)DeviceExtension + 20), (__int64)(DeviceExtension + 856)) >= 0 )
    {
      if ( *((_QWORD *)DriverObjectExtension + 29) )
      {
        v63 = DpiAcpiRegisterAcpiCallbacks(DeviceObject);
        v64 = (unsigned __int8)v191;
        if ( v63 >= 0 )
          v64 = 1;
        v191 = v64;
      }
      DeviceExtension[1157] = 1;
    }
    v65 = TargetDevice;
    DeviceProperty = IoGetDeviceProperty(
                       TargetDevice,
                       DevicePropertyBusNumber,
                       4u,
                       DeviceExtension + 1144,
                       &ResultLength);
    v70 = DeviceProperty;
    if ( DeviceProperty < 0 )
    {
      v71 = WdLogNewEntry5_WdWarning(v68, v67, v69);
      *(_QWORD *)(v71 + 24) = v70;
      WdLogEvent5_WdWarning(v71);
      *((_DWORD *)DeviceExtension + 286) = -1;
    }
    v72 = DeviceExtension + 1148;
    v73 = IoGetDeviceProperty(v65, DevicePropertyAddress, 4u, DeviceExtension + 1148, &ResultLength);
    v77 = v73;
    if ( v73 < 0 || *v72 == -1 )
    {
      v78 = WdLogNewEntry5_WdWarning(v75, v74, v76);
      *(_QWORD *)(v78 + 24) = v77;
      WdLogEvent5_WdWarning(v78);
      *v72 = -1;
    }
    v79 = TargetDevice;
    LODWORD(started) = IoGetDeviceProperty(
                         TargetDevice,
                         DevicePropertyBusTypeGuid,
                         0x10u,
                         DeviceExtension + 544,
                         &ResultLength);
    if ( (int)started < 0 || ResultLength < 0x10 )
    {
      v80 = WdLogNewEntry5_WdEvent(v61);
      *(_QWORD *)(v80 + 24) = DeviceObject;
      WdLogEvent5_WdEvent(v80);
      *((GUID *)DeviceExtension + 34) = GUID_BUS_TYPE_INVALID;
    }
    if ( !v176 )
    {
      v81 = DpiFdoDetectPostDevice((__int64)DeviceObject, &v184);
      started = v81;
      if ( v81 < 0 )
        goto LABEL_204;
    }
    if ( v184 )
    {
      v82 = WdLogNewEntry5_WdEvent(v61);
      *(_QWORD *)(v82 + 24) = DeviceObject;
      WdLogEvent5_WdEvent(v82);
      *((_WORD *)DeviceExtension + 576) = 257;
      byte_1C00A2AA0 = 1;
      if ( byte_1C00A2751 == 1 )
      {
        AttachedDeviceReference = IoGetAttachedDeviceReference(v79);
        DpiSetDeviceUsageType(AttachedDeviceReference);
        ObfDereferenceObject(AttachedDeviceReference);
        v79 = TargetDevice;
      }
    }
    v194 = 0;
    v84 = (int)DpiReadPnpRegistryValue((__int64)DeviceObject, L"SoftGPUAdapter", (char *)&v194, 4u, 2u) >= 0 && v194;
    DeviceExtension[2692] = v84;
    if ( RtlCompareMemory(DeviceExtension + 544, &GUID_BUS_TYPE_PCI, 0x10uLL) == 16 )
    {
      v86 = WdLogNewEntry5_WdEvent(v85);
      *(_QWORD *)(v86 + 24) = DeviceObject;
      WdLogEvent5_WdEvent(v86);
      DpiQueryBusInterface(v79, (__int64)(DeviceExtension + 560));
      if ( !*((_QWORD *)DeviceExtension + 77) )
      {
        v87 = -1073741127LL;
LABEL_120:
        LODWORD(started) = v87;
        v88 = WdLogNewEntry5_WdError(v18, v17, v43);
        *(_QWORD *)(v88 + 24) = v87;
        WdLogEvent5_WdError(v88);
        goto LABEL_33;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x74727044u);
      *((_QWORD *)DeviceExtension + 139) = PoolWithTag;
      if ( !PoolWithTag )
      {
        LODWORD(started) = -1073741801;
        v93 = WdLogNewEntry5_WdLowResource(v91, v90, 0LL, v92);
        *(_QWORD *)(v93 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v93);
        goto LABEL_33;
      }
      (*((void (__fastcall **)(_QWORD, _QWORD, PVOID, _QWORD, int))DeviceExtension + 77))(
        *((_QWORD *)DeviceExtension + 71),
        0LL,
        PoolWithTag,
        0LL,
        256);
      v94 = (unsigned __int16 *)*((_QWORD *)DeviceExtension + 139);
      *((_DWORD *)DeviceExtension + 280) = 1;
      v95 = *v94;
      *((_DWORD *)DeviceExtension + 281) = v95;
      v96 = v94[1];
      *((_DWORD *)DeviceExtension + 282) = v96;
      *((_DWORD *)DeviceExtension + 285) = *((unsigned __int8 *)v94 + 8);
      if ( (v94[7] & 0x7F) == 0 )
      {
        *((_DWORD *)DeviceExtension + 283) = v94[22];
        *((_DWORD *)DeviceExtension + 284) = v94[23];
      }
      if ( v95 != 22611 || (v97 = 1, v96 != 4097) )
        v97 = 0;
      v98 = TargetDevice;
      DeviceExtension[2696] = v97;
      DpiQueryBusInterface(v98, (__int64)(DeviceExtension + 624));
      DpiQueryBusInterface(*((PDEVICE_OBJECT *)DeviceExtension + 20), (__int64)(DeviceExtension + 672));
      AgpStatus = DpiGetAgpStatus(DeviceObject);
      v103 = AgpStatus;
      if ( AgpStatus >= 0 && !*((_QWORD *)DeviceExtension + 85) )
      {
        v104 = WdLogNewEntry5_WdWarning(v101, v100, v102);
        *(_QWORD *)(v104 + 24) = v103;
        WdLogEvent5_WdWarning(v104);
      }
      LODWORD(started) = DpiGetVgaStatus(DeviceObject);
      v105 = DeviceExtension[1152];
      if ( (int)started < 0 )
      {
        if ( v105 )
        {
          v107 = WdLogNewEntry5_WdWarning(v18, v17, v43);
          *(_QWORD *)(v107 + 24) = DeviceObject;
          WdLogEvent5_WdWarning(v107);
        }
      }
      else if ( v105
             || !byte_1C00A2AA0
             && (v106 = WdLogNewEntry5_WdWarning(v18, v17, v43),
                 *(_QWORD *)(v106 + 24) = DeviceObject,
                 WdLogEvent5_WdWarning(v106),
                 DeviceExtension[1152] = 1,
                 byte_1C00A2AA1 = 1,
                 DeviceExtension[1152]) )
      {
        if ( byte_1C00A2755 )
          DeviceExtension[1156] = 1;
      }
    }
    else if ( RtlCompareMemory(DeviceExtension + 544, &GUID_BUS_TYPE_ACPI, 0x10uLL) == 16 )
    {
      memset(v208, 0, sizeof(v208));
      v109 = WdLogNewEntry5_WdEvent(v108);
      *(_QWORD *)(v109 + 24) = DeviceObject;
      WdLogEvent5_WdEvent(v109);
      if ( !DeviceExtension[1157] )
        goto LABEL_72;
      *((_DWORD *)DeviceExtension + 280) = 2;
      BYTE1(v208[1]) = 0;
      WORD1(v208[1]) = 0;
      strcpy((char *)v208, "AeiC_HID");
      HIDWORD(v208[1]) = 0;
      memset(v220, 0, 0x24uLL);
      v110 = DpEvalAcpiMethod((__int64)DeviceObject, 0xFFFFFFFFLL, (int *)v208, 0x18u, v220, 0x24u);
      v114 = v110;
      if ( v110 >= 0 )
      {
        *((_DWORD *)DeviceExtension + 281) = v220[4];
        *((_DWORD *)DeviceExtension + 282) = v220[5];
      }
      else
      {
        v115 = WdLogNewEntry5_WdError(v112, v111, v113);
        *(_QWORD *)(v115 + 24) = v114;
        WdLogEvent5_WdError(v115);
      }
      strcpy((char *)v208, "AeiC_SUB");
      BYTE1(v208[1]) = 0;
      WORD1(v208[1]) = 0;
      HIDWORD(v208[1]) = 0;
      memset(v220, 0, 0x24uLL);
      if ( (int)DpEvalAcpiMethod((__int64)DeviceObject, 0xFFFFFFFFLL, (int *)v208, 0x18u, v220, 0x24u) >= 0 )
      {
        *((_DWORD *)DeviceExtension + 283) = v220[4];
        *((_DWORD *)DeviceExtension + 284) = v220[5];
      }
      else
      {
        v117 = WdLogNewEntry5_WdEvent(v116);
        *(_QWORD *)(v117 + 24) = DpEvalAcpiMethod;
        WdLogEvent5_WdEvent(v117);
      }
      strcpy((char *)v208, "AeiC_HRV");
      BYTE1(v208[1]) = 0;
      WORD1(v208[1]) = 0;
      HIDWORD(v208[1]) = 0;
      memset(v220, 0, 0x24uLL);
      LODWORD(started) = DpEvalAcpiMethod((__int64)DeviceObject, 0xFFFFFFFFLL, (int *)v208, 0x18u, v220, 0x24u);
      if ( (int)started >= 0 )
      {
        *((_DWORD *)DeviceExtension + 285) = LOWORD(v220[4]);
      }
      else
      {
        v118 = WdLogNewEntry5_WdEvent(v18);
        *(_QWORD *)(v118 + 24) = DpEvalAcpiMethod;
        WdLogEvent5_WdEvent(v118);
        LODWORD(started) = 0;
      }
      if ( DeviceExtension[1152] )
      {
        v119 = IoGetAttachedDeviceReference(TargetDevice);
        started = (int)DpiSetDeviceUsageType(v119);
        ObfDereferenceObject(v119);
        if ( (int)started < 0 )
        {
          v120 = WdLogNewEntry5_WdError(v18, v17, v43);
          *(_QWORD *)(v120 + 24) = started;
          WdLogEvent5_WdError(v120);
          LODWORD(started) = 0;
        }
      }
    }
    else if ( RtlCompareMemory(DeviceExtension + 544, &GUID_BUS_VMBUS, 0x10uLL) == 16 )
    {
      v121 = WdLogNewEntry5_WdEvent(v18);
      *(_QWORD *)(v121 + 24) = DeviceObject;
      WdLogEvent5_WdEvent(v121);
      if ( DeviceExtension[2694] )
      {
        *((_DWORD *)DeviceExtension + 281) = 5140;
        *((_QWORD *)DeviceExtension + 141) = 705LL;
        *((_DWORD *)DeviceExtension + 284) = 0;
        *((_DWORD *)DeviceExtension + 285) = 1;
      }
      *((_DWORD *)DeviceExtension + 280) = 4;
    }
    else if ( DeviceExtension[1159] )
    {
      *((_DWORD *)DeviceExtension + 281) = 5140;
      *((_QWORD *)DeviceExtension + 142) = 0LL;
      *((_DWORD *)DeviceExtension + 280) = 0;
      *((_QWORD *)DeviceExtension + 141) = 139LL;
    }
    else if ( DeviceExtension[480] )
    {
      *((_DWORD *)DeviceExtension + 280) = 3;
      *((_DWORD *)DeviceExtension + 281) = 5140;
      if ( DeviceExtension[1155] )
      {
        *((_DWORD *)DeviceExtension + 282) = 141;
      }
      else if ( DeviceExtension[2693] )
      {
        *((_DWORD *)DeviceExtension + 282) = 140;
      }
    }
    else
    {
      if ( !DeviceExtension[2695] && (!g_OSTestSigningEnabled || !DeviceExtension[2692]) )
        goto LABEL_72;
      *((_DWORD *)DeviceExtension + 280) = 3;
      if ( DeviceExtension[2692] )
      {
        *((_DWORD *)DeviceExtension + 281) = 5140;
        P = 0LL;
        v123 = DpiGetDevicePropertyString(v79, DevicePropertyCompatibleIDs, PagedPool, &P, &ResultLength);
        started = v123;
        if ( v123 >= 0 && (v127 = P) != 0LL )
        {
          v128 = *(_WORD *)P;
          v213 = L"SoftGPU_Full_D3D12";
          v129 = &v213;
          v212[0] = 135;
          v215 = L"SoftGPU_Full_D3D9L";
          v130 = 0;
          v214 = 128;
          v217 = L"SoftGPU_Rod";
          v219 = L"SoftGPU_Dod";
          v216 = 136;
          v218 = 137;
          while ( 1 )
          {
            v131 = *v129;
            if ( v128 )
              break;
LABEL_180:
            if ( !*v131 )
              goto LABEL_183;
            ++v130;
            v129 += 2;
            if ( v130 >= 4 )
              goto LABEL_184;
          }
          v132 = (char *)((_BYTE *)P - (_BYTE *)v131);
          while ( *v131 )
          {
            if ( *(_WORD *)&v132[(_QWORD)v131] == *v131 )
            {
              if ( *(_WORD *)&v132[(_QWORD)++v131] )
                continue;
            }
            goto LABEL_180;
          }
LABEL_183:
          *((_DWORD *)DeviceExtension + 282) = v212[4 * v130];
LABEL_184:
          ExFreePoolWithTag(v127, 0);
        }
        else
        {
          v133 = WdLogNewEntry5_WdError(v125, v124, v126);
          *(_QWORD *)(v133 + 24) = started;
          WdLogEvent5_WdError(v133);
        }
      }
    }
    if ( !DeviceExtension[1152] && !DeviceExtension[480] && DeviceExtension[1155] )
    {
      v122 = WdLogNewEntry5_WdEvent(v18);
      *(_QWORD *)(v122 + 24) = DeviceObject;
      WdLogEvent5_WdEvent(v122);
      LODWORD(started) = -1071774664;
      goto LABEL_33;
    }
    if ( DeviceExtension[2692] && DeviceExtension[2693] )
    {
      v87 = -1073741811LL;
      goto LABEL_120;
    }
    KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 181);
    v134 = DeviceExtension + 1312;
    *((_WORD *)DeviceExtension + 648) = 64;
    v135 = 7LL;
    if ( (((_BYTE)DeviceExtension + 32) & 4) != 0 )
    {
      *v134 = 1;
      v135 = 6LL;
      v134 = DeviceExtension + 1316;
    }
    memset64(v134, 0x100000001uLL, v135 >> 1);
    if ( (v135 & 1) != 0 )
      v134[v135 - 1] = 1;
    KeInitializeDpc((PRKDPC)(DeviceExtension + 1384), (PKDEFERRED_ROUTINE)DpiFdoDpcForIsr, DeviceObject);
    KeInitializeMutex((PRKMUTEX)DeviceExtension + 45, 0);
    KeInitializeMutex((PRKMUTEX)(DeviceExtension + 2600), 0);
    *((_QWORD *)DeviceExtension + 314) = DeviceExtension + 2504;
    *((_QWORD *)DeviceExtension + 313) = DeviceExtension + 2504;
    *((_QWORD *)DeviceExtension + 324) = DeviceExtension + 2584;
    *((_QWORD *)DeviceExtension + 323) = DeviceExtension + 2584;
    *((_QWORD *)DeviceExtension + 339) = DeviceExtension + 2704;
    *((_QWORD *)DeviceExtension + 338) = DeviceExtension + 2704;
    KeInitializeEvent((PRKEVENT)(DeviceExtension + 1240), NotificationEvent, 1u);
    KeInitializeEvent((PRKEVENT)(DeviceExtension + 1264), NotificationEvent, 1u);
    *((_QWORD *)DeviceExtension + 153) = 0LL;
    *((_DWORD *)DeviceExtension + 292) = 1;
    *((_QWORD *)DeviceExtension + 147) = 0LL;
    *((_DWORD *)DeviceExtension + 296) = 0;
    KeInitializeEvent((PRKEVENT)(DeviceExtension + 1192), SynchronizationEvent, 0);
    *((_DWORD *)DeviceExtension + 681) = 45060;
    if ( *((_DWORD *)DriverObjectExtension + 7) >= 0xB003u && !(unsigned __int8)ExQueryFastCacheDevLicense() )
    {
      v136 = *((_DWORD *)DeviceExtension + 281);
      if ( v136 == 4098 )
      {
        *(_DWORD *)&Exclusive[4] = 0;
        wil_details_FeaturePropertyCache_ReportUsageToService(
          (__int64)&Feature_ReportWddm2_6ToDriver_Amd__private_propertyCache,
          19673568LL,
          (const struct FEATURE_LOGGED_TRAITS *)&unk_1C00700C0,
          1,
          3);
        v136 = *((_DWORD *)DeviceExtension + 281);
      }
      if ( v136 == 4318 )
      {
        Feature_ReportWddm2_6ToDriver_Nvidia__private_IsEnabledPreCheck();
        v136 = *((_DWORD *)DeviceExtension + 281);
      }
      if ( v136 == 32902 )
        Feature_ReportWddm2_6ToDriver_Intel__private_IsEnabledPreCheck();
    }
    if ( *((_DWORD *)DeviceExtension + 4) != 1953656900 )
    {
LABEL_206:
      v53 = v176;
      goto LABEL_209;
    }
    if ( *((_DWORD *)DeviceExtension + 5) == 2 )
    {
      v137 = DpiFdoInitializeFdo(DeviceObject);
      started = v137;
      if ( v137 < 0 )
      {
LABEL_204:
        v138 = WdLogNewEntry5_WdError(v61, v60, v62);
        *(_QWORD *)(v138 + 24) = started;
        WdLogEvent5_WdError(v138);
        v139 = 0;
        goto LABEL_243;
      }
      v185 = 1;
      goto LABEL_206;
    }
    v53 = v176;
    if ( *((_DWORD *)DeviceExtension + 5) == 3 )
    {
      LODWORD(started) = 0;
      *((_QWORD *)DeviceObject->DeviceExtension + 43) = &DpiLdaHandleQueryDeviceRelations;
    }
  }
LABEL_209:
  KeWaitForSingleObject(DriverObjectExtension + 72, Executive, 0, 0, 0LL);
  v181 = 1;
  if ( v6 )
  {
    if ( *((_DWORD *)v6 + 126) )
    {
      v140 = DpiLdaLinkDeviceToChain(DeviceObject);
      started = v140;
      if ( v140 < 0 )
        goto LABEL_204;
    }
  }
  v141 = (PVOID *)*((_QWORD *)DriverObjectExtension + 8);
  if ( *v141 != DriverObjectExtension + 56 )
    goto LABEL_251;
  *(_QWORD *)DeviceExtension = DriverObjectExtension + 56;
  v139 = 1;
  *((_QWORD *)DeviceExtension + 1) = v141;
  *v141 = DeviceExtension;
  *((_QWORD *)DriverObjectExtension + 8) = DeviceExtension;
  ++*((_DWORD *)DriverObjectExtension + 32);
  if ( !*((_QWORD *)DeviceExtension + 21) )
  {
    v142 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x70uLL, 0x74727044u);
    *((_QWORD *)DeviceExtension + 21) = v142;
    if ( !v142 )
    {
LABEL_215:
      LODWORD(started) = -1073741801;
      v147 = WdLogNewEntry5_WdLowResource(v144, v143, v145, v146);
      *(_QWORD *)(v147 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v147);
      goto LABEL_245;
    }
    v142[26] = 1;
    v148 = ExInitializeResourceLite(*((PERESOURCE *)DeviceExtension + 21));
    started = v148;
    if ( v148 < 0 )
    {
      v152 = WdLogNewEntry5_WdError(v150, v149, v151);
      *(_QWORD *)(v152 + 24) = started;
      WdLogEvent5_WdError(v152);
      goto LABEL_243;
    }
    v186 = 1;
  }
  KeInitializeMutex((PRKMUTEX)(DeviceExtension + 176), 0);
  if ( v6 )
  {
    if ( !*((_QWORD *)v6 + 182) )
    {
      v153 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x74727044u);
      *((_QWORD *)v6 + 182) = v153;
      if ( !v153 )
        goto LABEL_215;
      v153[2] = 1;
      KeInitializeSpinLock(*((PKSPIN_LOCK *)v6 + 182));
    }
    if ( !*((_QWORD *)v6 + 183) )
    {
      v154 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x74727044u);
      *((_QWORD *)v6 + 183) = v154;
      if ( !v154 )
        goto LABEL_215;
      v154[2] = 1;
      KeInitializeSpinLock(*((PKSPIN_LOCK *)v6 + 183));
    }
    *((_DWORD *)v6 + 368) = 0;
    memset(v6 + 1480, 0, 0x400uLL);
  }
  KeReleaseMutex((PRKMUTEX)(DriverObjectExtension + 72), 0);
  *((_QWORD *)DeviceExtension + 16) = DpiFdoDispatchPnp;
  v181 = 0;
  if ( v6 )
  {
    *((_QWORD *)v6 + 17) = DpiFdoDispatchPower;
    if ( v6[1152] )
    {
      AcquireMiniportListMutex();
      if ( qword_1C00A29D8 && qword_1C00A29D8 != qword_1C00A29E0 )
      {
        v159 = WdLogNewEntry5_WdError(v157, v156, v158);
        *(_QWORD *)(v159 + 24) = DeviceObject;
        *(_QWORD *)(v159 + 32) = (int)started;
        WdLogEvent5_WdError(v159);
      }
      qword_1C00A29D8 = (__int64)DeviceObject;
      v160 = *((_QWORD *)v6 + 6);
      v198 = 0LL;
      started = (int)DpiDxgkDdiExchangePreStartInfo(DriverObjectExtension, v160, &v198);
      ReleaseMiniportListMutex();
      if ( (int)started < 0 )
      {
        v163 = WdLogNewEntry5_WdError(v155, v161, v162);
        *(_QWORD *)(v163 + 24) = *((_QWORD *)DriverObjectExtension + 143);
        *(_QWORD *)(v163 + 32) = started;
        WdLogEvent5_WdError(v163);
        goto LABEL_243;
      }
      if ( *((_DWORD *)v6 + 4) == 1953656900 && *((_DWORD *)v6 + 5) == 2 )
      {
        v155 = HIDWORD(v198) >> 1;
        LOBYTE(v155) = (v198 & 0x200000000LL) != 0;
        v6[2741] = BYTE4(v198) & 1;
        v6[2742] = v155;
      }
    }
  }
  if ( v53 && v180 )
    qword_1C00A29E0 = (__int64)DeviceObject;
  DeviceObject->Flags |= 4u;
  DeviceObject->Flags |= 0x2000u;
  DeviceObject->Flags &= ~0x4000u;
  DeviceObject->Flags &= ~0x80u;
  v164 = WdLogNewEntry5_WdEvent(v155);
  *(_QWORD *)(v164 + 24) = DeviceObject;
  WdLogEvent5_WdEvent(v164);
LABEL_243:
  if ( (int)started >= 0 )
    goto LABEL_261;
  if ( v139 != 1 )
    goto LABEL_33;
LABEL_245:
  v32 = (struct _KMUTANT *)(DriverObjectExtension + 72);
  KeWaitForSingleObject(DriverObjectExtension + 72, Executive, 0, 0, 0LL);
  v166 = *(_QWORD **)DeviceExtension;
  if ( *(char **)(*(_QWORD *)DeviceExtension + 8LL) != DeviceExtension
    || (v167 = (PVOID *)*((_QWORD *)DeviceExtension + 1), *v167 != DeviceExtension) )
  {
LABEL_251:
    __fastfail(3u);
  }
  *v167 = v166;
  v166[1] = v167;
  --*((_DWORD *)DriverObjectExtension + 32);
  if ( v6 && *((_DWORD *)v6 + 126) )
    DpiLdaUnLinkDeviceFromChain(DeviceObject);
  KeReleaseMutex((PRKMUTEX)(DriverObjectExtension + 72), 0);
LABEL_34:
  if ( v181 == 1 )
    KeReleaseMutex(v32, 0);
  if ( DeviceObject )
  {
    if ( v185 == 1 )
      DpiFdoResetFdo();
    if ( v6 )
    {
      v33 = (_DWORD *)*((_QWORD *)v6 + 182);
      if ( v33 && v33[2] == 1 )
      {
        ExFreePoolWithTag(v33, 0);
        *((_QWORD *)v6 + 182) = 0LL;
      }
      v34 = (_DWORD *)*((_QWORD *)v6 + 183);
      if ( v34 && v34[2] == 1 )
      {
        ExFreePoolWithTag(v34, 0);
        *((_QWORD *)v6 + 183) = 0LL;
      }
      if ( (_BYTE)v191 == 1 )
        DpiAcpiUnregisterAcpiCallbacks(DeviceObject);
      v35 = (void (__fastcall *)(_QWORD))*((_QWORD *)v6 + 73);
      if ( v35 )
      {
        v35(*((_QWORD *)v6 + 71));
        memset(v6 + 560, 0, 0x40uLL);
      }
      v36 = (void (__fastcall *)(_QWORD))*((_QWORD *)v6 + 81);
      if ( v36 )
      {
        v36(*((_QWORD *)v6 + 79));
        memset(v6 + 624, 0, 0x30uLL);
      }
      v37 = (void (__fastcall *)(_QWORD))*((_QWORD *)v6 + 87);
      if ( v37 )
      {
        v37(*((_QWORD *)v6 + 85));
        memset(v6 + 672, 0, 0xB8uLL);
      }
      v38 = (void (__fastcall *)(_QWORD))*((_QWORD *)v6 + 110);
      if ( v38 )
      {
        v38(*((_QWORD *)v6 + 108));
        memset(v6 + 856, 0, 0x58uLL);
      }
      RtlFreeUnicodeString((PUNICODE_STRING)v6 + 32);
      RtlFreeUnicodeString((PUNICODE_STRING)v6 + 33);
      v39 = (void *)*((_QWORD *)v6 + 139);
      if ( v39 )
      {
        ExFreePoolWithTag(v39, 0);
        *((_QWORD *)v6 + 139) = 0LL;
      }
    }
    if ( DeviceExtension )
    {
      v40 = *((_QWORD *)DeviceExtension + 21);
      if ( v40 )
      {
        if ( v186 == 1 )
        {
          ExDeleteResourceLite((PERESOURCE)v40);
          v40 = *((_QWORD *)DeviceExtension + 21);
        }
        if ( *(_DWORD *)(v40 + 104) == 1 )
        {
          ExFreePoolWithTag((PVOID)v40, 0);
          *((_QWORD *)DeviceExtension + 21) = 0LL;
        }
      }
      v41 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 20);
      if ( v41 )
        IoDetachDevice(v41);
    }
    IoDeleteDevice(DeviceObject);
    DeviceObject = 0LL;
  }
  v42 = 1;
  if ( v187 == 1 )
  {
    DpiDxgkDdiRemoveDevice(DriverObjectExtension, v195);
LABEL_259:
    if ( (_DWORD)started != -1071774664 )
      DxgCreateLiveDumpWithWdLogs(0x193u, 0x801uLL, (int)started, 0LL, 0LL);
    goto LABEL_261;
  }
  if ( !*((_QWORD *)DriverObjectExtension + 168) )
    goto LABEL_259;
  DiagnosticInfoArgs = DxgAllocateDiagnosticInfoArgs(1LL);
  v169 = DiagnosticInfoArgs;
  if ( !DiagnosticInfoArgs )
    goto LABEL_259;
  v170 = *(_DWORD *)(DiagnosticInfoArgs + 216);
  v171 = TargetDevice;
  *(_QWORD *)DiagnosticInfoArgs = v195;
  if ( (*((int (__fastcall **)(struct _DEVICE_OBJECT *, __int64))DriverObjectExtension + 168))(v171, DiagnosticInfoArgs) >= 0 )
  {
    if ( *(_DWORD *)(v169 + 220) > v170 )
      *(_DWORD *)(v169 + 220) = 0;
    DxgCreateLiveDumpWithDriverBlob(
      v171,
      0x1B0u,
      *(int *)(v169 + 8),
      (int)started,
      0LL,
      0LL,
      (struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v169);
    v42 = 0;
  }
  DxgFreeDiagnosticInfoArgs((struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v169);
  if ( v42 == 1 )
    goto LABEL_259;
LABEL_261:
  memset(v211, 0, sizeof(v211));
  v172 = DxgkDiagCalcDuration1us(&v206);
  v211[0] = 0x4000000006LL;
  memset(&v211[1], 0, 36);
  HIDWORD(v211[6]) = v189;
  LODWORD(v211[6]) = 34;
  v211[7] = __PAIR64__(started, v172);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v211, 0x100000000LL, v173);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    *(_DWORD *)Exclusive = started;
    McTemplateK0ppq(
      (__int64)&DxgkControlGuid_Context,
      &EventExitDpiAddDevice,
      0LL,
      DriverObject,
      TargetDevice,
      *(_QWORD *)Exclusive);
  }
  return (unsigned int)started;
}
