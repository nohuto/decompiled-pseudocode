/*
 * XREFs of DxgkPinFrameBufferForSaveCB @ 0x1C00388A0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0010BE0 (DpiGetDxgAdapter.c)
 *     ?PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KPEAPEAU_MDL@@@Z @ 0x1C01BE37C (-PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KPEAPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DxgkPinFrameBufferForSaveCB(__int64 a1, __int64 a2)
{
  DXGADAPTER *DxgAdapter; // rax

  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  return DXGADAPTER::PinFrameBufferForSave(DxgAdapter, *(_DWORD *)a2, *(_QWORD *)(a2 + 8), (struct _MDL **)(a2 + 16));
}
