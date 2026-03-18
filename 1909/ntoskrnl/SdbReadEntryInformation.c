/*
 * XREFs of SdbReadEntryInformation @ 0x140921A8C
 * Callers:
 *     PiIsDriverBlocked @ 0x14070BEAC (PiIsDriverBlocked.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 *     SdbReadBinaryTag @ 0x14070ADF0 (SdbReadBinaryTag.c)
 *     SdbGetDatabaseID @ 0x14070C3E8 (SdbGetDatabaseID.c)
 *     SdbFindFirstTag @ 0x14070E0C0 (SdbFindFirstTag.c)
 *     SdbTagRefToTagID @ 0x14074BF60 (SdbTagRefToTagID.c)
 *     SdbGetEntryFlags @ 0x140775AD4 (SdbGetEntryFlags.c)
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
  int Src[10]; // [rsp+40h] [rbp-30h] BYREF

  memset(Src, 0, sizeof(Src));
  BinaryTag = SdbTagRefToTagID(a1, a2, &v13, (int *)&v12);
  if ( !BinaryTag )
    goto LABEL_2;
  v7 = v13;
  v8 = v12;
  FirstTag = SdbFindFirstTag(v13, v12, 36868);
  if ( !FirstTag )
    goto LABEL_4;
  BinaryTag = SdbReadBinaryTag(v7, FirstTag, (__int64)Src, 0x10u);
  if ( !BinaryTag )
  {
LABEL_2:
    AslLogCallPrintf(1LL);
    return BinaryTag;
  }
  if ( !(unsigned int)SdbGetDatabaseID(v7, &Src[6]) )
  {
LABEL_4:
    AslLogCallPrintf(1LL);
    return 0;
  }
  EntryFlags = SdbGetEntryFlags((__int64)Src, &Src[4]);
  Src[4] &= -(EntryFlags != 0);
  Src[5] = SdbFindFirstTag(v7, v8, 28687);
  if ( a3 )
    memmove(a3, Src, 0x28uLL);
  return 1;
}
