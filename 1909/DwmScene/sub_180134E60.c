/*
 * XREFs of sub_180134E60 @ 0x180134E60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180134E60()
{
  __int64 v0; // rcx

  v0 = qword_18026A040;
  if ( qword_18026A040 )
  {
    qword_18026A040 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v0 + 16LL))(v0);
  }
}
