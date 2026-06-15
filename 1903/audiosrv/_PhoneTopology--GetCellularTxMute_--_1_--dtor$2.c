/*
 * XREFs of _PhoneTopology::GetCellularTxMute_::_1_::dtor$2 @ 0x1801487A5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PhoneTopology::GetCellularTxMute_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CallHoldWorkItem>::~CAutoPtr<CallHoldWorkItem>((__int64 *)(a2 + 152));
}
