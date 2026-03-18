/*
 * XREFs of ?ADAPTER_RENDER_DdiSetVideoProtectedRegion@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C0037B00
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C01D01D8 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiSetVideoProtectedRegion(
        struct ADAPTER_RENDER *a1,
        const struct _DXGKARG_SETVIDEOPROTECTEDREGION *a2)
{
  return ADAPTER_RENDER::DdiSetVideoProtectedRegion(a1, a2);
}
