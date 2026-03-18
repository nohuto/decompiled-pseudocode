/*
 * XREFs of DpiAddDevice @ 0x1C0165580
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0002920 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00194A0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DxgkDiagCalcDuration1us @ 0x1C001E1E0 (DxgkDiagCalcDuration1us.c)
 *     DpiGetDeviceRegistryPaths @ 0x1C001EF84 (DpiGetDeviceRegistryPaths.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x1C0023240 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     McTemplateK0ppq @ 0x1C003DCB8 (McTemplateK0ppq.c)
 *     DpiDxgkDdiLinkDevice @ 0x1C0052358 (DpiDxgkDdiLinkDevice.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D50EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiReadPnpRegistryValue @ 0x1C0146204 (DpiReadPnpRegistryValue.c)
 *     DpEvalAcpiMethod @ 0x1C0148560 (DpEvalAcpiMethod.c)
 *     DpiFdoDetectPostDevice @ 0x1C015CC84 (DpiFdoDetectPostDevice.c)
 *     DpiGetDevicePropertyString @ 0x1C0164B64 (DpiGetDevicePropertyString.c)
 *     DpiFdoInitializeFdo @ 0x1C0167414 (DpiFdoInitializeFdo.c)
 *     DpiQueryBusInterface @ 0x1C0167F5C (DpiQueryBusInterface.c)
 *     DpiDxgkDdiAddDevice @ 0x1C0181C7C (DpiDxgkDdiAddDevice.c)
 *     DpiAcpiRegisterAcpiCallbacks @ 0x1C0182588 (DpiAcpiRegisterAcpiCallbacks.c)
 *     DpiGetAgpStatus @ 0x1C0182BE4 (DpiGetAgpStatus.c)
 *     DpiGetVgaStatus @ 0x1C0182CB0 (DpiGetVgaStatus.c)
 *     DpiDxgkDdiExchangePreStartInfo @ 0x1C0183C54 (DpiDxgkDdiExchangePreStartInfo.c)
 *     ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1C020086C (-DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYP.c)
 *     ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C0200934 (-DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINF.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C0200A00 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     ?DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C0200B58 (-DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     DpiSetDeviceUsageType @ 0x1C029EC0C (DpiSetDeviceUsageType.c)
 *     DpiFdoResetFdo @ 0x1C02A288C (DpiFdoResetFdo.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x1C02ACEE8 (DpiAcpiUnregisterAcpiCallbacks.c)
 *     DpiLdaLinkDeviceToChain @ 0x1C02AE634 (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C02AEDD0 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiDxgkDdiRemoveDevice @ 0x1C02AF36C (DpiDxgkDdiRemoveDevice.c)
 */

