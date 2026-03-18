/*
 * XREFs of ?Thunk_UpdateHoverPointer_146@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x1800A12F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A3F88 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IManipulation_Receive<CManipulationManager>::Thunk_UpdateHoverPointer_146(__int64 a1, __int64 **a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rbx

  v2 = a2[1];
  v3 = **a2;
  if ( *(float *)(v3 + 72) != *(float *)v2 || *(float *)(v3 + 76) != *((float *)v2 + 1) )
    *(_QWORD *)(v3 + 72) = *v2;
  CResource::InvalidateAnimationSources((CResource *)(v3 + 8), 0);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(v3 + 8) + 16LL))(v3 + 8);
  return 0LL;
}
