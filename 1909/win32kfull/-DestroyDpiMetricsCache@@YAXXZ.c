/*
 * XREFs of ?DestroyDpiMetricsCache@@YAXXZ @ 0x1C013CB30
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearDPISERVERINFO@@YAXPEAUtagDPISERVERINFO@@@Z @ 0x1C013CC38 (-ClearDPISERVERINFO@@YAXPEAUtagDPISERVERINFO@@@Z.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C013D380 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 */

// write access to const memory has been detected, the output may be wrong!
void DestroyDpiMetricsCache(void)
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // rcx

  InvalidateKMDpiMetricsCacheDPIMETRICS();
  v0 = 0LL;
  v1 = 18LL;
  do
  {
    ClearDPISERVERINFO((struct tagDPISERVERINFO *)(v0 + gpsi + 5096LL));
    v0 += 104LL;
    --v1;
  }
  while ( v1 );
  v2 = gpDpiKernelModeMetricsCache;
  while ( v2 )
  {
    v3 = v2;
    v2 = *(_QWORD *)(v2 + 8);
    Win32FreePool(v3);
  }
  gpDpiKernelModeMetricsMRUNode = 0LL;
  gpDpiKernelModeMetricsCache = 0LL;
}
