/*
 * XREFs of ??_ECCachedVisualImageBrushResource@@MEAAPEAXI@Z @ 0x180033840
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCachedVisualImageBrushResource@@MEAA@XZ @ 0x180033884 (--1CCachedVisualImageBrushResource@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

CCachedVisualImageBrushResource *__fastcall CCachedVisualImageBrushResource::`vector deleting destructor'(
        CCachedVisualImageBrushResource *this,
        char a2)
{
  CCachedVisualImageBrushResource::~CCachedVisualImageBrushResource(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CCachedVisualImageBrushResource *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
