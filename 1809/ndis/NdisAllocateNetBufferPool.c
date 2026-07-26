/*
 * XREFs of NdisAllocateNetBufferPool @ 0x1C001E6D0
 * Callers:
 *     DriverEntry @ 0x1C0127870 (DriverEntry.c)
 * Callees:
 *     ndisPplCreatePool @ 0x1C0009564 (ndisPplCreatePool.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_PP @ 0x1C004DCFC (WPP_SF_PP.c)
 */

NDIS_HANDLE __stdcall NdisAllocateNetBufferPool(NDIS_HANDLE NdisHandle, PNET_BUFFER_POOL_PARAMETERS Parameters)
{
  __int64 v2; // r9
  char *v5; // rbx
  unsigned int DataSize; // esi
  int v7; // eax
  unsigned int v8; // esi
  char *Pool; // rax
  KIRQL v10; // al
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *v12; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v5 = 0LL;
  if ( (unsigned __int8)byte_1C00A0264 >= 4u )
    WPP_SF_q(10LL, &WPP_748d7350885338d9dac69fdf9ab8d5cd_Traceguids, NdisHandle);
  if ( Parameters->Header.Type == 0x80 && Parameters->Header.Revision )
  {
    DataSize = Parameters->DataSize;
    v7 = 176;
    if ( !DataSize )
      goto LABEL_6;
    if ( DataSize <= 0x100000 )
    {
      v7 = DataSize + ((MmSizeOfMdl((PVOID)0xFFF, Parameters->DataSize) + 7) & 0xFFFFFFF8) + 176;
LABEL_6:
      v8 = (v7 + 7) & 0xFFFFFFF8;
      Pool = ndisPplCreatePool(
               (__int64)NdisHandle,
               v8,
               Parameters->PoolTag,
               v2,
               (FREE_FUNCTION_EX *)ndisFreeToNPagedPool);
      v5 = Pool;
      if ( Pool )
      {
        *(_WORD *)Pool = 268;
        *((_WORD *)Pool + 1) = 384;
        *((_QWORD *)Pool + 5) = NdisHandle;
        *((_DWORD *)Pool + 14) = Parameters->PoolTag;
        if ( Parameters->DataSize )
        {
          *((_DWORD *)Pool + 22) |= 1u;
          *((_DWORD *)Pool + 23) = Parameters->DataSize;
          *((_DWORD *)Pool + 24) = (MmSizeOfMdl((PVOID)0xFFF, Parameters->DataSize) + 7) & 0xFFFFFFF8;
        }
        *((_DWORD *)v5 + 8) = v8;
        KeInitializeSpinLock((PKSPIN_LOCK)v5 + 8);
        KeInitializeSpinLock((PKSPIN_LOCK)v5 + 1);
        *((_QWORD *)v5 + 3) = v5 + 16;
        *((_QWORD *)v5 + 2) = v5 + 16;
        v10 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalNetBufferPoolListLock);
        Flink = ndisGlobalNetBufferPoolList.Flink;
        v12 = (_LIST_ENTRY *)(v5 + 72);
        if ( ndisGlobalNetBufferPoolList.Flink->Blink != &ndisGlobalNetBufferPoolList )
          __fastfail(3u);
        v12->Flink = ndisGlobalNetBufferPoolList.Flink;
        *((_QWORD *)v5 + 10) = &ndisGlobalNetBufferPoolList;
        Flink->Blink = v12;
        ndisGlobalNetBufferPoolList.Flink = (_LIST_ENTRY *)(v5 + 72);
        KeReleaseSpinLock(&ndisGlobalNetBufferPoolListLock, v10);
        *((_QWORD *)v5 + 6) = retaddr;
      }
      goto LABEL_11;
    }
    if ( (unsigned __int8)byte_1C00A0264 >= 2u )
      WPP_SF_PP(11LL, Parameters, Parameters->DataSize);
  }
LABEL_11:
  if ( (unsigned __int8)byte_1C00A0264 >= 4u )
    WPP_SF_qq(12LL, &WPP_748d7350885338d9dac69fdf9ab8d5cd_Traceguids, NdisHandle, v5);
  return v5;
}
