/*
 * XREFs of VfPoolInitPhase0 @ 0x140938FA4
 * Callers:
 *     VfInitVerifierComponents @ 0x1409276D0 (VfInitVerifierComponents.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x1400FD8B0 (ExAllocatePoolWithTagPriority.c)
 */

__int64 VfPoolInitPhase0()
{
  __int64 result; // rax
  unsigned int v1; // eax
  int v2; // ecx

  result = (unsigned int)MmVerifierData;
  if ( (MmVerifierData & 0xFBF) != 0 && ((MmVerifierData & 0x400000) == 0 || (MmVerifierData & 8) != 0) )
  {
    v1 = VfPoolTracesLength;
    if ( (unsigned int)VfPoolTracesLength >= 0x10000 )
    {
      v2 = 0x100000;
      if ( (unsigned int)VfPoolTracesLength <= 0x100000 )
      {
        while ( (v2 & VfPoolTracesLength) == 0 )
        {
          v2 >>= 1;
          if ( v2 < 0x10000 )
            goto LABEL_12;
        }
        v1 = v2 & VfPoolTracesLength;
        VfPoolTracesLength &= v2;
      }
      else
      {
        v1 = 0x100000;
        VfPoolTracesLength = 0x100000;
      }
    }
    else
    {
      v1 = 0x10000;
      VfPoolTracesLength = 0x10000;
    }
LABEL_12:
    result = (__int64)ExAllocatePoolWithTagPriority(
                        NonPagedPoolNx,
                        (unsigned __int64)v1 << 7,
                        0x54506656u,
                        HighPoolPriority);
    VfPoolTraces = result;
  }
  return result;
}
