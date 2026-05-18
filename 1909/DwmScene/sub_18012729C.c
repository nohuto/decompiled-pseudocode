/*
 * XREFs of sub_18012729C @ 0x18012729C
 * Callers:
 *     ?dllmain_crt_process_detach@@YAH_N@Z @ 0x18012644C (-dllmain_crt_process_detach@@YAH_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

void sub_18012729C()
{
  void (**i)(void); // rbx

  for ( i = qword_180226240; i < qword_180226240; ++i )
  {
    if ( *i )
      (*i)();
  }
}
