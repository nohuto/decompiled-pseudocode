/*
 * XREFs of SdbGetDatabaseMatch @ 0x14070C138
 * Callers:
 *     PiIsDriverBlocked @ 0x14070BEAC (PiIsDriverBlocked.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 *     AslFileMappingDelete @ 0x14070C268 (AslFileMappingDelete.c)
 *     SdbpReleaseSearchDBContext @ 0x14070C2BC (SdbpReleaseSearchDBContext.c)
 *     AslFileMappingCreate @ 0x14070C4A4 (AslFileMappingCreate.c)
 *     SdbpSearchDB @ 0x14070E540 (SdbpSearchDB.c)
 *     SdbpCreateSearchDBContext @ 0x14070E8E8 (SdbpCreateSearchDBContext.c)
 *     AslFileMappingCreateFromImageView @ 0x140779848 (AslFileMappingCreateFromImageView.c)
 *     SdbTagIDToTagRef @ 0x1407868C0 (SdbTagIDToTagRef.c)
 */

__int64 __fastcall SdbGetDatabaseMatch(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // eax
  int v9; // r8d
  unsigned int v10; // eax
  int v12; // eax
  __int64 v13; // rbx
  int v14; // [rsp+28h] [rbp-D8h]
  unsigned int v15; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  int v17[24]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v18[32]; // [rsp+A0h] [rbp-60h] BYREF

  memset(&v17[1], 0, 0x5CuLL);
  memset(v18, 0, sizeof(v18));
  P = 0LL;
  v8 = 10;
  v15 = 0;
  if ( a4 )
    v8 = 26;
  v17[0] = v8;
  if ( (int)AslFileMappingCreate((unsigned int)&P, a2, -1, 0, 0LL) < 0
    && (!a4 || (int)AslFileMappingCreateFromImageView(&P, a2, a4, a5) < 0) )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_8;
  }
  if ( !(unsigned int)SdbpCreateSearchDBContext(v17, P) )
  {
LABEL_12:
    AslLogCallPrintf(1LL);
    goto LABEL_8;
  }
  v10 = SdbpSearchDB(a1, *(_QWORD *)(a1 + 8), v9, (int)v17, v18, v14);
  if ( v10 > 0x10 )
  {
    AslLogCallPrintf(1LL);
    v10 = 16;
  }
  if ( v10 )
  {
    v12 = v10 - 1;
    v13 = v12;
    if ( v12 >= 0 )
    {
      while ( (v18[2 * v13 + 1] & 2) != 0
           || (unsigned int)SdbTagIDToTagRef(a1, *(_QWORD *)(a1 + 8), (unsigned int)v18[2 * v13], &v15) )
      {
        if ( --v13 < 0 )
          goto LABEL_8;
      }
      goto LABEL_12;
    }
  }
LABEL_8:
  SdbpReleaseSearchDBContext(v17);
  AslFileMappingDelete(P);
  return v15;
}
