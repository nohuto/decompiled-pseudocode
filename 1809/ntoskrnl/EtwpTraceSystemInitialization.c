/*
 * XREFs of EtwpTraceSystemInitialization @ 0x1409D2A58
 * Callers:
 *     EtwpInitialize @ 0x1409D1620 (EtwpInitialize.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     RtlGetSystemTimePrecise @ 0x14008A500 (RtlGetSystemTimePrecise.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     HviGetHypervisorFeatures @ 0x14017D850 (HviGetHypervisorFeatures.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x140186510 (HviIsHypervisorVendorMicrosoft.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     HviGetHardwareFeatures @ 0x140322540 (HviGetHardwareFeatures.c)
 *     RtlGetVersion @ 0x1406B59D0 (RtlGetVersion.c)
 */

char EtwpTraceSystemInitialization()
{
  NTSTATUS Version; // eax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  REGHANDLE v4; // rbx
  __int64 v5; // r9
  __int64 v6; // r10
  char v7; // r9
  ULONGLONG v8; // rax
  int v10; // [rsp+48h] [rbp-C0h] BYREF
  int v11; // [rsp+4Ch] [rbp-BCh] BYREF
  int v12; // [rsp+50h] [rbp-B8h] BYREF
  int v13; // [rsp+54h] [rbp-B4h] BYREF
  int v14; // [rsp+58h] [rbp-B0h] BYREF
  DWORD dwMajorVersion; // [rsp+5Ch] [rbp-ACh] BYREF
  DWORD dwMinorVersion; // [rsp+60h] [rbp-A8h] BYREF
  DWORD dwBuildNumber; // [rsp+64h] [rbp-A4h] BYREF
  int v18; // [rsp+68h] [rbp-A0h] BYREF
  int v19; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v20; // [rsp+70h] [rbp-98h] BYREF
  LARGE_INTEGER v21; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER SystemTimePrecise; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v23[2]; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v24[4]; // [rsp+98h] [rbp-70h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+A8h] [rbp-60h] BYREF
  __int16 v26; // [rsp+1BCh] [rbp+B4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1C8h] [rbp+C0h] BYREF
  LARGE_INTEGER *p_SystemTimePrecise; // [rsp+1D8h] [rbp+D0h]
  __int64 v29; // [rsp+1E0h] [rbp+D8h]
  DWORD *v30; // [rsp+1E8h] [rbp+E0h]
  __int64 v31; // [rsp+1F0h] [rbp+E8h]
  int *v32; // [rsp+1F8h] [rbp+F0h]
  __int64 v33; // [rsp+200h] [rbp+F8h]
  __int16 *v34; // [rsp+208h] [rbp+100h]
  __int64 v35; // [rsp+210h] [rbp+108h]
  int *v36; // [rsp+218h] [rbp+110h]
  __int64 v37; // [rsp+220h] [rbp+118h]
  LARGE_INTEGER *v38; // [rsp+228h] [rbp+120h]
  __int64 v39; // [rsp+230h] [rbp+128h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+238h] [rbp+130h] BYREF
  DWORD *p_dwMajorVersion; // [rsp+258h] [rbp+150h]
  __int64 v42; // [rsp+260h] [rbp+158h]
  DWORD *p_dwMinorVersion; // [rsp+268h] [rbp+160h]
  __int64 v44; // [rsp+270h] [rbp+168h]
  DWORD *p_dwBuildNumber; // [rsp+278h] [rbp+170h]
  __int64 v46; // [rsp+280h] [rbp+178h]
  int *v47; // [rsp+288h] [rbp+180h]
  __int64 v48; // [rsp+290h] [rbp+188h]
  int *v49; // [rsp+298h] [rbp+190h]
  __int64 v50; // [rsp+2A0h] [rbp+198h]
  int *v51; // [rsp+2A8h] [rbp+1A0h]
  __int64 v52; // [rsp+2B0h] [rbp+1A8h]
  __int64 *v53; // [rsp+2B8h] [rbp+1B0h]
  __int64 v54; // [rsp+2C0h] [rbp+1B8h]
  _QWORD *v55; // [rsp+2C8h] [rbp+1C0h]
  __int64 v56; // [rsp+2D0h] [rbp+1C8h]
  int *v57; // [rsp+2D8h] [rbp+1D0h]
  __int64 v58; // [rsp+2E0h] [rbp+1D8h]
  int *v59; // [rsp+2E8h] [rbp+1E0h]
  __int64 v60; // [rsp+2F0h] [rbp+1E8h]
  EVENT_DATA_DESCRIPTOR v61; // [rsp+2F8h] [rbp+1F0h] BYREF
  int *v62; // [rsp+318h] [rbp+210h]
  __int64 v63; // [rsp+320h] [rbp+218h]
  int *v64; // [rsp+328h] [rbp+220h]
  __int64 v65; // [rsp+330h] [rbp+228h]

  v14 = InitSafeBootMode;
  v13 = 9020;
  VersionInformation.dwOSVersionInfoSize = 284;
  Version = RtlGetVersion(&VersionInformation);
  if ( Version >= 0 )
  {
    v21 = KeBootTime;
    if ( stru_140401308.LevelPlus1 > 5 && TlgKeywordOn(&stru_140401308, 0x800000000000uLL) )
    {
      dwMajorVersion = VersionInformation.dwMajorVersion;
      LOBYTE(v10) = v6 != 0;
      dwMinorVersion = VersionInformation.dwMinorVersion;
      dwBuildNumber = VersionInformation.dwBuildNumber;
      v19 = v13;
      LOWORD(v11) = v26;
      LODWORD(v20) = v14;
      v12 = dword_14043D7B0;
      p_dwMajorVersion = &dwMajorVersion;
      p_dwMinorVersion = &dwMinorVersion;
      p_dwBuildNumber = &dwBuildNumber;
      v47 = &v18;
      v49 = &v19;
      v51 = &v11;
      v53 = &v20;
      v55 = v23;
      v57 = &v12;
      v59 = &v10;
      v18 = 1;
      v23[0] = v5;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 4LL;
      v50 = 4LL;
      v52 = 2LL;
      v54 = 4LL;
      v56 = 8LL;
      v58 = 4LL;
      v60 = 1LL;
      TlgWrite(&stru_140401308, &unk_1403740B3, 0LL, 0LL, 0xCu, &pData);
    }
    LOBYTE(Version) = HviIsHypervisorVendorMicrosoft();
    if ( (_BYTE)Version )
    {
      HviGetHardwareFeatures((__int64)v24, v1, v2, v3);
      LOBYTE(Version) = HviGetHypervisorFeatures(v23);
      if ( stru_140401308.LevelPlus1 > 5 )
      {
        LOBYTE(Version) = TlgKeywordOn(&stru_140401308, 0x400000000000uLL);
        if ( (_BYTE)Version )
        {
          LOBYTE(v10) = v7;
          v12 = (v24[0] >> 10) & 0xF;
          v62 = &v12;
          v64 = &v10;
          v63 = 4LL;
          v65 = 1LL;
          LOBYTE(Version) = TlgWrite(&stru_140401308, &unk_14037407E, 0LL, 0LL, 4u, &v61);
        }
      }
    }
    if ( EtwKernelProvRegHandle )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&VersionInformation.dwMajorVersion;
      v29 = 4LL;
      p_SystemTimePrecise = (LARGE_INTEGER *)&VersionInformation.dwMinorVersion;
      v31 = 4LL;
      v30 = &VersionInformation.dwBuildNumber;
      v33 = 4LL;
      v32 = &v13;
      v34 = &v26;
      v36 = &v14;
      v38 = &v21;
      v35 = 2LL;
      v37 = 4LL;
      v39 = 8LL;
      EtwWriteEx(EtwKernelProvRegHandle, &KernelSystemStart, 0LL, 0, 0LL, 0LL, 7u, &UserData);
      v4 = EtwKernelProvRegHandle;
      LOBYTE(Version) = EtwEventEnabled(EtwKernelProvRegHandle, &BootPerformanceData);
      if ( (_BYTE)Version )
      {
        *(_QWORD *)&UserData.Size = 72LL;
        UserData.Ptr = (ULONGLONG)&EtwBootPerfData;
        LOBYTE(Version) = EtwWriteEx(v4, &BootPerformanceData, 0LL, 0, 0LL, 0LL, 1u, &UserData);
      }
      if ( (qword_14040ADF8 & 4) != 0 )
      {
        SystemTimePrecise = RtlGetSystemTimePrecise();
        v8 = *(_QWORD *)(KeLoaderBlock_0 + 240) + 2872LL;
        *(_QWORD *)&UserData.Size = 8LL;
        UserData.Ptr = v8;
        p_SystemTimePrecise = &SystemTimePrecise;
        v29 = 8LL;
        v30 = (DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 2864LL);
        v31 = 4LL;
        LOBYTE(Version) = EtwWriteEx(EtwKernelProvRegHandle, &SoftBootInfo, 0LL, 0, 0LL, 0LL, 3u, &UserData);
      }
    }
  }
  return Version;
}
