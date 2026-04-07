/*
 * XREFs of ??1CWindowData@@QEAA@XZ @ 0x180025E18
 * Callers:
 *     ??_GCWindowData@@QEAAPEAXI@Z @ 0x1800282EC (--_GCWindowData@@QEAAPEAXI@Z.c)
 *     ??1CAutoRestoreAnimationWindowData@@QEAA@XZ @ 0x1800A2D28 (--1CAutoRestoreAnimationWindowData@@QEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180025E70 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowData::~CWindowData(CWindowData **this)
{
  if ( this[2] != (CWindowData *)((char *)this + 690) )
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 69);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 64);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 60);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 55);
}
