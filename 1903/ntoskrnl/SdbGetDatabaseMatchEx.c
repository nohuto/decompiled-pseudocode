/*
 * XREFs of SdbGetDatabaseMatchEx @ 0x14070BB84
 * Callers:
 *     KsepDbGetDriverShims @ 0x14070A930 (KsepDbGetDriverShims.c)
 *     KsepDbCacheReadDevice @ 0x14074D20C (KsepDbCacheReadDevice.c)
 * Callees:
 *     wcsrchr @ 0x1401A2110 (wcsrchr.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x14070B9EC (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbFindFirstStringIndexedTag @ 0x14070BDEC (SdbFindFirstStringIndexedTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x14074B684 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckKObject @ 0x140771F98 (SdbpCheckKObject.c)
 *     SdbTagIDToTagRef @ 0x140784560 (SdbTagIDToTagRef.c)
 *     SdbFindNextStringIndexedTag @ 0x140925D54 (SdbFindNextStringIndexedTag.c)
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
  void *v10; // rsi
  unsigned __int16 v11; // r14
  int v12; // r15d
  wchar_t *v13; // rax
  __int64 v14; // rbx
  unsigned int FirstStringIndexedTag; // eax
  __int64 v16; // r8
  int v17; // r9d
  __int64 v18; // r12
  __int64 v19; // r13
  unsigned int v20; // edi
  unsigned int i; // eax
  int v22; // r9d
  unsigned int v23; // ebx
  unsigned int v25[12]; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v26; // [rsp+A8h] [rbp+10h] BYREF

  memset(v25, 0, 0x28uLL);
  v10 = *(void **)(a1 + 8);
  if ( a2 )
  {
    v11 = 28698;
    v12 = 0;
    goto LABEL_10;
  }
  v11 = 28700;
  v12 = (int)a3;
  v13 = wcsrchr(a3, 0x5Cu);
  if ( !v13 )
  {
LABEL_10:
    v14 = (__int64)a3;
    goto LABEL_4;
  }
  v14 = (__int64)(v13 + 1);
LABEL_4:
  v26 = 0;
  FirstStringIndexedTag = SdbFindFirstStringIndexedTag((_DWORD)v10, v11, 24577, v14, (__int64)v25);
  v18 = a7;
  v19 = a6;
  while ( 1 )
  {
    v20 = FirstStringIndexedTag;
    if ( !FirstStringIndexedTag )
    {
      for ( i = SdbpFindFirstIndexedWildCardTag(v10, v11, v16, v14, v25); ; i = SdbpFindNextIndexedWildCardTag(v10, v25) )
      {
        v23 = i;
        if ( !i )
          break;
        if ( (unsigned int)SdbpCheckKObject(a1, i, v12, v22, a5, v19, v18) )
        {
          if ( (unsigned int)SdbTagIDToTagRef(a1, v10, v23, &v26) )
            return v26;
          goto LABEL_18;
        }
      }
      return v26;
    }
    if ( (unsigned int)SdbpCheckKObject(a1, FirstStringIndexedTag, v12, v17, a5, v19, v18) )
      break;
    FirstStringIndexedTag = SdbFindNextStringIndexedTag(v10, v25);
  }
  if ( !(unsigned int)SdbTagIDToTagRef(a1, v10, v20, &v26) )
LABEL_18:
    AslLogCallPrintf(1LL);
  return v26;
}