__int64 __fastcall DpiAddDevice(struct _DRIVER_OBJECT *ClientIdentificationAddress, struct _DEVICE_OBJECT *a2)
{
  BOOL v2; // r12d
  char *DeviceExtension; // rbx
  char *v6; // r14
  _DWORD *DriverObjectExtension; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r13
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 started; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  const UNICODE_STRING *p_DriverName; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  char v21; // al
  ULONG v22; // edi
  int v23; // r12d
  __int64 v24; // rax
  struct _KMUTANT *v25; // rdi
  _DWORD *v26; // rcx
  _DWORD *v27; // rcx
  void (__fastcall *v28)(_QWORD); // rax
  void (__fastcall *v29)(_QWORD); // rax
  void (__fastcall *v30)(_QWORD); // rax
  void (__fastcall *v31)(_QWORD); // rax
  void *v32; // rcx
  __int64 v33; // rcx
  struct _DEVICE_OBJECT *v34; // rcx
  char v35; // r15
  int DevicePropertyString; // eax
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  BOOL v41; // r12d
  __int64 v42; // rdx
  int RegistryValues; // eax
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // r8
  NTSTATUS v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  char v52; // r12
  char v53; // al
  struct _DEVICE_OBJECT *v54; // rdi
  PDEVICE_OBJECT v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
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
  char v83; // r15
  __int64 v84; // rax
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  bool v86; // al
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // rdi
  PVOID PoolWithTag; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r9
  __int64 v97; // rax
  unsigned __int16 *v98; // rcx
  int v99; // edx
  int v100; // edi
  char v101; // al
  struct _DEVICE_OBJECT *v102; // rcx
  int AgpStatus; // eax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // rdi
  __int64 v108; // rax
  char v109; // al
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rax
  int v114; // eax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // rdi
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // rax
  struct _DEVICE_OBJECT *v123; // rdi
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  int v127; // eax
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  PVOID v131; // rdi
  __int16 v132; // r10
  const wchar_t **v133; // r9
  unsigned int v134; // edx
  const wchar_t *v135; // rax
  char *v136; // rcx
  __int64 v137; // rax
  _DWORD *v138; // rdx
  unsigned __int64 v139; // r8
  int v140; // eax
  int v141; // eax
  int v142; // eax
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // rax
  char **v147; // rcx
  _DWORD *v148; // rax
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // r8
  __int64 v152; // r9
  __int64 v153; // rax
  NTSTATUS v154; // eax
  _DWORD *v155; // rax
  _DWORD *v156; // rax
  __int64 v157; // rcx
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // rax
  __int64 v162; // rdx
  __int64 v163; // rdx
  __int64 v164; // r8
  __int64 v165; // rax
  _QWORD *v166; // rax
  _QWORD *v167; // rcx
  PVOID *v168; // rax
  __int64 DiagnosticInfoArgs; // rax
  __int64 v170; // rdi
  unsigned int v171; // ebx
  struct _DEVICE_OBJECT *v172; // r14
  unsigned int v173; // eax
  __int64 v174; // r8
  BOOLEAN Exclusive[8]; // [rsp+28h] [rbp-D8h]
  char v177; // [rsp+40h] [rbp-C0h]
  char v178; // [rsp+42h] [rbp-BEh]
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-B8h] BYREF
  char v180; // [rsp+50h] [rbp-B0h]
  char v181; // [rsp+51h] [rbp-AFh]
  char v182; // [rsp+52h] [rbp-AEh]
  char v183; // [rsp+53h] [rbp-ADh]
  char v184; // [rsp+54h] [rbp-ACh]
  char v185; // [rsp+55h] [rbp-ABh]
  char v186; // [rsp+56h] [rbp-AAh] BYREF
  char v187; // [rsp+57h] [rbp-A9h]
  char v188; // [rsp+58h] [rbp-A8h]
  char v189; // [rsp+59h] [rbp-A7h]
  ULONG ResultLength; // [rsp+5Ch] [rbp-A4h] BYREF
  int v191; // [rsp+60h] [rbp-A0h]
  PDEVICE_OBJECT TargetDevice; // [rsp+68h] [rbp-98h]
  int v193; // [rsp+70h] [rbp-90h]
  unsigned int v194; // [rsp+74h] [rbp-8Ch] BYREF
  BOOL v195; // [rsp+78h] [rbp-88h]
  int v196; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v197; // [rsp+80h] [rbp-80h] BYREF
  void *Source1; // [rsp+88h] [rbp-78h] BYREF
  PVOID P; // [rsp+90h] [rbp-70h] BYREF
  __int64 v200; // [rsp+98h] [rbp-68h] BYREF
  PDRIVER_OBJECT DriverObject; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING String1; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING v203; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING v204; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING v205; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING v206; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING v207; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v208; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v209[14]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v210[3]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v211; // [rsp+198h] [rbp+98h] BYREF
  int v212; // [rsp+1A0h] [rbp+A0h]
  _QWORD v213[8]; // [rsp+1B0h] [rbp+B0h] BYREF
  _DWORD v214[2]; // [rsp+1F0h] [rbp+F0h]
  const wchar_t *v215; // [rsp+1F8h] [rbp+F8h] BYREF
  int v216; // [rsp+200h] [rbp+100h]
  const wchar_t *v217; // [rsp+208h] [rbp+108h]
  int v218; // [rsp+210h] [rbp+110h]
  const wchar_t *v219; // [rsp+218h] [rbp+118h]
  int v220; // [rsp+220h] [rbp+120h]
  const wchar_t *v221; // [rsp+228h] [rbp+128h]
  _DWORD v222[10]; // [rsp+230h] [rbp+130h] BYREF
  __int128 v223; // [rsp+258h] [rbp+158h] BYREF
  __int64 v224; // [rsp+268h] [rbp+168h]
  int v225; // [rsp+270h] [rbp+170h]
  wchar_t v226; // [rsp+274h] [rbp+174h]
  __int128 v227; // [rsp+278h] [rbp+178h] BYREF
  __int64 v228; // [rsp+288h] [rbp+188h]
  wchar_t v229; // [rsp+290h] [rbp+190h]
  _OWORD v230[2]; // [rsp+298h] [rbp+198h] BYREF
  __int64 v231; // [rsp+2B8h] [rbp+1B8h]
  wchar_t v232; // [rsp+2C0h] [rbp+1C0h]
  _OWORD v233[2]; // [rsp+2C8h] [rbp+1C8h] BYREF
  wchar_t v234; // [rsp+2E8h] [rbp+1E8h]
  _OWORD v235[2]; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int64 v236; // [rsp+310h] [rbp+210h]
  int v237; // [rsp+318h] [rbp+218h]
  _OWORD v238[2]; // [rsp+320h] [rbp+220h] BYREF
  __int64 v239; // [rsp+340h] [rbp+240h]

  v211 = 0LL;
  LOBYTE(v2) = 0;
  v212 = 0;
  DeviceExtension = 0LL;
  v229 = aDriverVgpu[12];
  v6 = 0LL;
  v227 = *(_OWORD *)L"\\Driver\\VGPU";
  TargetDevice = a2;
  v205.Buffer = (wchar_t *)&v227;
  v234 = aDriverWddmwarp[16];
  v233[0] = *(_OWORD *)L"\\Driver\\WddmWarp";
  v203.Buffer = (wchar_t *)v233;
  String1.Buffer = (wchar_t *)v238;
  v238[0] = *(_OWORD *)L"\\Driver\\BasicRender";
  v232 = aDriverBasicdis[20];
  v228 = *(_QWORD *)L"VGPU";
  v206.Buffer = (wchar_t *)v230;
  v239 = *(_QWORD *)L"der";
  v225 = *(_DWORD *)L"md";
  v233[1] = *(_OWORD *)L"WddmWarp";
  v226 = aDriverSrakmd[14];
  DriverObject = ClientIdentificationAddress;
  v230[0] = *(_OWORD *)L"\\Driver\\BasicDisplay";
  v197 = 0LL;
  v238[1] = *(_OWORD *)L"BasicRender";
  v189 = 0;
  DeviceObject = 0LL;
  v231 = *(_QWORD *)L"play";
  v178 = 1;
  v230[1] = *(_OWORD *)L"BasicDisplay";
  LOBYTE(v193) = 0;
  v223 = *(_OWORD *)L"\\Driver\\srakmd";
  v187 = 0;
  v183 = 0;
  v224 = *(_QWORD *)L"srakmd";
  v235[0] = *(_OWORD *)L"\\Driver\\VirtualRender";
  v188 = 0;
  v177 = 0;
  v182 = 0;
  v180 = 0;
  v185 = 0;
  v186 = 0;
  v181 = 0;
  v195 = v2;
  v184 = 0;
  v191 = 3;
  *(_QWORD *)&v205.Length = 1703960LL;
  *(_QWORD *)&v203.Length = 2228256LL;
  *(_QWORD *)&String1.Length = 2621478LL;
  *(_QWORD *)&v206.Length = 2752552LL;
  *(_QWORD *)&v207.Length = 1966108LL;
  v207.Buffer = (wchar_t *)&v223;
  v237 = *(_DWORD *)L"r";
  v204.Buffer = (wchar_t *)v235;
  v235[1] = *(_OWORD *)L"VirtualRender";
  *(_QWORD *)&v204.Length = 2883626LL;
  v236 = *(_QWORD *)L"ender";
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0ppq((__int64)&DxgkControlGuid_Context, &EventEnterDpiAddDevice, 0LL, ClientIdentificationAddress, a2, 0);
  v208 = MEMORY[0xFFFFF78000000320];
  DriverObjectExtension = IoGetDriverObjectExtension(ClientIdentificationAddress, ClientIdentificationAddress);
  v10 = (__int64)DriverObjectExtension;
  if ( !DriverObjectExtension || DriverObjectExtension[4] != 1953656900 || DriverObjectExtension[5] != 1 )
  {
    LODWORD(started) = -1073741811;
    v166 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8);
    v166[3] = 275LL;
    v166[4] = 21LL;
    v166[5] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v166);
    goto LABEL_245;
  }
  v11 = DpiDxgkDdiAddDevice(DriverObjectExtension, a2, &v197);
  started = v11;
  if ( v11 < 0 )
  {
    v16 = WdLogNewEntry5_WdError(v13, v12, v14);
    v17 = *(_QWORD *)(v10 + 144);
LABEL_9:
    *(_QWORD *)(v16 + 24) = v17;
    *(_QWORD *)(v16 + 32) = started;
LABEL_10:
    WdLogEvent5_WdError(v16);
LABEL_245:
    v83 = 0;
    goto LABEL_246;
  }
  p_DriverName = &ClientIdentificationAddress->DriverName;
  v189 = 1;
  if ( !RtlCompareUnicodeString(&String1, &ClientIdentificationAddress->DriverName, 1u) )
  {
    v20 = 1LL;
    v21 = 1;
    v177 = 1;
    v180 = 1;
    goto LABEL_16;
  }
  if ( !RtlCompareUnicodeString(&v203, p_DriverName, 1u) )
  {
    v180 = 1;
LABEL_15:
    v21 = 0;
    goto LABEL_16;
  }
  if ( !RtlCompareUnicodeString(&v204, p_DriverName, 1u) )
  {
    v184 = 1;
    goto LABEL_15;
  }
  if ( !RtlCompareUnicodeString(&v205, p_DriverName, 1u) )
  {
    v185 = 1;
    goto LABEL_15;
  }
  if ( RtlCompareUnicodeString(&v206, p_DriverName, 1u) )
  {
    v41 = RtlCompareUnicodeString(&v207, p_DriverName, 1u) == 0;
    v181 = *(_BYTE *)(v10 + 134);
    v195 = v41;
    memset(v209, 0, sizeof(v209));
    v42 = *(_QWORD *)(v10 + 48);
    v209[2] = L"Start";
    LODWORD(v209[1]) = 292;
    v209[3] = &v194;
    LODWORD(v209[4]) = 67108868;
    LODWORD(v209[6]) = 4;
    RegistryValues = RtlQueryRegistryValuesEx(0LL, v42, v209, 0LL, 0LL);
    started = RegistryValues;
    if ( RegistryValues >= 0 )
    {
      if ( v194 != 3 )
      {
        v44 = WdLogNewEntry5_WdError(v20, v19, v37);
        *(_QWORD *)(v44 + 24) = v194;
        WdLogEvent5_WdError(v44);
        LODWORD(started) = -1073741637;
        goto LABEL_20;
      }
      goto LABEL_15;
    }
LABEL_62:
    v38 = WdLogNewEntry5_WdError(v20, v19, v37);
    *(_QWORD *)(v38 + 24) = started;
    WdLogEvent5_WdError(v38);
    goto LABEL_245;
  }
  v182 = 1;
  Source1 = 0LL;
  DevicePropertyString = DpiGetDevicePropertyString(
                           TargetDevice,
                           DevicePropertyHardwareID,
                           PagedPool,
                           &Source1,
                           &ResultLength);
  started = DevicePropertyString;
  if ( DevicePropertyString < 0 )
    goto LABEL_62;
  if ( ResultLength >= 0x24 && RtlCompareMemory(Source1, L"ROOT\\BasicDisplay", 0x24uLL) == 36 )
  {
    v177 = 1;
    if ( byte_1C00A2752 )
    {
      v178 = 0;
      LODWORD(started) = -1073741637;
      v40 = WdLogNewEntry5_WdEvent(v39);
      *(_QWORD *)(v40 + 24) = 0LL;
      WdLogEvent5_WdEvent(v40);
    }
  }
  v20 = (__int64)Source1;
  if ( Source1 )
    ExFreePoolWithTag(Source1, 0);
  if ( (int)started < 0 )
    goto LABEL_20;
  v21 = v177;
