/*
 * XREFs of ?VidMmDisableIoMmuIsolation@@YAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C0024CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?DisableIoMmuIsolation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00A7ECC (-DisableIoMmuIsolation@VIDMM_GLOBAL@@QEAAXXZ.c)
 */

void __fastcall VidMmDisableIoMmuIsolation(struct VIDMM_GLOBAL *a1)
{
  VIDMM_GLOBAL::DisableIoMmuIsolation(a1);
}
