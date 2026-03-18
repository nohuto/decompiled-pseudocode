/*
 * XREFs of ??1CEventResponse@@UEAA@XZ @ 0x18014AD3C
 * Callers:
 *     ??_ECEventResponse@@UEAAPEAXI@Z @ 0x18014ADF0 (--_ECEventResponse@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CEventResponse::~CEventResponse(HANDLE *this)
{
  *this = &CEventResponse::`vftable';
  CloseHandle(this[5]);
  *this = &CResponseItem::`vftable';
}
