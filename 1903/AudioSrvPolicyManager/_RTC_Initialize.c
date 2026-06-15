/*
 * XREFs of _RTC_Initialize @ 0x180034E18
 * Callers:
 *     dllmain_crt_process_attach @ 0x180034078 (dllmain_crt_process_attach.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
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
