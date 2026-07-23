/*
 * XREFs of SdbpOpenDatabaseInMemory @ 0x1405A32C0
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x1405A31DC (SdbInitDatabaseInMemory.c)
 *     SdbpOpenCompressedDatabase @ 0x1408EA1B0 (SdbpOpenCompressedDatabase.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x1405A3348 (SdbpValidateAndApplyCompatFlags.c)
 *     SdbpReadMappedData @ 0x1405C92F0 (SdbpReadMappedData.c)
 *     AslAlloc @ 0x14067D940 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 */

void *__fastcall SdbpOpenDatabaseInMemory(__int64 a1, int a2)
{
  __int64 v4; // rax
  void *v5; // rbx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = AslAlloc(a1, 1408LL);
  v5 = (void *)v4;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 24) |= 1u;
    *(_QWORD *)v4 = 0LL;
    *(_QWORD *)(v4 + 8) = a1;
    *(_DWORD *)(v4 + 20) = a2;
    if ( (unsigned int)SdbpReadMappedData(v4, 0LL, v7, 12LL) )
    {
      if ( (unsigned int)SdbpValidateAndApplyCompatFlags(v5, v7) )
        return v5;
    }
    else
    {
      AslLogCallPrintf(1, (unsigned int)"SdbpOpenDatabaseInMemory", 1083, (unsigned int)"Can't read database header");
    }
    ExFreePoolWithTag(v5, 0x74705041u);
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpOpenDatabaseInMemory", 1072, (unsigned int)"Failed to allocate DB structure");
  }
  return 0LL;
}
