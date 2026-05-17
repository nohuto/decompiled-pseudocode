/*
 * XREFs of RtlpQueryPhysicalMemoryPolicy @ 0x180009A9C
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180009B00 (RtlQueryResourcePolicy.c)
 * Callees:
 *     RtlGetNtProductType @ 0x18002DCD0 (RtlGetNtProductType.c)
 */

__int64 __fastcall RtlpQueryPhysicalMemoryPolicy(int *a1)
{
  int v2; // edx
  int v4; // [rsp+38h] [rbp+10h] BYREF

  if ( (_BYTE)RtlpUserPolicies )
  {
    v2 = (unsigned __int8)RtlpUserPolicies;
  }
  else if ( (unsigned __int8)RtlGetNtProductType(&v4) && v4 == 1 )
  {
    v2 = 10;
    if ( MEMORY[0x7FFE02E8] > 0x83400u )
      v2 = 20;
  }
  else
  {
    v2 = 20;
  }
  *a1 = v2;
  return 0LL;
}
