/*
 * XREFs of ??_ECAppArrangementImmediate@@UEAAPEAXI@Z @ 0x1800A7250
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800253B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

CAppArrangementImmediate *__fastcall CAppArrangementImmediate::`vector deleting destructor'(
        CAppArrangementImmediate *this,
        char a2)
{
  CBaseObject *v4; // rcx

  *(_QWORD *)this = &CAppArrangementImmediate::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  v4 = (CBaseObject *)*((_QWORD *)this + 23);
  if ( v4 )
    CBaseObject::Release(v4);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 19);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 15);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 11);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CAppArrangementImmediate *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
