/*
 * XREFs of sub_180134DC0 @ 0x180134DC0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180134DC0()
{
  void (__fastcall ***v0)(_QWORD, __int64); // rax
  __int64 v1; // rbx

  while ( 1 )
  {
    v1 = qword_18026CA08;
    if ( !qword_18026CA08 )
      break;
    qword_18026CA08 = *(_QWORD *)qword_18026CA08;
    v0 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 8) + 16LL))(*(_QWORD *)(v1 + 8));
    if ( v0 )
      (**v0)(v0, 1LL);
    j_j__o_free();
  }
}
