/*
 * XREFs of ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C012A92C
 * Callers:
 *     ?DxgkEngProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C0122600 (-DxgkEngProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00148AC (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     EnterCrit @ 0x1C0025E70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0040490 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z @ 0x1C00BE4CC (-DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C010B4F0 (xxxDisplayDiagBlackScreenDetected.c)
 *     GreIsInLowBox @ 0x1C0125E60 (GreIsInLowBox.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C012A614 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DrvProcessWin32kEscape(struct _D3DKMT_ESCAPE *a1, __int64 a2, __int64 a3)
{
  int HipDeviceInfoSupported; // ebx
  _DWORD *v5; // rdi
  size_t PrivateDriverDataSize; // rcx
  __int64 v7; // rax
  size_t v9; // r8
  char *pPrivateDriverData; // rdx
  D3DKMT_ESCAPETYPE Type; // ecx
  __int32 v12; // ecx
  __int32 v13; // ecx
  __int32 v14; // ecx
  __int64 v15; // rcx
  NTSTATUS HipDeviceInfo; // eax
  UINT v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // ecx
  __int64 v22; // rax
  UINT v23; // edx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  size_t v27; // r8
  char *v28; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING v30; // [rsp+40h] [rbp-28h] BYREF
  char v31; // [rsp+78h] [rbp+10h] BYREF
  _DWORD *v32; // [rsp+80h] [rbp+18h]

  HipDeviceInfoSupported = 0;
  v5 = 0LL;
  v32 = 0LL;
  PrivateDriverDataSize = a1->PrivateDriverDataSize;
  if ( (_DWORD)PrivateDriverDataSize )
  {
    v5 = PALLOCMEM2(PrivateDriverDataSize, 0x706D7447u, 1);
    v32 = v5;
    if ( !v5 )
    {
      v7 = WdLogNewEntry5_WdLowResource();
      *(_QWORD *)(v7 + 24) = a1->PrivateDriverDataSize;
      WdLogEvent5_WdLowResource(v7);
      return 3221225495LL;
    }
    v9 = a1->PrivateDriverDataSize;
    pPrivateDriverData = (char *)a1->pPrivateDriverData;
    if ( &pPrivateDriverData[v9] < pPrivateDriverData || (unsigned __int64)&pPrivateDriverData[v9] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v5, pPrivateDriverData, v9);
  }
  Type = a1->Type;
  if ( Type > D3DKMT_ESCAPE_WIN32K_DDA_TEST_CTL )
  {
    v20 = (unsigned int)(Type - 1031);
    if ( !(_DWORD)v20 )
    {
      if ( gbOSTestSigningEnabled
        || (unsigned int)DxgkEngIsDwmProcess(v20)
        || (unsigned int)GreIsInLowBox()
        && ((v31 = 0,
             *(_QWORD *)&DestinationString.Length = 0LL,
             DestinationString.Buffer = 0LL,
             *(_QWORD *)&v30.Length = 0LL,
             v30.Buffer = 0LL,
             RtlInitUnicodeString(&DestinationString, L"shellExperienceComposer"),
             RtlInitUnicodeString(&v30, L"shellDisplayManagement"),
             (int)RtlCapabilityCheckForSingleSessionSku(0LL, &DestinationString, &v31) >= 0)
         && v31
         || (int)RtlCapabilityCheckForSingleSessionSku(0LL, &v30, &v31) >= 0 && v31) )
      {
        if ( a1->PrivateDriverDataSize == 24 )
        {
          if ( v5[5] < 4u )
          {
            EnterCrit(0, 1);
            xxxDisplayDiagBlackScreenDetected(4, v5[5] & 1, (v5[5] & 2) != 0, (__int128 *)(v5 + 1), v5);
            HipDeviceInfoSupported = 0;
            UserSessionSwitchLeaveCrit(v26, v25);
            goto LABEL_68;
          }
          HipDeviceInfoSupported = -1073741811;
          v24 = WdLogNewEntry5_WdError(v20, a2, a3);
          *(_QWORD *)(v24 + 24) = -1073741811LL;
        }
        else
        {
          HipDeviceInfoSupported = -1073741811;
          v24 = WdLogNewEntry5_WdError(v20, a2, a3);
          *(_QWORD *)(v24 + 24) = a1->PrivateDriverDataSize;
          *(_QWORD *)(v24 + 32) = -1073741811LL;
        }
      }
      else
      {
        HipDeviceInfoSupported = -1073741790;
        v24 = WdLogNewEntry5_WdError(v20, a2, a3);
        *(_QWORD *)(v24 + 24) = -1073741790LL;
      }
      WdLogEvent5_WdError(v24);
      goto LABEL_68;
    }
    v21 = v20 - 3;
    if ( !v21 )
    {
      if ( a1->PrivateDriverDataSize != 40 )
        goto LABEL_16;
      HipDeviceInfo = ((__int64 (__fastcall *)(_DWORD *))qword_1C02152A8)(v5);
      goto LABEL_33;
    }
    v15 = (unsigned int)(v21 - 1);
    if ( (_DWORD)v15 )
    {
      if ( (_DWORD)v15 != 1 )
      {
LABEL_45:
        v22 = WdLogNewEntry5_WdError(v15, a2, a3);
        *(_QWORD *)(v22 + 24) = a1->Type;
        WdLogEvent5_WdError(v22);
        goto LABEL_46;
      }
      v23 = a1->PrivateDriverDataSize;
      if ( v23 < 0x64 )
        goto LABEL_16;
      HipDeviceInfo = DrvCollectColorProfileForUser((char *)v5, v23);
      goto LABEL_33;
    }
    if ( a1->PrivateDriverDataSize != 8 )
      goto LABEL_16;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      Feature_BrokeredDisplays_TestMode__private_propertyCache,
      0x10AA02Cu,
      (const struct FEATURE_LOGGED_TRAITS *)&unk_1C01EAE8C,
      0,
      3);
LABEL_51:
    HipDeviceInfoSupported = -1073741637;
    goto LABEL_74;
  }
  if ( Type != D3DKMT_ESCAPE_WIN32K_DDA_TEST_CTL )
  {
    v12 = Type - 1024;
    if ( !v12 )
    {
      v17 = a1->PrivateDriverDataSize;
      if ( v17 < 4 || v17 != *v5 )
        goto LABEL_16;
      HipDeviceInfoSupported = IsUserGetHipDeviceInfoSupported();
      if ( HipDeviceInfoSupported < 0 )
        goto LABEL_68;
      HipDeviceInfo = UserGetHipDeviceInfo(v5);
      goto LABEL_33;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = (unsigned int)(v14 - 1);
        if ( (_DWORD)v15 )
        {
          if ( (_DWORD)v15 == 1 )
          {
            if ( a1->PrivateDriverDataSize != 6 )
            {
LABEL_16:
              HipDeviceInfoSupported = -1073741811;
              goto LABEL_74;
            }
            *(_WORD *)v5 = gdmLogPixels;
            *((_WORD *)v5 + 1) = *(_WORD *)(PsGetCurrentProcessWin32Process(v15) + 284);
            *((_WORD *)v5 + 2) = *((_WORD *)gpsi + 3499);
            goto LABEL_68;
          }
          goto LABEL_45;
        }
LABEL_20:
        if ( a1->PrivateDriverDataSize < 8 )
          goto LABEL_16;
        if ( *v5 == 1 )
        {
          if ( qword_1C0215228 )
            v5[1] = (unsigned __int8)qword_1C0215228() != 0;
          else
            HipDeviceInfoSupported = -1073741637;
          goto LABEL_68;
        }
        if ( *v5 == 2 && gbOSTestSigningEnabled )
        {
          gbBypassPresenterViewProcessCheck = v5[1];
          goto LABEL_68;
        }
LABEL_46:
        HipDeviceInfoSupported = -1073741811;
        goto LABEL_68;
      }
      if ( a1->PrivateDriverDataSize != 104 )
      {
        HipDeviceInfoSupported = -1073741811;
        goto LABEL_20;
      }
      HipDeviceInfo = DrvGetCurrentDpiInfoFromHDC(*(HDC *)v5, (struct _DPI_INFORMATION *const)(v5 + 2));
LABEL_33:
      HipDeviceInfoSupported = HipDeviceInfo;
      goto LABEL_68;
    }
    goto LABEL_51;
  }
  if ( a1->PrivateDriverDataSize != 4 )
    goto LABEL_16;
  if ( !gbOSTestSigningEnabled )
  {
    HipDeviceInfoSupported = -1073741790;
    goto LABEL_74;
  }
  v18 = (unsigned int)*v5;
  if ( (v18 & 2) != 0 && (v18 & 1) == 0 )
  {
    v19 = WdLogNewEntry5_WdError(v18, a2, a3);
    *(_QWORD *)(v19 + 24) = a1->Type;
    WdLogEvent5_WdError(v19);
    goto LABEL_16;
  }
  g_OutputDuplicationTestControl = *v5;
LABEL_68:
  if ( HipDeviceInfoSupported < 0 )
  {
LABEL_74:
    if ( v5 )
      Win32FreePool((__int64)v5);
    return (unsigned int)HipDeviceInfoSupported;
  }
  if ( v5 )
  {
    v27 = a1->PrivateDriverDataSize;
    v28 = (char *)a1->pPrivateDriverData;
    if ( (unsigned __int64)&v28[v27] > MmUserProbeAddress || &v28[v27] <= v28 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v28, v5, v27);
    goto LABEL_74;
  }
  return (unsigned int)HipDeviceInfoSupported;
}
