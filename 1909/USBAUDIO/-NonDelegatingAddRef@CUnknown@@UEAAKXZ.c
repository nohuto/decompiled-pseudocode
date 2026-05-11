/*
 * XREFs of ?NonDelegatingAddRef@CUnknown@@UEAAKXZ @ 0x1C0010B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CUnknown::NonDelegatingAddRef(CUnknown *this)
{
  _InterlockedIncrement((volatile signed __int32 *)&this->INonDelegatingUnknown);
  return LODWORD(this->lpVtbl);
}
