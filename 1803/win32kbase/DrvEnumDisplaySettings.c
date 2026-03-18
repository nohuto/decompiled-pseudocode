/*
 * XREFs of DrvEnumDisplaySettings @ 0x1C0043200
 * Callers:
 *     NtUserEnumDisplaySettings @ 0x1C0041540 (NtUserEnumDisplaySettings.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     DrvGetDeviceFromName @ 0x1C0045200 (DrvGetDeviceFromName.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C004B498 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     DrvBuildDevmodeList @ 0x1C00507C0 (DrvBuildDevmodeList.c)
 *     DrvGetDisplayDriverParameters @ 0x1C0051310 (DrvGetDisplayDriverParameters.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005B3A0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C005BCF0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x1C006BBD8 (-DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C006D2F4 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 __fastcall DrvEnumDisplaySettings(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v6; // r13d
  __int64 v9; // rsi
  _QWORD *v10; // rax
  unsigned __int16 v11; // r12
  __int64 v12; // rax
  __int64 DeviceFromName; // rax
  struct PDEV *i; // rbx
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int16 v18; // ax
  __int64 v19; // rcx
  __int64 v20; // rax
  struct _devicemodeW *v21; // rax
  __int64 v22; // rbx
  int DevModeForLddmPath; // eax
  unsigned __int16 v24; // ax
  int v25; // eax
  __int64 v26; // r15
  __int64 v27; // rax
  int v28; // r11d
  struct PDEV *j; // rax
  __int64 v30; // rcx
  int v31; // ebx
  _DWORD *v32; // rax
  _DWORD *v33; // rbx
  __int64 v34; // r15
  unsigned int v35; // r10d
  unsigned int v36; // r8d
  int v37; // r9d
  unsigned __int16 v38; // ax
  unsigned int v39; // ebx
  size_t v40; // r13
  unsigned __int16 v41; // ax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rcx
  unsigned __int16 v45; // [rsp+30h] [rbp-58h]
  int PreferredMode; // [rsp+34h] [rbp-54h]
  int v47; // [rsp+90h] [rbp+8h]
  int v48; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v49; // [rsp+A8h] [rbp+20h]

  v49 = a4;
  v6 = a3;
  PreferredMode = -1073741585;
  v9 = 0LL;
  v10 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2, a3);
  v10[3] = a1;
  v10[4] = a2;
  v10[5] = v6;
  v10[6] = a5;
  WdLogEvent5_WdEvent(v10);
  if ( (a4 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v45 = *(_WORD *)(a4 + 70);
  v11 = v45;
  ProbeForWrite((volatile void *)a4, v45 + 220LL, 2u);
  if ( *(_WORD *)(a4 + 68) == 220 )
  {
    if ( a1 )
    {
      DeviceFromName = DrvGetDeviceFromName(a1, 1LL);
      v9 = DeviceFromName;
      if ( DeviceFromName && !*(_QWORD *)(DeviceFromName + 136) && (*(_DWORD *)(DeviceFromName + 160) & 0x6000008) == 0 )
        v9 = 0LL;
    }
    else if ( a2 )
    {
      v9 = *(_QWORD *)(a2 + 2568);
    }
    if ( v9 )
    {
      switch ( v6 )
      {
        case 0xFFFFFFFD:
          PreferredMode = DrvGetPreferredMode((struct _devicemodeW *)a4, (struct tagGRAPHICS_DEVICE *)v9);
          break;
        case 0xFFFFFFFE:
          v21 = (struct _devicemodeW *)PALLOCMEM2(0x100DBuLL, 0x76656447u, 1);
          v22 = (__int64)v21;
          if ( v21 )
          {
            if ( (*(_DWORD *)(v9 + 160) & 0x800000) != 0 )
            {
              DevModeForLddmPath = DrvGetDevModeForLddmPath((struct tagGRAPHICS_DEVICE *)v9, 0xFFFFFFFE, v21, 0LL);
            }
            else
            {
              *(_DWORD *)&v21->dmSize = -8739;
              DevModeForLddmPath = DrvGetDisplayDriverParameters(v9, v21, 0LL, 0LL);
            }
            PreferredMode = DevModeForLddmPath;
            if ( DevModeForLddmPath >= 0 )
            {
              v24 = *(_WORD *)(v22 + 70);
              if ( v45 < v24 )
                v24 = v45;
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
            ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
          EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
          for ( i = gppdevList; i; i = *(struct PDEV **)i )
          {
            v16 = *((_QWORD *)i + 321);
            if ( v16 == v9 && *((_DWORD *)i + 3) )
            {
              LOBYTE(v48) = 0;
              if ( *(_DWORD *)(*((_QWORD *)i + 323) + 184LL) == 1 && (*(_DWORD *)(v16 + 160) & 0x800000) != 0 )
              {
                v25 = DrvGetDevModeForLddmPath((struct tagGRAPHICS_DEVICE *)v9, 0xFFFFFFFF, 0LL, (bool *)&v48);
                v26 = v25;
                if ( v25 < 0 )
                {
                  v27 = WdLogNewEntry5_WdTrace();
                  *(_QWORD *)(v27 + 24) = v26;
                  WdLogEvent5_WdTrace(v27);
                }
              }
              if ( (*(_DWORD *)(v9 + 160) & 0x4000000) != 0 && (*(_DWORD *)(v9 + 164) & 4) != 0 )
                wil_details_FeaturePropertyCache_ReportUsageToService(
                  &Feature_Vail__private_propertyCache,
                  8554091LL,
                  &unk_1C0181C98,
                  0LL,
                  3);
              v17 = *((_QWORD *)i + 323);
              v18 = *(_WORD *)(v17 + 70);
              if ( v45 < v18 )
                v18 = v45;
              v11 = v18;
              memmove((void *)(a4 + 220), (const void *)(v17 + 220), v18);
              v19 = *((_QWORD *)i + 323);
              *(_OWORD *)a4 = *(_OWORD *)v19;
              *(_OWORD *)(a4 + 16) = *(_OWORD *)(v19 + 16);
              *(_OWORD *)(a4 + 32) = *(_OWORD *)(v19 + 32);
              *(_OWORD *)(a4 + 48) = *(_OWORD *)(v19 + 48);
              *(_OWORD *)(a4 + 64) = *(_OWORD *)(v19 + 64);
              *(_OWORD *)(a4 + 80) = *(_OWORD *)(v19 + 80);
              *(_OWORD *)(a4 + 96) = *(_OWORD *)(v19 + 96);
              *(_OWORD *)(a4 + 112) = *(_OWORD *)(v19 + 112);
              v19 += 128LL;
              *(_OWORD *)(a4 + 128) = *(_OWORD *)v19;
              *(_OWORD *)(a4 + 144) = *(_OWORD *)(v19 + 16);
              *(_OWORD *)(a4 + 160) = *(_OWORD *)(v19 + 32);
              *(_OWORD *)(a4 + 176) = *(_OWORD *)(v19 + 48);
              *(_OWORD *)(a4 + 192) = *(_OWORD *)(v19 + 64);
              *(_QWORD *)(a4 + 208) = *(_QWORD *)(v19 + 80);
              *(_DWORD *)(a4 + 216) = *(_DWORD *)(v19 + 88);
              if ( (_BYTE)v48 )
                *(_DWORD *)(a4 + 184) = 64;
              *(_DWORD *)(a4 + 72) &= 0xF9FFFFFF;
              PreferredMode = 0;
              break;
            }
          }
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
          DrvBuildDevmodeList((struct tagGRAPHICS_DEVICE *)v9);
          v48 = 0;
          v28 = a5 & 4;
          v47 = v28;
          if ( (a5 & 4) != 0 )
          {
            v31 = v48;
          }
          else
          {
            if ( gProtocolType )
            {
              if ( ghsemDynamicModeChange )
                ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
              EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
              for ( j = gppdevList; j; j = *(struct PDEV **)j )
              {
                if ( *((_QWORD *)j + 321) == v9 && *((_DWORD *)j + 3) )
                {
                  v30 = *((_QWORD *)j + 323);
                  if ( (*(_DWORD *)(v30 + 72) & 0x80u) != 0 )
                  {
                    v31 = *(_DWORD *)(v30 + 84);
                    goto LABEL_66;
                  }
                  break;
                }
              }
              v31 = v48;
LABEL_66:
              EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
              if ( ghsemDynamicModeChange )
              {
                ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
                PsLeavePriorityRegion();
              }
            }
            else
            {
              v32 = PALLOCMEM2(0x100DBuLL, 0x76656447u, 1);
              v33 = v32;
              if ( v32 )
              {
                memset(v32, 0, 0xDCuLL);
                v33[17] = 56797;
                if ( (int)DrvGetDisplayDriverParameters(v9, v33, 0LL, 0LL) >= 0 && (v33[18] & 0x80u) != 0 )
                  v48 = v33[21];
                Win32FreePool((__int64)v33);
              }
              v31 = v48;
            }
            v28 = v47;
          }
          if ( *(_DWORD *)(v9 + 184) && *(_QWORD *)(v9 + 176) )
          {
            v34 = 0LL;
            PreferredMode = -1073741584;
            v35 = *(_DWORD *)(v9 + 188);
            if ( v6 < v35 )
            {
              if ( (a5 & 6) == 6 )
              {
                _mm_lfence();
                v34 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL * v6 + 8);
LABEL_91:
                v11 = v45;
              }
              else
              {
                v36 = 0;
                v37 = 0;
                while ( v36 < v35 )
                {
                  if ( ((a5 & 2) != 0 || !*(_DWORD *)(*(_QWORD *)(v9 + 192) + 16LL * v36))
                    && (v28 || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL * v36 + 8) + 84LL) == v31) )
                  {
                    if ( v37 == v6 )
                    {
                      _mm_lfence();
                      v34 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL * v36 + 8);
                      goto LABEL_91;
                    }
                    ++v37;
                  }
                  ++v36;
                }
              }
            }
            if ( v34 )
            {
              v38 = *(_WORD *)(v34 + 70);
              if ( v11 < v38 )
                v38 = v11;
              v39 = v38;
              v11 = v38;
              v40 = 220LL;
              memset((void *)a4, 0, 0xDCuLL);
              memmove((void *)(a4 + 220), (const void *)(v34 + *(unsigned __int16 *)(v34 + 68)), v39);
              v41 = *(_WORD *)(v34 + 68);
              if ( v41 <= 0xDCu )
                v40 = v41;
              memmove((void *)a4, (const void *)v34, v40);
              if ( (*(_DWORD *)(v9 + 160) & 0x800000) != 0 && *(_DWORD *)(v34 + 184) == 1 )
                *(_DWORD *)(a4 + 184) = 64;
              PreferredMode = 0;
            }
          }
          else
          {
            v42 = WdLogNewEntry5_WdTrace();
            WdLogEvent5_WdTrace(v42);
            PreferredMode = -1073741823;
          }
          if ( PreferredMode == -1073741584 )
          {
            *(_DWORD *)(v9 + 184) = 0;
            v43 = *(_QWORD *)(v9 + 176);
            if ( v43 )
            {
              Win32FreePool(v43);
              *(_QWORD *)(v9 + 176) = 0LL;
            }
            v44 = *(_QWORD *)(v9 + 192);
            if ( v44 )
            {
              Win32FreePool(v44);
              *(_QWORD *)(v9 + 192) = 0LL;
            }
            *(_DWORD *)(v9 + 188) = 0;
          }
          break;
      }
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
