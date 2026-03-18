/*
 * XREFs of SdbpFindFirstIndexedWildCardTag @ 0x14070B9EC
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x14070BB84 (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x14070C760 (SdbpSearchDB.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
 *     SdbpGetIndex @ 0x14070BD10 (SdbpGetIndex.c)
 *     SdbFindFirstTag @ 0x14070C2E0 (SdbFindFirstTag.c)
 *     SdbGetIndex @ 0x14070C894 (SdbGetIndex.c)
 *     AslStringUpcaseToMultiByteN @ 0x14070CA34 (AslStringUpcaseToMultiByteN.c)
 *     AslStringPatternMatchA @ 0x14074B7C8 (AslStringPatternMatchA.c)
 *     SdbpKeyToAnsiString @ 0x14074B894 (SdbpKeyToAnsiString.c)
 *     AslStringPatternMatchW @ 0x14074B8C0 (AslStringPatternMatchW.c)
 *     SdbGetStringTagPtr @ 0x14074C878 (SdbGetStringTagPtr.c)
 */

__int64 __fastcall SdbpFindFirstIndexedWildCardTag(void *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int *a5)
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
  _BYTE v23[272]; // [rsp+50h] [rbp-B0h] BYREF

  v20 = 0;
  Index = SdbGetIndex(a1);
  *a5 = Index;
  if ( !Index )
  {
    AslLogCallPrintf(1LL);
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
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  v10 = SdbpGetIndex(a1, *a5, &v20);
  if ( !v10 )
  {
    AslLogCallPrintf(1LL);
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
