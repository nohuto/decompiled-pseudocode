/*
 * XREFs of ??_GCImage@@EEAAPEAXI@Z @ 0x180039C10
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImage@@EEAA@XZ @ 0x180039C54 (--1CImage@@EEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

CImage *__fastcall CImage::`scalar deleting destructor'(CImage *this, char a2)
{
  CImage::~CImage(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CImage *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
