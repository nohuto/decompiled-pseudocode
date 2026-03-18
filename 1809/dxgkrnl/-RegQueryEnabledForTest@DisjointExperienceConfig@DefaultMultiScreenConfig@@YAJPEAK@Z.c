/*
 * XREFs of ?RegQueryEnabledForTest@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAK@Z @ 0x1C003EB3C
 * Callers:
 *     ?ValidateStaticRequirements@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEA_N@Z @ 0x1C003F018 (-ValidateStaticRequirements@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 __fastcall DefaultMultiScreenConfig::DisjointExperienceConfig::RegQueryEnabledForTest(
        DefaultMultiScreenConfig::DisjointExperienceConfig *this,
        unsigned int *a2)
{
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v5; // [rsp+40h] [rbp-C0h] BYREF
  int v6; // [rsp+48h] [rbp-B8h]
  const wchar_t *v7; // [rsp+50h] [rbp-B0h]
  int *v8; // [rsp+58h] [rbp-A8h]
  int v9; // [rsp+60h] [rbp-A0h]
  __int64 v10; // [rsp+68h] [rbp-98h]
  int v11; // [rsp+70h] [rbp-90h]
  __int64 v12; // [rsp+78h] [rbp-88h]
  int v13; // [rsp+80h] [rbp-80h]
  _BYTE v14[40]; // [rsp+88h] [rbp-78h] BYREF
  _OWORD v15[6]; // [rsp+B0h] [rbp-50h] BYREF
  int v16; // [rsp+110h] [rbp+10h]
  wchar_t v17; // [rsp+114h] [rbp+14h]

  v6 = 292;
  *(_DWORD *)this = 0;
  v16 = *(_DWORD *)L"ng";
  v17 = aRegistryMachin_21[50];
  v15[0] = *(_OWORD *)L"\\Registry\\Machine\\Software\\Microsoft\\Shell\\Docking";
  v15[1] = *(_OWORD *)L"y\\Machine\\Software\\Microsoft\\Shell\\Docking";
  v7 = L"EnabledForTest";
  v15[2] = *(_OWORD *)L"e\\Software\\Microsoft\\Shell\\Docking";
  v15[3] = *(_OWORD *)L"re\\Microsoft\\Shell\\Docking";
  v8 = &v4;
  v15[4] = *(_OWORD *)L"soft\\Shell\\Docking";
  v15[5] = *(_OWORD *)L"ll\\Docking";
  v5 = 0LL;
  v9 = 0x4000000;
  v10 = 0LL;
  v11 = 0;
  v12 = 0LL;
  v13 = 0;
  memset(v14, 0, sizeof(v14));
  result = RtlQueryRegistryValuesEx(0LL, v15, &v5, 0LL, 0LL);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741772 )
      return 0LL;
  }
  else
  {
    *(_DWORD *)this = v4;
  }
  return result;
}
