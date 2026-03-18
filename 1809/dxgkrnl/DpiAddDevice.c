/*
 * XREFs of DpiAddDevice @ 0x1C0149BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F6E4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DxgkDiagCalcDuration1us @ 0x1C001E530 (DxgkDiagCalcDuration1us.c)
 *     DpiGetDeviceRegistryPaths @ 0x1C001EB20 (DpiGetDeviceRegistryPaths.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     McTemplateK0ppq @ 0x1C0037720 (McTemplateK0ppq.c)
 *     DpiDxgkDdiLinkDevice @ 0x1C004AF5C (DpiDxgkDdiLinkDevice.c)
 *     DxgkWriteDiagEntry @ 0x1C00C7220 (DxgkWriteDiagEntry.c)
 *     DpiReadPnpRegistryValue @ 0x1C0134C54 (DpiReadPnpRegistryValue.c)
 *     DpEvalAcpiMethod @ 0x1C01451B0 (DpEvalAcpiMethod.c)
 *     DpiFdoDetectPostDevice @ 0x1C014551C (DpiFdoDetectPostDevice.c)
 *     DpiDxgkDdiAddDevice @ 0x1C0147FB8 (DpiDxgkDdiAddDevice.c)
 *     DpiGetDevicePropertyString @ 0x1C0149464 (DpiGetDevicePropertyString.c)
 *     DpiFdoInitializeFdo @ 0x1C014B840 (DpiFdoInitializeFdo.c)
 *     DpiQueryBusInterface @ 0x1C014C390 (DpiQueryBusInterface.c)
 *     DpiAcpiRegisterAcpiCallbacks @ 0x1C015DE50 (DpiAcpiRegisterAcpiCallbacks.c)
 *     DpiGetAgpStatus @ 0x1C015E1B4 (DpiGetAgpStatus.c)
 *     DpiGetVgaStatus @ 0x1C015E3A4 (DpiGetVgaStatus.c)
 *     DpiDxgkDdiExchangePreStartInfo @ 0x1C015E764 (DpiDxgkDdiExchangePreStartInfo.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C01D2280 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     DpiFdoResetFdo @ 0x1C0266BAC (DpiFdoResetFdo.c)
 *     DpiSetDeviceUsageType @ 0x1C0268B8C (DpiSetDeviceUsageType.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x1C0270558 (DpiAcpiUnregisterAcpiCallbacks.c)
 *     DpiLdaLinkDeviceToChain @ 0x1C0272E10 (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C02735B4 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiDxgkDdiRemoveDevice @ 0x1C0273D4C (DpiDxgkDdiRemoveDevice.c)
 */

