/*
 * XREFs of VidMmCreateDevice @ 0x1C0001CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002940 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C0062954 (--0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 */

VIDMM_DEVICE *__fastcall VidMmCreateDevice(struct VIDMM_GLOBAL *a1, struct DXGDEVICE *a2)
{
  VIDMM_DEVICE *v4; // rcx
  VIDMM_DEVICE *result; // rax

  v4 = (VIDMM_DEVICE *)operator new[](0x130uLL, 0x38306956u, (enum _POOL_TYPE)512);
  result = 0LL;
  if ( v4 )
    return VIDMM_DEVICE::VIDMM_DEVICE(v4, a1, a2);
  return result;
}