LABEL_16:
  if ( v197 )
  {
    v22 = 5768;
    v191 = 0;
    v23 = 2;
    if ( *(_QWORD *)(v10 + 616) )
    {
      if ( v21 )
      {
        LODWORD(started) = -1073741637;
        v24 = WdLogNewEntry5_WdError(0LL, v19, v197);
        *(_QWORD *)(v24 + 24) = *(_QWORD *)(v10 + 616);
        *(_QWORD *)(v24 + 32) = -1073741637LL;
        goto LABEL_19;
      }
      v45 = DpiDxgkDdiLinkDevice(v10, (__int64)TargetDevice, v197, (int *)&v211);
      started = v45;
      if ( v45 < 0 )
      {
        v16 = WdLogNewEntry5_WdError(0LL, v46, v47);
        v17 = *(_QWORD *)(v10 + 616);
        goto LABEL_9;
      }
      if ( HIDWORD(v211) > 0x100 )
      {
        LODWORD(started) = -1073741756;
        v24 = WdLogNewEntry5_WdError(0LL, v46, v47);
        *(_QWORD *)(v24 + 24) = -1073741756LL;
        goto LABEL_19;
      }
      if ( HIDWORD(v211) && !(_BYTE)v212 )
      {
        v22 = 2744;
        v191 = 1;
        v23 = 3;
      }
    }
  }
  else
  {
    v191 = 2;
    v22 = 496;
    v23 = 4;
    if ( v21 )
    {
      LODWORD(started) = -1073741637;
      v24 = WdLogNewEntry5_WdError(v20, v19, 0LL);
      *(_QWORD *)(v24 + 24) = -1073741637LL;
LABEL_19:
      WdLogEvent5_WdError(v24);
      goto LABEL_20;
    }
  }
  v48 = IoCreateDevice(DriverObject, v22, 0LL, 0x23u, v181 == 0 ? 0x100 : 0, 0, &DeviceObject);
  started = v48;
  if ( v48 < 0 )
  {
    v16 = WdLogNewEntry5_WdError(v50, v49, v51);
    *(_QWORD *)(v16 + 24) = started;
    goto LABEL_10;
  }
  v191 |= (unsigned int)DeviceObject & 0xFFFF00;
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  *((_DWORD *)DeviceExtension + 5) = v23;
  v52 = v177;
  *((_DWORD *)DeviceExtension + 4) = 1953656900;
  *((_QWORD *)DeviceExtension + 3) = DeviceObject;
  *((_QWORD *)DeviceExtension + 4) = DeviceObject;
  *((_QWORD *)DeviceExtension + 5) = v10;
  *((_QWORD *)DeviceExtension + 6) = v197;
  v53 = v184;
  DeviceExtension[56] = 1;
  DeviceExtension[481] = v53;
  DeviceExtension[480] = v177;
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
  v54 = TargetDevice;
  *((_QWORD *)DeviceExtension + 19) = TargetDevice;
  v55 = IoAttachDeviceToDeviceStack(DeviceObject, v54);
  *((_QWORD *)DeviceExtension + 20) = v55;
  if ( !v55 )
  {
    LODWORD(started) = -1073741810;
    v24 = WdLogNewEntry5_WdError(v57, v56, v58);
    *(_QWORD *)(v24 + 24) = -1073741810LL;
    goto LABEL_19;
  }
  *((_DWORD *)DeviceExtension + 71) = 1;
  *((_DWORD *)DeviceExtension + 70) = 1;
  *((_QWORD *)DeviceExtension + 38) = DpiFdoHandleRemoveDevice;
  if ( *((_DWORD *)DeviceExtension + 4) != 1953656900 || (unsigned int)(*((_DWORD *)DeviceExtension + 5) - 2) > 1 )
    goto LABEL_211;
  DeviceExtension[2693] = v180;
  v6 = DeviceExtension;
  DeviceExtension[1155] = v182;
  DeviceExtension[1159] = v181;
  DeviceExtension[2694] = v185;
  DeviceExtension[2695] = v195;
  *((_DWORD *)DeviceExtension + 680) = 0;
  *((_QWORD *)DeviceExtension + 36) = &DpiFdoHandleStartDevice;
  *((_QWORD *)DeviceExtension + 59) = &DpiFdoHandleSurpriseRemoval;
  *((_QWORD *)DeviceExtension + 49) = &DpiFdoHandleFilterResources;
  if ( !byte_1C00A2751 && !DeviceExtension[480] )
    *((_QWORD *)DeviceExtension + 40) = &DpiFdoHandleStopDevice;
  *(_QWORD *)(DeviceExtension + 500) = v211;
  *((_DWORD *)DeviceExtension + 127) = v212;
  DeviceRegistryPaths = DpiGetDeviceRegistryPaths((__int64)DeviceObject, (__int64)v54, v10);
  started = DeviceRegistryPaths;
  if ( DeviceRegistryPaths < 0 )
    goto LABEL_111;
  if ( (int)DpiQueryBusInterface(*((PDEVICE_OBJECT *)DeviceExtension + 20), (__int64)(DeviceExtension + 856)) >= 0 )
  {
    if ( *(_QWORD *)(v10 + 232) )
    {
      v63 = DpiAcpiRegisterAcpiCallbacks(DeviceObject);
      v64 = (unsigned __int8)v193;
      if ( v63 >= 0 )
        v64 = 1;
      v193 = v64;
    }
    DeviceExtension[1157] = 1;
  }
  v65 = TargetDevice;
  DeviceProperty = IoGetDeviceProperty(TargetDevice, DevicePropertyBusNumber, 4u, DeviceExtension + 1144, &ResultLength);
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
  if ( !v177 )
  {
    v81 = DpiFdoDetectPostDevice((__int64)DeviceObject, &v186);
    started = v81;
    if ( v81 < 0 )
      goto LABEL_111;
  }
  if ( v186 )
  {
    v84 = WdLogNewEntry5_WdEvent(v61);
    *(_QWORD *)(v84 + 24) = DeviceObject;
    WdLogEvent5_WdEvent(v84);
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
  v196 = 0;
  v86 = (int)DpiReadPnpRegistryValue((__int64)DeviceObject, L"SoftGPUAdapter", (char *)&v196, 4u, 2u) >= 0 && v196;
  DeviceExtension[2692] = v86;
  if ( RtlCompareMemory(DeviceExtension + 544, &GUID_BUS_TYPE_PCI, 0x10uLL) == 16 )
  {
    v88 = WdLogNewEntry5_WdEvent(v87);
    *(_QWORD *)(v88 + 24) = DeviceObject;
    WdLogEvent5_WdEvent(v88);
    DpiQueryBusInterface(v79, (__int64)(DeviceExtension + 560));
    if ( !*((_QWORD *)DeviceExtension + 77) )
    {
      v92 = -1073741127LL;
LABEL_122:
      LODWORD(started) = v92;
      v24 = WdLogNewEntry5_WdError(v90, v89, v91);
      *(_QWORD *)(v24 + 24) = v92;
      goto LABEL_19;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x74727044u);
    *((_QWORD *)DeviceExtension + 139) = PoolWithTag;
    if ( !PoolWithTag )
    {
      LODWORD(started) = -1073741801;
      v97 = WdLogNewEntry5_WdLowResource(v95, v94, 0LL, v96);
      *(_QWORD *)(v97 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v97);
      goto LABEL_20;
    }
    (*((void (__fastcall **)(_QWORD, _QWORD, PVOID, _QWORD, int))DeviceExtension + 77))(
      *((_QWORD *)DeviceExtension + 71),
      0LL,
      PoolWithTag,
      0LL,
      256);
    v98 = (unsigned __int16 *)*((_QWORD *)DeviceExtension + 139);
    *((_DWORD *)DeviceExtension + 280) = 1;
    v99 = *v98;
    *((_DWORD *)DeviceExtension + 281) = v99;
    v100 = v98[1];
    *((_DWORD *)DeviceExtension + 282) = v100;
    *((_DWORD *)DeviceExtension + 285) = *((unsigned __int8 *)v98 + 8);
    if ( (v98[7] & 0x7F) == 0 )
    {
      *((_DWORD *)DeviceExtension + 283) = v98[22];
      *((_DWORD *)DeviceExtension + 284) = v98[23];
    }
    if ( v99 != 22611 || (v101 = 1, v100 != 4097) )
      v101 = 0;
    v102 = TargetDevice;
    DeviceExtension[2696] = v101;
    DpiQueryBusInterface(v102, (__int64)(DeviceExtension + 624));
    DpiQueryBusInterface(*((PDEVICE_OBJECT *)DeviceExtension + 20), (__int64)(DeviceExtension + 672));
    AgpStatus = DpiGetAgpStatus(DeviceObject);
    v107 = AgpStatus;
    if ( AgpStatus >= 0 && !*((_QWORD *)DeviceExtension + 85) )
    {
      v108 = WdLogNewEntry5_WdWarning(v105, v104, v106);
      *(_QWORD *)(v108 + 24) = v107;
      WdLogEvent5_WdWarning(v108);
    }
    LODWORD(started) = DpiGetVgaStatus(DeviceObject);
    v109 = DeviceExtension[1152];
    if ( (int)started < 0 )
    {
      if ( v109 )
      {
        v111 = WdLogNewEntry5_WdWarning(v90, v89, v91);
        *(_QWORD *)(v111 + 24) = DeviceObject;
        WdLogEvent5_WdWarning(v111);
      }
    }
    else if ( v109
           || !byte_1C00A2AA0
           && (v110 = WdLogNewEntry5_WdWarning(v90, v89, v91),
               *(_QWORD *)(v110 + 24) = DeviceObject,
               WdLogEvent5_WdWarning(v110),
               DeviceExtension[1152] = 1,
               byte_1C00A2AA1 = 1,
               DeviceExtension[1152]) )
    {
      if ( byte_1C00A2755 )
        DeviceExtension[1156] = 1;
    }
    goto LABEL_162;
  }
  if ( RtlCompareMemory(DeviceExtension + 544, &GUID_BUS_TYPE_ACPI, 0x10uLL) == 16 )
  {
    memset(v210, 0, sizeof(v210));
    v113 = WdLogNewEntry5_WdEvent(v112);
    *(_QWORD *)(v113 + 24) = DeviceObject;
    WdLogEvent5_WdEvent(v113);
    if ( !DeviceExtension[1157] )
    {
LABEL_143:
      LODWORD(started) = -1073741637;
      v24 = WdLogNewEntry5_WdError(v90, v89, v91);
      *(_QWORD *)(v24 + 24) = -1073741637LL;
      goto LABEL_19;
    }
    *((_DWORD *)DeviceExtension + 280) = 2;
    BYTE1(v210[1]) = 0;
    WORD1(v210[1]) = 0;
    strcpy((char *)v210, "AeiC_HID");
    HIDWORD(v210[1]) = 0;
    memset(v222, 0, 0x24uLL);
    v114 = DpEvalAcpiMethod((__int64)DeviceObject, 0xFFFFFFFFLL, (int *)v210, 0x18u, v222, 0x24u);
    v118 = v114;
    if ( v114 >= 0 )
    {
      *((_DWORD *)DeviceExtension + 281) = v222[4];
      *((_DWORD *)DeviceExtension + 282) = v222[5];
    }
    else
    {
      v119 = WdLogNewEntry5_WdError(v116, v115, v117);
      *(_QWORD *)(v119 + 24) = v118;
      WdLogEvent5_WdError(v119);
    }
    strcpy((char *)v210, "AeiC_SUB");
    BYTE1(v210[1]) = 0;
    WORD1(v210[1]) = 0;
    HIDWORD(v210[1]) = 0;
    memset(v222, 0, 0x24uLL);
    if ( (int)DpEvalAcpiMethod((__int64)DeviceObject, 0xFFFFFFFFLL, (int *)v210, 0x18u, v222, 0x24u) >= 0 )
    {
      *((_DWORD *)DeviceExtension + 283) = v222[4];
      *((_DWORD *)DeviceExtension + 284) = v222[5];
    }
    else
    {
      v121 = WdLogNewEntry5_WdEvent(v120);
      *(_QWORD *)(v121 + 24) = DpEvalAcpiMethod;
      WdLogEvent5_WdEvent(v121);
    }
    strcpy((char *)v210, "AeiC_HRV");
    BYTE1(v210[1]) = 0;
    WORD1(v210[1]) = 0;
    HIDWORD(v210[1]) = 0;
    memset(v222, 0, 0x24uLL);
    LODWORD(started) = DpEvalAcpiMethod((__int64)DeviceObject, 0xFFFFFFFFLL, (int *)v210, 0x18u, v222, 0x24u);
    if ( (int)started >= 0 )
    {
      *((_DWORD *)DeviceExtension + 285) = LOWORD(v222[4]);
    }
    else
    {
      v122 = WdLogNewEntry5_WdEvent(v90);
      *(_QWORD *)(v122 + 24) = DpEvalAcpiMethod;
      WdLogEvent5_WdEvent(v122);
      LODWORD(started) = 0;
    }
    if ( DeviceExtension[1152] )
    {
      v123 = IoGetAttachedDeviceReference(TargetDevice);
      started = (int)DpiSetDeviceUsageType(v123);
      ObfDereferenceObject(v123);
      if ( (int)started < 0 )
      {
        v124 = WdLogNewEntry5_WdError(v90, v89, v91);
        *(_QWORD *)(v124 + 24) = started;
        WdLogEvent5_WdError(v124);
        LODWORD(started) = 0;
      }
    }
  }
  else if ( RtlCompareMemory(DeviceExtension + 544, &GUID_BUS_VMBUS, 0x10uLL) == 16 )
  {
    v125 = WdLogNewEntry5_WdEvent(v90);
    *(_QWORD *)(v125 + 24) = DeviceObject;
    WdLogEvent5_WdEvent(v125);
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
    *((_QWORD *)DeviceExtension + 141) = 139LL;
    *((_QWORD *)DeviceExtension + 142) = 0LL;
    *((_DWORD *)DeviceExtension + 280) = 0;
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
      goto LABEL_143;
    *((_DWORD *)DeviceExtension + 280) = 3;
    if ( DeviceExtension[2692] )
    {
      *((_DWORD *)DeviceExtension + 281) = 5140;
      P = 0LL;
      v127 = DpiGetDevicePropertyString(v79, DevicePropertyCompatibleIDs, PagedPool, &P, &ResultLength);
      started = v127;
      if ( v127 >= 0 && (v131 = P) != 0LL )
      {
        v132 = *(_WORD *)P;
        v215 = L"SoftGPU_Full_D3D12";
        v133 = &v215;
        v214[0] = 135;
        v217 = L"SoftGPU_Full_D3D9L";
        v134 = 0;
        v216 = 128;
        v219 = L"SoftGPU_Rod";
        v221 = L"SoftGPU_Dod";
        v218 = 136;
        v220 = 137;
        while ( 1 )
        {
          v135 = *v133;
          if ( v132 )
            break;
LABEL_183:
          if ( !*v135 )
            goto LABEL_186;
          ++v134;
          v133 += 2;
          if ( v134 >= 4 )
            goto LABEL_187;
        }
        v136 = (char *)((_BYTE *)P - (_BYTE *)v135);
        while ( *v135 )
        {
          if ( *(_WORD *)&v136[(_QWORD)v135] == *v135 )
          {
            if ( *(_WORD *)&v136[(_QWORD)++v135] )
              continue;
          }
          goto LABEL_183;
        }
LABEL_186:
        *((_DWORD *)DeviceExtension + 282) = v214[4 * v134];
LABEL_187:
        ExFreePoolWithTag(v131, 0);
      }
      else
      {
        v137 = WdLogNewEntry5_WdError(v129, v128, v130);
        *(_QWORD *)(v137 + 24) = started;
        WdLogEvent5_WdError(v137);
      }
    }
  }
LABEL_162:
  if ( !DeviceExtension[1152] && !DeviceExtension[480] && DeviceExtension[1155] )
  {
    v126 = WdLogNewEntry5_WdEvent(v90);
    *(_QWORD *)(v126 + 24) = DeviceObject;
    WdLogEvent5_WdEvent(v126);
    LODWORD(started) = -1071774664;
    goto LABEL_20;
  }
  if ( DeviceExtension[2692] && DeviceExtension[2693] )
  {
    v92 = -1073741811LL;
    goto LABEL_122;
  }
  KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 181);
  v138 = DeviceExtension + 1312;
  *((_WORD *)DeviceExtension + 648) = 64;
  v139 = 7LL;
  if ( (((_BYTE)DeviceExtension + 32) & 4) != 0 )
  {
    *v138 = 1;
    v139 = 6LL;
    v138 = DeviceExtension + 1316;
  }
  memset64(v138, 0x100000001uLL, v139 >> 1);
  if ( (v139 & 1) != 0 )
    v138[v139 - 1] = 1;
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
  if ( *(_DWORD *)(v10 + 28) >= 0xB003u && !(unsigned __int8)ExQueryFastCacheDevLicense() )
  {
    v140 = *((_DWORD *)DeviceExtension + 281);
    if ( v140 == 4098 )
    {
      *(_DWORD *)&Exclusive[4] = 0;
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (__int64)&Feature_ReportWddm2_6ToDriver_Amd__private_propertyCache,
        19673568LL,
        (const struct FEATURE_LOGGED_TRAITS *)&unk_1C0070150,
        1,
        3);
      v140 = *((_DWORD *)DeviceExtension + 281);
    }
    if ( v140 == 4318 )
    {
      *(_DWORD *)&Exclusive[4] = 0;
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (__int64)&Feature_ReportWddm2_6ToDriver_Nvidia__private_propertyCache,
        19673580LL,
        (const struct FEATURE_LOGGED_TRAITS *)&unk_1C0070148,
        1,
        3);
      v140 = *((_DWORD *)DeviceExtension + 281);
    }
    if ( v140 == 32902 )
    {
      *(_DWORD *)&Exclusive[4] = 0;
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (__int64)&Feature_ReportWddm2_6ToDriver_Intel__private_propertyCache,
        19673555LL,
        (const struct FEATURE_LOGGED_TRAITS *)&unk_1C0070140,
        1,
        3);
    }
  }
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 )
  {
    if ( *((_DWORD *)DeviceExtension + 5) == 2 )
    {
      v141 = DpiFdoInitializeFdo(DeviceObject);
      started = v141;
      if ( v141 < 0 )
      {
LABEL_111:
        v82 = WdLogNewEntry5_WdError(v61, v60, v62);
        *(_QWORD *)(v82 + 24) = started;
        WdLogEvent5_WdError(v82);
        v83 = 0;
        goto LABEL_246;
      }
      v187 = 1;
    }
    else if ( *((_DWORD *)DeviceExtension + 5) == 3 )
    {
      LODWORD(started) = 0;
      *((_QWORD *)DeviceObject->DeviceExtension + 43) = &DpiLdaHandleQueryDeviceRelations;
    }
  }
  v52 = v177;