__int64 __fastcall DpiAddDevice(
        struct _DRIVER_OBJECT *ClientIdentificationAddress,
        struct _DEVICE_OBJECT *a2,
        const GUID *a3)
{
  BOOL v3; // r12d
  GUID *DeviceExtension; // rbx
  GUID *v7; // r14
  __int64 v8; // rcx
  char *DriverObjectExtension; // r13
  int v10; // eax
  __int64 v11; // rcx
  __int64 RegistryValues; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  const UNICODE_STRING *p_DriverName; // rdi
  __int64 v16; // rcx
  char v17; // al
  int DevicePropertyString; // eax
  void *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rax
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
  BOOL v35; // r12d
  unsigned __int8 v36; // al
  __int64 v37; // rdx
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rcx
  NTSTATUS v41; // eax
  char v42; // r12
  struct _DEVICE_OBJECT *v43; // rdi
  PDEVICE_OBJECT v44; // rax
  int DeviceRegistryPaths; // eax
  __int64 v46; // rcx
  int v47; // eax
  int v48; // ecx
  struct _DEVICE_OBJECT *v49; // r12
  NTSTATUS DeviceProperty; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rsi
  __int64 v55; // rax
  unsigned __int16 *p_Data2; // rdi
  NTSTATUS v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rsi
  __int64 v62; // rax
  struct _DEVICE_OBJECT *v63; // rdi
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // rax
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  bool v71; // al
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rdi
  __int64 v76; // rax
  PVOID PoolWithTag; // rax
  __int64 v78; // rcx
  __int64 v79; // rax
  unsigned __int16 *v80; // rcx
  int v81; // edx
  unsigned int v82; // edi
  char v83; // al
  struct _DEVICE_OBJECT *v84; // rcx
  int AgpStatus; // eax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // rdi
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // r8
  unsigned __int8 v93; // al
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rax
  int v99; // eax
  __int64 v100; // rcx
  __int64 v101; // rdi
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rax
  struct _DEVICE_OBJECT *v107; // rdi
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  int v111; // eax
  __int64 v112; // rcx
  PVOID v113; // rdi
  __int16 v114; // r10
  const wchar_t **v115; // r9
  unsigned int v116; // edx
  const wchar_t *v117; // rax
  char *v118; // rcx
  __int64 v119; // rax
  unsigned __int8 *Data4; // rdx
  unsigned __int64 v121; // r8
  int v122; // eax
  __int64 v123; // rax
  char v124; // r15
  int v125; // eax
  GUID **v126; // rcx
  _DWORD *v127; // rax
  __int64 v128; // rcx
  __int64 v129; // rax
  NTSTATUS v130; // eax
  __int64 v131; // rcx
  __int64 v132; // rax
  _DWORD *v133; // rax
  _DWORD *v134; // rax
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rcx
  unsigned __int8 v140; // al
  __int64 v141; // rax
  _QWORD *v142; // rax
  GUID *v143; // rcx
  GUID **v144; // rax
  unsigned int v145; // eax
  __int64 v146; // rcx
  const GUID *v147; // r8
  __int64 Exclusive; // [rsp+28h] [rbp-D8h]
  char v150; // [rsp+40h] [rbp-C0h]
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-B8h] BYREF
  char v152; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v153; // [rsp+51h] [rbp-AFh]
  char v154; // [rsp+52h] [rbp-AEh]
  char v155; // [rsp+53h] [rbp-ADh]
  char v156; // [rsp+54h] [rbp-ACh]
  char v157; // [rsp+55h] [rbp-ABh]
  char v158; // [rsp+56h] [rbp-AAh] BYREF
  char v159; // [rsp+57h] [rbp-A9h]
  char v160; // [rsp+58h] [rbp-A8h]
  char v161; // [rsp+59h] [rbp-A7h]
  ULONG ResultLength; // [rsp+5Ch] [rbp-A4h] BYREF
  int v163; // [rsp+60h] [rbp-A0h]
  PDEVICE_OBJECT TargetDevice; // [rsp+68h] [rbp-98h]
  int v165; // [rsp+70h] [rbp-90h]
  unsigned int v166; // [rsp+74h] [rbp-8Ch] BYREF
  BOOL v167; // [rsp+78h] [rbp-88h]
  int v168; // [rsp+7Ch] [rbp-84h] BYREF
  GUID v169; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+90h] [rbp-70h] BYREF
  __int64 v171; // [rsp+98h] [rbp-68h] BYREF
  PDRIVER_OBJECT DriverObject; // [rsp+A0h] [rbp-60h]
  __int64 v173; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING String1; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING v175; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING v176; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING v177; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING v178; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING v179; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v180[14]; // [rsp+110h] [rbp+10h] BYREF
  int v181[6]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v182; // [rsp+198h] [rbp+98h] BYREF
  int v183; // [rsp+1A0h] [rbp+A0h]
  _QWORD v184[8]; // [rsp+1B0h] [rbp+B0h] BYREF
  _DWORD v185[2]; // [rsp+1F0h] [rbp+F0h]
  const wchar_t *v186; // [rsp+1F8h] [rbp+F8h] BYREF
  int v187; // [rsp+200h] [rbp+100h]
  const wchar_t *v188; // [rsp+208h] [rbp+108h]
  int v189; // [rsp+210h] [rbp+110h]
  const wchar_t *v190; // [rsp+218h] [rbp+118h]
  int v191; // [rsp+220h] [rbp+120h]
  const wchar_t *v192; // [rsp+228h] [rbp+128h]
  _DWORD v193[10]; // [rsp+230h] [rbp+130h] BYREF
  __int128 v194; // [rsp+258h] [rbp+158h] BYREF
  __int64 v195; // [rsp+268h] [rbp+168h]
  int v196; // [rsp+270h] [rbp+170h]
  wchar_t v197; // [rsp+274h] [rbp+174h]
  __int128 v198; // [rsp+278h] [rbp+178h] BYREF
  __int64 v199; // [rsp+288h] [rbp+188h]
  wchar_t v200; // [rsp+290h] [rbp+190h]
  _OWORD v201[2]; // [rsp+298h] [rbp+198h] BYREF
  __int64 v202; // [rsp+2B8h] [rbp+1B8h]
  wchar_t v203; // [rsp+2C0h] [rbp+1C0h]
  _OWORD v204[2]; // [rsp+2C8h] [rbp+1C8h] BYREF
  wchar_t v205; // [rsp+2E8h] [rbp+1E8h]
  _OWORD v206[2]; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int64 v207; // [rsp+310h] [rbp+210h]
  int v208; // [rsp+318h] [rbp+218h]
  _OWORD v209[2]; // [rsp+320h] [rbp+220h] BYREF
  __int64 v210; // [rsp+340h] [rbp+240h]

  v182 = 0LL;
  LOBYTE(v3) = 0;
  v183 = 0;
  DeviceExtension = 0LL;
  v200 = aDriverVgpu[12];
  v7 = 0LL;
  v198 = *(_OWORD *)L"\\Driver\\VGPU";
  TargetDevice = a2;
  v177.Buffer = (wchar_t *)&v198;
  v205 = aDriverWddmwarp[16];
  v204[0] = *(_OWORD *)L"\\Driver\\WddmWarp";
  v175.Buffer = (wchar_t *)v204;
  String1.Buffer = (wchar_t *)v209;
  v199 = *(_QWORD *)L"VGPU";
  v203 = aDriverBasicdis[20];
  v209[0] = *(_OWORD *)L"\\Driver\\BasicRender";
  v178.Buffer = (wchar_t *)v201;
  v210 = *(_QWORD *)L"der";
  v196 = *(_DWORD *)L"md";
  v204[1] = *(_OWORD *)L"WddmWarp";
  v197 = aDriverSrakmd[14];
  DriverObject = ClientIdentificationAddress;
  v201[0] = *(_OWORD *)L"\\Driver\\BasicDisplay";
  *(_QWORD *)&v169.Data1 = 0LL;
  v209[1] = *(_OWORD *)L"BasicRender";
  v161 = 0;
  DeviceObject = 0LL;
  v202 = *(_QWORD *)L"play";
  LOBYTE(v165) = 0;
  v201[1] = *(_OWORD *)L"BasicDisplay";
  v159 = 0;
  v194 = *(_OWORD *)L"\\Driver\\srakmd";
  v155 = 0;
  v195 = *(_QWORD *)L"srakmd";
  v160 = 0;
  v206[0] = *(_OWORD *)L"\\Driver\\VirtualRender";
  v150 = 0;
  v154 = 0;
  v152 = 0;
  v156 = 0;
  v158 = 0;
  v153 = 0;
  v167 = v3;
  v157 = 0;
  v163 = 3;
  *(_DWORD *)&v177.Length = 1703960;
  *(_DWORD *)&v175.Length = 2228256;
  *(_DWORD *)&String1.Length = 2621478;
  *(_DWORD *)&v178.Length = 2752552;
  *(_DWORD *)&v179.Length = 1966108;
  v179.Buffer = (wchar_t *)&v194;
  v206[1] = *(_OWORD *)L"VirtualRender";
  v208 = *(_DWORD *)L"r";
  v176.Buffer = (wchar_t *)v206;
  v207 = *(_QWORD *)L"ender";
  *(_DWORD *)&v176.Length = 2883626;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0ppq(64LL, &EventEnterDpiAddDevice, a3, ClientIdentificationAddress, a2, 0);
  v173 = MEMORY[0xFFFFF78000000320];
  DriverObjectExtension = (char *)IoGetDriverObjectExtension(ClientIdentificationAddress, ClientIdentificationAddress);
  if ( !DriverObjectExtension
    || *((_DWORD *)DriverObjectExtension + 4) != 1953656900
    || *((_DWORD *)DriverObjectExtension + 5) != 1 )
  {
    LODWORD(RegistryValues) = -1073741811;
    v142 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8);
    v142[3] = 275LL;
    v142[4] = 21LL;
    v142[5] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v142);
    goto LABEL_235;
  }
  v10 = DpiDxgkDdiAddDevice((__int64)DriverObjectExtension, (__int64)a2, &v169);
  RegistryValues = v10;
  if ( v10 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v11);
    v14 = *((_QWORD *)DriverObjectExtension + 18);
