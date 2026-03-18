/*
 * XREFs of ??_ECEventResponse@@UEAAPEAXI@Z @ 0x1801A1DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CEventResponse@@UEAA@XZ @ 0x1801A1D84 (--1CEventResponse@@UEAA@XZ.c)
 */

HANDLE *__fastcall CEventResponse::`vector deleting destructor'(HANDLE *this, char a2)
{
  CEventResponse::~CEventResponse(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
