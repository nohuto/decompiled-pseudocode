/*
 * XREFs of sub_18012718C @ 0x18012718C
 * Callers:
 *     ?dllmain_crt_process_detach@@YAH_N@Z @ 0x18012633C (-dllmain_crt_process_detach@@YAH_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

void sub_18012718C()
{
  void (**i)(void); // rbx

  for ( i = qword_180225240; i < qword_180225240; ++i )
  {
    if ( *i )
      (*i)();
  }
}
