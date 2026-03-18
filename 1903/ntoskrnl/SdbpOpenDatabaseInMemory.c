/*
 * XREFs of SdbpOpenDatabaseInMemory @ 0x140708F28
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x140708DFC (SdbInitDatabaseInMemory.c)
 *     SdbpOpenCompressedDatabase @ 0x140925650 (SdbpOpenCompressedDatabase.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x140708FBC (SdbpValidateAndApplyCompatFlags.c)
 *     SdbpReadMappedData @ 0x14070C578 (SdbpReadMappedData.c)
 *     AslAlloc @ 0x14070CCDC (AslAlloc.c)
 */

void *__fastcall SdbpOpenDatabaseInMemory(__int64 a1, int a2)
{
  __int64 v4; // rax
  void *v5; // rbx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]

  v7 = 0LL;
  v8 = 0;
  v4 = AslAlloc(a1, 1408LL);
  v5 = (void *)v4;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 24) |= 1u;
    *(_QWORD *)v4 = 0LL;
    *(_QWORD *)(v4 + 8) = a1;
    *(_DWORD *)(v4 + 20) = a2;
    if ( (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int64 *, __int64))SdbpReadMappedData)(
                         v4,
                         0LL,
                         &v7,
                         12LL) )
    {
      if ( (unsigned int)SdbpValidateAndApplyCompatFlags(v5, &v7) )
        return v5;
    }
    else
    {
      AslLogCallPrintf(1LL);
    }
    ExFreePoolWithTag(v5, 0x74705041u);
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return 0LL;
}
