/*
 * XREFs of McTemplateU0z @ 0x180061334
 * Callers:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18000E490 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCha.c)
 * Callees:
 *     McGenEventWrite @ 0x180043B28 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0z(__int64 a1, __int64 a2, const wchar_t *a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  _BYTE v6[16]; // [rsp+30h] [rbp-38h] BYREF
  const wchar_t *v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]

  if ( a3 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( a3[v3] );
    v4 = (unsigned int)(2 * v3 + 2);
  }
  else
  {
    v4 = 10LL;
  }
  v9 = 0;
  v8 = v4;
  if ( !a3 )
    a3 = L"NULL";
  v7 = a3;
  return McGenEventWrite(v4, (__int64)&EndpointCharacteristics_CreateInstance_Task_Start, (__int64)a3, 2, (__int64)v6);
}
