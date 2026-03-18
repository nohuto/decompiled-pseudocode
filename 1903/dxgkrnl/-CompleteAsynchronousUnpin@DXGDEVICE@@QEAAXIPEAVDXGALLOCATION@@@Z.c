/*
 * XREFs of ?CompleteAsynchronousUnpin@DXGDEVICE@@QEAAXIPEAVDXGALLOCATION@@@Z @ 0x1C0153248
 * Callers:
 *     DXGDEVICE_CompleteAsynchronousUnpin @ 0x1C001D800 (DXGDEVICE_CompleteAsynchronousUnpin.c)
 * Callees:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C00196F0 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 */

void __fastcall DXGDEVICE::CompleteAsynchronousUnpin(
        struct _KTHREAD **this,
        unsigned int a2,
        struct DXGALLOCATION *a3,
        struct DXGALLOCATION *a4)
{
  DXGDEVICE::TestAndSetDisplayedPrimary(this, a2, a3, a4);
}
