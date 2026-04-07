/*
 * XREFs of ??_GCAnimationResource@@IEAAPEAXI@Z @ 0x18003053C
 * Callers:
 *     ?Release@CAnimationResource@@UEAAKXZ @ 0x180030510 (-Release@CAnimationResource@@UEAAKXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800253B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

CAnimationResource *__fastcall CAnimationResource::`scalar deleting destructor'(CAnimationResource *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  *(_QWORD *)this = &CAnimationResource::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 13);
  if ( v3 )
    CBaseObject::Release(v3);
  (*(void (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 4));
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 5);
  (*(void (__fastcall **)(WPF::HeapBase *, CAnimationResource *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
