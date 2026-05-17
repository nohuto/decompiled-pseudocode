/*
 * XREFs of LdrIsResItemExist @ 0x18003E044
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180037AB4 (LdrpResSearchResourceMappedFile.c)
 *     LdrpSearchResourceSection_U @ 0x18003D2E8 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     LdrpGetRcConfig @ 0x18003E0D0 (LdrpGetRcConfig.c)
 *     LdrRscIsTypeExist @ 0x18003E220 (LdrRscIsTypeExist.c)
 */

int __fastcall LdrIsResItemExist(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 RcConfig; // rax
  __int64 v7; // rbx
  int result; // eax
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  v4 = a4;
  LOBYTE(a4) = 1;
  LOBYTE(a3) = 1;
  RcConfig = LdrpGetRcConfig(a1, a2, a3, a4);
  v7 = RcConfig;
  if ( !RcConfig )
    return 0x80000;
  if ( (int)LdrRscIsTypeExist(RcConfig, *a2, v4, &v9) < 0 )
    return 393216;
  result = v9;
  if ( (*(_DWORD *)(v7 + 20) & 0x100) != 0 )
    result = v9 | 0x100000;
  if ( (*(_BYTE *)(v7 + 16) & 0x10) != 0 )
    return result | 0x200000;
  return result;
}
