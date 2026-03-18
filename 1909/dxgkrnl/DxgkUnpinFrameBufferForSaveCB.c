/*
 * XREFs of DxgkUnpinFrameBufferForSaveCB @ 0x1C003F1C0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0014370 (DpiGetDxgAdapter.c)
 *     ?UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z @ 0x1C01EFC54 (-UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkUnpinFrameBufferForSaveCB(__int64 a1, unsigned int *a2, __int64 a3)
{
  DXGADAPTER *DxgAdapter; // rax

  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1, (__int64)a2, a3);
  return DXGADAPTER::UnpinFrameBufferForSave(DxgAdapter, *a2);
}
