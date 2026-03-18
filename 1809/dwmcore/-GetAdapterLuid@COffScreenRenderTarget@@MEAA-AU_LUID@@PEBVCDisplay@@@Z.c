/*
 * XREFs of ?GetAdapterLuid@COffScreenRenderTarget@@MEAA?AU_LUID@@PEBVCDisplay@@@Z @ 0x1800E62F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall COffScreenRenderTarget::GetAdapterLuid(
        COffScreenRenderTarget *this,
        const struct CDisplay *a2,
        __int64 a3)
{
  *(_QWORD *)a2 = *(_QWORD *)(a3 + 240);
  return (struct _LUID)a2;
}
