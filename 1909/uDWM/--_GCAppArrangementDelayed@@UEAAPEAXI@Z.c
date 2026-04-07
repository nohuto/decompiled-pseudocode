/*
 * XREFs of ??_GCAppArrangementDelayed@@UEAAPEAXI@Z @ 0x1800A71E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800253B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

CAppArrangementDelayed *__fastcall CAppArrangementDelayed::`scalar deleting destructor'(
        CAppArrangementDelayed *this,
        char a2)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 19);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 15);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 11);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CAppArrangementDelayed *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
