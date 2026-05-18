/*
 * XREFs of sub_180127260 @ 0x180127260
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x180126330 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

void sub_180127260()
{
  void (**i)(void); // rbx

  for ( i = qword_180226230; i < qword_180226230; ++i )
  {
    if ( *i )
      (*i)();
  }
}
