/*
 * XREFs of SdbReadQWORDTag @ 0x1407210E8
 * Callers:
 *     SdbpCheckAllAttributes @ 0x140720344 (SdbpCheckAllAttributes.c)
 *     KsepDbReadKFlag @ 0x140721048 (KsepDbReadKFlag.c)
 *     SdbQueryDataExTagID @ 0x140722984 (SdbQueryDataExTagID.c)
 *     SdbpMatchOsVersion @ 0x14072312C (SdbpMatchOsVersion.c)
 *     KsepDbReadKData @ 0x140847C08 (KsepDbReadKData.c)
 *     SdbpCheckPackageAttributes @ 0x1408E6F40 (SdbpCheckPackageAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1408E75FC (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1405C82BC (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x14067CF40 (SdbpReadTagData.c)
 *     AslLogCallPrintf @ 0x140680C60 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadQWORDTag(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x5000 )
  {
    v6 = SdbpReadTagData(a1, v4, &v9, 8u);
    v7 = v9;
    if ( !v6 )
      return a3;
    return v7;
  }
  else
  {
    SdbGetTagFromTagID(a1, v4);
    AslLogCallPrintf(1LL);
    return a3;
  }
}
