/*
 * XREFs of ??1?$unique_ptr@VComboButtonProcessor@@U?$default_delete@VComboButtonProcessor@@@std@@@std@@QEAA@XZ @ 0x1800C5790
 * Callers:
 *     _ComboButtonProcessor::Create_::_1_::dtor$0 @ 0x180133E8A (_ComboButtonProcessor--Create_--_1_--dtor$0.c)
 *     _RawButtonProcessor::Create_::_1_::dtor$0 @ 0x18013434A (_RawButtonProcessor--Create_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::unique_ptr<ComboButtonProcessor>::~unique_ptr<ComboButtonProcessor>(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v1 + 8) + 24LL))(v1 + 8, 1LL);
  return result;
}
