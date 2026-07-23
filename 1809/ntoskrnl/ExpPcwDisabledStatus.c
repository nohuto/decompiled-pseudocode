/*
 * XREFs of ExpPcwDisabledStatus @ 0x1408D8418
 * Callers:
 *     PcwCreateInstance @ 0x140691310 (PcwCreateInstance.c)
 *     PcwAddInstance @ 0x140692680 (PcwAddInstance.c)
 *     PcwRegister @ 0x14070FFF0 (PcwRegister.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlpQueryRegistryValues @ 0x1405C68AC (RtlpQueryRegistryValues.c)
 */

__int64 ExpPcwDisabledStatus()
{
  int v0; // eax
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp-19h] BYREF
  int v3; // [rsp+38h] [rbp-11h]
  const wchar_t *v4; // [rsp+40h] [rbp-9h]
  int *v5; // [rsp+48h] [rbp-1h]
  int v6; // [rsp+50h] [rbp+7h]
  int *v7; // [rsp+58h] [rbp+Fh]
  int v8; // [rsp+60h] [rbp+17h]
  _BYTE v9[56]; // [rsp+68h] [rbp+1Fh] BYREF
  int v10; // [rsp+B0h] [rbp+67h] BYREF
  int v11; // [rsp+B8h] [rbp+6Fh] BYREF

  v0 = ExpPcwEnableState;
  if ( ExpPcwEnableState )
    return v0 != 1 ? 0xC0000002 : 0;
  v10 = -1;
  v4 = L"Start";
  v2 = 0LL;
  v5 = &v11;
  v3 = 288;
  v7 = &v10;
  v6 = 67108868;
  v8 = 4;
  memset(v9, 0, sizeof(v9));
  result = RtlpQueryRegistryValues(1LL, L"pcw", (__int64)&v2, 0LL);
  if ( (_DWORD)result == -1073741772 )
    result = 0LL;
  if ( (int)result >= 0 )
  {
    v0 = 2 - (v11 != 0);
    ExpPcwEnableState = v0;
    return v0 != 1 ? 0xC0000002 : 0;
  }
  return result;
}
