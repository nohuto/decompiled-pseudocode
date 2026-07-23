/*
 * XREFs of SdbGetDatabaseMatchEx @ 0x14067DB20
 * Callers:
 *     KsepDbGetDriverShims @ 0x14067EA64 (KsepDbGetDriverShims.c)
 *     KsepDbCacheReadDevice @ 0x140721F7C (KsepDbCacheReadDevice.c)
 * Callees:
 *     wcsrchr @ 0x140197A00 (wcsrchr.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x14067D988 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbFindFirstStringIndexedTag @ 0x14067DDCC (SdbFindFirstStringIndexedTag.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     SdbFindNextStringIndexedTag @ 0x1407215A4 (SdbFindNextStringIndexedTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1407223F8 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckKObject @ 0x140724020 (SdbpCheckKObject.c)
 *     SdbTagIDToTagRef @ 0x14075E884 (SdbTagIDToTagRef.c)
 */

__int64 __fastcall SdbGetDatabaseMatchEx(
        __int64 a1,
        int a2,
        const wchar_t *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  void *v7; // rsi
  unsigned __int16 v10; // r14
  int v11; // r15d
  wchar_t *v12; // rax
  const WCHAR *v13; // rbx
  unsigned int FirstStringIndexedTag; // eax
  __int64 v15; // r8
  int v16; // r9d
  __int64 v17; // r12
  __int64 v18; // r13
  unsigned int v19; // edi
  unsigned int i; // eax
  int v21; // r9d
  unsigned int v22; // ebx
  int v24; // r8d
  unsigned int v25[12]; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v26; // [rsp+A8h] [rbp+10h] BYREF

  v7 = *(void **)(a1 + 8);
  if ( a2 )
  {
    v10 = 28698;
    v11 = 0;
    goto LABEL_10;
  }
  v10 = 28700;
  v11 = (int)a3;
  v12 = wcsrchr(a3, 0x5Cu);
  if ( !v12 )
  {
LABEL_10:
    v13 = a3;
    goto LABEL_4;
  }
  v13 = v12 + 1;
LABEL_4:
  v26 = 0;
  FirstStringIndexedTag = SdbFindFirstStringIndexedTag((_DWORD)v7, v10, 24577, (_DWORD)v13, (__int64)v25);
  v17 = a7;
  v18 = a6;
  while ( 1 )
  {
    v19 = FirstStringIndexedTag;
    if ( !FirstStringIndexedTag )
    {
      for ( i = SdbpFindFirstIndexedWildCardTag(v7, v10, v15, v13, v25); ; i = SdbpFindNextIndexedWildCardTag(v7, v25) )
      {
        v22 = i;
        if ( !i )
          break;
        if ( (unsigned int)SdbpCheckKObject(a1, i, v11, v21, a5, v18, v17) )
        {
          if ( (unsigned int)SdbTagIDToTagRef(a1, v7, v22, &v26) )
            return v26;
          v24 = 5293;
          goto LABEL_19;
        }
      }
      return v26;
    }
    if ( (unsigned int)SdbpCheckKObject(a1, FirstStringIndexedTag, v11, v16, a5, v18, v17) )
      break;
    FirstStringIndexedTag = SdbFindNextStringIndexedTag(v7, v25);
  }
  if ( !(unsigned int)SdbTagIDToTagRef(a1, v7, v19, &v26) )
  {
    v24 = 5269;
LABEL_19:
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbGetDatabaseMatchEx",
      v24,
      (unsigned int)"Failed to convert tiKObject to trKObject");
  }
  return v26;
}
