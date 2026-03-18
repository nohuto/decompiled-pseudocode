/*
 * XREFs of ?CanRestoreToAdvancedDirectFlipRealization@CHwFullScreenRenderTarget@@UEAA_NXZ @ 0x180207B50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHwFullScreenRenderTarget::CanRestoreToAdvancedDirectFlipRealization(CHwFullScreenRenderTarget *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 4);
  v2 = 0;
  if ( !v1 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 168LL))(v1) )
    return 1;
  return v2;
}