LABEL_9:
    *(_QWORD *)(v13 + 24) = v14;
    *(_QWORD *)(v13 + 32) = RegistryValues;
LABEL_10:
    WdLogEvent5_WdError(v13);
LABEL_235:
    v124 = 0;
    goto LABEL_236;
  }
  p_DriverName = &ClientIdentificationAddress->DriverName;
  v161 = 1;
  if ( !RtlCompareUnicodeString(&String1, &ClientIdentificationAddress->DriverName, 1u) )
  {
    v16 = 1LL;
    v17 = 1;
    v150 = 1;
    v152 = 1;
    goto LABEL_31;
  }
  if ( !RtlCompareUnicodeString(&v175, p_DriverName, 1u) )
  {
    v152 = 1;
LABEL_19:
    v17 = 0;
    goto LABEL_31;
  }
  if ( !RtlCompareUnicodeString(&v176, p_DriverName, 1u) )
  {
    v157 = 1;
    goto LABEL_19;
  }
  if ( !RtlCompareUnicodeString(&v177, p_DriverName, 1u) )
  {
    v156 = 1;
    goto LABEL_19;
  }
  if ( RtlCompareUnicodeString(&v178, p_DriverName, 1u) )
  {
    v35 = RtlCompareUnicodeString(&v179, p_DriverName, 1u) == 0;
    v36 = DriverObjectExtension[134];
    v167 = v35;
    v153 = v36;
    memset(v180, 0, sizeof(v180));
    v37 = *((_QWORD *)DriverObjectExtension + 6);
    v180[2] = L"Start";
    LODWORD(v180[1]) = 292;
    v180[3] = &v166;
    LODWORD(v180[4]) = 67108868;
    LODWORD(v180[6]) = 4;
    RegistryValues = (int)RtlQueryRegistryValuesEx(0LL, v37, v180, 0LL, 0LL);
    v17 = 0;
    if ( (int)RegistryValues < 0 )
      goto LABEL_22;
    if ( v166 != 3 )
    {
      v38 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v38 + 24) = v166;
      WdLogEvent5_WdError(v38);
      LODWORD(RegistryValues) = -1073741637;
      goto LABEL_35;
    }
  }
  else
  {
    *(_QWORD *)v169.Data4 = 0LL;
    v154 = 1;
    DevicePropertyString = DpiGetDevicePropertyString(
                             TargetDevice,
                             DevicePropertyHardwareID,
                             PagedPool,
                             v169.Data4,
                             &ResultLength);
    RegistryValues = DevicePropertyString;
    if ( DevicePropertyString < 0 )
      goto LABEL_22;
    v19 = *(void **)v169.Data4;
    if ( ResultLength >= 0x24 && RtlCompareMemory(*(const void **)v169.Data4, L"ROOT\\BasicDisplay", 0x24uLL) == 36 )
    {
      v150 = 1;
      if ( byte_1C008E752 )
      {
        LODWORD(RegistryValues) = -1073741637;
        v21 = WdLogNewEntry5_WdEvent(v16, v20);
        *(_QWORD *)(v21 + 24) = 0LL;
        WdLogEvent5_WdEvent(v21);
      }
    }
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
    if ( (int)RegistryValues < 0 )
      goto LABEL_35;
    v17 = v150;
  }
