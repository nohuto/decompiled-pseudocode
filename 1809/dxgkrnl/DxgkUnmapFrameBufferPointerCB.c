/*
 * XREFs of DxgkUnmapFrameBufferPointerCB @ 0x1C0038B70
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0010BE0 (DpiGetDxgAdapter.c)
 *     ?UnmapFrameBufferPointer@DXGADAPTER@@QEAAJIPEAX@Z @ 0x1C01C0000 (-UnmapFrameBufferPointer@DXGADAPTER@@QEAAJIPEAX@Z.c)
 */

int __fastcall DxgkUnmapFrameBufferPointerCB(__int64 a1, __int64 a2)
{
  DXGADAPTER *DxgAdapter; // rax

  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  return DXGADAPTER::UnmapFrameBufferPointer(DxgAdapter, *(_DWORD *)a2, *(void **)(a2 + 8));
}
