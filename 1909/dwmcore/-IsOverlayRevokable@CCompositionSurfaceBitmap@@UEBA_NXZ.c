/*
 * XREFs of ?IsOverlayRevokable@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1801C6EF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsOverlayRevokable(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rcx
  char result; // al

  v1 = *((_QWORD *)this + 5);
  result = 1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 144) + 72LL))(v1 + 144);
  return result;
}
