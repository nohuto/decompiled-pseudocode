/*
 * XREFs of ndisStopNsiProvider @ 0x1C0042FD4
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C001E9DC (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 */

void ndisStopNsiProvider()
{
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_(0x12u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids);
  NmrDeregisterProvider(ndisNsiInterfaceProviderHandle);
  NmrWaitForProviderDeregisterComplete(ndisNsiInterfaceProviderHandle);
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_(0x13u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids);
}
