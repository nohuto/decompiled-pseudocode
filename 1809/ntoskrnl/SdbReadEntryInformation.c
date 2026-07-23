/*
 * XREFs of SdbReadEntryInformation @ 0x140723E40
 * Callers:
 *     PiIsDriverBlocked @ 0x14067FCB0 (PiIsDriverBlocked.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SdbGetDatabaseID @ 0x14067DD08 (SdbGetDatabaseID.c)
 *     SdbFindFirstTag @ 0x14067E340 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     SdbReadBinaryTag @ 0x1406CF668 (SdbReadBinaryTag.c)
 *     SdbTagRefToTagID @ 0x1407239EC (SdbTagRefToTagID.c)
 *     SdbGetEntryFlags @ 0x140724598 (SdbGetEntryFlags.c)
 */

__int64 __fastcall SdbReadEntryInformation(__int64 a1, unsigned int a2, void *a3)
{
  unsigned int BinaryTag; // ebx
  __int64 v7; // rdi
  unsigned int v8; // r14d
  unsigned int FirstTag; // eax
  int EntryFlags; // eax
  unsigned int v12; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+38h] [rbp-38h] BYREF
  _DWORD Src[10]; // [rsp+40h] [rbp-30h] BYREF

  memset(Src, 0, sizeof(Src));
  BinaryTag = SdbTagRefToTagID(a1, a2, &v13, (int *)&v12);
  if ( !BinaryTag )
    goto LABEL_9;
  v7 = v13;
  v8 = v12;
  FirstTag = SdbFindFirstTag(v13, v12, 36868);
  if ( !FirstTag )
  {
LABEL_10:
    AslLogCallPrintf(1LL);
    return 0;
  }
  BinaryTag = SdbReadBinaryTag(v7, FirstTag, Src, 0x10u);
  if ( !BinaryTag )
  {
LABEL_9:
    AslLogCallPrintf(1LL);
    return BinaryTag;
  }
  if ( !(unsigned int)SdbGetDatabaseID(v7, &Src[6]) )
    goto LABEL_10;
  EntryFlags = SdbGetEntryFlags(Src, &Src[4]);
  Src[4] &= -(EntryFlags != 0);
  Src[5] = SdbFindFirstTag(v7, v8, 28687);
  if ( a3 )
    memmove(a3, Src, 0x28uLL);
  return 1;
}
