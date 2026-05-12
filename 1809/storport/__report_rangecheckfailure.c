/*
 * XREFs of __report_rangecheckfailure @ 0x1C00260A0
 * Callers:
 *     StorCompareScsiDeviceId @ 0x1C0012E74 (StorCompareScsiDeviceId.c)
 *     WppInitGlobalLogger @ 0x1C0074658 (WppInitGlobalLogger.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
