/*
 * XREFs of HvlHalStartVirtualProcessor @ 0x140288240
 * Callers:
 *     <none>
 * Callees:
 *     HvlpStartVirtualProcessor @ 0x140287000 (HvlpStartVirtualProcessor.c)
 *     VslStartSecureProcessor @ 0x140852F0C (VslStartSecureProcessor.c)
 */

__int64 __fastcall HvlHalStartVirtualProcessor(unsigned int a1, _OWORD *a2)
{
  if ( VslVsmEnabled )
    return VslStartSecureProcessor();
  else
    return HvlpStartVirtualProcessor(a1, a2);
}
