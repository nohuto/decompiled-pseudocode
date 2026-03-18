/*
 * XREFs of HUBID_BuildDeviceCompatibleID @ 0x1C001AE1C
 * Callers:
 *     HUBID_BuildCompatibleID @ 0x1C001B418 (HUBID_BuildCompatibleID.c)
 * Callees:
 *     HUBID_AssignIDString @ 0x1C001A7C0 (HUBID_AssignIDString.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 */

__int64 __fastcall HUBID_BuildDeviceCompatibleID(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  const void *v6[2]; // [rsp+20h] [rbp-E0h] BYREF
  const void *v7[2]; // [rsp+30h] [rbp-D0h] BYREF
  const void *v8[2]; // [rsp+40h] [rbp-C0h] BYREF
  const void *v9[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v10; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v11; // [rsp+70h] [rbp-90h]
  int v12; // [rsp+78h] [rbp-88h]
  _OWORD v13[2]; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v14[3]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v15; // [rsp+D0h] [rbp-30h]
  _OWORD v16[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v17; // [rsp+120h] [rbp+20h]

  v16[0] = *(_OWORD *)L"USB\\DevClass_00&SubClass_00&Prot_00";
  v16[2] = *(_OWORD *)L"SubClass_00&Prot_00";
  v16[1] = *(_OWORD *)L"lass_00&SubClass_00&Prot_00";
  v17 = *(_QWORD *)L"_00";
  v16[3] = *(_OWORD *)L"_00&Prot_00";
  v6[1] = v16;
  v7[1] = v14;
  v8[1] = v13;
  v12 = *(_DWORD *)L"E";
  v6[0] = (const void *)4718662;
  v7[0] = (const void *)3670070;
  v8[0] = (const void *)2097182;
  v9[0] = (const void *)1835034;
  v9[1] = &v10;
  v14[0] = *(_OWORD *)L"USB\\DevClass_00&SubClass_00";
  v14[1] = *(_OWORD *)L"lass_00&SubClass_00";
  v15 = *(_QWORD *)L"_00";
  v14[2] = *(_OWORD *)L"SubClass_00";
  v13[1] = *(_OWORD *)L"lass_00";
  v11 = *(_QWORD *)L"OSITE";
  v13[0] = *(_OWORD *)L"USB\\DevClass_00";
  v10 = *(_OWORD *)L"USB\\COMPOSITE";
  if ( a3 )
  {
    *a3 = 0LL;
    a3[1] = 0LL;
  }
  result = HUBID_AssignIDString(v6, 2, a2, (__int64)a3);
  if ( (int)result >= 0 )
  {
    result = HUBID_AssignIDString(v7, 2, a2, (__int64)a3);
    if ( (int)result >= 0 )
    {
      result = HUBID_AssignIDString(v8, 2, a2, (__int64)a3);
      if ( (int)result >= 0 )
        return HUBID_AssignIDString(v9, 2, a2, (__int64)a3);
    }
  }
  return result;
}
