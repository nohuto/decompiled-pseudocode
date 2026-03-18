/*
 * XREFs of SdbpGetExeEntryFlags @ 0x140775A00
 * Callers:
 *     SdbpCheckForMatch @ 0x1407756AC (SdbpCheckForMatch.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 *     SdbReadBinaryTag @ 0x14070ADF0 (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x14070DB5C (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x14070E0C0 (SdbFindFirstTag.c)
 *     SdbGetEntryFlags @ 0x140775AD4 (SdbGetEntryFlags.c)
 */

__int64 __fastcall SdbpGetExeEntryFlags(__int64 a1, __int64 a2, int *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // ebp
  unsigned int FirstTag; // eax
  int EntryFlags; // eax
  int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v13; // eax
  int v14; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v15[2]; // [rsp+38h] [rbp-40h] BYREF

  v4 = 0;
  v15[0] = 0LL;
  v15[1] = 0LL;
  v14 = 0;
  v5 = a2;
  FirstTag = SdbFindFirstTag(a1, a2, 36868);
  if ( FirstTag && (unsigned int)SdbReadBinaryTag(a1, FirstTag, (__int64)v15, 0x10u) )
  {
    EntryFlags = SdbGetEntryFlags(v15, &v14);
    v9 = EntryFlags != 0 ? v14 : 0;
    v10 = SdbFindFirstTag(a1, v5, 28685);
    if ( v10 )
    {
      v9 |= 0x1000u;
      v13 = SdbFindFirstTag(a1, v10, 16400);
      if ( v13 )
      {
        if ( (unsigned int)SdbReadDWORDTag(a1, v13, 0) == 2 )
          v9 |= 0x2000u;
      }
    }
    v11 = SdbFindFirstTag(a1, v5, 16434);
    if ( v11 )
      v9 |= (unsigned int)SdbReadDWORDTag(a1, v11, 0) << 16;
    *a3 = v9;
    return 1;
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return v4;
}
