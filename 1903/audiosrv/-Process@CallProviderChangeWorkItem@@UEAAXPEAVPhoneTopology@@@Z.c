/*
 * XREFs of ?Process@CallProviderChangeWorkItem@@UEAAXPEAVPhoneTopology@@@Z @ 0x180148D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CallProviderChangeWorkItem::Process(CallProviderChangeWorkItem *this, struct PhoneTopology *a2)
{
  PhoneTopology::DoSetProviderChange((__int64)a2, (__int64)this + 8, *((_DWORD *)this + 5));
}
