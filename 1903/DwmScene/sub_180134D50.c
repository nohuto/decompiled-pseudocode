/*
 * XREFs of sub_180134D50 @ 0x180134D50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180134D50()
{
  __int64 v0; // rcx

  v0 = qword_180269040;
  if ( qword_180269040 )
  {
    qword_180269040 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v0 + 16LL))(v0);
  }
}
