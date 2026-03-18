/*
 * XREFs of ?Thunk_Update2DVisualTransform_138@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x18022BCB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IManipulation_Receive<CManipulationManager>::Thunk_Update2DVisualTransform_138(
        __int64 a1,
        __int64 **a2)
{
  __int64 *v2; // r8
  __int64 v3; // rcx

  v2 = a2[1];
  v3 = **a2;
  *(_OWORD *)(v3 + 280) = *(_OWORD *)v2;
  *(_OWORD *)(v3 + 296) = *((_OWORD *)v2 + 1);
  *(_OWORD *)(v3 + 312) = *((_OWORD *)v2 + 2);
  *(_OWORD *)(v3 + 328) = *((_OWORD *)v2 + 3);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return 0LL;
}
