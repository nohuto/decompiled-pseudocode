/*
 * XREFs of SdbpGetExeEntryFlags @ 0x1407244AC
 * Callers:
 *     SdbpCheckForMatch @ 0x140724154 (SdbpCheckForMatch.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     SdbReadDWORDTag @ 0x14067DF58 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x14067E340 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     SdbReadBinaryTag @ 0x1406CF668 (SdbReadBinaryTag.c)
 *     SdbGetEntryFlags @ 0x140724598 (SdbGetEntryFlags.c)
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
  int DWORDTag; // eax
  int v15; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-40h] BYREF

  v4 = 0;
  v16[0] = 0LL;
  v16[1] = 0LL;
  v15 = 0;
  v5 = a2;
  FirstTag = SdbFindFirstTag(a1, a2, 36868);
  if ( FirstTag && (unsigned int)SdbReadBinaryTag(a1, FirstTag, v16, 0x10u) )
  {
    EntryFlags = SdbGetEntryFlags(v16, &v15);
    v9 = EntryFlags != 0 ? v15 : 0;
    v10 = SdbFindFirstTag(a1, v5, 28685);
    if ( v10 )
    {
      v9 |= 0x1000u;
      v13 = SdbFindFirstTag(a1, v10, 16400);
      if ( v13 )
      {
        DWORDTag = SdbReadDWORDTag(a1, v13, 0);
        if ( DWORDTag == 2 )
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
