/*
 * XREFs of __report_rangecheckfailure @ 0x1C0023460
 * Callers:
 *     StorCompareScsiDeviceId @ 0x1C0010E6C (StorCompareScsiDeviceId.c)
 *     WppInitGlobalLogger @ 0x1C00749A0 (WppInitGlobalLogger.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
