/*
 * XREFs of ??_GCCanvasVisual@@MEAAPEAXI@Z @ 0x1800201A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetContent@CVisual@@UEAAJPEAVCResource@@@Z @ 0x1800202D0 (-SetContent@CVisual@@UEAAJPEAVCResource@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180020378 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x1800358A0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

CCanvasVisual *__fastcall CCanvasVisual::`scalar deleting destructor'(CBaseObject **this, char a2)
{
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx

  *this = (CBaseObject *)&CDesktopWindowReplacement::`vftable';
  CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
  v4 = this[30];
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4 + 2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(CBaseObject *, __int64))v4)(v4, 1LL);
    this[30] = 0LL;
  }
  if ( this[31] != this[32] )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    this[31] = 0LL;
  }
  *this = (CBaseObject *)&CVisual::`vftable';
  VisualCollection::RemoveAll((VisualCollection *)(this + 4));
  CVisual::SetContent((CVisual *)this, 0LL);
  v5 = this[2];
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(CBaseObject *, __int64))v5)(v5, 1LL);
    this[2] = 0LL;
  }
  v6 = this[13];
  if ( v6 )
  {
    CBaseObject::Release(v6);
    this[13] = 0LL;
  }
  this[4] = (CBaseObject *)&VisualCollection::`vftable';
  if ( this[6] != this[7] )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    this[6] = 0LL;
  }
  *this = (CBaseObject *)&CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return (CCanvasVisual *)this;
}
