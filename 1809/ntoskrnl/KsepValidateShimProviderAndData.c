/*
 * XREFs of KsepValidateShimProviderAndData @ 0x140729830
 * Callers:
 *     KseRegisterShimEx @ 0x140729610 (KseRegisterShimEx.c)
 * Callees:
 *     KsepGetModuleInfoByAddress @ 0x1407298D8 (KsepGetModuleInfoByAddress.c)
 */

__int64 __fastcall KsepValidateShimProviderAndData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // r11
  __int64 v8; // rax
  int v9; // edx
  unsigned __int64 v10; // rcx
  unsigned int v12; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp+20h] BYREF

  if ( !a1 )
    return 0LL;
  if ( !a3 )
    return 0LL;
  if ( (int)KsepGetModuleInfoByAddress(a1, a2, &v13, &v12) < 0 )
    return 0LL;
  v4 = *(_QWORD *)(a3 + 48);
  v5 = v4;
  if ( !v4 )
    return 0LL;
  LODWORD(v6) = 0;
  do
  {
    if ( *(_DWORD *)v5 == 4 )
      break;
    v7 = *(_QWORD *)(v5 + 16);
    v8 = v7;
    if ( !v7 )
      return 0LL;
    v9 = 0;
    do
    {
      if ( *(_DWORD *)v8 == 2 )
        break;
      v10 = *(_QWORD *)(v8 + 16);
      if ( !v10 || v10 < v13 && v10 >= v13 + v12 )
        return 0LL;
      v8 = v7 + 32LL * (unsigned int)++v9;
    }
    while ( v8 );
    v6 = (unsigned int)(v6 + 1);
    v5 = v4 + 24 * v6;
  }
  while ( v5 );
  return 1LL;
}
