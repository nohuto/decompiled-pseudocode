/*
 * XREFs of NtGdiDdDDICheckMonitorPowerState @ 0x1C0074B10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 NtGdiDdDDICheckMonitorPowerState()
{
  if ( gbGDIOn )
    return ((__int64 (*)(void))qword_1C01CD860)();
  else
    return 3223191558LL;
}
