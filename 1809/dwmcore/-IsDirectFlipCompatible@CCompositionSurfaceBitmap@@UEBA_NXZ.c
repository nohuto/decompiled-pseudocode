/*
 * XREFs of ?IsDirectFlipCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18001B1E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsDirectFlipCompatible(CCompositionSurfaceBitmap *this)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 5);
  if ( v3 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 144) + 80LL))(v3 + 144) )
    return *(_DWORD *)(*((_QWORD *)this + 4) + 104LL) > 1u;
  return v2;
}
