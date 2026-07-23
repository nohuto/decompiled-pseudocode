/*
 * XREFs of AslpFileGetVersionAttributes @ 0x140720710
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x1407218F4 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     AslpFileMakeStringVersionAttributes @ 0x140720780 (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileMakeBinVersionAttributes @ 0x140720F74 (AslpFileMakeBinVersionAttributes.c)
 *     AslpFileGetVersionBlock @ 0x14072106C (AslpFileGetVersionBlock.c)
 */

__int64 __fastcall AslpFileGetVersionAttributes(__int64 a1, __int64 a2)
{
  int VersionBlock; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r10
  int StringVersionAttributes; // ebx
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  VersionBlock = AslpFileGetVersionBlock(&v9, &v10, a2);
  if ( VersionBlock < 0 )
  {
    if ( (unsigned int)(VersionBlock + 1073741687) > 2 )
      AslLogCallPrintf(3LL);
    v4 = 0LL;
  }
  else
  {
    v4 = v10;
  }
  AslpFileMakeBinVersionAttributes(a1, v4);
  StringVersionAttributes = AslpFileMakeStringVersionAttributes(v5, v6);
  if ( StringVersionAttributes < 0 )
    AslLogCallPrintf(1LL);
  else
    return 0;
  return (unsigned int)StringVersionAttributes;
}
