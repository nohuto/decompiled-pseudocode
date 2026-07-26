/*
 * XREFs of ndisStartNsiProvider @ 0x1C00CB450
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C001E9DC (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 */

__int64 ndisStartNsiProvider()
{
  NTSTATUS v0; // eax
  unsigned int v1; // ebx

  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_(0x14u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids);
  v0 = NmrRegisterProvider(&ProviderCharacteristics, 0LL, &ndisNsiInterfaceProviderHandle);
  v1 = v0;
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_D(0x15u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, v0);
  return v1;
}
