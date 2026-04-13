/*
 * XREFs of ?do_scan_is@?$ctype@_W@std@@MEBAPEB_WFPEB_W0@Z @ 0x1800249B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int16 *__fastcall std::ctype<wchar_t>::do_scan_is(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4)
{
  unsigned __int16 *i; // rbx

  for ( i = a3; i != a4; ++i )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, a2, *i) )
      break;
  }
  return i;
}
