/*
 * XREFs of SdbpReadStringRef @ 0x140722B54
 * Callers:
 *     SdbGetStringTagPtr @ 0x1407229B0 (SdbGetStringTagPtr.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1405C92BC (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x14067E100 (SdbpReadTagData.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadStringRef(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  v2 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x6000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, v2, &v5, 4u) )
      return v5;
    AslLogCallPrintf(1LL);
  }
  else
  {
    SdbGetTagFromTagID(a1, v2);
    AslLogCallPrintf(1LL);
  }
  return 0LL;
}
