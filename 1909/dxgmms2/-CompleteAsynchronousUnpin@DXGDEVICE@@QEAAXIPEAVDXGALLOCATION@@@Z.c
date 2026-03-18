/*
 * XREFs of ?CompleteAsynchronousUnpin@DXGDEVICE@@QEAAXIPEAVDXGALLOCATION@@@Z @ 0x1C0016F00
 * Callers:
 *     ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008559C (-VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::CompleteAsynchronousUnpin(DXGDEVICE *this, unsigned int a2, struct DXGALLOCATION *a3)
{
  ((void (__fastcall **)(__int64, struct DXGALLOCATION *))DxgCoreInterface)[9](a2, a3);
}
