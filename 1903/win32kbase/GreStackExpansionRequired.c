/*
 * XREFs of GreStackExpansionRequired @ 0x1C007A170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GreStackExpansionRequired(unsigned int a1)
{
  unsigned __int64 v1; // rbx
  _BYTE v3[8]; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 LowLimit; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 HighLimit; // [rsp+40h] [rbp+18h] BYREF

  v1 = a1;
  IoGetStackLimits(&LowLimit, &HighLimit);
  return (unsigned __int64)&v3[-LowLimit] < v1;
}
