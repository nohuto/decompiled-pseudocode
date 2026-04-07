/*
 * XREFs of ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@@Z @ 0x180033B70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x180033BE4 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 */

__int64 __fastcall wil::details::WilApiImpl_GetFeatureEnabledState(wil::details *this, unsigned int a2, __int64 a3)
{
  char IsFeatureConfigured; // al
  unsigned int v4; // ecx
  unsigned int v5; // edx
  __int64 result; // rax
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  LOBYTE(a3) = (a2 & 0xFFFFFF7F) - 2 <= 1;
  v7[0] = 0LL;
  v7[1] = 0LL;
  v8 = 0LL;
  IsFeatureConfigured = wil::details::IsFeatureConfigured(v7, (unsigned int)this, a3, (a2 >> 7) & 1);
  v4 = 0;
  if ( IsFeatureConfigured )
    v4 = v7[0];
  v5 = v4 | 0x80;
  if ( !(_DWORD)v8 )
    v5 = v4;
  result = v5 | 0x40;
  if ( !HIDWORD(v8) )
    return v5;
  return result;
}
