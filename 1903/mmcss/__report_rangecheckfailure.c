/*
 * XREFs of __report_rangecheckfailure @ 0x1C0002F20
 * Callers:
 *     CiConfigQueryValue @ 0x1C000DB30 (CiConfigQueryValue.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
