/*
 * XREFs of ??_ECTranslateTransformProxy@@MEAAPEAXI@Z @ 0x180038010
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResourceProxy@@MEAA@XZ @ 0x1800170E8 (--1CResourceProxy@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

CTranslateTransformProxy *__fastcall CTranslateTransformProxy::`vector deleting destructor'(
        CTranslateTransformProxy *this,
        char a2)
{
  *(_QWORD *)this = &CTransform3dGroupProxy::`vftable';
  CResourceProxy::~CResourceProxy(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CTranslateTransformProxy *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
