/*
 * XREFs of DxgkUnblockUEFIFrameBufferRangesCB @ 0x1C0038AF0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0010BE0 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0010C80 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?NotifyUnblockUEFIFrameBufferRanges@DXGADAPTER@@QEAAJPEBU_DXGK_QUERYSEGMENTMEMORYSTATE@@@Z @ 0x1C002DD7C (-NotifyUnblockUEFIFrameBufferRanges@DXGADAPTER@@QEAAJPEBU_DXGK_QUERYSEGMENTMEMORYSTATE@@@Z.c)
 */

__int64 __fastcall DxgkUnblockUEFIFrameBufferRangesCB(__int64 a1, const struct _DXGK_QUERYSEGMENTMEMORYSTATE *a2)
{
  DXGADAPTER *DxgAdapter; // rax
  unsigned int v5; // ebx
  _BYTE v7[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v7);
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  v5 = DXGADAPTER::NotifyUnblockUEFIFrameBufferRanges(DxgAdapter, a2);
  if ( v7[0] )
    KeUnstackDetachProcess(&ApcState);
  return v5;
}
