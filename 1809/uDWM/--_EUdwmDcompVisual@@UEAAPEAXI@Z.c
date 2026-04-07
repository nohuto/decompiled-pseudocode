/*
 * XREFs of ??_EUdwmDcompVisual@@UEAAPEAXI@Z @ 0x180023620
 * Callers:
 *     <none>
 * Callees:
 *     ??1UdwmDcompVisual@@UEAA@XZ @ 0x1800234F8 (--1UdwmDcompVisual@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

struct IDwmChannel **__fastcall UdwmDcompVisual::`vector deleting destructor'(struct IDwmChannel **this, char a2)
{
  UdwmDcompVisual::~UdwmDcompVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, struct IDwmChannel **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