LABEL_211:
  v83 = 0;
  KeWaitForSingleObject((PVOID)(v10 + 72), Executive, 0, 0, 0LL);
  v183 = 1;
  if ( v6 )
  {
    if ( *((_DWORD *)v6 + 126) )
    {
      v142 = DpiLdaLinkDeviceToChain(DeviceObject);
      started = v142;
      if ( v142 < 0 )
        goto LABEL_214;
    }
  }
  v147 = *(char ***)(v10 + 64);
  if ( *v147 != (char *)(v10 + 56) )
    goto LABEL_254;
  *(_QWORD *)DeviceExtension = v10 + 56;
  v83 = 1;
  *((_QWORD *)DeviceExtension + 1) = v147;
  *v147 = DeviceExtension;
  *(_QWORD *)(v10 + 64) = DeviceExtension;
  ++*(_DWORD *)(v10 + 128);
  if ( !*((_QWORD *)DeviceExtension + 21) )
  {
    v148 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x70uLL, 0x74727044u);
    *((_QWORD *)DeviceExtension + 21) = v148;
    if ( !v148 )
    {
LABEL_219:
      LODWORD(started) = -1073741801;
      v153 = WdLogNewEntry5_WdLowResource(v150, v149, v151, v152);
      *(_QWORD *)(v153 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v153);
      goto LABEL_248;
    }
    v148[26] = 1;
    v154 = ExInitializeResourceLite(*((PERESOURCE *)DeviceExtension + 21));
    started = v154;
    if ( v154 < 0 )
    {
LABEL_214:
      v146 = WdLogNewEntry5_WdError(v144, v143, v145);
      *(_QWORD *)(v146 + 24) = started;
LABEL_215:
      WdLogEvent5_WdError(v146);
      goto LABEL_246;
    }
    v188 = 1;
  }
  KeInitializeMutex((PRKMUTEX)(DeviceExtension + 176), 0);
  if ( v6 )
  {
    if ( !*((_QWORD *)v6 + 182) )
    {
      v155 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x74727044u);
      *((_QWORD *)v6 + 182) = v155;
      if ( !v155 )
        goto LABEL_219;
      v155[2] = 1;
      KeInitializeSpinLock(*((PKSPIN_LOCK *)v6 + 182));
    }
    if ( !*((_QWORD *)v6 + 183) )
    {
      v156 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x74727044u);
      *((_QWORD *)v6 + 183) = v156;
      if ( !v156 )
        goto LABEL_219;
      v156[2] = 1;
      KeInitializeSpinLock(*((PKSPIN_LOCK *)v6 + 183));
    }
    *((_DWORD *)v6 + 368) = 0;
    memset(v6 + 1480, 0, 0x400uLL);
  }
  KeReleaseMutex((PRKMUTEX)(v10 + 72), 0);
  *((_QWORD *)DeviceExtension + 16) = DpiFdoDispatchPnp;
  v183 = 0;
  if ( v6 )
  {
    *((_QWORD *)v6 + 17) = DpiFdoDispatchPower;
    if ( v6[1152] )
    {
      AcquireMiniportListMutex();
      if ( qword_1C00A29D8 && qword_1C00A29D8 != qword_1C00A29E0 )
      {
        v161 = WdLogNewEntry5_WdError(v159, v158, v160);
        *(_QWORD *)(v161 + 24) = DeviceObject;
        *(_QWORD *)(v161 + 32) = (int)started;
        WdLogEvent5_WdError(v161);
      }
      qword_1C00A29D8 = (__int64)DeviceObject;
      v162 = *((_QWORD *)v6 + 6);
      v200 = 0LL;
      started = (int)DpiDxgkDdiExchangePreStartInfo(v10, v162, &v200);
      ReleaseMiniportListMutex();
      if ( (int)started < 0 )
      {
        v146 = WdLogNewEntry5_WdError(v157, v163, v164);
        *(_QWORD *)(v146 + 24) = *(_QWORD *)(v10 + 1144);
        *(_QWORD *)(v146 + 32) = started;
        goto LABEL_215;
      }
      if ( *((_DWORD *)v6 + 4) == 1953656900 && *((_DWORD *)v6 + 5) == 2 )
      {
        v157 = HIDWORD(v200) >> 1;
        LOBYTE(v157) = (v200 & 0x200000000LL) != 0;
        v6[2741] = BYTE4(v200) & 1;
        v6[2742] = v157;
      }
    }
  }
  if ( v52 && v182 )
    qword_1C00A29E0 = (__int64)DeviceObject;
  DeviceObject->Flags |= 4u;
  DeviceObject->Flags |= 0x2000u;
  DeviceObject->Flags &= ~0x4000u;
  DeviceObject->Flags &= ~0x80u;
  v165 = WdLogNewEntry5_WdEvent(v157);
  *(_QWORD *)(v165 + 24) = DeviceObject;
  WdLogEvent5_WdEvent(v165);
