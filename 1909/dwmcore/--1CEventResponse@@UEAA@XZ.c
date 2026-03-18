/*
 * XREFs of ??1CEventResponse@@UEAA@XZ @ 0x1801A1D84
 * Callers:
 *     ??_ECEventResponse@@UEAAPEAXI@Z @ 0x1801A1DC0 (--_ECEventResponse@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CEventResponse::~CEventResponse(HANDLE *this)
{
  *this = &CEventResponse::`vftable';
  CloseHandle(this[5]);
  *this = &CResponseItem::`vftable';
}
