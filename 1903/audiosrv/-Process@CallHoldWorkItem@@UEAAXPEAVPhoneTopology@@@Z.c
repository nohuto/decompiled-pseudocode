/*
 * XREFs of ?Process@CallHoldWorkItem@@UEAAXPEAVPhoneTopology@@@Z @ 0x180148D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CallHoldWorkItem::Process(CallHoldWorkItem *this, struct PhoneTopology *a2)
{
  PhoneTopology::DoSetCellularRxMute(a2, (CallHoldWorkItem *)((char *)this + 8), *((_DWORD *)this + 4));
}
