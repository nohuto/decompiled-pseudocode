/*
 * XREFs of ?ndisVerifierAllocatePacketPool@@YAXPEAHPEAPEAXII@Z @ 0x1C00A9730
 * Callers:
 *     <none>
 * Callees:
 *     NdisAllocatePacketPool @ 0x1C0080AE0 (NdisAllocatePacketPool.c)
 *     ?ndisVerifierInjectResourceFailure@@YAEE@Z @ 0x1C00A9928 (-ndisVerifierInjectResourceFailure@@YAEE@Z.c)
 */

void __fastcall ndisVerifierAllocatePacketPool(PNDIS_STATUS Status, PNDIS_HANDLE PoolHandle)
{
  UINT v4; // r8d
  UINT v5; // r9d
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( ndisVerifierInjectResourceFailure((unsigned __int8)Status) )
  {
    *PoolHandle = 0LL;
    *Status = -1073741670;
  }
  else
  {
    NdisAllocatePacketPool(Status, PoolHandle, v4, v5);
    if ( !*Status )
      *((_QWORD *)*PoolHandle + 3) = retaddr;
  }
}
