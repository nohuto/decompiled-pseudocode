/*
 * XREFs of ?GetDeviceNoRef@CHwDisplayRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800D9B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwDisplayRenderTarget::GetDeviceNoRef(CHwDisplayRenderTarget *this, struct CD3DDeviceLevel1 **a2)
{
  *a2 = (struct CD3DDeviceLevel1 *)*((_QWORD *)this + 19);
  return 0LL;
}
