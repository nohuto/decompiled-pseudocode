/*
 * XREFs of DxgkMapFrameBufferPointerCB @ 0x1C0038740
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0010BE0 (DpiGetDxgAdapter.c)
 *     ?MapFrameBufferPointer@DXGADAPTER@@QEAAJI_KPEA_KPEAPEAX@Z @ 0x1C01BE188 (-MapFrameBufferPointer@DXGADAPTER@@QEAAJI_KPEA_KPEAPEAX@Z.c)
 */

__int64 __fastcall DxgkMapFrameBufferPointerCB(__int64 a1, __int64 a2)
{
  DXGADAPTER *DxgAdapter; // rax

  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  return DXGADAPTER::MapFrameBufferPointer(
           DxgAdapter,
           *(_DWORD *)a2,
           *(_QWORD *)(a2 + 8),
           (unsigned __int64 *)(a2 + 16),
           (void **)(a2 + 24));
}
