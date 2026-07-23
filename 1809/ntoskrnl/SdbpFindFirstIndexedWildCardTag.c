/*
 * XREFs of SdbpFindFirstIndexedWildCardTag @ 0x14067D988
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x14067DB20 (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x14067E72C (SdbpSearchDB.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     AslStringUpcaseToMultiByteN @ 0x14067D5AC (AslStringUpcaseToMultiByteN.c)
 *     SdbpGetIndex @ 0x14067DC9C (SdbpGetIndex.c)
 *     SdbFindFirstTag @ 0x14067E340 (SdbFindFirstTag.c)
 *     SdbGetIndex @ 0x14067E8C4 (SdbGetIndex.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     AslStringPatternMatchA @ 0x14072253C (AslStringPatternMatchA.c)
 *     SdbpKeyToAnsiString @ 0x140722608 (SdbpKeyToAnsiString.c)
 *     AslStringPatternMatchW @ 0x140722634 (AslStringPatternMatchW.c)
 *     SdbGetStringTagPtr @ 0x1407229B0 (SdbGetStringTagPtr.c)
 */

__int64 __fastcall SdbpFindFirstIndexedWildCardTag(void *a1, __int64 a2, __int64 a3, const WCHAR *a4, unsigned int *a5)
{
  unsigned int Index; // eax
  char v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r13
  unsigned int v11; // r14d
  __int64 v12; // rdi
  int v14; // r15d
  _DWORD *v15; // rsi
  __int64 v16; // rcx
  unsigned int v17; // esi
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax
  unsigned int v20; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v22; // [rsp+40h] [rbp-C0h]
  char v23[272]; // [rsp+50h] [rbp-B0h] BYREF

  v20 = 0;
  Index = SdbGetIndex(a1);
  *a5 = Index;
  if ( !Index )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpFindFirstIndexedWildCardTag",
      673,
      (unsigned int)"Failed to get an index for tag 0x%lx key 0x%lx");
    return 0LL;
  }
  v8 = v20;
  a5[5] = v20;
  *((_WORD *)a5 + 6) = 24587;
  *((_QWORD *)a5 + 4) = a4;
  memset(v23, 0, 0x104uLL);
  v21 = 0LL;
  v22 = 0;
  if ( (int)AslStringUpcaseToMultiByteN(v23, v9, a4) < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpFindFirstIndexedWildCardTag",
      690,
      (unsigned int)"Failed to convert name to multi-byte");
    return 0LL;
  }
  v10 = SdbpGetIndex(a1, *a5, &v20);
  if ( !v10 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpFindFirstIndexedWildCardTag",
      700,
      (unsigned int)"Failed to get index by tag id 0x%lx");
    return 0LL;
  }
  v11 = v20;
  v12 = 0LL;
  if ( !v20 )
    return 0LL;
  v14 = v8 & 2;
  while ( 1 )
  {
    v15 = (_DWORD *)(v10 + 12 * v12);
    memmove(&v20, v15, 8uLL);
    v16 = *(_QWORD *)v15;
    if ( v14 )
    {
      SdbpKeyToAnsiString(v16, (char *)&v21 + 1);
      LOBYTE(v21) = 42;
    }
    else
    {
      SdbpKeyToAnsiString(v16, &v21);
      LOBYTE(v22) = 42;
    }
    if ( (unsigned int)AslStringPatternMatchA(&v21, v23) )
    {
      v17 = v15[2];
      FirstTag = SdbFindFirstTag(a1, v17, *((unsigned __int16 *)a5 + 6));
      if ( FirstTag )
      {
        StringTagPtr = SdbGetStringTagPtr(a1, FirstTag);
        if ( StringTagPtr )
        {
          if ( (unsigned int)AslStringPatternMatchW(StringTagPtr, *((_QWORD *)a5 + 4)) )
            break;
        }
      }
    }
    v12 = (unsigned int)(v12 + 1);
    if ( (unsigned int)v12 >= v11 )
      return 0LL;
  }
  a5[4] = v12;
  return v17;
}
