/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x180039B6C
 * Callers:
 *     __scrt_dllmain_before_initialize_c @ 0x1800399F8 (__scrt_dllmain_before_initialize_c.c)
 *     ?__scrt_initialize_thread_safe_statics@@YAHXZ @ 0x180039E90 (-__scrt_initialize_thread_safe_statics@@YAHXZ.c)
 * Callees:
 *     __scrt_fastfail @ 0x18003A2F0 (__scrt_fastfail.c)
 *     ?__uncaught_exception@@YA_NXZ @ 0x18003A66C (-__uncaught_exception@@YA_NXZ.c)
 *     _o__initialize_onexit_table @ 0x18003A746 (_o__initialize_onexit_table.c)
 */

char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  int v2; // eax

  if ( !byte_18004FC10 )
  {
    if ( a1 > 1 )
    {
      _scrt_fastfail(5LL);
      JUMPOUT(0x180039C1BLL);
    }
    LOBYTE(v2) = __uncaught_exception();
    if ( !v2 || a1 )
    {
      qword_18004FBE0 = _security_cookie ^ __ROR8__(-1LL, 64 - ((unsigned __int8)_security_cookie & 0x3Fu));
      qword_18004FBE8 = qword_18004FBE0;
      qword_18004FBF0 = qword_18004FBE0;
      qword_18004FBF8 = qword_18004FBE0;
      qword_18004FC00 = qword_18004FBE0;
      qword_18004FC08 = qword_18004FBE0;
    }
    else if ( (unsigned int)o__initialize_onexit_table(&qword_18004FBE0)
           || (unsigned int)o__initialize_onexit_table(&qword_18004FBF8) )
    {
      return 0;
    }
    byte_18004FC10 = 1;
  }
  return 1;
}
