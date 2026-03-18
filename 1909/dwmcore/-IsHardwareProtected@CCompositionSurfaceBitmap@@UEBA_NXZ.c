/*
 * XREFs of ?IsHardwareProtected@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1801C6E90
 * Callers:
 *     ?IsHardwareProtected@CCompositionSurfaceBitmap@@W7EBA_NXZ @ 0x1800F0D10 (-IsHardwareProtected@CCompositionSurfaceBitmap@@W7EBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::IsHardwareProtected(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 5);
  result = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 144) + 104LL))(v1 + 144);
  return result;
}
