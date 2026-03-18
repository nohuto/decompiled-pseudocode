/*
 * XREFs of ACPIEvaluateSpareDsm @ 0x1C00AFC80
 * Callers:
 *     ACPIModuleGetSpareProperties @ 0x1C00AFE70 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C00AFF50 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C00B0034 (ACPIQuerySpareDsm.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C00116EC (AMLIEvalNameSpaceObject.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall ACPIEvaluateSpareDsm(__int64 *a1, unsigned int a2, __int128 *a3, void *a4)
{
  __int64 v4; // rbx
  __int128 v8; // xmm0
  int v9; // eax
  __int128 v10; // xmm1
  _QWORD v12[6]; // [rsp+20h] [rbp-99h] BYREF
  _QWORD v13[20]; // [rsp+50h] [rbp-69h] BYREF

  v4 = a2;
  memset(v12, 0, sizeof(v12));
  memset(a4, 0, 0x28uLL);
  memset(v13, 0, sizeof(v13));
  v13[7] = 0LL;
  LODWORD(v13[3]) = 16;
  WORD1(v13[0]) = 3;
  v13[4] = &HOT_REPLACE_DSM_GUID;
  v13[19] = v12;
  WORD1(v13[5]) = 1;
  WORD1(v13[10]) = 1;
  v13[12] = v4;
  WORD1(v13[15]) = 4;
  LODWORD(v13[18]) = 48;
  if ( a3 )
  {
    v8 = *a3;
    v9 = *((_DWORD *)a3 + 6);
    LODWORD(v12[0]) = 1;
    v10 = a3[1];
    *(_OWORD *)&v12[1] = v8;
    v12[5] = *((_QWORD *)a3 + 4);
    *(_OWORD *)&v12[3] = v10;
    if ( v9 )
      LODWORD(v13[18]) = v9 + 8;
  }
  return AMLIEvalNameSpaceObject(a1, a4, 4, v13, v12[0], *(_OWORD *)&v12[1], *(_OWORD *)&v12[3], v12[5]);
}
