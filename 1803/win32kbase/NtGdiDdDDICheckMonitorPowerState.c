/*
 * XREFs of NtGdiDdDDICheckMonitorPowerState @ 0x1C0063520
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 NtGdiDdDDICheckMonitorPowerState()
{
  if ( gbGDIOn )
    return ((__int64 (*)(void))qword_1C01A19C0)();
  else
    return 3223191558LL;
}
