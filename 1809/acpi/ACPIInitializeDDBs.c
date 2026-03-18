/*
 * XREFs of ACPIInitializeDDBs @ 0x1C00BA654
 * Callers:
 *     ACPIInitialize @ 0x1C00BAE7C (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002680 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D030 (WPP_RECORDER_SF_.c)
 *     ACPITableLoad @ 0x1C0024FF0 (ACPITableLoad.c)
 *     AMLILoadDDB @ 0x1C00BA078 (AMLILoadDDB.c)
 *     ACPILoadTableCheckSum @ 0x1C00BA2E0 (ACPILoadTableCheckSum.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C00BC90C (Simulator_NotifyTablesAreLoaded.c)
 */

__int64 ACPIInitializeDDBs()
{
  __int64 *v0; // rdi
  unsigned int v1; // ebx
  __m128i *v2; // rsi
  int v3; // eax
  int v5; // [rsp+28h] [rbp-10h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  if ( (__int64 *)AcpiDynamicDataBlockTableList == &AcpiDynamicDataBlockTableList )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x16u,
      0x26u,
      (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids);
    return (unsigned int)-1072431079;
  }
  else
  {
    ACPITableLoad(18LL, 1, 0LL);
    v0 = (__int64 *)AcpiDynamicDataBlockTableList;
    v1 = 0;
    while ( v0 != &AcpiDynamicDataBlockTableList )
    {
      v2 = (__m128i *)v0[3];
      if ( !ACPILoadTableCheckSum(v2, v2->m128i_u32[1]) )
        KeBugCheckEx(0xA5u, 0x11uLL, 7uLL, (ULONG_PTR)v2, v2[2].m128i_u32[0]);
      v3 = AMLILoadDDB(v2->m128i_i32, &v6);
      if ( v3 < 0 )
      {
        v5 = v3;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x16u,
          0x25u,
          (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
          v5);
        KeBugCheckEx(0xA5u, 0x11uLL, 8uLL, (ULONG_PTR)v2, v2[2].m128i_u32[0]);
      }
      v0[2] = v6;
      v0 = (__int64 *)*v0;
    }
    ACPITableLoad(18LL, 2, 0LL);
    if ( g_SimulatorCallbackObject )
      Simulator_NotifyTablesAreLoaded();
  }
  return v1;
}
