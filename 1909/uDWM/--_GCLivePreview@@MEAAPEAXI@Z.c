/*
 * XREFs of ??_GCLivePreview@@MEAAPEAXI@Z @ 0x18007A670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ??1CLivePreview@@MEAA@XZ @ 0x18007A540 (--1CLivePreview@@MEAA@XZ.c)
 */

CBaseObject **__fastcall CLivePreview::`scalar deleting destructor'(CBaseObject **this, char a2)
{
  CLivePreview::~CLivePreview(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
