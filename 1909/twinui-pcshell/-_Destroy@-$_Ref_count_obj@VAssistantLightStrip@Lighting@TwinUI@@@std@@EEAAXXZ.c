/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VAssistantLightStrip@Lighting@TwinUI@@@std@@EEAAXXZ @ 0x180421CF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Ref_count_obj<TwinUI::Lighting::AssistantLightStrip>::_Destroy(__int64 a1)
{
  return (**(__int64 (__fastcall ***)(__int64, _QWORD))(a1 + 16))(a1 + 16, 0LL);
}
