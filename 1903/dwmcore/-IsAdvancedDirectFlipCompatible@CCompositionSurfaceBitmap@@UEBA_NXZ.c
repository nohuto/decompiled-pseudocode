/*
 * XREFs of ?IsAdvancedDirectFlipCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1801C8590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsAdvancedDirectFlipCompatible(CCompositionSurfaceBitmap *this)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 5);
  if ( v3 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 144) + 88LL))(v3 + 144) )
    return (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4)) > 2;
  return v2;
}
