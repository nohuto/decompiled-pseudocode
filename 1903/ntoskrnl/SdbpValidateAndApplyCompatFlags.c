/*
 * XREFs of SdbpValidateAndApplyCompatFlags @ 0x140708FBC
 * Callers:
 *     SdbpOpenDatabaseInMemory @ 0x140708F28 (SdbpOpenDatabaseInMemory.c)
 *     SdbOpenDatabaseEx @ 0x140921994 (SdbOpenDatabaseEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
 *     SdbGetDatabaseID @ 0x14070A608 (SdbGetDatabaseID.c)
 */

__int64 __fastcall SdbpValidateAndApplyCompatFlags(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *a2 == 1 )
  {
    *(_DWORD *)(a1 + 1328) |= 1u;
    goto LABEL_8;
  }
  if ( *a2 == 2 )
  {
LABEL_8:
    *(_DWORD *)(a1 + 1328) |= 2u;
    goto LABEL_4;
  }
  if ( *a2 != 3 )
  {
    AslLogCallPrintf(1LL);
    return v2;
  }
LABEL_4:
  if ( !(unsigned int)SdbGetDatabaseID(a1, a1 + 28) )
    AslLogCallPrintf(1LL);
  return 1;
}
