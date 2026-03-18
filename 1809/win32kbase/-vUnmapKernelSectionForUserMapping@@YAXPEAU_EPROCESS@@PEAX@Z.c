/*
 * XREFs of ?vUnmapKernelSectionForUserMapping@@YAXPEAU_EPROCESS@@PEAX@Z @ 0x1C005E0EC
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00440A0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C009C490 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vUnmapKernelSectionForUserMapping(struct _EPROCESS *a1, void *a2)
{
  MmUnmapViewOfSection(a1, a2);
}
