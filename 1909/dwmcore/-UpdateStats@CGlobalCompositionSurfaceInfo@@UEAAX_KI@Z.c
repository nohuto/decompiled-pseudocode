/*
 * XREFs of ?UpdateStats@CGlobalCompositionSurfaceInfo@@UEAAX_KI@Z @ 0x1800DC590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGlobalCompositionSurfaceInfo::UpdateStats(CGlobalCompositionSurfaceInfo *this, __int64 a2, int a3)
{
  *((_QWORD *)this + 27) = a2;
  *((_DWORD *)this + 56) = a3;
}
