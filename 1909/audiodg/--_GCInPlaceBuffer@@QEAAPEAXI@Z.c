/*
 * XREFs of ??_GCInPlaceBuffer@@QEAAPEAXI@Z @ 0x1400347A4
 * Callers:
 *     ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x14000B370 (-Release@CInPlaceBuffer@@QEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015B54 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
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
