/*
 * XREFs of ??_GCWindowData@@QEAAPEAXI@Z @ 0x180027438
 * Callers:
 *     ??1CWindowSnapshot@@MEAA@XZ @ 0x180025874 (--1CWindowSnapshot@@MEAA@XZ.c)
 *     ??1CWindowIconic@@MEAA@XZ @ 0x18003ED24 (--1CWindowIconic@@MEAA@XZ.c)
 * Callees:
 *     ??1CWindowData@@QEAA@XZ @ 0x180012B60 (--1CWindowData@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

CWindowData **__fastcall CWindowData::`scalar deleting destructor'(CWindowData **this)
{
  CWindowData::~CWindowData(this);
  (*(void (__fastcall **)(WPF::HeapBase *, CWindowData **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
