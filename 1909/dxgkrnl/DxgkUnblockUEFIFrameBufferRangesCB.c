/*
 * XREFs of DxgkUnblockUEFIFrameBufferRangesCB @ 0x1C003F0B0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0014370 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C00143BC (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?NotifyUnblockUEFIFrameBufferRanges@DXGADAPTER@@QEAAJPEBU_DXGK_QUERYSEGMENTMEMORYSTATE@@@Z @ 0x1C0033604 (-NotifyUnblockUEFIFrameBufferRanges@DXGADAPTER@@QEAAJPEBU_DXGK_QUERYSEGMENTMEMORYSTATE@@@Z.c)
 */

__int64 __fastcall DxgkUnblockUEFIFrameBufferRangesCB(__int64 a1, const struct _DXGK_QUERYSEGMENTMEMORYSTATE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  DXGADAPTER *DxgAdapter; // rax
  __int64 v7; // r8
  unsigned int v8; // ebx
  _BYTE v10[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v10);
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1, v4, v5);
  v8 = DXGADAPTER::NotifyUnblockUEFIFrameBufferRanges(DxgAdapter, a2, v7);
  if ( v10[0] )
    KeUnstackDetachProcess(&ApcState);
  return v8;
}
