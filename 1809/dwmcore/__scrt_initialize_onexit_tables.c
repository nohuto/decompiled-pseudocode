/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x1800EBC40
 * Callers:
 *     __scrt_dllmain_before_initialize_c @ 0x1800EBACC (__scrt_dllmain_before_initialize_c.c)
 *     __scrt_initialize_thread_safe_statics @ 0x1800EBEB0 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     __scrt_fastfail @ 0x1800EC1EC (__scrt_fastfail.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x1800EC500 (__scrt_is_ucrt_dll_in_use.c)
 *     _initialize_onexit_table @ 0x1800EC58E (_initialize_onexit_table.c)
 */

char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  _PVFV *v3; // rax
  __int128 v4; // [rsp+20h] [rbp-20h]

  if ( !byte_180307CF0 )
  {
    if ( a1 > 1 )
    {
      _scrt_fastfail(5LL);
      JUMPOUT(0x1800EBD19LL);
    }
    if ( !(unsigned int)_scrt_is_ucrt_dll_in_use() || a1 )
    {
      v3 = (_PVFV *)(_security_cookie ^ __ROR8__(-1LL, 64 - ((unsigned __int8)_security_cookie & 0x3Fu)));
      *(_QWORD *)&v4 = v3;
      *((_QWORD *)&v4 + 1) = v3;
      *(_OWORD *)&Table._first = v4;
      *(_QWORD *)&v4 = v3;
      *((_QWORD *)&v4 + 1) = v3;
      Table._end = v3;
      *(_OWORD *)&stru_180307CD8._first = v4;
      stru_180307CD8._end = v3;
    }
    else if ( initialize_onexit_table(&Table) || initialize_onexit_table(&stru_180307CD8) )
    {
      return 0;
    }
    byte_180307CF0 = 1;
  }
  return 1;
}
