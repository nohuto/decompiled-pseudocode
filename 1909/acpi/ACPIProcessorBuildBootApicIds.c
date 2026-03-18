/*
 * XREFs of ACPIProcessorBuildBootApicIds @ 0x1C0090694
 * Callers:
 *     ACPIProcessorStartDevice @ 0x1C0007460 (ACPIProcessorStartDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000C948 (WPP_RECORDER_SF_.c)
 */

__int64 ACPIProcessorBuildBootApicIds()
{
  __int64 v0; // rbx
  __int64 result; // rax
  int v2; // [rsp+40h] [rbp+8h] BYREF

  if ( AcpiBootProcessorApicIds )
    return 0LL;
  AcpiBootProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  AcpiBootProcessorApicIds = (__int64)ExAllocatePoolWithTag(
                                        NonPagedPoolNx,
                                        4LL * (unsigned int)AcpiBootProcessorCount,
                                        0x4D706341u);
  if ( !AcpiBootProcessorApicIds )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x15u,
        0xAu,
        (__int64)&WPP_72dd1c1115013f02fe06a3c7ab98b878_Traceguids);
    return 3221225626LL;
  }
  v0 = 0LL;
  if ( !AcpiBootProcessorCount )
    return 0LL;
  while ( 1 )
  {
    result = HalGetProcessorIdByNtNumber((unsigned int)v0, &v2);
    if ( (int)result < 0 )
      break;
    *(_DWORD *)(AcpiBootProcessorApicIds + 4 * v0) = v2;
    v0 = (unsigned int)(v0 + 1);
    if ( (unsigned int)v0 >= AcpiBootProcessorCount )
      return 0LL;
  }
  return result;
}
