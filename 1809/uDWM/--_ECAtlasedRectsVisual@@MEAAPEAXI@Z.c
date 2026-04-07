/*
 * XREFs of ??_ECAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x1800266C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x180025BCC (--1CAtlasedRectsVisual@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

CAtlasedRectsVisual *__fastcall CAtlasedRectsVisual::`vector deleting destructor'(CAtlasedRectsVisual *this, char a2)
{
  CAtlasedRectsVisual::~CAtlasedRectsVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CAtlasedRectsVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
