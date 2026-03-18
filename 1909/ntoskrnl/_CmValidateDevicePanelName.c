/*
 * XREFs of _CmValidateDevicePanelName @ 0x14076BFFC
 * Callers:
 *     _PnpDispatchDevicePanel @ 0x14076BF60 (_PnpDispatchDevicePanel.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x1409396D8 (_CmGetDevicePanelRegKeyPath.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _CmSplitDevicePanelId @ 0x14076C058 (_CmSplitDevicePanelId.c)
 */

__int64 __fastcall CmValidateDevicePanelName(__int64 a1, const wchar_t *a2)
{
  __int64 result; // rax
  GUID v3; // [rsp+28h] [rbp-20h] BYREF

  *(_QWORD *)&v3.Data1 = 0LL;
  *(_QWORD *)v3.Data4 = 0LL;
  result = CmSplitDevicePanelId(a2, &v3);
  if ( (int)result < 0 )
    return 3221225523LL;
  return result;
}
