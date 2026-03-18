/*
 * XREFs of ?GetTextureSize@CHwTextureRenderTarget@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1800D1F20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

struct D2D_SIZE_U __fastcall CHwTextureRenderTarget::GetTextureSize(CHwTextureRenderTarget *this, __int64 a2)
{
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this - 2) + 120LL) + 40LL))(*((_QWORD *)this - 2) + 120LL);
  return (struct D2D_SIZE_U)a2;
}
