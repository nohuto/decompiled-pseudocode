/*
 * XREFs of ACPIInterruptInitialize @ 0x1C00950E8
 * Callers:
 *     ACPIInitialize @ 0x1C00BAE7C (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001D030 (WPP_RECORDER_SF_.c)
 *     OSInterruptVector @ 0x1C00B9728 (OSInterruptVector.c)
 */

__int64 ACPIInterruptInitialize()
{
  int v0; // ebx

  if ( *((_BYTE *)AcpiInformation + 133) )
  {
    return 0;
  }
  else
  {
    v0 = OSInterruptVector();
    if ( v0 < 0 )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0x27u,
        (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids);
  }
  return (unsigned int)v0;
}
