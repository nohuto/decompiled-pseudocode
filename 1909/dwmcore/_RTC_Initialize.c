/*
 * XREFs of _RTC_Initialize @ 0x1800E8C64
 * Callers:
 *     dllmain_crt_process_attach @ 0x1800E84E8 (dllmain_crt_process_attach.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
