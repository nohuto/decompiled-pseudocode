/*
 * XREFs of DxgkOpenSyncObjectFromNtHandle2Internal @ 0x1C0132F60
 * Callers:
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x1C0013200 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z @ 0x1C0132F78 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle2Internal(struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *a1)
{
  return DxgkOpenSyncObjectFromNtHandle2Impl(a1, 0);
}
