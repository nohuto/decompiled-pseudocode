/*
 * XREFs of ??_ECIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x18007EE20
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x18007E9CC (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ??1CIconicBitmapRegistry@@UEAA@XZ @ 0x18008195C (--1CIconicBitmapRegistry@@UEAA@XZ.c)
 */

CIconicBitmapRegistry *__fastcall CIconicBitmapRegistry::`vector deleting destructor'(
        CIconicBitmapRegistry *this,
        char a2)
{
  CIconicBitmapRegistry::~CIconicBitmapRegistry(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CIconicBitmapRegistry *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
