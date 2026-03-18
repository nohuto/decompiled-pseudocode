/*
 * XREFs of HUBID_BuildCompatibleID @ 0x1C0019B98
 * Callers:
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x1C00131A8 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_AssignPDOIds @ 0x1C006F6FC (HUBPDO_AssignPDOIds.c)
 * Callees:
 *     HUBID_AssignIDString @ 0x1C0018F70 (HUBID_AssignIDString.c)
 *     HUBID_GetUnknownId @ 0x1C001933C (HUBID_GetUnknownId.c)
 *     HUBID_BuildDeviceCompatibleID @ 0x1C00195A0 (HUBID_BuildDeviceCompatibleID.c)
 *     HUBID_BuildHubCompatibleID @ 0x1C0019748 (HUBID_BuildHubCompatibleID.c)
 *     HUBID_BuildClassCompatibleID @ 0x1C0019824 (HUBID_BuildClassCompatibleID.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 */

int __fastcall HUBID_BuildCompatibleID(__int64 a1, __int64 a2, _QWORD *a3, _BYTE *a4)
{
  __int64 v4; // r10
  const void **UnknownId; // rcx
  int v7; // eax
  int v8; // [rsp+20h] [rbp-78h] BYREF
  _OWORD *v9; // [rsp+28h] [rbp-70h]
  _OWORD v10[4]; // [rsp+30h] [rbp-68h] BYREF
  int v11; // [rsp+70h] [rbp-28h]

  v4 = a2;
  v10[0] = *(_OWORD *)L"USB\\Class_11&SubClass_00&Prot_00";
  v10[1] = *(_OWORD *)L"s_11&SubClass_00&Prot_00";
  v11 = *(_DWORD *)L"";
  v10[2] = *(_OWORD *)L"Class_00&Prot_00";
  v10[3] = *(_OWORD *)L"&Prot_00";
  v8 = 4456514;
  v9 = v10;
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
    UnknownId = (const void **)&v8;
    return HUBID_AssignIDString(UnknownId, 2, v4, (__int64)a3);
  }
  return HUBID_BuildClassCompatibleID(a1, a2, a3, a4);
}
