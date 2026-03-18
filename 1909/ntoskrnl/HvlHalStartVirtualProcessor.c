/*
 * XREFs of HvlHalStartVirtualProcessor @ 0x140287FA0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpStartVirtualProcessor @ 0x140286D60 (HvlpStartVirtualProcessor.c)
 *     VslStartSecureProcessor @ 0x14085260C (VslStartSecureProcessor.c)
 */

__int64 __fastcall HvlHalStartVirtualProcessor(unsigned int a1, _OWORD *a2)
{
  if ( VslVsmEnabled )
    return VslStartSecureProcessor();
  else
    return HvlpStartVirtualProcessor(a1, a2);
}
