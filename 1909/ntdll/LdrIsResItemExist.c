/*
 * XREFs of LdrIsResItemExist @ 0x180018610
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180018D8C (LdrpSearchResourceSection_U.c)
 *     LdrpResSearchResourceMappedFile @ 0x180056B60 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     LdrRscIsTypeExist @ 0x180018130 (LdrRscIsTypeExist.c)
 *     LdrpGetRcConfig @ 0x180018940 (LdrpGetRcConfig.c)
 */

int __fastcall LdrIsResItemExist(__int64 a1, const wchar_t **a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned int *RcConfig; // rax
  unsigned int *v7; // rbx
  int result; // eax
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  v4 = a4;
  LOBYTE(a4) = 1;
  LOBYTE(a3) = 1;
  RcConfig = (unsigned int *)LdrpGetRcConfig(a1, a2, a3, a4);
  v7 = RcConfig;
  if ( !RcConfig )
    return 0x80000;
  if ( (int)LdrRscIsTypeExist(RcConfig, *a2, v4, &v9) < 0 )
    return 393216;
  result = v9;
  if ( (v7[5] & 0x100) != 0 )
    result = v9 | 0x100000;
  if ( (v7[4] & 0x10) != 0 )
    return result | 0x200000;
  return result;
}
