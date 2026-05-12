/*
 * XREFs of __report_rangecheckfailure @ 0x1C0023300
 * Callers:
 *     StorCompareScsiDeviceId @ 0x1C0010CCC (StorCompareScsiDeviceId.c)
 *     WppInitGlobalLogger @ 0x1C0073ACC (WppInitGlobalLogger.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
