/*
 * XREFs of _RTC_Terminate @ 0x1800E8CA8
 * Callers:
 *     dllmain_crt_process_detach @ 0x1800E8608 (dllmain_crt_process_detach.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
