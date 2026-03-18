/*
 * XREFs of ?_GetAppOverride@DXGMONITOR@@QEAA_NPEAXU_GUID@@@Z @ 0x1C02CACFC
 * Callers:
 *     ?_ReadAppOverridesFromMonitorDataStore@DXGMONITOR@@QEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02CB02C (-_ReadAppOverridesFromMonitorDataStore@DXGMONITOR@@QEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?_GetAppOverrideKey@DXGMONITOR@@QEAAJAEBU_UNICODE_STRING@@PEA_K@Z @ 0x1C02CADF0 (-_GetAppOverrideKey@DXGMONITOR@@QEAAJAEBU_UNICODE_STRING@@PEA_K@Z.c)
 */

bool __fastcall DXGMONITOR::_GetAppOverride(DXGMONITOR *this, HANDLE KeyHandle, GUID *Guid)
{
  struct _UNICODE_STRING GuidString; // [rsp+30h] [rbp-99h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-89h] BYREF
  unsigned __int64 v9; // [rsp+48h] [rbp-81h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-79h] BYREF
  int v11; // [rsp+54h] [rbp-75h]
  int v12; // [rsp+58h] [rbp-71h]
  __int64 v13; // [rsp+5Ch] [rbp-6Dh]
  _BYTE v14[128]; // [rsp+70h] [rbp-59h] BYREF

  memset(v14, 0, sizeof(v14));
  *(_QWORD *)&GuidString.Length = 0x800000LL;
  GuidString.Buffer = (wchar_t *)v14;
  return RtlStringFromGUID(Guid, &GuidString) >= 0
      && ZwQueryValueKey(KeyHandle, &GuidString, KeyValuePartialInformation, KeyValueInformation, 0x17u, &ResultLength) >= 0
      && v11 == 11
      && v12 == 8
      && (int)DXGMONITOR::_GetAppOverrideKey(this, &GuidString, &v9) >= 0
      && v9 == v13;
}
