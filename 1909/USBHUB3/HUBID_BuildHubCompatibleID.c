/*
 * XREFs of HUBID_BuildHubCompatibleID @ 0x1C001AFC8
 * Callers:
 *     HUBID_BuildCompatibleID @ 0x1C001B418 (HUBID_BuildCompatibleID.c)
 * Callees:
 *     HUBID_AssignIDString @ 0x1C001A7C0 (HUBID_AssignIDString.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 */

__int64 __fastcall HUBID_BuildHubCompatibleID(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  int v4; // ecx
  const void **v5; // rcx
  _QWORD v6[2]; // [rsp+20h] [rbp-19h] BYREF
  _QWORD v7[2]; // [rsp+30h] [rbp-9h] BYREF
  __int128 v8; // [rsp+40h] [rbp+7h] BYREF
  __int64 v9; // [rsp+50h] [rbp+17h]
  int v10; // [rsp+58h] [rbp+1Fh]
  __int128 v11; // [rsp+60h] [rbp+27h] BYREF
  __int64 v12; // [rsp+70h] [rbp+37h]
  int v13; // [rsp+78h] [rbp+3Fh]

  v10 = *(_DWORD *)L"B";
  v7[1] = &v8;
  v13 = *(_DWORD *)L"B";
  v8 = *(_OWORD *)L"USB\\USB20_HUB";
  v6[1] = &v11;
  result = 0LL;
  v9 = *(_QWORD *)L"0_HUB";
  v7[0] = 1835034LL;
  v12 = *(_QWORD *)L"0_HUB";
  v6[0] = 1835034LL;
  v11 = *(_OWORD *)L"USB\\USB30_HUB";
  if ( a3 )
  {
    *a3 = 0LL;
    a3[1] = 0LL;
  }
  v4 = *(_DWORD *)(a1 + 172);
  if ( v4 > 0 )
  {
    if ( v4 <= 2 )
    {
      v5 = (const void **)v7;
    }
    else
    {
      if ( v4 != 3 )
        return result;
      v5 = (const void **)v6;
    }
    return HUBID_AssignIDString(v5, 2, a2, (__int64)a3);
  }
  return result;
}
