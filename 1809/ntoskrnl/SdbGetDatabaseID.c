/*
 * XREFs of SdbGetDatabaseID @ 0x14067DD08
 * Callers:
 *     SdbpValidateAndApplyCompatFlags @ 0x1405A3348 (SdbpValidateAndApplyCompatFlags.c)
 *     SdbReadEntryInformation @ 0x140723E40 (SdbReadEntryInformation.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     SdbFindFirstTag @ 0x14067E340 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     SdbReadBinaryTag @ 0x1406CF668 (SdbReadBinaryTag.c)
 */

__int64 __fastcall SdbGetDatabaseID(__int64 a1, void *a2)
{
  int v2; // eax
  unsigned int v3; // edi
  unsigned int FirstTag; // eax
  unsigned int v7; // eax
  const void *v8; // rsi
  const char *v10; // r9
  int v11; // r8d

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0;
  if ( (v2 & 2) == 0 )
  {
    FirstTag = SdbFindFirstTag(a1, 0LL, 28673LL);
    if ( FirstTag )
    {
      v7 = SdbFindFirstTag(a1, FirstTag, 36871LL);
      if ( v7 )
      {
        v8 = (const void *)(a1 + 28);
        if ( !(unsigned int)SdbReadBinaryTag(a1, v7, a1 + 28, 16LL) )
        {
          AslLogCallPrintf(1, (unsigned int)"SdbGetDatabaseID", 450, (unsigned int)"Failed to read database id 0x%lx");
          return v3;
        }
        *(_DWORD *)(a1 + 24) |= 2u;
        v2 = *(_DWORD *)(a1 + 24);
        goto LABEL_6;
      }
      v10 = "Failed to get the database id";
      v11 = 445;
    }
    else
    {
      v10 = "Failed to get root tag";
      v11 = 439;
    }
    AslLogCallPrintf(1, (unsigned int)"SdbGetDatabaseID", v11, (_DWORD)v10);
    return v3;
  }
  v8 = (const void *)(a1 + 28);
LABEL_6:
  if ( (v2 & 2) != 0 )
  {
    memmove(a2, v8, 0x10uLL);
    return 1;
  }
  return v3;
}
