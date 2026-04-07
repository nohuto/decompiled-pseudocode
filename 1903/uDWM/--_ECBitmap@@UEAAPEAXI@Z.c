/*
 * XREFs of ??_ECBitmap@@UEAAPEAXI@Z @ 0x1800B89F0
 * Callers:
 *     ??_ECBitmap@@WHA@EAAPEAXI@Z @ 0x180050080 (--_ECBitmap@@WHA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CBitmap@@UEAA@XZ @ 0x18004800C (--1CBitmap@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CBitmap::`vector deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  CBitmap::~CBitmap(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, struct _RTL_CRITICAL_SECTION *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
