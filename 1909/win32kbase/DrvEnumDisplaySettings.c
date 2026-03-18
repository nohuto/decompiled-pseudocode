/*
 * XREFs of DrvEnumDisplaySettings @ 0x1C0038F60
 * Callers:
 *     NtUserEnumDisplaySettings @ 0x1C003A710 (NtUserEnumDisplaySettings.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0012FFC (PALLOCMEM2.c)
 *     EngAcquireSemaphore @ 0x1C002BB10 (EngAcquireSemaphore.c)
 *     DrvGetDeviceFromName @ 0x1C003A300 (DrvGetDeviceFromName.c)
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x1C003AA94 (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     DrvBuildDevmodeList @ 0x1C0045480 (DrvBuildDevmodeList.c)
 *     DrvGetDisplayDriverParameters @ 0x1C0045808 (DrvGetDisplayDriverParameters.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C004AB90 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0072010 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0075F30 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x1C009E108 (-DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C009FE44 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 */

__int64 __fastcall DrvEnumDisplaySettings(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 DeviceFromName; // rsi
  _QWORD *v10; // rax
  unsigned __int16 v11; // r12
  __int64 v12; // rax
  struct PDEV *i; // rbx
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int16 v17; // ax
  __int64 v18; // rcx
  int PreferredMode; // ebx
  __int64 v20; // rax
  UNICODE_STRING *v21; // rax
  __int64 v22; // r15
  int DevModeForLddmPath; // eax
  unsigned __int16 v24; // ax
  int v25; // eax
  __int64 v26; // r15
  __int64 v27; // rax
  struct PDEV *j; // rcx
  __int64 v29; // rdx
  void *v30; // rax
  __int64 v31; // rbx
  __int64 v32; // r15
  unsigned int v33; // r10d
  unsigned int v34; // r8d
  int v35; // r9d
  unsigned __int16 v36; // ax
  unsigned int v37; // ebx
  size_t v38; // r13
  unsigned __int16 v39; // ax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  unsigned __int16 v43; // [rsp+30h] [rbp-58h]
  PCUNICODE_STRING String1; // [rsp+90h] [rbp+8h] BYREF
  __int64 v45; // [rsp+98h] [rbp+10h]
  int v46; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v47; // [rsp+A8h] [rbp+20h]

  v47 = a4;
  DeviceFromName = 0LL;
  v45 = 0LL;
  v10 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v10[3] = a1;
  v10[4] = a2;
  v10[5] = a3;
  v10[6] = a5;
  WdLogEvent5_WdEvent();
  if ( (a4 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v43 = *(_WORD *)(a4 + 70);
  v11 = v43;
  ProbeForWrite((volatile void *)a4, v43 + 220LL, 2u);
  if ( *(_WORD *)(a4 + 68) == 220 )
  {
    if ( a1 )
    {
      String1 = 0LL;
      if ( (int)DrvProbeAndCaptureString(a1, (struct AUTO_FREE_STRING *)&String1) >= 0 )
      {
        DeviceFromName = DrvGetDeviceFromName(String1);
        v45 = DeviceFromName;
      }
      if ( DeviceFromName && !*(_QWORD *)(DeviceFromName + 136) )
      {
        DeviceFromName &= -(__int64)((*(_DWORD *)(DeviceFromName + 160) & 0x6000008) != 0);
        v45 = DeviceFromName;
      }
      if ( String1 )
        Win32FreePool((__int64)String1);
    }
    else if ( a2 )
    {
      DeviceFromName = *(_QWORD *)(a2 + 2576);
      v45 = DeviceFromName;
    }
    if ( DeviceFromName )
    {
      switch ( a3 )
      {
        case 0xFFFFFFFD:
          PreferredMode = DrvGetPreferredMode((struct _devicemodeW *)a4, (struct tagGRAPHICS_DEVICE *)DeviceFromName);
          break;
        case 0xFFFFFFFE:
          v21 = (UNICODE_STRING *)PALLOCMEM2(0x100DBuLL, 0x76656447u, 1);
          v22 = (__int64)v21;
          String1 = v21;
          if ( v21 )
          {
            if ( (*(_DWORD *)(DeviceFromName + 160) & 0x800000) != 0 )
            {
              DevModeForLddmPath = DrvGetDevModeForLddmPath(
                                     (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                                     0xFFFFFFFE,
                                     (struct _devicemodeW *)v21,
                                     0LL);
            }
            else
            {
              *(_DWORD *)(&v21[4].MaximumLength + 1) = -8739;
              DevModeForLddmPath = DrvGetDisplayDriverParameters(DeviceFromName, v21, 0LL, 0LL);
            }
            PreferredMode = DevModeForLddmPath;
            if ( DevModeForLddmPath >= 0 )
            {
              v24 = *(_WORD *)(v22 + 70);
              if ( v43 < v24 )
                v24 = v43;
              v11 = v24;
              memmove((void *)(a4 + 220), (const void *)(v22 + 220), v24);
              *(_OWORD *)a4 = *(_OWORD *)v22;
              *(_OWORD *)(a4 + 16) = *(_OWORD *)(v22 + 16);
              *(_OWORD *)(a4 + 32) = *(_OWORD *)(v22 + 32);
              *(_OWORD *)(a4 + 48) = *(_OWORD *)(v22 + 48);
              *(_OWORD *)(a4 + 64) = *(_OWORD *)(v22 + 64);
              *(_OWORD *)(a4 + 80) = *(_OWORD *)(v22 + 80);
              *(_OWORD *)(a4 + 96) = *(_OWORD *)(v22 + 96);
              *(_OWORD *)(a4 + 112) = *(_OWORD *)(v22 + 112);
              *(_OWORD *)(a4 + 128) = *(_OWORD *)(v22 + 128);
              *(_OWORD *)(a4 + 144) = *(_OWORD *)(v22 + 144);
              *(_OWORD *)(a4 + 160) = *(_OWORD *)(v22 + 160);
              *(_OWORD *)(a4 + 176) = *(_OWORD *)(v22 + 176);
              *(_OWORD *)(a4 + 192) = *(_OWORD *)(v22 + 192);
              *(_QWORD *)(a4 + 208) = *(_QWORD *)(v22 + 208);
              *(_DWORD *)(a4 + 216) = *(_DWORD *)(v22 + 216);
            }
            Win32FreePool(v22);
          }
          else
          {
            PreferredMode = -1073741801;
          }
          break;
        case 0xFFFFFFFF:
          if ( ghsemDynamicModeChange )
            ExEnterPriorityRegionAndAcquireResourceShared();
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
          EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
          for ( i = gppdevList; ; i = *(struct PDEV **)i )
          {
            if ( !i )
            {
              PreferredMode = -1073741585;
              goto LABEL_31;
            }
            v15 = *((_QWORD *)i + 322);
            if ( v15 == DeviceFromName )
            {
              if ( *((_DWORD *)i + 3) )
                break;
            }
          }
          LOBYTE(v46) = 0;
          if ( *(_DWORD *)(*((_QWORD *)i + 324) + 184LL) == 1 && (*(_DWORD *)(v15 + 160) & 0x800000) != 0 )
          {
            v25 = DrvGetDevModeForLddmPath((struct tagGRAPHICS_DEVICE *)DeviceFromName, 0xFFFFFFFF, 0LL, (bool *)&v46);
            v26 = v25;
            if ( v25 < 0 )
            {
              v27 = WdLogNewEntry5_WdTrace();
              *(_QWORD *)(v27 + 24) = v26;
              WdLogEvent5_WdTrace(v27);
            }
          }
          if ( (*(_DWORD *)(DeviceFromName + 160) & 0x4000000) != 0 && (*(_DWORD *)(DeviceFromName + 164) & 4) != 0 )
          {
            wil_details_FeaturePropertyCache_ReportUsageToService(
              &Feature_Vail__private_propertyCache,
              8554091LL,
              &unk_1C01EA8A8,
              1LL,
              3);
            LOBYTE(v46) = 1;
          }
          v16 = *((_QWORD *)i + 324);
          v17 = *(_WORD *)(v16 + 70);
          if ( v43 < v17 )
            v17 = v43;
          v11 = v17;
          memmove((void *)(a4 + 220), (const void *)(v16 + 220), v17);
          v18 = *((_QWORD *)i + 324);
          *(_OWORD *)a4 = *(_OWORD *)v18;
          *(_OWORD *)(a4 + 16) = *(_OWORD *)(v18 + 16);
          *(_OWORD *)(a4 + 32) = *(_OWORD *)(v18 + 32);
          *(_OWORD *)(a4 + 48) = *(_OWORD *)(v18 + 48);
          *(_OWORD *)(a4 + 64) = *(_OWORD *)(v18 + 64);
          *(_OWORD *)(a4 + 80) = *(_OWORD *)(v18 + 80);
          *(_OWORD *)(a4 + 96) = *(_OWORD *)(v18 + 96);
          *(_OWORD *)(a4 + 112) = *(_OWORD *)(v18 + 112);
          v18 += 128LL;
          *(_OWORD *)(a4 + 128) = *(_OWORD *)v18;
          *(_OWORD *)(a4 + 144) = *(_OWORD *)(v18 + 16);
          *(_OWORD *)(a4 + 160) = *(_OWORD *)(v18 + 32);
          *(_OWORD *)(a4 + 176) = *(_OWORD *)(v18 + 48);
          *(_OWORD *)(a4 + 192) = *(_OWORD *)(v18 + 64);
          *(_QWORD *)(a4 + 208) = *(_QWORD *)(v18 + 80);
          *(_DWORD *)(a4 + 216) = *(_DWORD *)(v18 + 88);
          if ( (_BYTE)v46 )
            *(_DWORD *)(a4 + 184) = 64;
          *(_DWORD *)(a4 + 72) &= 0xF9FFFFFF;
          PreferredMode = 0;
LABEL_31:
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
            PsLeavePriorityRegion();
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
          if ( ghsemDynamicModeChange )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
            PsLeavePriorityRegion();
          }
          break;
        default:
          DrvBuildDevmodeList((struct tagGRAPHICS_DEVICE *)DeviceFromName);
          v46 = 0;
          LODWORD(String1) = a5 & 4;
          if ( (a5 & 4) == 0 )
          {
            if ( gProtocolType )
            {
              if ( ghsemDynamicModeChange )
                ExEnterPriorityRegionAndAcquireResourceShared();
              EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
              for ( j = gppdevList; j; j = *(struct PDEV **)j )
              {
                if ( *((_QWORD *)j + 322) == DeviceFromName && *((_DWORD *)j + 3) )
                {
                  v29 = *((_QWORD *)j + 324);
                  if ( (*(_DWORD *)(v29 + 72) & 0x80u) != 0 )
                    v46 = *(_DWORD *)(v29 + 84);
                  break;
                }
              }
              EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
              if ( ghsemDynamicModeChange )
              {
                ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
                PsLeavePriorityRegion();
              }
            }
            else
            {
              v30 = PALLOCMEM2(0x100DBuLL, 0x76656447u, 1);
              v31 = (__int64)v30;
              if ( v30 )
              {
                memset(v30, 0, 0xDCuLL);
                *(_WORD *)(v31 + 68) = -8739;
                if ( (int)DrvGetDisplayDriverParameters(DeviceFromName, v31, 0LL, 0LL) >= 0
                  && (*(_DWORD *)(v31 + 72) & 0x80u) != 0 )
                {
                  v46 = *(_DWORD *)(v31 + 84);
                }
                Win32FreePool(v31);
              }
            }
          }
          if ( *(_DWORD *)(DeviceFromName + 184) && *(_QWORD *)(DeviceFromName + 176) )
          {
            v32 = 0LL;
            PreferredMode = -1073741584;
            v33 = *(_DWORD *)(DeviceFromName + 188);
            if ( a3 < v33 )
            {
              if ( (a5 & 6) == 6 )
              {
                _mm_lfence();
                v32 = *(_QWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16LL * a3 + 8);
LABEL_91:
                v11 = v43;
                PreferredMode = -1073741584;
              }
              else
              {
                v34 = 0;
                v35 = 0;
                while ( v34 < v33 )
                {
                  if ( ((a5 & 2) != 0 || !*(_DWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16LL * v34))
                    && ((_DWORD)String1
                     || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16LL * v34 + 8) + 84LL) == v46) )
                  {
                    if ( v35 == a3 )
                    {
                      _mm_lfence();
                      v32 = *(_QWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16LL * v34 + 8);
                      goto LABEL_91;
                    }
                    ++v35;
                  }
                  ++v34;
                }
              }
            }
            if ( v32 )
            {
              v36 = *(_WORD *)(v32 + 70);
              if ( v11 < v36 )
                v36 = v11;
              v37 = v36;
              v11 = v36;
              v38 = 220LL;
              memset((void *)a4, 0, 0xDCuLL);
              memmove((void *)(a4 + 220), (const void *)(v32 + *(unsigned __int16 *)(v32 + 68)), v37);
              v39 = *(_WORD *)(v32 + 68);
              if ( v39 <= 0xDCu )
                v38 = v39;
              memmove((void *)a4, (const void *)v32, v38);
              if ( (*(_DWORD *)(DeviceFromName + 160) & 0x800000) != 0 && *(_DWORD *)(v32 + 184) == 1 )
                *(_DWORD *)(a4 + 184) = 64;
              PreferredMode = 0;
            }
          }
          else
          {
            v40 = WdLogNewEntry5_WdTrace();
            WdLogEvent5_WdTrace(v40);
            PreferredMode = -1073741823;
          }
          if ( PreferredMode == -1073741584 )
          {
            *(_DWORD *)(DeviceFromName + 184) = 0;
            v41 = *(_QWORD *)(DeviceFromName + 176);
            if ( v41 )
            {
              Win32FreePool(v41);
              *(_QWORD *)(DeviceFromName + 176) = 0LL;
            }
            v42 = *(_QWORD *)(DeviceFromName + 192);
            if ( v42 )
            {
              Win32FreePool(v42);
              *(_QWORD *)(DeviceFromName + 192) = 0LL;
            }
            *(_DWORD *)(DeviceFromName + 188) = 0;
          }
          break;
      }
    }
    else
    {
      PreferredMode = -1073741585;
    }
    if ( !PreferredMode )
      *(_WORD *)(a4 + 70) = v11;
    v20 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v20 + 24) = PreferredMode;
    WdLogEvent5_WdTrace(v20);
    return (unsigned int)PreferredMode;
  }
  else
  {
    v12 = WdLogNewEntry5_WdTrace();
    WdLogEvent5_WdTrace(v12);
    return 3221225507LL;
  }
}
