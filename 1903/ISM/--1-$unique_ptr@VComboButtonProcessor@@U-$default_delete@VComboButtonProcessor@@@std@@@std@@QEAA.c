/*
 * XREFs of ??1?$unique_ptr@VComboButtonProcessor@@U?$default_delete@VComboButtonProcessor@@@std@@@std@@QEAA@XZ @ 0x180035E74
 * Callers:
 *     ?Create@SystemButtonProcessor@@SAJPEAPEAV1@@Z @ 0x180035FCC (-Create@SystemButtonProcessor@@SAJPEAPEAV1@@Z.c)
 *     _ComboButtonProcessor::Create_::_1_::dtor$0 @ 0x1800FBD9E (_ComboButtonProcessor--Create_--_1_--dtor$0.c)
 *     _RawButtonProcessor::Create_::_1_::dtor$0 @ 0x18010917B (_RawButtonProcessor--Create_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VSystemButtonProcessor@@@std@@QEBAXPEAVSystemButtonProcessor@@@Z @ 0x180035E90 (--R-$default_delete@VSystemButtonProcessor@@@std@@QEBAXPEAVSystemButtonProcessor@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<ComboButtonProcessor>::~unique_ptr<ComboButtonProcessor>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<SystemButtonProcessor>::operator()();
  return result;
}
