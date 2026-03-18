/*
 * XREFs of _RTC_Initialize @ 0x140003BD0
 * Callers:
 *     pre_c_initialization @ 0x140002D60 (pre_c_initialization.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140004A90 (_guard_dispatch_icall_nop.c)
 */

void __cdecl RTC_Initialize()
{
  void (**i)(void); // rbx

  for ( i = &_rtc_izz; i < &_rtc_izz; ++i )
  {
    if ( *i )
      (*i)();
  }
}
