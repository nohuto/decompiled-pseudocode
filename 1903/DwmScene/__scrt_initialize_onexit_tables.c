/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x180125D58
 * Callers:
 *     __scrt_dllmain_before_initialize_c @ 0x180125C10 (__scrt_dllmain_before_initialize_c.c)
 *     ?__scrt_initialize_thread_safe_statics@@YAHXZ @ 0x1801265C0 (-__scrt_initialize_thread_safe_statics@@YAHXZ.c)
 * Callees:
 *     _o__initialize_onexit_table @ 0x180125A13 (_o__initialize_onexit_table.c)
 *     ?__uncaught_exception@@YA_NXZ @ 0x180126CCC (-__uncaught_exception@@YA_NXZ.c)
 *     __scrt_fastfail @ 0x180126CE0 (__scrt_fastfail.c)
 */

char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  int v2; // eax
  uintptr_t v4; // rax
  __int128 v5; // [rsp+20h] [rbp-28h]

  if ( !byte_18026B410 )
  {
    if ( a1 > 1 )
    {
      _scrt_fastfail(5LL);
      __debugbreak();
    }
    LOBYTE(v2) = __uncaught_exception();
    if ( !v2 || a1 )
    {
      v4 = _security_cookie ^ __ROR8__(-1LL, 64 - ((unsigned __int8)_security_cookie & 0x3Fu));
      *(_QWORD *)&v5 = v4;
      *((_QWORD *)&v5 + 1) = v4;
      xmmword_18026B3E0 = v5;
      *(_QWORD *)&v5 = v4;
      *((_QWORD *)&v5 + 1) = v4;
      qword_18026B3F0 = v4;
      xmmword_18026B3F8 = v5;
      qword_18026B408 = v4;
    }
    else if ( (unsigned int)o__initialize_onexit_table() || (unsigned int)o__initialize_onexit_table() )
    {
      return 0;
    }
    byte_18026B410 = 1;
  }
  return 1;
}
