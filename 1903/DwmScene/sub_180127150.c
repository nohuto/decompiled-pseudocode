/*
 * XREFs of sub_180127150 @ 0x180127150
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x180126220 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

void sub_180127150()
{
  void (**i)(void); // rbx

  for ( i = qword_180225230; i < qword_180225230; ++i )
  {
    if ( *i )
      (*i)();
  }
}
