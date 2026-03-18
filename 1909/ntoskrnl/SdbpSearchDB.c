/*
 * XREFs of SdbpSearchDB @ 0x14070E540
 * Callers:
 *     SdbGetDatabaseMatch @ 0x14070C138 (SdbGetDatabaseMatch.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x14070D7CC (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbFindFirstStringIndexedTag @ 0x14070DBCC (SdbFindFirstStringIndexedTag.c)
 *     SdbFindFirstTag @ 0x14070E0C0 (SdbFindFirstTag.c)
 *     SdbGetIndex @ 0x14070E674 (SdbGetIndex.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x14074C114 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbGetStringTagPtr @ 0x14074D308 (SdbGetStringTagPtr.c)
 *     SdbpCheckExe @ 0x140921C18 (SdbpCheckExe.c)
 *     SdbFindFirstNamedTag @ 0x140923B5C (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x140923C24 (SdbpFindNextNamedTag.c)
 *     SdbFindNextStringIndexedTag @ 0x1409257B4 (SdbFindNextStringIndexedTag.c)
 */

__int64 __fastcall SdbpSearchDB(int a1, void *a2, __int64 a3, __int64 a4, unsigned int *a5, int a6)
{
  unsigned int *v9; // r15
  unsigned int v10; // edi
  wchar_t *Str1; // r14
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // r12
  int FirstStringIndexedTag; // eax
  int v16; // r14d
  __int64 v17; // r8
  int i; // eax
  int v20; // eax
  int FirstTag; // eax
  int v22; // eax
  int FirstNamedTag; // eax
  int v24; // r12d
  int v25; // eax
  int v26; // r14d
  int j; // eax
  int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // [rsp+40h] [rbp-40h]
  wchar_t *v31; // [rsp+48h] [rbp-38h]
  unsigned int v32[12]; // [rsp+50h] [rbp-30h] BYREF
  int v34; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v35; // [rsp+D8h] [rbp+58h] BYREF

  memset(v32, 0, 0x28uLL);
  v9 = a5;
  v10 = 0;
  a6 = 0;
  v34 = 0;
  memset(a5, 0, 0x80uLL);
  Str1 = *(wchar_t **)(a4 + 40);
  v31 = Str1;
  v13 = 16LL;
  if ( (unsigned int)SdbGetIndex(a2) )
  {
    for ( i = SdbpFindFirstIndexedWildCardTag(a2, 28679LL, v12, (__int64)Str1, v32);
          i;
          i = SdbpFindNextIndexedWildCardTag(a2, v32) )
    {
      v20 = SdbpCheckExe(a1, (int)a2, i, (int)&v34, a4, 1, (__int64)&v35, v9);
      v10 = v34;
      if ( v20 )
      {
        if ( (_DWORD)v35 != 2 )
          goto LABEL_7;
      }
      else if ( (unsigned int)v34 > 0x10 )
      {
        goto LABEL_49;
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
    goto LABEL_19;
  FirstStringIndexedTag = SdbFindFirstNamedTag((int)a2, FirstTag, 28679, 24577, Str1);
LABEL_4:
  while ( 1 )
  {
    v16 = FirstStringIndexedTag;
    if ( !FirstStringIndexedTag )
      break;
    v22 = SdbpCheckExe(a1, (int)a2, FirstStringIndexedTag, (int)&v34, a4, 0, (__int64)&v35, v9);
    v10 = v34;
    if ( v22 )
    {
      if ( (_DWORD)v35 != 2 )
        goto LABEL_7;
    }
    else if ( (unsigned int)v34 > 0x10 )
    {
      goto LABEL_49;
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
      v30 = 1LL;
      FirstNamedTag = SdbFindFirstStringIndexedTag(a2, 28679LL, 24608, *(_QWORD *)(a4 + 48), v32);
      v24 = a6;
      goto LABEL_39;
    }
    v30 = 0LL;
    v24 = SdbFindFirstTag((__int64)a2, 0LL, 28673);
    if ( v24 )
    {
LABEL_19:
      AslLogCallPrintf(1LL);
      goto LABEL_7;
    }
    FirstNamedTag = SdbFindFirstNamedTag((int)a2, 0, 28679, 24608, *(wchar_t **)(a4 + 48));
LABEL_39:
    while ( 1 )
    {
      v26 = FirstNamedTag;
      if ( !FirstNamedTag )
        break;
      v25 = SdbpCheckExe(a1, (int)a2, FirstNamedTag, (int)&v34, a4, 0, (__int64)&v35, v9);
      v10 = v34;
      if ( v25 )
      {
        if ( (_DWORD)v35 != 2 )
          goto LABEL_7;
      }
      else if ( (unsigned int)v34 > 0x10 )
      {
        goto LABEL_49;
      }
      if ( v30 )
        FirstNamedTag = SdbFindNextStringIndexedTag(a2, v32);
      else
        FirstNamedTag = SdbpFindNextNamedTag((int)a2, v24, v26, 24608, *(wchar_t **)(a4 + 48));
    }
  }
  if ( (unsigned int)SdbGetIndex(a2) )
  {
    for ( j = SdbpFindFirstIndexedWildCardTag(a2, 28679LL, v17, (__int64)v31, v32);
          j;
          j = SdbpFindNextIndexedWildCardTag(a2, v32) )
    {
      v28 = SdbpCheckExe(a1, (int)a2, j, (int)&v34, a4, 2, (__int64)&v35, v9);
      v10 = v34;
      if ( v28 )
      {
        if ( (_DWORD)v35 != 2 )
          break;
      }
      else if ( (unsigned int)v34 > 0x10 )
      {
        goto LABEL_49;
      }
    }
  }
LABEL_7:
  if ( v10 > 0x10 || (v13 = v10) != 0 )
  {
    do
    {
LABEL_49:
      v29 = SdbFindFirstTag((__int64)a2, *v9, 24582);
      if ( v29 )
        SdbGetStringTagPtr(a2, v29);
      v9 += 2;
      --v13;
    }
    while ( v13 );
  }
  return v10;
}
