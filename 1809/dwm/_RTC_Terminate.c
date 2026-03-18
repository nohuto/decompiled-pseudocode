/*
 * XREFs of _RTC_Terminate @ 0x140003A20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1400043B0 (_guard_dispatch_icall_nop.c)
 */

void __cdecl RTC_Terminate()
{
  void (**i)(void); // rbx

  for ( i = &_rtc_tzz; i < &_rtc_tzz; ++i )
  {
    if ( *i )
      (*i)();
  }
}
