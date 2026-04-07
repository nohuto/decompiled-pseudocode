/*
 * XREFs of ??_GUdwmBottomVisual@@UEAAPEAXI@Z @ 0x180038DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisual@@MEAA@XZ @ 0x180018AB0 (--1CVisual@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

UdwmBottomVisual *__fastcall UdwmBottomVisual::`scalar deleting destructor'(UdwmBottomVisual *this, char a2)
{
  CVisual::~CVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, UdwmBottomVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