LABEL_31:
  if ( *(_QWORD *)&v169.Data1 )
  {
    v22 = 5544;
    v23 = 2;
    v163 = 0;
    if ( *((_QWORD *)DriverObjectExtension + 77) )
    {
      if ( v17 )
      {
        LODWORD(RegistryValues) = -1073741637;
        v24 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v24 + 24) = *((_QWORD *)DriverObjectExtension + 77);
        *(_QWORD *)(v24 + 32) = -1073741637LL;
        goto LABEL_34;
      }
      v39 = DpiDxgkDdiLinkDevice(
              (__int64)DriverObjectExtension,
              (__int64)TargetDevice,
              *(__int64 *)&v169.Data1,
              (int *)&v182);
      RegistryValues = v39;
      if ( v39 < 0 )
      {
        v13 = WdLogNewEntry5_WdError(v40);
        v14 = *((_QWORD *)DriverObjectExtension + 77);
        goto LABEL_9;
      }
      if ( HIDWORD(v182) > 0x100 )
      {
        LODWORD(RegistryValues) = -1073741756;
        v24 = WdLogNewEntry5_WdError(v40);
        *(_QWORD *)(v24 + 24) = -1073741756LL;
        goto LABEL_34;
      }
      if ( HIDWORD(v182) && !(_BYTE)v183 )
      {
        v22 = 2672;
        v163 = 1;
        v23 = 3;
      }
    }
  }
  else
  {
    v163 = 2;
    v22 = 496;
    v23 = 4;
    if ( v17 )
    {
LABEL_33:
      LODWORD(RegistryValues) = -1073741637;
      v24 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v24 + 24) = -1073741637LL;
LABEL_34:
      WdLogEvent5_WdError(v24);
      goto LABEL_35;
    }
  }
  v41 = IoCreateDevice(DriverObject, v22, 0LL, 0x23u, v153 == 0 ? 0x100 : 0, 0, &DeviceObject);
  RegistryValues = v41;
  if ( v41 < 0 )
  {
LABEL_22:
    v13 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v13 + 24) = RegistryValues;
    goto LABEL_10;
  }
  v163 |= (unsigned int)DeviceObject & 0xFFFF00;
  DeviceExtension = (GUID *)DeviceObject->DeviceExtension;
  *(_DWORD *)&DeviceExtension[1].Data2 = v23;
  v42 = v150;
  DeviceExtension[1].Data1 = 1953656900;
  *(_QWORD *)DeviceExtension[1].Data4 = DeviceObject;
  *(_QWORD *)&DeviceExtension[2].Data1 = DeviceObject;
  *(_QWORD *)DeviceExtension[2].Data4 = DriverObjectExtension;
  *(_QWORD *)&DeviceExtension[3].Data1 = *(_QWORD *)&v169.Data1;
  DeviceExtension[3].Data4[0] = 1;
  LOBYTE(DeviceExtension[30].Data1) = v150;
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)&DeviceExtension[4], 0x74727044u, 1u, 0, 0x20u);
  v43 = TargetDevice;
  *(_QWORD *)DeviceExtension[9].Data4 = TargetDevice;
  v44 = IoAttachDeviceToDeviceStack(DeviceObject, v43);
  *(_QWORD *)&DeviceExtension[10].Data1 = v44;
  if ( !v44 )
  {
    LODWORD(RegistryValues) = -1073741810;
    v24 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v24 + 24) = -1073741810LL;
    goto LABEL_34;
  }
  *(_DWORD *)&DeviceExtension[17].Data4[4] = 1;
  *(_DWORD *)DeviceExtension[17].Data4 = 1;
  *(_QWORD *)&DeviceExtension[19].Data1 = DpiFdoHandleRemoveDevice;
  if ( DeviceExtension[1].Data1 == 1953656900 && (unsigned int)(*(_DWORD *)&DeviceExtension[1].Data2 - 2) <= 1 )
  {
    v7 = DeviceExtension;
    DeviceExtension[163].Data4[5] = v152;
    DeviceExtension[71].Data4[3] = v154;
    DeviceExtension[71].Data4[7] = v153;
    DeviceExtension[163].Data4[6] = v156;
    DeviceExtension[163].Data4[7] = v167;
    BYTE1(DeviceExtension[164].Data1) = v157;
    *(_DWORD *)DeviceExtension[165].Data4 = 0;
    *(_QWORD *)&DeviceExtension[18].Data1 = &DpiFdoHandleStartDevice;
    *(_QWORD *)DeviceExtension[29].Data4 = &DpiFdoHandleSurpriseRemoval;
    *(_QWORD *)DeviceExtension[24].Data4 = &DpiFdoHandleFilterResources;
    if ( !byte_1C008E751 && !LOBYTE(DeviceExtension[30].Data1) )
      *(_QWORD *)&DeviceExtension[20].Data1 = DpiFdoHandleStopDevice;
    *(_QWORD *)&DeviceExtension[31].Data2 = v182;
    *(_DWORD *)&DeviceExtension[31].Data4[4] = v183;
    DeviceRegistryPaths = DpiGetDeviceRegistryPaths((__int64)DeviceObject, (__int64)v43, (__int64)DriverObjectExtension);
    RegistryValues = DeviceRegistryPaths;
    if ( DeviceRegistryPaths < 0 )
      goto LABEL_198;
    if ( (int)DpiQueryBusInterface(*(PDEVICE_OBJECT *)&DeviceExtension[10].Data1, (__int64)DeviceExtension[53].Data4) >= 0 )
    {
      if ( *((_QWORD *)DriverObjectExtension + 29) )
      {
        v47 = DpiAcpiRegisterAcpiCallbacks(DeviceObject);
        v48 = (unsigned __int8)v165;
        if ( v47 >= 0 )
          v48 = 1;
        v165 = v48;
      }
      DeviceExtension[71].Data4[5] = 1;
    }
    v49 = TargetDevice;
    DeviceProperty = IoGetDeviceProperty(TargetDevice, DevicePropertyBusNumber, 4u, &DeviceExtension[71], &ResultLength);
    v54 = DeviceProperty;
    if ( DeviceProperty < 0 )
    {
      v55 = WdLogNewEntry5_WdWarning(v52, v51, v53);
      *(_QWORD *)(v55 + 24) = v54;
      WdLogEvent5_WdWarning(v55);
      DeviceExtension[71].Data1 = -1;
    }
    p_Data2 = &DeviceExtension[71].Data2;
    v57 = IoGetDeviceProperty(v49, DevicePropertyAddress, 4u, &DeviceExtension[71].Data2, &ResultLength);
    v61 = v57;
    if ( v57 < 0 || *(_DWORD *)p_Data2 == -1 )
    {
      v62 = WdLogNewEntry5_WdWarning(v59, v58, v60);
      *(_QWORD *)(v62 + 24) = v61;
      WdLogEvent5_WdWarning(v62);
      *(_DWORD *)p_Data2 = -1;
    }
    v63 = TargetDevice;
    LODWORD(RegistryValues) = IoGetDeviceProperty(
                                TargetDevice,
                                DevicePropertyBusTypeGuid,
                                0x10u,
                                &DeviceExtension[34],
                                &ResultLength);
    if ( (int)RegistryValues < 0 || ResultLength < 0x10 )
    {
      v66 = WdLogNewEntry5_WdEvent(v65, v64);
      *(_QWORD *)(v66 + 24) = DeviceObject;
      WdLogEvent5_WdEvent(v66);
      DeviceExtension[34] = GUID_BUS_TYPE_INVALID;
    }
    if ( !v150 )
    {
      v67 = DpiFdoDetectPostDevice((__int64)DeviceObject, &v158);
      RegistryValues = v67;
      if ( v67 < 0 )
        goto LABEL_198;
      if ( v158 )
      {
        v69 = WdLogNewEntry5_WdEvent(v46, v68);
        *(_QWORD *)(v69 + 24) = DeviceObject;
        WdLogEvent5_WdEvent(v69);
        *(_WORD *)DeviceExtension[71].Data4 = 257;
        byte_1C008EAA0 = 1;
        if ( byte_1C008E751 == 1 )
        {
          AttachedDeviceReference = IoGetAttachedDeviceReference(v63);
          DpiSetDeviceUsageType(AttachedDeviceReference);
          ObfDereferenceObject(AttachedDeviceReference);
          v63 = TargetDevice;
        }
      }
    }
    v168 = 0;
    v71 = (int)DpiReadPnpRegistryValue((__int64)DeviceObject, L"SoftGPUAdapter", (char *)&v168, 4u, 2u) >= 0 && v168;
    DeviceExtension[163].Data4[4] = v71;
    if ( RtlCompareMemory(&DeviceExtension[34], &GUID_BUS_TYPE_PCI, 0x10uLL) == 16 )
    {
      v74 = WdLogNewEntry5_WdEvent(v73, v72);
      *(_QWORD *)(v74 + 24) = DeviceObject;
      WdLogEvent5_WdEvent(v74);
      DpiQueryBusInterface(v63, (__int64)&DeviceExtension[35]);
      if ( !*(_QWORD *)DeviceExtension[38].Data4 )
      {
        v75 = -1073741127LL;
LABEL_122:
        LODWORD(RegistryValues) = v75;
        v76 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v76 + 24) = v75;
        WdLogEvent5_WdError(v76);
        goto LABEL_35;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x74727044u);
      *(_QWORD *)&DeviceExtension[69].Data1 = PoolWithTag;
      if ( !PoolWithTag )
      {
        LODWORD(RegistryValues) = -1073741801;
        v79 = WdLogNewEntry5_WdLowResource(v78);
        *(_QWORD *)(v79 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v79);
        goto LABEL_35;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, PVOID, _QWORD, int))DeviceExtension[38].Data4)(
        *(_QWORD *)DeviceExtension[35].Data4,
        0LL,
        PoolWithTag,
        0LL,
        256);
      v80 = *(unsigned __int16 **)&DeviceExtension[69].Data1;
      *(_DWORD *)DeviceExtension[69].Data4 = 1;
      v81 = *v80;
      *(_DWORD *)&DeviceExtension[69].Data4[4] = v81;
      v82 = v80[1];
      DeviceExtension[70].Data1 = v82;
      *(_DWORD *)&DeviceExtension[70].Data4[4] = *((unsigned __int8 *)v80 + 8);
      if ( (v80[7] & 0x7F) == 0 )
      {
        *(_DWORD *)&DeviceExtension[70].Data2 = v80[22];
        *(_DWORD *)DeviceExtension[70].Data4 = v80[23];
      }
      if ( v81 != 22611 || (v83 = 1, v82 != 4097) )
        v83 = 0;
      v84 = TargetDevice;
      LOBYTE(DeviceExtension[164].Data1) = v83;
      DpiQueryBusInterface(v84, (__int64)&DeviceExtension[39]);
      DpiQueryBusInterface(*(PDEVICE_OBJECT *)&DeviceExtension[10].Data1, (__int64)&DeviceExtension[42]);
      AgpStatus = DpiGetAgpStatus(DeviceObject);
      v89 = AgpStatus;
      if ( AgpStatus >= 0 && !*(_QWORD *)DeviceExtension[42].Data4 )
      {
        v90 = WdLogNewEntry5_WdWarning(v87, v86, v88);
        *(_QWORD *)(v90 + 24) = v89;
        WdLogEvent5_WdWarning(v90);
      }
      LODWORD(RegistryValues) = DpiGetVgaStatus(DeviceObject);
      v93 = DeviceExtension[71].Data4[0];
      if ( (int)RegistryValues < 0 )
      {
        if ( v93 )
        {
          v95 = WdLogNewEntry5_WdWarning(v16, v91, v92);
          *(_QWORD *)(v95 + 24) = DeviceObject;
          WdLogEvent5_WdWarning(v95);
        }
      }
      else if ( v93
             || !byte_1C008EAA0
             && (v94 = WdLogNewEntry5_WdWarning(v16, v91, v92),
                 *(_QWORD *)(v94 + 24) = DeviceObject,
                 WdLogEvent5_WdWarning(v94),
                 DeviceExtension[71].Data4[0] = 1,
                 byte_1C008EAA1 = 1,
                 DeviceExtension[71].Data4[0]) )
      {
        if ( byte_1C008E755 )
          DeviceExtension[71].Data4[4] = 1;
      }
    }
    else if ( RtlCompareMemory(&DeviceExtension[34], &GUID_BUS_TYPE_ACPI, 0x10uLL) == 16 )
    {
      v98 = WdLogNewEntry5_WdEvent(v97, v96);
      *(_QWORD *)(v98 + 24) = DeviceObject;
      WdLogEvent5_WdEvent(v98);
      if ( !DeviceExtension[71].Data4[5] )
        goto LABEL_33;
      *(_DWORD *)DeviceExtension[69].Data4 = 2;
      BYTE1(v181[2]) = 0;
      HIWORD(v181[2]) = 0;
      strcpy((char *)v181, "AeiC_HID");
      v181[3] = 0;
      memset(v193, 0, 0x24uLL);
      v99 = DpEvalAcpiMethod((__int64)DeviceObject, 0xFFFFFFFFLL, v181, 0x18u, v193, 0x24u);
      v101 = v99;
      if ( v99 >= 0 )
      {
        *(_DWORD *)&DeviceExtension[69].Data4[4] = v193[4];
        DeviceExtension[70].Data1 = v193[5];
      }
      else
      {
        v102 = WdLogNewEntry5_WdError(v100);
        *(_QWORD *)(v102 + 24) = v101;
        WdLogEvent5_WdError(v102);
      }
      strcpy((char *)v181, "AeiC_SUB");
      BYTE1(v181[2]) = 0;
      HIWORD(v181[2]) = 0;
      v181[3] = 0;
      memset(v193, 0, 0x24uLL);
      if ( (int)DpEvalAcpiMethod((__int64)DeviceObject, 0xFFFFFFFFLL, v181, 0x18u, v193, 0x24u) >= 0 )
      {
        *(_DWORD *)&DeviceExtension[70].Data2 = v193[4];
        *(_DWORD *)DeviceExtension[70].Data4 = v193[5];
      }
      else
      {
        v105 = WdLogNewEntry5_WdEvent(v104, v103);
        *(_QWORD *)(v105 + 24) = DpEvalAcpiMethod;
        WdLogEvent5_WdEvent(v105);
      }
      strcpy((char *)v181, "AeiC_HRV");
      BYTE1(v181[2]) = 0;
      HIWORD(v181[2]) = 0;
      v181[3] = 0;
      memset(v193, 0, 0x24uLL);
      LODWORD(RegistryValues) = DpEvalAcpiMethod((__int64)DeviceObject, 0xFFFFFFFFLL, v181, 0x18u, v193, 0x24u);
      if ( (int)RegistryValues >= 0 )
      {
        *(_DWORD *)&DeviceExtension[70].Data4[4] = LOWORD(v193[4]);
      }
      else
      {
        v106 = WdLogNewEntry5_WdEvent(v16, v91);
        *(_QWORD *)(v106 + 24) = DpEvalAcpiMethod;
        WdLogEvent5_WdEvent(v106);
        LODWORD(RegistryValues) = 0;
      }
      if ( DeviceExtension[71].Data4[0] )
      {
        v107 = IoGetAttachedDeviceReference(TargetDevice);
        RegistryValues = (int)DpiSetDeviceUsageType(v107);
        ObfDereferenceObject(v107);
        if ( (int)RegistryValues < 0 )
        {
          v108 = WdLogNewEntry5_WdError(v16);
          *(_QWORD *)(v108 + 24) = RegistryValues;
          WdLogEvent5_WdError(v108);
          LODWORD(RegistryValues) = 0;
        }
      }
    }
    else if ( RtlCompareMemory(&DeviceExtension[34], &GUID_BUS_VMBUS, 0x10uLL) == 16 )
    {
      v110 = WdLogNewEntry5_WdEvent(v16, v91);
      *(_QWORD *)(v110 + 24) = DeviceObject;
      WdLogEvent5_WdEvent(v110);
      if ( DeviceExtension[163].Data4[6] )
      {
        *(_DWORD *)&DeviceExtension[69].Data4[4] = 5140;
        *(_QWORD *)&DeviceExtension[70].Data1 = 705LL;
        *(_DWORD *)DeviceExtension[70].Data4 = 0;
        *(_DWORD *)&DeviceExtension[70].Data4[4] = 1;
      }
      *(_DWORD *)DeviceExtension[69].Data4 = 4;
    }
    else if ( DeviceExtension[71].Data4[7] )
    {
      *(_DWORD *)&DeviceExtension[69].Data4[4] = 5140;
      *(_QWORD *)DeviceExtension[70].Data4 = 0LL;
      *(_DWORD *)DeviceExtension[69].Data4 = 0;
      *(_QWORD *)&DeviceExtension[70].Data1 = 139LL;
    }
    else if ( LOBYTE(DeviceExtension[30].Data1) )
    {
      *(_DWORD *)DeviceExtension[69].Data4 = 3;
      *(_DWORD *)&DeviceExtension[69].Data4[4] = 5140;
      if ( DeviceExtension[71].Data4[3] )
      {
        DeviceExtension[70].Data1 = 141;
      }
      else if ( DeviceExtension[163].Data4[5] )
      {
        DeviceExtension[70].Data1 = 140;
      }
    }
    else
    {
      if ( !DeviceExtension[163].Data4[7] && (!g_OSTestSigningEnabled || !DeviceExtension[163].Data4[4]) )
        goto LABEL_33;
      *(_DWORD *)DeviceExtension[69].Data4 = 3;
      if ( DeviceExtension[163].Data4[4] )
      {
        *(_DWORD *)&DeviceExtension[69].Data4[4] = 5140;
        P = 0LL;
        v111 = DpiGetDevicePropertyString(v63, DevicePropertyCompatibleIDs, PagedPool, &P, &ResultLength);
        RegistryValues = v111;
        if ( v111 >= 0 && (v113 = P) != 0LL )
        {
          v114 = *(_WORD *)P;
          v186 = L"SoftGPU_Full_D3D12";
          v115 = &v186;
          v185[0] = 135;
          v188 = L"SoftGPU_Full_D3D9L";
          v116 = 0;
          v187 = 128;
          v190 = L"SoftGPU_Rod";
          v192 = L"SoftGPU_Dod";
          v189 = 136;
          v191 = 137;
          while ( 1 )
          {
            v117 = *v115;
            if ( v114 )
              break;
LABEL_182:
            if ( !*v117 )
              goto LABEL_185;
            ++v116;
            v115 += 2;
            if ( v116 >= 4 )
              goto LABEL_186;
          }
          v118 = (char *)((_BYTE *)P - (_BYTE *)v117);
          while ( *v117 )
          {
            if ( *(const wchar_t *)((char *)v117 + (_QWORD)v118) == *v117 )
            {
              if ( *(const wchar_t *)((char *)++v117 + (_QWORD)v118) )
                continue;
            }
            goto LABEL_182;
          }
LABEL_185:
          DeviceExtension[70].Data1 = v185[4 * v116];
LABEL_186:
          ExFreePoolWithTag(v113, 0);
        }
        else
        {
          v119 = WdLogNewEntry5_WdError(v112);
          *(_QWORD *)(v119 + 24) = RegistryValues;
          WdLogEvent5_WdError(v119);
        }
      }
    }
    if ( !DeviceExtension[71].Data4[0] && !LOBYTE(DeviceExtension[30].Data1) && DeviceExtension[71].Data4[3] )
    {
      v109 = WdLogNewEntry5_WdEvent(v16, v91);
      *(_QWORD *)(v109 + 24) = DeviceObject;
      WdLogEvent5_WdEvent(v109);
      LODWORD(RegistryValues) = -1071774664;
      goto LABEL_35;
    }
    if ( DeviceExtension[163].Data4[4] && DeviceExtension[163].Data4[5] )
    {
      v75 = -1073741811LL;
      goto LABEL_122;
    }
    KeInitializeSpinLock((PKSPIN_LOCK)&DeviceExtension[86].Data1);
    Data4 = DeviceExtension[77].Data4;
    *(_WORD *)DeviceExtension[76].Data4 = 64;
    v121 = 7LL;
    if ( (((_BYTE)DeviceExtension - 40) & 4) != 0 )
    {
      *(_DWORD *)Data4 = 1;
      v121 = 6LL;
      Data4 = &DeviceExtension[77].Data4[4];
    }
    memset64(Data4, 0x100000001uLL, v121 >> 1);
    if ( (v121 & 1) != 0 )
      *(_DWORD *)&Data4[4 * v121 - 4] = 1;
    KeInitializeDpc((PRKDPC)&DeviceExtension[82], (PKDEFERRED_ROUTINE)DpiFdoDpcForIsr, DeviceObject);
    KeInitializeMutex((PRKMUTEX)&DeviceExtension[153], 0);
    KeInitializeMutex((PRKMUTEX)&DeviceExtension[158], 0);
    *(_QWORD *)DeviceExtension[152].Data4 = DeviceExtension + 152;
    *(_QWORD *)&DeviceExtension[152].Data1 = DeviceExtension + 152;
    *(_QWORD *)DeviceExtension[157].Data4 = DeviceExtension + 157;
    *(_QWORD *)&DeviceExtension[157].Data1 = DeviceExtension + 157;
    *(_QWORD *)&DeviceExtension[165].Data1 = (char *)DeviceExtension + 2632;
    *(_QWORD *)DeviceExtension[164].Data4 = (char *)DeviceExtension + 2632;
    KeInitializeEvent((PRKEVENT)&DeviceExtension[73], NotificationEvent, 1u);
    KeInitializeEvent((PRKEVENT)DeviceExtension[74].Data4, NotificationEvent, 1u);
    if ( DeviceExtension[1].Data1 != 1953656900 )
      goto LABEL_200;
    if ( *(_DWORD *)&DeviceExtension[1].Data2 == 2 )
    {
      v122 = DpiFdoInitializeFdo(DeviceObject);
      RegistryValues = v122;
      if ( v122 < 0 )
      {
LABEL_198:
        v123 = WdLogNewEntry5_WdError(v46);
        *(_QWORD *)(v123 + 24) = RegistryValues;
        WdLogEvent5_WdError(v123);
        v124 = 0;
        goto LABEL_236;
      }
      v159 = 1;
LABEL_200:
      v42 = v150;
      goto LABEL_203;
    }
    v42 = v150;
    if ( *(_DWORD *)&DeviceExtension[1].Data2 == 3 )
    {
      LODWORD(RegistryValues) = 0;
      *((_QWORD *)DeviceObject->DeviceExtension + 43) = &DpiLdaHandleQueryDeviceRelations;
    }
  }
