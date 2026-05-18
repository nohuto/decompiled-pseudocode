/*
 * XREFs of TlsCallback_0 @ 0x180126B60
 * Callers:
 *     <none>
 * Callees:
 *     _o_terminate @ 0x180125B82 (_o_terminate.c)
 *     dyntls_init_exception_filter @ 0x180126BA4 (dyntls_init_exception_filter.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall TlsCallback_0(__int64 a1, int a2)
{
  void (__fastcall **i)(__int64); // rbx
  void *result; // rax

  if ( a2 == 2 )
  {
    for ( i = (void (__fastcall **)(__int64))&unk_180140510; ; ++i )
    {
      result = &unk_180140510;
      if ( i == (void (__fastcall **)(__int64))&unk_180140510 )
        break;
      if ( *i )
        (*i)(a1);
    }
  }
  return result;
}
