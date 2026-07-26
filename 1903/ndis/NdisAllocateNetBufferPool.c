/*
 * XREFs of NdisAllocateNetBufferPool @ 0x1C003D110
 * Callers:
 *     DriverEntry @ 0x1C0144AD0 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisPplCreatePool@@YAPEAXK_KKGP6AXPEAXPEAU_LOOKASIDE_LIST_EX@@@Z@Z @ 0x1C00296F8 (-ndisPplCreatePool@@YAPEAXK_KKGP6AXPEAXPEAU_LOOKASIDE_LIST_EX@@@Z@Z.c)
 *     WPP_RECORDER_SF_PP @ 0x1C007AADC (WPP_RECORDER_SF_PP.c)
 */

NDIS_HANDLE __stdcall NdisAllocateNetBufferPool(NDIS_HANDLE NdisHandle, PNET_BUFFER_POOL_PARAMETERS Parameters)
{
  int v2; // r8d
  __int64 v3; // r9
  PNET_BUFFER_POOL_PARAMETERS v4; // rdi
  char *v6; // rbx
  unsigned int DataSize; // esi
  int v8; // eax
  unsigned int v9; // esi
  char *Pool; // rax
  KIRQL v11; // al
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *v13; // rcx
  int v15; // [rsp+20h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v4 = Parameters;
  v6 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(Parameters) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)Parameters,
      21,
      10,
      (struct _GUID *)&WPP_bf9390a7733c3604c68517bfe51cf4c5_Traceguids,
      (char)NdisHandle);
  }
  if ( v4->Header.Type != 0x80 || !v4->Header.Revision )
    goto LABEL_11;
  DataSize = v4->DataSize;
  v8 = 176;
  if ( !DataSize )
    goto LABEL_6;
  if ( DataSize <= 0x100000 )
  {
    v8 = DataSize + ((MmSizeOfMdl((PVOID)0xFFF, v4->DataSize) + 7) & 0xFFFFFFF8) + 176;
LABEL_6:
    v9 = (v8 + 7) & 0xFFFFFFF8;
    Pool = ndisPplCreatePool(
             (__int64)NdisHandle,
             v9,
             v4->PoolTag,
             v3,
             (void (*)(void *, struct _LOOKASIDE_LIST_EX *))ndisFreeToNPagedPool);
    v6 = Pool;
    if ( Pool )
    {
      *(_WORD *)Pool = 268;
      *((_WORD *)Pool + 1) = 384;
      *((_QWORD *)Pool + 5) = NdisHandle;
      *((_DWORD *)Pool + 14) = v4->PoolTag;
      if ( v4->DataSize )
      {
        *((_DWORD *)Pool + 22) |= 1u;
        *((_DWORD *)Pool + 23) = v4->DataSize;
        *((_DWORD *)Pool + 24) = (MmSizeOfMdl((PVOID)0xFFF, v4->DataSize) + 7) & 0xFFFFFFF8;
      }
      *((_DWORD *)v6 + 8) = v9;
      KeInitializeSpinLock((PKSPIN_LOCK)v6 + 8);
      KeInitializeSpinLock((PKSPIN_LOCK)v6 + 1);
      *((_QWORD *)v6 + 3) = v6 + 16;
      *((_QWORD *)v6 + 2) = v6 + 16;
      v11 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalNetBufferPoolListLock);
      Flink = ndisGlobalNetBufferPoolList.Flink;
      v13 = (_LIST_ENTRY *)(v6 + 72);
      if ( ndisGlobalNetBufferPoolList.Flink->Blink != &ndisGlobalNetBufferPoolList )
        __fastfail(3u);
      v13->Flink = ndisGlobalNetBufferPoolList.Flink;
      *((_QWORD *)v6 + 10) = &ndisGlobalNetBufferPoolList;
      Flink->Blink = v13;
      ndisGlobalNetBufferPoolList.Flink = (_LIST_ENTRY *)(v6 + 72);
      KeReleaseSpinLock(&ndisGlobalNetBufferPoolListLock, v11);
      *((_QWORD *)v6 + 6) = retaddr;
    }
    goto LABEL_11;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return v6;
  WPP_RECORDER_SF_PP(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)Parameters, v2, 11, v15, v4->DataSize);
LABEL_11:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(Parameters) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)Parameters,
      21,
      12,
      (struct _GUID *)&WPP_bf9390a7733c3604c68517bfe51cf4c5_Traceguids,
      (char)NdisHandle,
      (char)v6);
  }
  return v6;
}