LABEL_203:
  KeWaitForSingleObject(DriverObjectExtension + 72, Executive, 0, 0, 0LL);
  v155 = 1;
  if ( v7 )
  {
    if ( *(_DWORD *)v7[31].Data4 )
    {
      v125 = DpiLdaLinkDeviceToChain(DeviceObject);
      RegistryValues = v125;
      if ( v125 < 0 )
        goto LABEL_198;
    }
  }
  v126 = (GUID **)*((_QWORD *)DriverObjectExtension + 8);
  if ( *v126 != (GUID *)(DriverObjectExtension + 56) )
    goto LABEL_244;
  *(_QWORD *)&DeviceExtension->Data1 = DriverObjectExtension + 56;
  v124 = 1;
  *(_QWORD *)DeviceExtension->Data4 = v126;
  *v126 = DeviceExtension;
  *((_QWORD *)DriverObjectExtension + 8) = DeviceExtension;
  ++*((_DWORD *)DriverObjectExtension + 32);
  if ( !*(_QWORD *)DeviceExtension[10].Data4 )
  {
    v127 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x70uLL, 0x74727044u);
    *(_QWORD *)DeviceExtension[10].Data4 = v127;
    if ( !v127 )
    {
LABEL_209:
      LODWORD(RegistryValues) = -1073741801;
      v129 = WdLogNewEntry5_WdLowResource(v128);
      *(_QWORD *)(v129 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v129);
      goto LABEL_238;
    }
    v127[26] = 1;
    v130 = ExInitializeResourceLite(*(PERESOURCE *)DeviceExtension[10].Data4);
    RegistryValues = v130;
    if ( v130 < 0 )
    {
      v132 = WdLogNewEntry5_WdError(v131);
      *(_QWORD *)(v132 + 24) = RegistryValues;
LABEL_212:
      WdLogEvent5_WdError(v132);
      goto LABEL_236;
    }
    v160 = 1;
  }
  KeInitializeMutex((PRKMUTEX)&DeviceExtension[11], 0);
  if ( v7 )
  {
    if ( !*(_QWORD *)v7[86].Data4 )
    {
      v133 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x74727044u);
      *(_QWORD *)v7[86].Data4 = v133;
      if ( !v133 )
        goto LABEL_209;
      v133[2] = 1;
      KeInitializeSpinLock(*(PKSPIN_LOCK *)v7[86].Data4);
    }
    if ( !*(_QWORD *)&v7[87].Data1 )
    {
      v134 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x74727044u);
      *(_QWORD *)&v7[87].Data1 = v134;
      if ( !v134 )
        goto LABEL_209;
      v134[2] = 1;
      KeInitializeSpinLock(*(PKSPIN_LOCK *)&v7[87].Data1);
    }
    *(_DWORD *)v7[87].Data4 = 0;
    memset(&v7[88], 0, 0x400uLL);
  }
  KeReleaseMutex((PRKMUTEX)(DriverObjectExtension + 72), 0);
  v155 = 0;
  *(_QWORD *)&DeviceExtension[8].Data1 = DpiFdoDispatchPnp;
  if ( v7 )
  {
    *(_QWORD *)v7[8].Data4 = DpiFdoDispatchPower;
    if ( v7[71].Data4[0] )
    {
      AcquireMiniportListMutex();
      if ( qword_1C008E9D8 && qword_1C008E9D8 != qword_1C008E9E0 )
      {
        v137 = WdLogNewEntry5_WdError(v136);
        *(_QWORD *)(v137 + 24) = DeviceObject;
        *(_QWORD *)(v137 + 32) = (int)RegistryValues;
        WdLogEvent5_WdError(v137);
      }
      qword_1C008E9D8 = (__int64)DeviceObject;
      v138 = *(_QWORD *)&v7[3].Data1;
      v171 = 0LL;
      RegistryValues = (int)DpiDxgkDdiExchangePreStartInfo(DriverObjectExtension, v138, &v171);
      _InterlockedExchange64(&qword_1C008E788, 0LL);
      KeReleaseMutex(Mutex, 0);
      if ( (int)RegistryValues < 0 )
      {
        v132 = WdLogNewEntry5_WdError(v139);
        *(_QWORD *)(v132 + 24) = *((_QWORD *)DriverObjectExtension + 143);
        *(_QWORD *)(v132 + 32) = RegistryValues;
        goto LABEL_212;
      }
      v135 = 1LL;
      v140 = BYTE4(v171) & 1;
      v7[166].Data4[6] = (v171 & 0x200000000LL) != 0;
      v7[166].Data4[5] = v140;
    }
  }
  if ( v42 && v154 )
    qword_1C008E9E0 = (__int64)DeviceObject;
  DeviceObject->Flags |= 4u;
  DeviceObject->Flags |= 0x2000u;
  DeviceObject->Flags &= ~0x4000u;
  DeviceObject->Flags &= ~0x80u;
  v141 = WdLogNewEntry5_WdEvent(0LL, v135);
  *(_QWORD *)(v141 + 24) = DeviceObject;
  WdLogEvent5_WdEvent(v141);
