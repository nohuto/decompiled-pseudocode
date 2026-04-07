/*
 * XREFs of ??_ECGaussianBlurEffect@@UEAAPEAXI@Z @ 0x18007ACB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x180033A40 (--1CResource@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

CGaussianBlurEffect *__fastcall CGaussianBlurEffect::`vector deleting destructor'(CGaussianBlurEffect *this, char a2)
{
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CGaussianBlurEffect *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
