/*
 * XREFs of DrvDisplayConfigGetDeviceInfo @ 0x1C00141B0
 * Callers:
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C0013DC0 (NtUserDisplayConfigGetDeviceInfo.c)
 *     DrvSetDisplayConfig @ 0x1C004C710 (DrvSetDisplayConfig.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C008CFD4 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0113DD8 (rimFindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     DrvIsWddmDriverPresent @ 0x1C00144B4 (DrvIsWddmDriverPresent.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0014A58 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     UserIsWddmConnectedSession @ 0x1C0016E18 (UserIsWddmConnectedSession.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0051280 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z @ 0x1C0088E98 (-GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C008EC74 (UserRemoteConnectedSessionUsingWddm.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C00A5F98 (UserRemoteConnectedSessionUsingXddm.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1C0104560 (DrvDisplayConfigGetScaleFactorOverrides.c)
 */

__int64 __fastcall DrvDisplayConfigGetDeviceInfo(struct _DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned int v4; // esi
  _DWORD *v5; // rdi
  __int64 v6; // rdx
  __int64 result; // rax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  int ScaleFactorOverrides; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  wchar_t *v14; // rcx
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+20h] [rbp-18h]
  int v22; // [rsp+40h] [rbp+8h] BYREF

  v2 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v2 + 24) = *(int *)a1;
  WdLogEvent5_WdEvent(v2);
  v4 = 0;
  if ( !(unsigned int)DrvIsWddmDriverPresent() )
  {
    v15 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 != -20
      && v15 != -13
      && v15 != -11
      && (v15 <= -9 || v15 != -2 && v15 > -7 && (v15 <= 1 || v15 > 4 && v15 != 6)) )
    {
      return 3221225659LL;
    }
  }
  v5 = (_DWORD *)((char *)a1 + 16);
  v6 = *((unsigned int *)a1 + 4);
  if ( (_DWORD)v6 == -1
    || (result = ((__int64 (__fastcall *)(char *, __int64, char *, char *))qword_1C01CDCA0)(
                   (char *)a1 + 8,
                   v6,
                   (char *)a1 + 8,
                   (char *)a1 + 16),
        (int)result >= 0) )
  {
    v8 = *(_DWORD *)a1;
    if ( *(int *)a1 > -5 )
    {
      if ( v8 > 7 )
      {
        if ( v8 == 11 || v8 == 9 || v8 == 100 )
          goto LABEL_10;
        goto LABEL_69;
      }
      if ( v8 >= 6 )
        goto LABEL_10;
      if ( v8 == -2 )
        goto LABEL_15;
      if ( v8 == -3 )
      {
        if ( *((_DWORD *)a1 + 1) != 32 )
          return 3221225485LL;
        ScaleFactorOverrides = DrvDisplayConfigGetScaleFactorOverrides(a1, 0LL);
        goto LABEL_17;
      }
      if ( v8 != 1 )
      {
        if ( v8 > 1 && v8 <= 4 )
          goto LABEL_10;
        goto LABEL_69;
      }
      v14 = gpGraphicsDeviceList;
      if ( *((_DWORD *)a1 + 1) < 0x54u )
        return 3221225507LL;
      if ( !gpGraphicsDeviceList )
        goto LABEL_63;
      do
      {
        if ( *((_DWORD *)a1 + 2) == *((_DWORD *)v14 + 62)
          && *((_DWORD *)a1 + 3) == *((_DWORD *)v14 + 63)
          && *((_DWORD *)v14 + 64) == *v5 )
        {
          break;
        }
        v14 = (wchar_t *)*((_QWORD *)v14 + 16);
      }
      while ( v14 );
      if ( !v14 )
      {
LABEL_63:
        v19 = WdLogNewEntry5_WdWarning(v14);
        WdLogEvent5_WdWarning(v19);
        return 3221226021LL;
      }
      *(_OWORD *)((char *)a1 + 20) = *((_OWORD *)v14 + 4);
      *(_OWORD *)((char *)a1 + 36) = *((_OWORD *)v14 + 5);
      *(_OWORD *)((char *)a1 + 52) = *((_OWORD *)v14 + 6);
      *(_OWORD *)((char *)a1 + 68) = *((_OWORD *)v14 + 7);
    }
    else
    {
      if ( v8 == -5 )
        goto LABEL_10;
      if ( v8 != -20 )
      {
        if ( v8 == -15 )
        {
          if ( *((_DWORD *)a1 + 1) < 0x20u )
            return 3221225507LL;
          v16 = *((unsigned int *)a1 + 5);
          v17 = (unsigned int)*v5;
          v21 = *((_QWORD *)a1 + 3);
          v18 = *((_QWORD *)a1 + 1);
          v22 = 0;
          LODWORD(v5) = ((__int64 (__fastcall *)(__int64, __int64, __int64, int *, __int64))qword_1C01CDE88)(
                          v18,
                          v17,
                          v16,
                          &v22,
                          v21);
          *((_DWORD *)a1 + 5) = v22;
          return (unsigned int)v5;
        }
        if ( v8 <= -15 )
        {
LABEL_69:
          LODWORD(v5) = -1073741811;
          return (unsigned int)v5;
        }
        if ( v8 <= -12 )
          goto LABEL_10;
        if ( v8 == -9 )
        {
          if ( *((_DWORD *)a1 + 1) >= 0x18u )
          {
            v12 = (unsigned int)*v5;
            v13 = *((_QWORD *)a1 + 1);
            v22 = 0;
            LODWORD(v5) = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, int *, _QWORD))qword_1C01CD938)(
                            v13,
                            v12,
                            0LL,
                            &v22,
                            0LL);
            if ( (int)v5 >= 0 )
            {
              LOBYTE(v4) = v22 == 2;
              *((_DWORD *)a1 + 5) = v4;
            }
            return (unsigned int)v5;
          }
          return 3221225507LL;
        }
        if ( v8 != -8 )
        {
          if ( v8 != -11 )
          {
            if ( v8 != -10 )
            {
              if ( v8 == -7 )
              {
                if ( *((_DWORD *)a1 + 1) < 0x3A4u )
                  return 3221225507LL;
                LODWORD(v5) = ((__int64 (__fastcall *)(_QWORD, _QWORD, struct _DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO *, _QWORD, _QWORD))qword_1C01CD938)(
                                *((_QWORD *)a1 + 1),
                                (unsigned int)*v5,
                                a1,
                                0LL,
                                0LL);
                wil_details_FeaturePropertyCache_ReportUsageToService(
                  &Feature_OemPanelDriverSupport__private_propertyCache,
                  8395569LL,
                  &unk_1C01933C0,
                  1LL);
                GetMonitorBrightnessCaps(a1);
                return (unsigned int)v5;
              }
              goto LABEL_69;
            }
LABEL_10:
            LOBYTE(v3) = 1;
            v9 = ((__int64 (__fastcall *)(__int64, struct _DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO *))qword_1C01CD928)(
                   v3,
                   a1);
            v5 = (_DWORD *)v9;
            if ( v9 < 0 )
            {
              v20 = WdLogNewEntry5_WdWarning(v10);
              *(_QWORD *)(v20 + 24) = a1;
              *(_QWORD *)(v20 + 32) = v5;
              WdLogEvent5_WdWarning(v20);
            }
            return (unsigned int)v5;
          }
LABEL_15:
          if ( *((_DWORD *)a1 + 1) < 0x800u )
            return 3221225507LL;
          LOBYTE(v4) = v8 == -11;
          ScaleFactorOverrides = DrvpDisplayConfigGetDisplayDeviceInfo(v4, a1);
          goto LABEL_17;
        }
        if ( *((_DWORD *)a1 + 1) < 0x218u )
          return 3221225507LL;
        ScaleFactorOverrides = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, char *, char *))qword_1C01CDD88)(
                                 *((_QWORD *)a1 + 1),
                                 (unsigned int)*v5,
                                 512LL,
                                 (char *)a1 + 20,
                                 (char *)a1 + 24);
LABEL_17:
        LODWORD(v5) = ScaleFactorOverrides;
        return (unsigned int)v5;
      }
      *((_DWORD *)a1 + 5) = gRemoteSessionUseWddm;
      *((_DWORD *)a1 + 6) = UserRemoteConnectedSessionUsingWddm();
      *((_DWORD *)a1 + 7) = UserRemoteConnectedSessionUsingXddm();
      *((_DWORD *)a1 + 8) = UserIsWddmConnectedSession();
      *((_DWORD *)a1 + 9) = gbRemoteSession == 0;
      *((_DWORD *)a1 + 10) = gProtocolType == 0;
      *((_DWORD *)a1 + 11) = gProtocolType == -1;
      *((_WORD *)a1 + 24) = gProtocolType;
      *(_QWORD *)((char *)a1 + 52) = gRemoteTerminalLuid;
    }
    LODWORD(v5) = 0;
    return (unsigned int)v5;
  }
  return result;
}
