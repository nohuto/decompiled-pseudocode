/*
 * XREFs of ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x140034734
 * Callers:
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x1400091F0 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x140034848 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x14000B380 (-Release@CInPlaceBuffer@@QEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015744 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CConnectionInstance *__fastcall CConnectionInstance::`scalar deleting destructor'(CConnectionInstance *this)
{
  __int64 v2; // rdx
  CInPlaceBuffer *v3; // rcx
  __int64 v4; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 && *(_DWORD *)this )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 64LL))(*((_QWORD *)this + 6));
    *((_QWORD *)this + 1) = 0LL;
  }
  v3 = (CInPlaceBuffer *)*((_QWORD *)this + 7);
  if ( v3 )
  {
    CInPlaceBuffer::Release(v3, v2);
    *((_QWORD *)this + 7) = 0LL;
  }
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  operator delete(this);
  return this;
}
