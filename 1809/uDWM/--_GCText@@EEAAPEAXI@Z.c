/*
 * XREFs of ??_GCText@@EEAAPEAXI@Z @ 0x180036010
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRenderDataVisual@@MEAA@XZ @ 0x180021570 (--1CRenderDataVisual@@MEAA@XZ.c)
 *     ?ReleaseResources@CText@@AEAAXXZ @ 0x180023320 (-ReleaseResources@CText@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
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
