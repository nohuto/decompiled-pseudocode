/*
 * XREFs of SdbpSearchDB @ 0x14067E72C
 * Callers:
 *     SdbGetDatabaseMatch @ 0x14067F9BC (SdbGetDatabaseMatch.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x14067D988 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbFindFirstStringIndexedTag @ 0x14067DDCC (SdbFindFirstStringIndexedTag.c)
 *     SdbFindFirstTag @ 0x14067E340 (SdbFindFirstTag.c)
 *     SdbGetIndex @ 0x14067E8C4 (SdbGetIndex.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     SdbFindNextStringIndexedTag @ 0x1407215A4 (SdbFindNextStringIndexedTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1407223F8 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbGetStringTagPtr @ 0x1407229B0 (SdbGetStringTagPtr.c)
 *     SdbFindFirstNamedTag @ 0x140723B78 (SdbFindFirstNamedTag.c)
 *     SdbpCheckExe @ 0x140723F58 (SdbpCheckExe.c)
 *     SdbpFindNextNamedTag @ 0x1408E8D0C (SdbpFindNextNamedTag.c)
 */

__int64 __fastcall SdbpSearchDB(int a1, void *a2, __int64 a3, __int64 a4, unsigned int *a5, int a6)
{
  unsigned int *v6; // r15
  unsigned int v9; // edi
  WCHAR *Str1; // r14
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // r12
  int FirstStringIndexedTag; // eax
  int v16; // r14d
  __int64 v17; // r8
  int v19; // eax
  unsigned int v20; // eax
  int i; // eax
  int v22; // eax
  int FirstTag; // eax
  int v24; // r8d
  __int64 v25; // r12
  int FirstNamedTag; // eax
  int v27; // eax
  int v28; // r14d
  int j; // eax
  int v30; // eax
  wchar_t *v31; // [rsp+40h] [rbp-30h]
  unsigned int v32[10]; // [rsp+48h] [rbp-28h] BYREF
  int v34; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v35; // [rsp+C8h] [rbp+58h] BYREF

  v6 = a5;
  v9 = 0;
  a6 = 0;
  v34 = 0;
  memset(a5, 0, 0x80uLL);
  Str1 = *(WCHAR **)(a4 + 40);
  v31 = Str1;
  v13 = 16LL;
  if ( (unsigned int)SdbGetIndex(a2) )
  {
    for ( i = SdbpFindFirstIndexedWildCardTag(a2, 28679LL, v12, Str1, v32); i; i = SdbpFindNextIndexedWildCardTag(
                                                                                     a2,
                                                                                     v32) )
    {
      v22 = SdbpCheckExe(a1, (int)a2, i, (int)&v34, a4, 1, (__int64)&v35, v6);
      v9 = v34;
      if ( v22 )
      {
        if ( (_DWORD)v35 != 2 )
          goto LABEL_7;
      }
      else if ( (unsigned int)v34 > 0x10 )
      {
        goto LABEL_15;
      }
    }
  }
  if ( (unsigned int)SdbGetIndex(a2) )
  {
    v14 = 1LL;
    FirstStringIndexedTag = SdbFindFirstStringIndexedTag(a2, 28679LL, 24577, (__int64)Str1, v32);
    goto LABEL_4;
  }
  v14 = 0LL;
  FirstTag = SdbFindFirstTag((__int64)a2, 0LL, 28673);
  a6 = FirstTag;
  if ( !FirstTag )
  {
    v24 = 3483;
LABEL_30:
    AslLogCallPrintf(1, (unsigned int)"SdbpSearchDB", v24, (unsigned int)"No DATABASE tag found");
    goto LABEL_7;
  }
  FirstStringIndexedTag = SdbFindFirstNamedTag((int)a2, FirstTag, 28679, 24577, Str1);
LABEL_4:
  while ( 1 )
  {
    v16 = FirstStringIndexedTag;
    if ( !FirstStringIndexedTag )
      break;
    v19 = SdbpCheckExe(a1, (int)a2, FirstStringIndexedTag, (int)&v34, a4, 0, (__int64)&v35, v6);
    v9 = v34;
    if ( v19 )
    {
      if ( (_DWORD)v35 != 2 )
        goto LABEL_7;
    }
    else if ( (unsigned int)v34 > 0x10 )
    {
      goto LABEL_15;
    }
    if ( v14 )
      FirstStringIndexedTag = SdbFindNextStringIndexedTag(a2, v32);
    else
      FirstStringIndexedTag = SdbpFindNextNamedTag((int)a2, a6, v16, 24577, v31);
  }
  if ( *(_QWORD *)(a4 + 48) )
  {
    if ( (unsigned int)SdbGetIndex(a2) )
    {
      v25 = 1LL;
      FirstNamedTag = SdbFindFirstStringIndexedTag(a2, 28679LL, 24608, *(_QWORD *)(a4 + 48), v32);
      goto LABEL_44;
    }
    v25 = 0LL;
    a6 = SdbFindFirstTag((__int64)a2, 0LL, 28673);
    if ( a6 )
    {
      v24 = 3555;
      goto LABEL_30;
    }
    FirstNamedTag = SdbFindFirstNamedTag((int)a2, 0, 28679, 24608, *(wchar_t **)(a4 + 48));
LABEL_44:
    while ( 1 )
    {
      v28 = FirstNamedTag;
      if ( !FirstNamedTag )
        break;
      v27 = SdbpCheckExe(a1, (int)a2, FirstNamedTag, (int)&v34, a4, 0, (__int64)&v35, v6);
      v9 = v34;
      if ( v27 )
      {
        if ( (_DWORD)v35 != 2 )
          goto LABEL_7;
      }
      else if ( (unsigned int)v34 > 0x10 )
      {
        goto LABEL_15;
      }
      if ( v25 )
        FirstNamedTag = SdbFindNextStringIndexedTag(a2, v32);
      else
        FirstNamedTag = SdbpFindNextNamedTag((int)a2, a6, v28, 24608, *(wchar_t **)(a4 + 48));
    }
  }
  if ( (unsigned int)SdbGetIndex(a2) )
  {
    for ( j = SdbpFindFirstIndexedWildCardTag(a2, 28679LL, v17, v31, v32); j; j = SdbpFindNextIndexedWildCardTag(
                                                                                    a2,
                                                                                    v32) )
    {
      v30 = SdbpCheckExe(a1, (int)a2, j, (int)&v34, a4, 2, (__int64)&v35, v6);
      v9 = v34;
      if ( v30 )
      {
        if ( (_DWORD)v35 != 2 )
          break;
      }
      else if ( (unsigned int)v34 > 0x10 )
      {
        goto LABEL_15;
      }
    }
  }
LABEL_7:
  if ( v9 > 0x10 || (v13 = v9) != 0 )
  {
    do
    {
LABEL_15:
      v20 = SdbFindFirstTag((__int64)a2, *v6, 24582);
      if ( v20 )
        SdbGetStringTagPtr(a2, v20);
      v6 += 2;
      --v13;
    }
    while ( v13 );
  }
  return v9;
}
