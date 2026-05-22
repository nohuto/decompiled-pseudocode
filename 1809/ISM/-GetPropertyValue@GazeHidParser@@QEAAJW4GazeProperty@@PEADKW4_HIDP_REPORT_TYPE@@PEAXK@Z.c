/*
 * XREFs of ?GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z @ 0x1800C0CE8
 * Callers:
 *     ?GetInputInfoForReport@GazeHidDevice@@QEAAJPEADKPEAPEAUInputInfo@@PEA_N@Z @ 0x18006A1A0 (-GetInputInfoForReport@GazeHidDevice@@QEAAJPEADKPEAPEAUInputInfo@@PEA_N@Z.c)
 *     ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x18006A378 (-TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ.c)
 *     ?TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ @ 0x18006A780 (-TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ.c)
 *     ?GetCalibratedRegion@GazeHidParser@@QEAAJPEADKPEAUtagRECT@@@Z @ 0x1800C10E4 (-GetCalibratedRegion@GazeHidParser@@QEAAJPEADKPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z @ 0x1800C0ACC (-IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z.c)
 */

__int64 __fastcall GazeHidParser::GetPropertyValue(
        __int64 a1,
        int a2,
        CHAR *a3,
        ULONG a4,
        HIDP_REPORT_TYPE ReportType,
        PCHAR a6,
        unsigned int a7)
{
  int v10; // edx
  char v11; // r9
  __int64 *v12; // r8
  __int64 *v13; // rcx
  __int64 *v14; // rax
  USHORT v15; // r14
  __int64 v16; // rdx
  USAGE v17; // r9
  USAGE v19; // r9
  ULONG UsageValue[4]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  UsageValue[0] = 0;
  if ( !GazeHidParser::IsPropertySupported(a1, a2) )
    return 2147943568LL;
  v12 = *(__int64 **)(a1 + 72);
  v13 = v12;
  v14 = (__int64 *)v12[1];
  while ( *((_BYTE *)v14 + 25) == v11 )
  {
    if ( *((_DWORD *)v14 + 7) >= v10 )
    {
      v13 = v14;
      v14 = (__int64 *)*v14;
    }
    else
    {
      v14 = (__int64 *)v14[2];
    }
  }
  if ( v13 == v12 || v10 < *((_DWORD *)v13 + 7) )
  {
    std::_Xout_of_range("invalid map<K, T> key");
    JUMPOUT(0x1800C10DBLL);
  }
  v15 = *((_WORD *)v13 + 16);
  switch ( v10 )
  {
    case 1:
      v19 = 1024;
      goto LABEL_44;
    case 2:
      v19 = 769;
LABEL_44:
      if ( HidP_GetUsageValue(ReportType, 0x12u, v15, v19, UsageValue, *(PHIDP_PREPARSED_DATA *)(a1 + 64), a3, a4) != 1114112 )
        return 2147943568LL;
      *(_DWORD *)a6 = UsageValue[0];
      return 0LL;
    case 3:
      if ( a7 < 0xA )
      {
        v16 = 338LL;
        goto LABEL_28;
      }
      if ( HidP_GetUsageValue(ReportType, 0x12u, v15, 0x200u, UsageValue, *(PHIDP_PREPARSED_DATA *)(a1 + 64), a3, a4) == 1114112 )
      {
        *(_WORD *)a6 = UsageValue[0];
        if ( HidP_GetUsageValue(ReportType, 0x12u, v15, 0x201u, UsageValue, *(PHIDP_PREPARSED_DATA *)(a1 + 64), a3, a4) == 1114112 )
        {
          *((_WORD *)a6 + 1) = UsageValue[0];
          if ( HidP_GetUsageValue(
                 ReportType,
                 0x12u,
                 v15,
                 0x202u,
                 UsageValue,
                 *(PHIDP_PREPARSED_DATA *)(a1 + 64),
                 a3,
                 a4) == 1114112 )
          {
            *((_DWORD *)a6 + 1) = UsageValue[0];
            if ( HidP_GetUsageValue(
                   ReportType,
                   0x12u,
                   v15,
                   0x203u,
                   UsageValue,
                   *(PHIDP_PREPARSED_DATA *)(a1 + 64),
                   a3,
                   a4) == 1114112 )
            {
              *((_WORD *)a6 + 4) = UsageValue[0];
              return 0LL;
            }
          }
        }
      }
      return 2147943568LL;
    case 4:
      if ( a7 < 8 )
      {
        v16 = 397LL;
        goto LABEL_28;
      }
      if ( HidP_GetUsageValue(ReportType, 0x12u, v15, 0x204u, UsageValue, *(PHIDP_PREPARSED_DATA *)(a1 + 64), a3, a4) == 1114112 )
      {
        v17 = 517;
        goto LABEL_24;
      }
      return 2147943568LL;
    case 5:
      if ( a7 < 8 )
      {
        v16 = 254LL;
        goto LABEL_28;
      }
      if ( HidP_GetUsageValueArray(ReportType, 0x12u, v15, 0x20u, a6, 8u, *(PHIDP_PREPARSED_DATA *)(a1 + 64), a3, a4) == 1114112 )
        return 0LL;
      return 2147943568LL;
  }
  if ( v10 != 6 )
  {
    if ( v10 <= 6 )
      goto LABEL_18;
    if ( v10 <= 9 )
    {
      v16 = 279LL;
      goto LABEL_28;
    }
    if ( v10 != 10 )
    {
LABEL_18:
      v16 = 428LL;
LABEL_28:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"onecoreuap\\windows\\input\\gaze\\hid\\lib\\gazehidparser.cpp",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
  }
  if ( a7 < 8 )
  {
    v16 = 303LL;
    goto LABEL_28;
  }
  if ( HidP_GetUsageValue(ReportType, 0x12u, v15, 0x21u, UsageValue, *(PHIDP_PREPARSED_DATA *)(a1 + 64), a3, a4) != 1114112 )
    return 2147943568LL;
  v17 = 34;
LABEL_24:
  *(_DWORD *)a6 = UsageValue[0];
  if ( HidP_GetUsageValue(ReportType, 0x12u, v15, v17, UsageValue, *(PHIDP_PREPARSED_DATA *)(a1 + 64), a3, a4) != 1114112 )
    return 2147943568LL;
  *((_DWORD *)a6 + 1) = UsageValue[0];
  return 0LL;
}
