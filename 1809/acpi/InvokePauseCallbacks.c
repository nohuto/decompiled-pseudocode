/*
 * XREFs of InvokePauseCallbacks @ 0x1C0065CFC
 * Callers:
 *     RunContext @ 0x1C00048A0 (RunContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 */

void InvokePauseCallbacks()
{
  __int64 v0; // rcx
  __int64 v1; // rax

  while ( 1 )
  {
    v0 = qword_1C0080740;
    if ( (__int64 *)qword_1C0080740 == &qword_1C0080740 )
      break;
    if ( *(__int64 **)(qword_1C0080740 + 8) != &qword_1C0080740
      || (v1 = *(_QWORD *)qword_1C0080740, *(_QWORD *)(*(_QWORD *)qword_1C0080740 + 8LL) != qword_1C0080740) )
    {
      __fastfail(3u);
    }
    qword_1C0080740 = *(_QWORD *)qword_1C0080740;
    *(_QWORD *)(v1 + 8) = &qword_1C0080740;
    (*(void (__fastcall **)(_QWORD))(v0 + 16))(*(_QWORD *)(v0 + 24));
  }
}
