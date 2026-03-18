/*
 * XREFs of RIMComputePower @ 0x1C012FAEC
 * Callers:
 *     RIMComputeSpecificHighMetricValue @ 0x1C012FB20 (RIMComputeSpecificHighMetricValue.c)
 *     RIMRetrieveRealAngularPhysicalValues @ 0x1C012FD54 (RIMRetrieveRealAngularPhysicalValues.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMComputePower(__int16 a1)
{
  int v1; // edx
  __int64 result; // rax
  bool v3; // zf

  v1 = 10;
  result = 1LL;
  v3 = a1 == 0;
  if ( a1 < 0 )
  {
    a1 = -a1;
    v3 = a1 == 0;
  }
  if ( !v3 )
  {
    do
    {
      if ( (a1 & 1) != 0 )
        result = (unsigned int)(v1 * result);
      v1 *= v1;
      a1 >>= 1;
    }
    while ( a1 );
  }
  return result;
}
