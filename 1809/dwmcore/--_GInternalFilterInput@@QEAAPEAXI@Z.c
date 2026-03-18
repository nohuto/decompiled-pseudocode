/*
 * XREFs of ??_GInternalFilterInput@@QEAAPEAXI@Z @ 0x1801965F8
 * Callers:
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x1801973A8 (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 *     ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x1801980A0 (-ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUT.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

InternalFilterInput *__fastcall InternalFilterInput::`scalar deleting destructor'(InternalFilterInput *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  operator delete(this);
  return this;
}
