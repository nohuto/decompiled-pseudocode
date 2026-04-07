/*
 * XREFs of ??_GCTopLevelWindow@@MEAAPEAXI@Z @ 0x180038B50
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTopLevelWindow@@MEAA@XZ @ 0x180013E48 (--1CTopLevelWindow@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

CBaseObject **__fastcall CTopLevelWindow::`scalar deleting destructor'(CBaseObject **this, char a2)
{
  CTopLevelWindow::~CTopLevelWindow(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
