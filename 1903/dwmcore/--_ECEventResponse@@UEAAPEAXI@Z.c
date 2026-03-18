/*
 * XREFs of ??_ECEventResponse@@UEAAPEAXI@Z @ 0x1801A3680
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     ??1CEventResponse@@UEAA@XZ @ 0x1801A3644 (--1CEventResponse@@UEAA@XZ.c)
 */

HANDLE *__fastcall CEventResponse::`vector deleting destructor'(HANDLE *this, char a2)
{
  CEventResponse::~CEventResponse(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
