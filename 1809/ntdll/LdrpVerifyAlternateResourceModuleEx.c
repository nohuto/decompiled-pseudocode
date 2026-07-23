/*
 * XREFs of LdrpVerifyAlternateResourceModuleEx @ 0x18003A6D4
 * Callers:
 *     LdrMapAndVerifyResourceFile @ 0x18003A040 (LdrMapAndVerifyResourceFile.c)
 * Callees:
 *     LdrResGetRCConfig @ 0x18003A160 (LdrResGetRCConfig.c)
 *     LdrpGetRcConfig @ 0x18003E0D0 (LdrpGetRcConfig.c)
 *     _wcsicmp @ 0x1800918F0 (_wcsicmp.c)
 *     LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure @ 0x1800D1CE8 (LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure.c)
 */

char __fastcall LdrpVerifyAlternateResourceModuleEx(void *a1, void *a2, __int64 a3, const wchar_t *a4, int a5, int a6)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v12; // rcx
  bool v13; // bl
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  __int64 RcConfig; // [rsp+38h] [rbp-10h] BYREF

  if ( !a6 )
    return 1;
  if ( (a5 & 0x1000) != 0 )
  {
    if ( (int)LdrResGetRCConfig(a1, 0LL, &RcConfig, 4096, 1) < 0 || (int)LdrResGetRCConfig(a2, 0LL, &v14, 4096, 0) < 0 )
      return 0;
    v9 = v14;
  }
  else
  {
    RcConfig = LdrpGetRcConfig(a1);
    if ( !RcConfig )
      return 0;
    v9 = LdrpGetRcConfig(a2);
    v14 = v9;
    if ( !v9 )
      return 0;
  }
  if ( a6 == 2 )
  {
    v12 = *(_QWORD *)(RcConfig + 28) - *(_QWORD *)(v9 + 28);
    if ( *(_QWORD *)(RcConfig + 28) == *(_QWORD *)(v9 + 28) )
      v12 = *(_QWORD *)(RcConfig + 36) - *(_QWORD *)(v9 + 36);
    v13 = v12 == 0;
    if ( a3 )
    {
      if ( !v12 )
        return (a5 & 0x1000000) != 0 || a4 && !wcsicmp(a4, (const wchar_t *)(v9 + *(unsigned int *)(v9 + 116)));
      LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure(a3);
      v9 = v14;
    }
LABEL_23:
    if ( !v13 )
      return 0;
    return (a5 & 0x1000000) != 0 || a4 && !wcsicmp(a4, (const wchar_t *)(v9 + *(unsigned int *)(v9 + 116)));
  }
  v10 = *(_QWORD *)(RcConfig + 44) - *(_QWORD *)(v9 + 44);
  if ( !v10 )
    v10 = *(_QWORD *)(RcConfig + 52) - *(_QWORD *)(v9 + 52);
  if ( v10 )
  {
    v13 = 0;
    goto LABEL_23;
  }
  return (a5 & 0x1000000) != 0 || a4 && !wcsicmp(a4, (const wchar_t *)(v9 + *(unsigned int *)(v9 + 116)));
}
