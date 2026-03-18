/*
 * XREFs of SdbpFindMatchingName @ 0x140721684
 * Callers:
 *     SdbFindFirstStringIndexedTag @ 0x14067CC2C (SdbFindFirstStringIndexedTag.c)
 *     SdbFindNextStringIndexedTag @ 0x140720324 (SdbFindNextStringIndexedTag.c)
 * Callees:
 *     _wcsicmp @ 0x140195910 (_wcsicmp.c)
 *     SdbFindFirstTag @ 0x14067D1A0 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x140680C80 (AslLogCallPrintf.c)
 *     SdbGetStringTagPtr @ 0x140721730 (SdbGetStringTagPtr.c)
 *     SdbpGetNextIndexedRecord @ 0x140721938 (SdbpGetNextIndexedRecord.c)
 */

__int64 __fastcall SdbpFindMatchingName(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int NextIndexedRecord; // ebx
  unsigned int FirstTag; // eax
  const wchar_t *StringTagPtr; // rcx
  bool v8; // zf
  int v10; // eax

  NextIndexedRecord = a2;
  if ( !a2 )
    return NextIndexedRecord;
  while ( 1 )
  {
    FirstTag = SdbFindFirstTag(a1, NextIndexedRecord, *((_WORD *)a3 + 6));
    if ( !FirstTag )
      break;
    StringTagPtr = (const wchar_t *)SdbGetStringTagPtr(a1, FirstTag);
    if ( !StringTagPtr )
      break;
    if ( (a3[5] & 1) != 0 )
    {
      v10 = wcsicmp(*((const wchar_t **)a3 + 4), StringTagPtr);
      v8 = v10 == 0;
      if ( v10 < 0 )
        return 0LL;
    }
    else
    {
      v8 = wcsicmp(StringTagPtr, *((const wchar_t **)a3 + 4)) == 0;
    }
    if ( !v8 )
    {
      NextIndexedRecord = SdbpGetNextIndexedRecord(a1, *a3, a3);
      if ( NextIndexedRecord )
        continue;
    }
    return NextIndexedRecord;
  }
  AslLogCallPrintf(1LL);
  return 0LL;
}
