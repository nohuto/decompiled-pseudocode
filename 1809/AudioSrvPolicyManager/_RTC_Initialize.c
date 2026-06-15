/*
 * XREFs of _RTC_Initialize @ 0x180037428
 * Callers:
 *     dllmain_crt_process_attach @ 0x180036698 (dllmain_crt_process_attach.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
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
