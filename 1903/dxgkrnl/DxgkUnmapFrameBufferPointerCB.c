/*
 * XREFs of DxgkUnmapFrameBufferPointerCB @ 0x1C003EFD0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0013BA0 (DpiGetDxgAdapter.c)
 *     ?UnmapFrameBufferPointer@DXGADAPTER@@QEAAJIPEAX@Z @ 0x1C01EF5D0 (-UnmapFrameBufferPointer@DXGADAPTER@@QEAAJIPEAX@Z.c)
 */

int __fastcall DxgkUnmapFrameBufferPointerCB(__int64 a1, __int64 a2, __int64 a3)
{
  DXGADAPTER *DxgAdapter; // rax

  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1, a2, a3);
  return DXGADAPTER::UnmapFrameBufferPointer(DxgAdapter, *(_DWORD *)a2, *(void **)(a2 + 8));
}
