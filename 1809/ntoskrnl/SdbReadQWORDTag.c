/*
 * XREFs of SdbReadQWORDTag @ 0x140722388
 * Callers:
 *     SdbpCheckAllAttributes @ 0x1407215E4 (SdbpCheckAllAttributes.c)
 *     KsepDbReadKFlag @ 0x1407222E8 (KsepDbReadKFlag.c)
 *     SdbQueryDataExTagID @ 0x140723C24 (SdbQueryDataExTagID.c)
 *     SdbpMatchOsVersion @ 0x1407243CC (SdbpMatchOsVersion.c)
 *     KsepDbReadKData @ 0x140848E68 (KsepDbReadKData.c)
 *     SdbpCheckPackageAttributes @ 0x1408E8200 (SdbpCheckPackageAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1408E88BC (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1405C92BC (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x14067E100 (SdbpReadTagData.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
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
