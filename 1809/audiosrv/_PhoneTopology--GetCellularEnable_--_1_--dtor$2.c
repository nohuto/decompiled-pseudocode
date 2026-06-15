/*
 * XREFs of _PhoneTopology::GetCellularEnable_::_1_::dtor$2 @ 0x180143EF6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PhoneTopology::GetCellularEnable_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CallHoldWorkItem>::~CAutoPtr<CallHoldWorkItem>((__int64 *)(a2 + 120));
}
