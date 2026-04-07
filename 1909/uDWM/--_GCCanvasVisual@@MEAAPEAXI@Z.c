/*
 * XREFs of ??_GCCanvasVisual@@MEAAPEAXI@Z @ 0x1800224E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisual@@MEAA@XZ @ 0x180018AB0 (--1CVisual@@MEAA@XZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800212F4 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

CCanvasVisual *__fastcall CCanvasVisual::`scalar deleting destructor'(CCanvasVisual *this, char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &CDesktopWindowReplacement::`vftable';
  CRenderDataVisual::ClearInstructions(this);
  v4 = *((_QWORD *)this + 30);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v4)(v4, 1LL);
    *((_QWORD *)this + 30) = 0LL;
  }
  if ( *((_QWORD *)this + 31) != *((_QWORD *)this + 32) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 31) = 0LL;
  }
  CVisual::~CVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CCanvasVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
