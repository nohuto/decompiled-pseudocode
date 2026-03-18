/*
 * XREFs of ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C0102028
 * Callers:
 *     NtGdiDdDDIEscape @ 0x1C006A580 (NtGdiDdDDIEscape.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00A84A4 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     _DrvProcessWin32kEscape_::_116_::UserCritShared::UserCritShared @ 0x1C00ABAF4 (_DrvProcessWin32kEscape_--_116_--UserCritShared--UserCritShared.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXIEE@Z @ 0x1C00E3750 (-xxxDisplayDiagBlackScreenDetected@@YAXIEE@Z.c)
 *     GreIsInLowBox @ 0x1C00F9A40 (GreIsInLowBox.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C0101D10 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 */

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
  int HipDeviceInfo; // eax
  UINT v17; // eax
  __int32 v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  size_t v23; // r8
  char *v24; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING v26; // [rsp+40h] [rbp-28h] BYREF
  char v27; // [rsp+78h] [rbp+10h] BYREF
  char v28; // [rsp+80h] [rbp+18h] BYREF
  _DWORD *v29; // [rsp+88h] [rbp+20h]

  HipDeviceInfoSupported = 0;
  v5 = 0LL;
  v29 = 0LL;
  PrivateDriverDataSize = a1->PrivateDriverDataSize;
  if ( (_DWORD)PrivateDriverDataSize )
  {
    v5 = PALLOCMEM2(PrivateDriverDataSize, 1886221383LL, 1);
    v29 = v5;
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
  if ( Type > D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
  {
    v18 = Type - 1030;
    if ( v18 )
    {
      v19 = (unsigned int)(v18 - 1);
      if ( !(_DWORD)v19 )
      {
        if ( gbOSTestSigningEnabled
          || (unsigned int)DxgkEngIsDwmProcess(v19)
          || (unsigned int)GreIsInLowBox()
          && ((v27 = 0,
               *(_QWORD *)&DestinationString.Length = 0LL,
               DestinationString.Buffer = 0LL,
               *(_QWORD *)&v26.Length = 0LL,
               v26.Buffer = 0LL,
               RtlInitUnicodeString(&DestinationString, L"shellExperienceComposer"),
               RtlInitUnicodeString(&v26, L"shellDisplayManagement"),
               (int)RtlCapabilityCheckForSingleSessionSku(0LL, &DestinationString, &v27) >= 0)
           && v27
           || (int)RtlCapabilityCheckForSingleSessionSku(0LL, &v26, &v27) >= 0 && v27) )
        {
          if ( a1->PrivateDriverDataSize == 4 )
          {
            if ( *v5 < 4u )
            {
              DrvProcessWin32kEscape_::_116_::UserCritShared::UserCritShared((__int64)&v28, a2, a3);
              xxxDisplayDiagBlackScreenDetected(4u, *v5 & 1, (*v5 & 2) != 0);
              HipDeviceInfoSupported = 0;
              UserSessionSwitchLeaveCrit();
              goto LABEL_68;
            }
            HipDeviceInfoSupported = -1073741811;
            v21 = WdLogNewEntry5_WdError(v19, a2, a3);
            *(_QWORD *)(v21 + 24) = -1073741811LL;
          }
          else
          {
            HipDeviceInfoSupported = -1073741811;
            v21 = WdLogNewEntry5_WdError(v19, a2, a3);
            *(_QWORD *)(v21 + 24) = a1->PrivateDriverDataSize;
            *(_QWORD *)(v21 + 32) = -1073741811LL;
          }
        }
        else
        {
          HipDeviceInfoSupported = -1073741790;
          v21 = WdLogNewEntry5_WdError(v19, a2, a3);
          *(_QWORD *)(v21 + 24) = -1073741790LL;
        }
        WdLogEvent5_WdError(v21);
        goto LABEL_68;
      }
      v15 = (unsigned int)(v19 - 3);
      if ( !(_DWORD)v15 )
      {
        if ( a1->PrivateDriverDataSize != 40 )
          goto LABEL_16;
        HipDeviceInfo = ((__int64 (__fastcall *)(_DWORD *))qword_1C01CDD58)(v5);
        goto LABEL_33;
      }
      if ( (_DWORD)v15 != 1 )
        goto LABEL_42;
      if ( a1->PrivateDriverDataSize != 8 )
        goto LABEL_16;
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (__int64)&Feature_BrokeredDisplays_TestMode__private_propertyCache,
        0x10AA02Cu,
        (__int64)&unk_1C01A413C,
        0,
        3u);
      goto LABEL_46;
    }
    if ( a1->PrivateDriverDataSize != 4 )
      goto LABEL_16;
    if ( gbOSTestSigningEnabled )
    {
      if ( (*v5 & 3) == 2 )
      {
        v22 = WdLogNewEntry5_WdError((unsigned int)*v5, a2, a3);
        *(_QWORD *)(v22 + 24) = a1->Type;
        WdLogEvent5_WdError(v22);
        goto LABEL_16;
      }
      gOutputDuplicationTestControl = *v5;
      goto LABEL_68;
    }
LABEL_35:
    HipDeviceInfoSupported = -1073741790;
    goto LABEL_74;
  }
  if ( Type == D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
  {
    if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
    {
      HipDeviceInfo = ((__int64 (__fastcall *)(struct _D3DKMT_ESCAPE *))qword_1C01CD7A0)(a1);
      goto LABEL_33;
    }
    goto LABEL_35;
  }
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
  if ( !v13 )
  {
LABEL_46:
    HipDeviceInfoSupported = -1073741637;
    goto LABEL_74;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
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
  v15 = (unsigned int)(v14 - 1);
  if ( !(_DWORD)v15 )
  {
LABEL_20:
    if ( a1->PrivateDriverDataSize < 8 )
      goto LABEL_16;
    if ( *v5 == 1 )
    {
      if ( qword_1C01CDB60 )
        v5[1] = (unsigned __int8)qword_1C01CDB60() != 0;
      else
        HipDeviceInfoSupported = -1073741637;
      goto LABEL_68;
    }
    if ( *v5 == 2 && gbOSTestSigningEnabled )
    {
      gbBypassPresenterViewProcessCheck = v5[1];
      goto LABEL_68;
    }
LABEL_43:
    HipDeviceInfoSupported = -1073741811;
    goto LABEL_68;
  }
  if ( (_DWORD)v15 != 1 )
  {
LABEL_42:
    v20 = WdLogNewEntry5_WdError(v15, a2, a3);
    *(_QWORD *)(v20 + 24) = a1->Type;
    WdLogEvent5_WdError(v20);
    goto LABEL_43;
  }
  if ( a1->PrivateDriverDataSize != 6 )
  {
LABEL_16:
    HipDeviceInfoSupported = -1073741811;
    goto LABEL_74;
  }
  *(_WORD *)v5 = gdmLogPixels;
  *((_WORD *)v5 + 1) = *(_WORD *)(PsGetCurrentProcessWin32Process(v15) + 284);
  *((_WORD *)v5 + 2) = *((_WORD *)gpsi + 3499);
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
    v23 = a1->PrivateDriverDataSize;
    v24 = (char *)a1->pPrivateDriverData;
    if ( (unsigned __int64)&v24[v23] > MmUserProbeAddress || &v24[v23] <= v24 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v24, v5, v23);
    goto LABEL_74;
  }
  return (unsigned int)HipDeviceInfoSupported;
}
