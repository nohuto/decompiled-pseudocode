/*
 * XREFs of ?NonDelegatingRelease@CUnknown@@UEAAKXZ @ 0x1C0010A30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00117A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CUnknown::NonDelegatingRelease(CUnknown *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&this->INonDelegatingUnknown, 0xFFFFFFFF) != 1 )
    return LODWORD(this->lpVtbl);
  ++LODWORD(this->lpVtbl);
  ((void (__fastcall *)(CUnknown *, __int64))this->__vftable[3].~CUnknown)(this, 1LL);
  return 0LL;
}
