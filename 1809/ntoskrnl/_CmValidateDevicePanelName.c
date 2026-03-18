/*
 * XREFs of _CmValidateDevicePanelName @ 0x140749B10
 * Callers:
 *     _PnpDispatchDevicePanel @ 0x140749A80 (_PnpDispatchDevicePanel.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x1408FBF84 (_CmGetDevicePanelRegKeyPath.c)
 * Callees:
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     _CmSplitDevicePanelId @ 0x140749B5C (_CmSplitDevicePanelId.c)
 */

__int64 __fastcall CmValidateDevicePanelName(__int64 a1, const wchar_t *a2)
{
  __int64 result; // rax
  GUID Guid; // [rsp+28h] [rbp-20h] BYREF

  result = CmSplitDevicePanelId(a2, &Guid);
  if ( (int)result < 0 )
    return 3221225523LL;
  return result;
}
