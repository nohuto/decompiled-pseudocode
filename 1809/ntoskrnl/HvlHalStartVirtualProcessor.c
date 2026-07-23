/*
 * XREFs of HvlHalStartVirtualProcessor @ 0x140274470
 * Callers:
 *     <none>
 * Callees:
 *     HvlpStartVirtualProcessor @ 0x1402732A8 (HvlpStartVirtualProcessor.c)
 *     VslStartSecureProcessor @ 0x14081A074 (VslStartSecureProcessor.c)
 */

__int64 __fastcall HvlHalStartVirtualProcessor(unsigned int a1, _OWORD *a2)
{
  if ( VslVsmEnabled )
    return VslStartSecureProcessor();
  else
    return HvlpStartVirtualProcessor(a1, a2);
}
