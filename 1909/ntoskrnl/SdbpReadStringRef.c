/*
 * XREFs of SdbpReadStringRef @ 0x14074D4AC
 * Callers:
 *     SdbGetStringTagPtr @ 0x14074D308 (SdbGetStringTagPtr.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x14070DE7C (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x14070E324 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbpReadStringRef(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  v2 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x6000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, v2, (__int64)&v5, 4u) )
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
