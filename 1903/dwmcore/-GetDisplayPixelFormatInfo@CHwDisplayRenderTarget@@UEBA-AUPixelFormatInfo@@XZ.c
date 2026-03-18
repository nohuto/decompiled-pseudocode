/*
 * XREFs of ?GetDisplayPixelFormatInfo@CHwDisplayRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800D93B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::GetDisplayPixelFormatInfo(__int64 a1, __int64 a2)
{
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 - 144) + 24LL))(a1 - 144);
  return a2;
}