LABEL_236:
  if ( (int)RegistryValues >= 0 )
    goto LABEL_245;
  if ( v124 == 1 )
  {
LABEL_238:
    v25 = (struct _KMUTANT *)(DriverObjectExtension + 72);
    KeWaitForSingleObject(DriverObjectExtension + 72, Executive, 0, 0, 0LL);
    v143 = *(GUID **)&DeviceExtension->Data1;
    if ( *(GUID **)(*(_QWORD *)&DeviceExtension->Data1 + 8LL) == DeviceExtension )
    {
      v144 = *(GUID ***)DeviceExtension->Data4;
      if ( *v144 == DeviceExtension )
      {
        *v144 = v143;
        *(_QWORD *)v143->Data4 = v144;
        --*((_DWORD *)DriverObjectExtension + 32);
        if ( v7 && *(_DWORD *)v7[31].Data4 )
          DpiLdaUnLinkDeviceFromChain(DeviceObject);
        KeReleaseMutex((PRKMUTEX)(DriverObjectExtension + 72), 0);
        goto LABEL_36;
      }
    }
LABEL_244:
    __fastfail(3u);
  }
LABEL_35:
  v25 = (struct _KMUTANT *)(DriverObjectExtension + 72);
LABEL_36:
  if ( v155 == 1 )
    KeReleaseMutex(v25, 0);
  if ( DeviceObject )
  {
    if ( v159 == 1 )
      DpiFdoResetFdo();
    if ( v7 )
    {
      v26 = *(_DWORD **)v7[86].Data4;
      if ( v26 && v26[2] == 1 )
      {
        ExFreePoolWithTag(v26, 0);
        *(_QWORD *)v7[86].Data4 = 0LL;
      }
      v27 = *(_DWORD **)&v7[87].Data1;
      if ( v27 && v27[2] == 1 )
      {
        ExFreePoolWithTag(v27, 0);
        *(_QWORD *)&v7[87].Data1 = 0LL;
      }
      if ( (_BYTE)v165 == 1 )
        DpiAcpiUnregisterAcpiCallbacks(DeviceObject);
      v28 = *(void (__fastcall **)(_QWORD))v7[36].Data4;
      if ( v28 )
      {
        v28(*(_QWORD *)v7[35].Data4);
        memset(&v7[35], 0, 0x40uLL);
      }
      v29 = *(void (__fastcall **)(_QWORD))v7[40].Data4;
      if ( v29 )
      {
        v29(*(_QWORD *)v7[39].Data4);
        memset(&v7[39], 0, 0x30uLL);
      }
      v30 = *(void (__fastcall **)(_QWORD))v7[43].Data4;
      if ( v30 )
      {
        v30(*(_QWORD *)v7[42].Data4);
        memset(&v7[42], 0, 0xB8uLL);
      }
      v31 = *(void (__fastcall **)(_QWORD))&v7[55].Data1;
      if ( v31 )
      {
        v31(*(_QWORD *)&v7[54].Data1);
        memset(v7[53].Data4, 0, 0x58uLL);
      }
      RtlFreeUnicodeString((PUNICODE_STRING)&v7[32]);
      RtlFreeUnicodeString((PUNICODE_STRING)&v7[33]);
      v32 = *(void **)&v7[69].Data1;
      if ( v32 )
      {
        ExFreePoolWithTag(v32, 0);
        *(_QWORD *)&v7[69].Data1 = 0LL;
      }
    }
    if ( DeviceExtension )
    {
      v33 = *(_QWORD *)DeviceExtension[10].Data4;
      if ( v33 )
      {
        if ( v160 == 1 )
        {
          ExDeleteResourceLite((PERESOURCE)v33);
          v33 = *(_QWORD *)DeviceExtension[10].Data4;
        }
        if ( *(_DWORD *)(v33 + 104) == 1 )
        {
          ExFreePoolWithTag((PVOID)v33, 0);
          *(_QWORD *)DeviceExtension[10].Data4 = 0LL;
        }
      }
      v34 = *(struct _DEVICE_OBJECT **)&DeviceExtension[10].Data1;
      if ( v34 )
        IoDetachDevice(v34);
    }
    IoDeleteDevice(DeviceObject);
    DeviceObject = 0LL;
  }
  if ( v161 == 1 )
    DpiDxgkDdiRemoveDevice(DriverObjectExtension, *(_QWORD *)&v169.Data1);
  if ( (_DWORD)RegistryValues != -1071774664 )
    DxgCreateLiveDumpWithWdLogs(0x193u, 0x801uLL, (int)RegistryValues, 0LL, 0LL);
LABEL_245:
  memset(v184, 0, sizeof(v184));
  v145 = DxgkDiagCalcDuration1us(&v173);
  v184[0] = 0x4000000006LL;
  memset(&v184[1], 0, 36);
  HIDWORD(v184[6]) = v163;
  LODWORD(v184[6]) = 34;
  v184[7] = __PAIR64__(RegistryValues, v145);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v184);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(Exclusive) = RegistryValues;
    McTemplateK0ppq(v146, &EventExitDpiAddDevice, v147, DriverObject, TargetDevice, Exclusive);
  }
  return (unsigned int)RegistryValues;
}
