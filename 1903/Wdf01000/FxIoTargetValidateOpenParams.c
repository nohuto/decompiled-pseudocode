/*
 * XREFs of FxIoTargetValidateOpenParams @ 0x1C006536C
 * Callers:
 *     imp_WdfIoTargetOpen @ 0x1C0065F30 (imp_WdfIoTargetOpen.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000BA00 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C002F9E8 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qqqd @ 0x1C002FD20 (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_qqqqd @ 0x1C004DBC8 (WPP_IFR_SF_qqqqd.c)
 */

__int64 __fastcall FxIoTargetValidateOpenParams(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_IO_TARGET_OPEN_PARAMS *OpenParams)
{
  unsigned __int16 v2; // r9
  __int64 result; // rax

  switch ( OpenParams->Type )
  {
    case WdfIoTargetOpenUseExistingDevice:
      if ( !OpenParams->TargetDeviceObject )
      {
        v2 = 12;
        goto LABEL_23;
      }
      if ( FxDriverGlobals->IsUserModeDriver )
      {
        v2 = 13;
        goto LABEL_23;
      }
      if ( !OpenParams->TargetFileObject
        && (*(_OWORD *)&OpenParams->EvtIoTargetQueryRemove != 0LL || OpenParams->EvtIoTargetRemoveComplete) )
      {
        WPP_IFR_SF_qqqqd(
          FxDriverGlobals,
          (unsigned __int8)OpenParams,
          0xEu,
          0xEu,
          WPP_FxIoTargetAPI_cpp_Traceguids,
          OpenParams,
          OpenParams->EvtIoTargetQueryRemove,
          OpenParams->EvtIoTargetRemoveCanceled,
          OpenParams->EvtIoTargetRemoveComplete,
          -1073741811);
        return 3221225485LL;
      }
      return 0LL;
    case WdfIoTargetOpenByName:
      if ( !OpenParams->TargetDeviceName.Buffer
        || !OpenParams->TargetDeviceName.Length
        || !OpenParams->TargetDeviceName.MaximumLength )
      {
        v2 = 15;
        goto LABEL_23;
      }
      return 0LL;
    case WdfIoTargetOpenReopen:
      return 0LL;
  }
  if ( OpenParams->Type != WdfIoTargetOpenLocalTargetByFile )
  {
    WPP_IFR_SF_dd(FxDriverGlobals, 2u, 0xEu, 0x12u, WPP_FxIoTargetAPI_cpp_Traceguids, OpenParams->Type, -1073741811);
    return 3221225485LL;
  }
  if ( !FxDriverGlobals->IsUserModeDriver )
  {
    v2 = 16;
LABEL_23:
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xEu, v2, WPP_FxIoTargetAPI_cpp_Traceguids, -1073741811);
    return 3221225485LL;
  }
  if ( *(_OWORD *)&OpenParams->EvtIoTargetQueryRemove != 0LL || OpenParams->EvtIoTargetRemoveComplete )
  {
    WPP_IFR_SF_qqqd(
      FxDriverGlobals,
      2u,
      0xEu,
      0x11u,
      WPP_FxIoTargetAPI_cpp_Traceguids,
      OpenParams->EvtIoTargetQueryRemove,
      OpenParams->EvtIoTargetRemoveCanceled,
      (__int64)OpenParams->EvtIoTargetRemoveComplete,
      -1073741811);
    return 3221225485LL;
  }
  if ( !OpenParams->FileName.Buffer && !OpenParams->FileName.Length && !OpenParams->FileName.MaximumLength )
    return 0LL;
  result = FxValidateUnicodeString(FxDriverGlobals, &OpenParams->FileName);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
