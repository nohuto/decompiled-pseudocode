/*
 * XREFs of InvokePauseCallbacks @ 0x1C0067D60
 * Callers:
 *     RunContext @ 0x1C0003C90 (RunContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 */

void InvokePauseCallbacks()
{
  __int64 v0; // rcx
  __int64 v1; // rax

  while ( 1 )
  {
    v0 = qword_1C0082730;
    if ( (__int64 *)qword_1C0082730 == &qword_1C0082730 )
      break;
    if ( *(__int64 **)(qword_1C0082730 + 8) != &qword_1C0082730
      || (v1 = *(_QWORD *)qword_1C0082730, *(_QWORD *)(*(_QWORD *)qword_1C0082730 + 8LL) != qword_1C0082730) )
    {
      __fastfail(3u);
    }
    qword_1C0082730 = *(_QWORD *)qword_1C0082730;
    *(_QWORD *)(v1 + 8) = &qword_1C0082730;
    (*(void (__fastcall **)(_QWORD))(v0 + 16))(*(_QWORD *)(v0 + 24));
  }
}
