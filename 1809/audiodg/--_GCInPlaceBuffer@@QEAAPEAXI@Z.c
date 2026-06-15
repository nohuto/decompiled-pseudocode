/*
 * XREFs of ??_GCInPlaceBuffer@@QEAAPEAXI@Z @ 0x140039C88
 * Callers:
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x140006A10 (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 *     ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x14003AE94 (-Release@CInPlaceBuffer@@QEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001B8FC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CInPlaceBuffer *__fastcall CInPlaceBuffer::`scalar deleting destructor'(CInPlaceBuffer *this)
{
  __int64 v2; // rcx

  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 48LL))(
    *((_QWORD *)this + 3),
    *((_QWORD *)this + 1));
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  operator delete(this);
  return this;
}
