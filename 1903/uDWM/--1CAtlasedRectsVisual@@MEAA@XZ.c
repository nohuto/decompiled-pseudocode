/*
 * XREFs of ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x180026104
 * Callers:
 *     ??1CButton@@MEAA@XZ @ 0x180010CE8 (--1CButton@@MEAA@XZ.c)
 *     ??_ECAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x180026020 (--_ECAtlasedRectsVisual@@MEAAPEAXI@Z.c)
 *     ??_GCTopLevelAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x180028230 (--_GCTopLevelAtlasedRectsVisual@@MEAAPEAXI@Z.c)
 *     ??1CAnimatedGlassSheet@@UEAA@XZ @ 0x180093A4C (--1CAnimatedGlassSheet@@UEAA@XZ.c)
 * Callees:
 *     ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x1800261A8 (-RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAtlasedRectsVisual::~CAtlasedRectsVisual(CAtlasedRectsVisual *this)
{
  *(_QWORD *)this = &CAtlasedRectsVisual::`vftable';
  CAtlasedRectsVisual::RemoveAllAtlasImages(this);
  (*(void (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 34));
  if ( *((_QWORD *)this + 30) != *((_QWORD *)this + 31) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 30) = 0LL;
  }
  CVisual::~CVisual(this);
}
