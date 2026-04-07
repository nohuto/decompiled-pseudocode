/*
 * XREFs of ??_GCText@@EEAAPEAXI@Z @ 0x1800373E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRenderDataVisual@@MEAA@XZ @ 0x180023120 (--1CRenderDataVisual@@MEAA@XZ.c)
 *     ?ReleaseResources@CText@@AEAAXXZ @ 0x180024704 (-ReleaseResources@CText@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

CText *__fastcall CText::`scalar deleting destructor'(CText *this, char a2)
{
  __int64 v3; // rdx

  v3 = *((_QWORD *)this + 36);
  *(_QWORD *)this = &CText::`vftable';
  if ( v3 )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 36) = 0LL;
  }
  CText::ReleaseResources((CBaseObject **)this);
  CRenderDataVisual::~CRenderDataVisual((CBaseObject **)this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CText *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
