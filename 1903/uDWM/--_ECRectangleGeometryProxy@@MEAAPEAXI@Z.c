/*
 * XREFs of ??_ECRectangleGeometryProxy@@MEAAPEAXI@Z @ 0x180038090
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResourceProxy@@MEAA@XZ @ 0x180016A78 (--1CResourceProxy@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

CRectangleGeometryProxy *__fastcall CRectangleGeometryProxy::`vector deleting destructor'(
        CRectangleGeometryProxy *this,
        char a2)
{
  *(_QWORD *)this = &CTransform3dGroupProxy::`vftable';
  CResourceProxy::~CResourceProxy(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CRectangleGeometryProxy *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
