/*
 * XREFs of LdrpVerifyAlternateResourceModuleEx @ 0x18003A6D4
 * Callers:
 *     LdrMapAndVerifyResourceFile @ 0x18003A040 (LdrMapAndVerifyResourceFile.c)
 * Callees:
 *     LdrResGetRCConfig @ 0x18003A160 (LdrResGetRCConfig.c)
 *     LdrpGetRcConfig @ 0x18003E0D0 (LdrpGetRcConfig.c)
 *     _wcsicmp @ 0x1800918E0 (_wcsicmp.c)
 *     LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure @ 0x1800D1CE8 (LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure.c)
 */

char __fastcall LdrpVerifyAlternateResourceModuleEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        int a5,
        int a6)
{
  const wchar_t *v6; // rbp
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v13; // rcx
  bool v14; // bl
  __int64 v15; // [rsp+30h] [rbp-18h] BYREF
  __int64 RcConfig; // [rsp+38h] [rbp-10h] BYREF

  v6 = a4;
  if ( !a6 )
    return 1;
  if ( (a5 & 0x1000) != 0 )
  {
    if ( (int)LdrResGetRCConfig(a1, 0LL, &RcConfig, 4096, 1) < 0 || (int)LdrResGetRCConfig(a2, 0LL, &v15, 4096, 0) < 0 )
      return 0;
    v10 = v15;
  }
  else
  {
    LOBYTE(a4) = 1;
    RcConfig = LdrpGetRcConfig(a1, a2, 0LL, a4);
    if ( !RcConfig )
      return 0;
    v10 = LdrpGetRcConfig(a2, v9, 0LL, 0LL);
    v15 = v10;
    if ( !v10 )
      return 0;
  }
  if ( a6 == 2 )
  {
    v13 = *(_QWORD *)(RcConfig + 28) - *(_QWORD *)(v10 + 28);
    if ( *(_QWORD *)(RcConfig + 28) == *(_QWORD *)(v10 + 28) )
      v13 = *(_QWORD *)(RcConfig + 36) - *(_QWORD *)(v10 + 36);
    v14 = v13 == 0;
    if ( a3 )
    {
      if ( !v13 )
        return (a5 & 0x1000000) != 0 || v6 && !wcsicmp(v6, (const wchar_t *)(v10 + *(unsigned int *)(v10 + 116)));
      LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure(a3);
      v10 = v15;
    }
LABEL_23:
    if ( !v14 )
      return 0;
    return (a5 & 0x1000000) != 0 || v6 && !wcsicmp(v6, (const wchar_t *)(v10 + *(unsigned int *)(v10 + 116)));
  }
  v11 = *(_QWORD *)(RcConfig + 44) - *(_QWORD *)(v10 + 44);
  if ( !v11 )
    v11 = *(_QWORD *)(RcConfig + 52) - *(_QWORD *)(v10 + 52);
  if ( v11 )
  {
    v14 = 0;
    goto LABEL_23;
  }
  return (a5 & 0x1000000) != 0 || v6 && !wcsicmp(v6, (const wchar_t *)(v10 + *(unsigned int *)(v10 + 116)));
}