LABEL_246:
  if ( (int)started >= 0 )
    goto LABEL_266;
  if ( v83 == 1 )
  {
LABEL_248:
    v25 = (struct _KMUTANT *)(v10 + 72);
    KeWaitForSingleObject((PVOID)(v10 + 72), Executive, 0, 0, 0LL);
    v167 = *(_QWORD **)DeviceExtension;
    if ( *(char **)(*(_QWORD *)DeviceExtension + 8LL) == DeviceExtension )
    {
      v168 = (PVOID *)*((_QWORD *)DeviceExtension + 1);
      if ( *v168 == DeviceExtension )
      {
        *v168 = v167;
        v167[1] = v168;
        --*(_DWORD *)(v10 + 128);
        if ( v6 && *((_DWORD *)v6 + 126) )
          DpiLdaUnLinkDeviceFromChain(DeviceObject);
        KeReleaseMutex((PRKMUTEX)(v10 + 72), 0);
        goto LABEL_21;
      }
    }
LABEL_254:
    __fastfail(3u);
  }
LABEL_20:
  v25 = (struct _KMUTANT *)(v10 + 72);
LABEL_21:
  if ( v183 == 1 )
    KeReleaseMutex(v25, 0);
  if ( DeviceObject )
  {
    if ( v187 == 1 )
      DpiFdoResetFdo();
    if ( v6 )
    {
      v26 = (_DWORD *)*((_QWORD *)v6 + 182);
      if ( v26 && v26[2] == 1 )
      {
        ExFreePoolWithTag(v26, 0);
        *((_QWORD *)v6 + 182) = 0LL;
      }
      v27 = (_DWORD *)*((_QWORD *)v6 + 183);
      if ( v27 && v27[2] == 1 )
      {
        ExFreePoolWithTag(v27, 0);
        *((_QWORD *)v6 + 183) = 0LL;
      }
      if ( (_BYTE)v193 == 1 )
        DpiAcpiUnregisterAcpiCallbacks(DeviceObject);
      v28 = (void (__fastcall *)(_QWORD))*((_QWORD *)v6 + 73);
      if ( v28 )
      {
        v28(*((_QWORD *)v6 + 71));
        memset(v6 + 560, 0, 0x40uLL);
      }
      v29 = (void (__fastcall *)(_QWORD))*((_QWORD *)v6 + 81);
      if ( v29 )
      {
        v29(*((_QWORD *)v6 + 79));
        memset(v6 + 624, 0, 0x30uLL);
      }
      v30 = (void (__fastcall *)(_QWORD))*((_QWORD *)v6 + 87);
      if ( v30 )
      {
        v30(*((_QWORD *)v6 + 85));
        memset(v6 + 672, 0, 0xB8uLL);
      }
      v31 = (void (__fastcall *)(_QWORD))*((_QWORD *)v6 + 110);
      if ( v31 )
      {
        v31(*((_QWORD *)v6 + 108));
        memset(v6 + 856, 0, 0x58uLL);
      }
      RtlFreeUnicodeString((PUNICODE_STRING)v6 + 32);
      RtlFreeUnicodeString((PUNICODE_STRING)v6 + 33);
      v32 = (void *)*((_QWORD *)v6 + 139);
      if ( v32 )
      {
        ExFreePoolWithTag(v32, 0);
        *((_QWORD *)v6 + 139) = 0LL;
      }
    }
    if ( DeviceExtension )
    {
      v33 = *((_QWORD *)DeviceExtension + 21);
      if ( v33 )
      {
        if ( v188 == 1 )
        {
          ExDeleteResourceLite((PERESOURCE)v33);
          v33 = *((_QWORD *)DeviceExtension + 21);
        }
        if ( *(_DWORD *)(v33 + 104) == 1 )
        {
          ExFreePoolWithTag((PVOID)v33, 0);
          *((_QWORD *)DeviceExtension + 21) = 0LL;
        }
      }
      v34 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 20);
      if ( v34 )
        IoDetachDevice(v34);
    }
    IoDeleteDevice(DeviceObject);
    DeviceObject = 0LL;
  }
  if ( v189 == 1 )
  {
    DpiDxgkDdiRemoveDevice(v10, v197);
    v35 = v178;
  }
  else
  {
    v35 = v178;
    if ( !v178 )
      goto LABEL_266;
    if ( *(_QWORD *)(v10 + 1344) )
    {
      DiagnosticInfoArgs = DxgAllocateDiagnosticInfoArgs(1LL);
      v170 = DiagnosticInfoArgs;
      if ( DiagnosticInfoArgs )
      {
        v171 = *(_DWORD *)(DiagnosticInfoArgs + 216);
        v172 = TargetDevice;
        *(_QWORD *)DiagnosticInfoArgs = v197;
        if ( (*(int (__fastcall **)(struct _DEVICE_OBJECT *, __int64))(v10 + 1344))(v172, DiagnosticInfoArgs) >= 0 )
        {
          if ( *(_DWORD *)(v170 + 220) > v171 )
            *(_DWORD *)(v170 + 220) = 0;
          DxgCreateLiveDumpWithDriverBlob(
            v172,
            0x1B0u,
            *(int *)(v170 + 8),
            (int)started,
            0LL,
            0LL,
            (struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v170);
          v35 = 0;
        }
        DxgFreeDiagnosticInfoArgs((struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v170);
      }
    }
  }
  if ( v35 && (_DWORD)started != -1071774664 )
    DxgCreateLiveDumpWithWdLogs(0x193u, 0x801uLL, (int)started, 0LL, 0LL);
LABEL_266:
  memset(v213, 0, sizeof(v213));
  v173 = DxgkDiagCalcDuration1us(&v208);
  v213[0] = 0x4000000006LL;
  memset(&v213[1], 0, 36);
  HIDWORD(v213[6]) = v191;
  LODWORD(v213[6]) = 34;
  v213[7] = __PAIR64__(started, v173);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v213, 0x100000000LL, v174);
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
