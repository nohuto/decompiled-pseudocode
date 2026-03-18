/*
 * XREFs of HUBID_BuildCompatibleID @ 0x1C001B418
 * Callers:
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x1C0014404 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_AssignPDOIds @ 0x1C00761BC (HUBPDO_AssignPDOIds.c)
 * Callees:
 *     HUBID_AssignIDString @ 0x1C001A7C0 (HUBID_AssignIDString.c)
 *     HUBID_GetUnknownId @ 0x1C001ABB4 (HUBID_GetUnknownId.c)
 *     HUBID_BuildDeviceCompatibleID @ 0x1C001AE1C (HUBID_BuildDeviceCompatibleID.c)
 *     HUBID_BuildHubCompatibleID @ 0x1C001AFC8 (HUBID_BuildHubCompatibleID.c)
 *     HUBID_BuildClassCompatibleID @ 0x1C001B0A4 (HUBID_BuildClassCompatibleID.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 */

int __fastcall HUBID_BuildCompatibleID(__int64 a1, __int64 a2, _QWORD *a3, _BYTE *a4)
{
  __int64 v4; // r10
  const void **UnknownId; // rcx
  int v7; // eax
  _QWORD v8[2]; // [rsp+20h] [rbp-78h] BYREF
  _OWORD v9[4]; // [rsp+30h] [rbp-68h] BYREF
  int v10; // [rsp+70h] [rbp-28h]

  v4 = a2;
  v9[0] = *(_OWORD *)L"USB\\Class_11&SubClass_00&Prot_00";
  v9[1] = *(_OWORD *)L"s_11&SubClass_00&Prot_00";
  v10 = *(_DWORD *)L"";
  v9[2] = *(_OWORD *)L"Class_00&Prot_00";
  v9[3] = *(_OWORD *)L"&Prot_00";
  v8[0] = 4456514LL;
  v8[1] = v9;
  if ( a3 )
  {
    *a3 = 0LL;
    a3[1] = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 1636) & 0x2002) == 0 )
  {
    UnknownId = (const void **)HUBID_GetUnknownId(a1);
    return HUBID_AssignIDString(UnknownId, 2, v4, (__int64)a3);
  }
  v7 = *(_DWORD *)(a1 + 1632);
  if ( (v7 & 4) != 0 )
    return HUBID_BuildDeviceCompatibleID(a1, a2, a3);
  if ( (v7 & 2) != 0 )
    return HUBID_BuildHubCompatibleID(a1, a2, a3);
  if ( (v7 & 0x20000) != 0 )
  {
    UnknownId = (const void **)v8;
    return HUBID_AssignIDString(UnknownId, 2, v4, (__int64)a3);
  }
  return HUBID_BuildClassCompatibleID(a1, a2, a3, a4);
}
