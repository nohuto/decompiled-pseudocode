/*
 * XREFs of ?WilApiImpl_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH@Z @ 0x180062D20
 * Callers:
 *     <none>
 * Callees:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x180048C64 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 */

__int64 __fastcall wil::details::WilApiImpl_GetFeatureVariant(
        wil::details *this,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4)
{
  _DWORD *v5; // rdi
  bool IsFeatureConfigured; // al
  __int64 result; // rax
  bool v8; // zf
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  v5 = (_DWORD *)a3;
  LOBYTE(a3) = (a2 & 0xFFFFFF7F) - 2 <= 1;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  IsFeatureConfigured = wil::details::IsFeatureConfigured((__int64)&v9, (unsigned int)this, a3, (a2 >> 7) & 1);
  *a4 = v11;
  if ( IsFeatureConfigured )
  {
    v8 = HIDWORD(v11) == 0;
    *v5 = HIDWORD(v10);
    LOBYTE(result) = BYTE4(v9);
    if ( !v8 )
      LOBYTE(result) = BYTE4(v9) | 0x80;
    return (unsigned __int8)result;
  }
  else
  {
    *v5 = 0;
    return 0LL;
  }
}
