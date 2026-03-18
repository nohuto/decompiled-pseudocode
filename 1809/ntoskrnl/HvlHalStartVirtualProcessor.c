/*
 * XREFs of HvlHalStartVirtualProcessor @ 0x140274180
 * Callers:
 *     <none>
 * Callees:
 *     HvlpStartVirtualProcessor @ 0x140272FB8 (HvlpStartVirtualProcessor.c)
 *     VslStartSecureProcessor @ 0x140818E94 (VslStartSecureProcessor.c)
 */

__int64 __fastcall HvlHalStartVirtualProcessor(unsigned int a1, _OWORD *a2)
{
  if ( VslVsmEnabled )
    return VslStartSecureProcessor();
  else
    return HvlpStartVirtualProcessor(a1, a2);
}
