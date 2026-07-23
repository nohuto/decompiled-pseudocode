/*
 * XREFs of SdbGetDatabaseMatch @ 0x14067F9BC
 * Callers:
 *     PiIsDriverBlocked @ 0x14067FCB0 (PiIsDriverBlocked.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SdbpCreateSearchDBContext @ 0x14067D760 (SdbpCreateSearchDBContext.c)
 *     SdbpSearchDB @ 0x14067E72C (SdbpSearchDB.c)
 *     AslFileMappingCreate @ 0x14067F63C (AslFileMappingCreate.c)
 *     AslFileMappingDelete @ 0x14067FB24 (AslFileMappingDelete.c)
 *     SdbpReleaseSearchDBContext @ 0x14067FB84 (SdbpReleaseSearchDBContext.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     AslFileMappingCreateFromImageView @ 0x1407204D0 (AslFileMappingCreateFromImageView.c)
 *     SdbTagIDToTagRef @ 0x14075E884 (SdbTagIDToTagRef.c)
 */

__int64 __fastcall SdbGetDatabaseMatch(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // eax
  __int64 v9; // r8
  unsigned int v10; // eax
  int v12; // eax
  __int64 v13; // rbx
  const char *v14; // r9
  int v15; // r8d
  const char *v16; // r9
  int v17; // r8d
  int v18; // [rsp+28h] [rbp-D8h]
  unsigned int v19; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  int v21[24]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v22[32]; // [rsp+A0h] [rbp-60h] BYREF

  memset(v21, 0, sizeof(v21));
  memset(v22, 0, sizeof(v22));
  P = 0LL;
  v8 = 10;
  v19 = 0;
  if ( a4 )
    v8 = 26;
  v21[0] = v8;
  if ( (int)AslFileMappingCreate((wchar_t ***)&P, a2, (void *)0xFFFFFFFFFFFFFFFFLL, 0LL, 0LL) >= 0 )
    goto LABEL_4;
  if ( !a4 )
  {
    v14 = "Failed to create initialize file mapping [%x]";
    v15 = 4463;
    goto LABEL_18;
  }
  if ( (int)AslFileMappingCreateFromImageView(&P, a2, a4, a5) < 0 )
  {
    v14 = "Failed to initialize file mapping from image view [%x]";
    v15 = 4455;
LABEL_18:
    AslLogCallPrintf(1, (unsigned int)"SdbGetDatabaseMatch", v15, (_DWORD)v14);
    goto LABEL_8;
  }
LABEL_4:
  if ( !(unsigned int)SdbpCreateSearchDBContext(v21, (const wchar_t **)P) )
  {
    v16 = "Failed to create search DB context";
    v17 = 4472;
LABEL_21:
    AslLogCallPrintf(1, (unsigned int)"SdbGetDatabaseMatch", v17, (_DWORD)v16);
    goto LABEL_8;
  }
  v10 = SdbpSearchDB(a1, *(void **)(a1 + 8), v9, (__int64)v21, v22, v18);
  if ( v10 > 0x10 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbGetDatabaseMatch",
      4487,
      (unsigned int)"The database has more matches than SDB_MAX_EXES");
    v10 = 16;
  }
  if ( v10 )
  {
    v12 = v10 - 1;
    v13 = v12;
    if ( v12 >= 0 )
    {
      while ( (v22[2 * v13 + 1] & 2) != 0 || (unsigned int)SdbTagIDToTagRef(a1, *(_QWORD *)(a1 + 8), v22[2 * v13], &v19) )
      {
        if ( --v13 < 0 )
          goto LABEL_8;
      }
      v16 = "Failed to convert tagid to tagref";
      v17 = 4506;
      goto LABEL_21;
    }
  }
LABEL_8:
  SdbpReleaseSearchDBContext(v21);
  AslFileMappingDelete(P);
  return v19;
}
