/*
 * XREFs of DrvDisplayConfigGetDeviceInfo @ 0x1C0042B10
 * Callers:
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C00427C0 (NtUserDisplayConfigGetDeviceInfo.c)
 *     DrvSetDisplayConfig @ 0x1C004A830 (DrvSetDisplayConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0054454 (rimFindMonitorForDigitizerWithQDCData.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C006D2F4 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 * Callees:
 *     DrvIsWddmDriverPresent @ 0x1C0042CB4 (DrvIsWddmDriverPresent.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0042CE4 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C004B498 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1C00D3FA0 (DrvDisplayConfigGetScaleFactorOverrides.c)
 */

__int64 __fastcall DrvDisplayConfigGetDeviceInfo(int *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned int v4; // esi
  _DWORD *v5; // r14
  __int64 v6; // rdx
  _QWORD *v7; // rdi
  __int64 result; // rax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int DisplayDeviceInfo; // eax
  wchar_t *v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // [rsp+20h] [rbp-18h]
  int v22; // [rsp+40h] [rbp+8h] BYREF

  v2 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v2 + 24) = *a1;
  WdLogEvent5_WdEvent(v2);
  v4 = 0;
  if ( !(unsigned int)DrvIsWddmDriverPresent() )
  {
    v15 = *a1;
    if ( *a1 != -13 && v15 != -11 && (v15 <= -9 || v15 > -7 && v15 != -2 && (v15 <= 1 || v15 > 4 && v15 != 6)) )
      return 3221225659LL;
  }
  v5 = a1 + 4;
  v6 = (unsigned int)a1[4];
  v7 = a1 + 2;
  if ( (_DWORD)v6 == -1
    || (result = ((__int64 (__fastcall *)(int *, __int64, int *, int *))qword_1C01A1E00)(a1 + 2, v6, a1 + 2, a1 + 4),
        (int)result >= 0) )
  {
    switch ( *a1 )
    {
      case -15:
        if ( (unsigned int)a1[1] < 0x20 )
          goto LABEL_33;
        v18 = (unsigned int)a1[5];
        v19 = (unsigned int)*v5;
        v21 = *((_QWORD *)a1 + 3);
        v20 = *v7;
        v22 = 0;
        LODWORD(v7) = ((__int64 (__fastcall *)(__int64, __int64, __int64, int *, __int64))qword_1C01A1FF8)(
                        v20,
                        v19,
                        v18,
                        &v22,
                        v21);
        a1[5] = v22;
        goto LABEL_7;
      case -14:
      case -13:
      case -12:
      case -10:
      case -5:
      case 2:
      case 3:
      case 4:
      case 6:
      case 7:
      case 9:
      case 11:
        LOBYTE(v3) = 1;
        v9 = ((__int64 (__fastcall *)(__int64, int *))qword_1C01A1A88)(v3, a1);
        v7 = (_QWORD *)v9;
        if ( v9 < 0 )
        {
          v17 = WdLogNewEntry5_WdWarning(v10);
          *(_QWORD *)(v17 + 24) = a1;
          *(_QWORD *)(v17 + 32) = v7;
          WdLogEvent5_WdWarning(v17);
        }
        goto LABEL_7;
      case -11:
      case -2:
        if ( (unsigned int)a1[1] < 0x7FC )
          goto LABEL_33;
        LOBYTE(v4) = *a1 == -11;
        DisplayDeviceInfo = DrvpDisplayConfigGetDisplayDeviceInfo(v4, a1);
        goto LABEL_14;
      case -9:
        if ( (unsigned int)a1[1] < 0x18 )
          goto LABEL_33;
        v11 = (unsigned int)*v5;
        v12 = *v7;
        v22 = 0;
        LODWORD(v7) = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, int *, _QWORD))qword_1C01A1A98)(
                        v12,
                        v11,
                        0LL,
                        &v22,
                        0LL);
        if ( (int)v7 >= 0 )
        {
          LOBYTE(v4) = v22 == 2;
          a1[5] = v4;
        }
        goto LABEL_7;
      case -8:
        if ( (unsigned int)a1[1] < 0x218 )
          goto LABEL_33;
        DisplayDeviceInfo = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, int *, int *))qword_1C01A1EF8)(
                              *v7,
                              (unsigned int)*v5,
                              512LL,
                              a1 + 5,
                              a1 + 6);
        goto LABEL_14;
      case -7:
        if ( (unsigned int)a1[1] < 0x394 )
          goto LABEL_33;
        LODWORD(v7) = ((__int64 (__fastcall *)(_QWORD, _QWORD, int *, _QWORD, _QWORD))qword_1C01A1A98)(
                        *v7,
                        (unsigned int)*v5,
                        a1,
                        0LL,
                        0LL);
        wil_details_FeaturePropertyCache_ReportUsageToService(
          &Feature_OemPanelDriverSupport__private_propertyCache,
          8395569LL,
          &unk_1C0181C90,
          0LL,
          3);
        goto LABEL_7;
      case -3:
        if ( a1[1] != 32 )
          return 3221225485LL;
        DisplayDeviceInfo = DrvDisplayConfigGetScaleFactorOverrides(a1, 0LL);
LABEL_14:
        LODWORD(v7) = DisplayDeviceInfo;
        goto LABEL_7;
      case 1:
        v14 = gpGraphicsDeviceList;
        if ( (unsigned int)a1[1] < 0x54 )
        {
LABEL_33:
          result = 3221225507LL;
        }
        else
        {
          if ( !gpGraphicsDeviceList )
            goto LABEL_34;
          do
          {
            if ( a1[2] == *((_DWORD *)v14 + 62) && a1[3] == *((_DWORD *)v14 + 63) && *((_DWORD *)v14 + 64) == *v5 )
              break;
            v14 = (wchar_t *)*((_QWORD *)v14 + 16);
          }
          while ( v14 );
          if ( v14 )
          {
            LODWORD(v7) = 0;
            *(_OWORD *)(a1 + 5) = *((_OWORD *)v14 + 4);
            *(_OWORD *)(a1 + 9) = *((_OWORD *)v14 + 5);
            *(_OWORD *)(a1 + 13) = *((_OWORD *)v14 + 6);
            *(_OWORD *)(a1 + 17) = *((_OWORD *)v14 + 7);
LABEL_7:
            result = (unsigned int)v7;
          }
          else
          {
LABEL_34:
            v16 = WdLogNewEntry5_WdWarning(v14);
            WdLogEvent5_WdWarning(v16);
            result = 3221226021LL;
          }
        }
        break;
      default:
        LODWORD(v7) = -1073741811;
        goto LABEL_7;
    }
  }
  return result;
}
