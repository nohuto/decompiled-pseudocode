/*
 * XREFs of NdisAllocateNetBufferListPool @ 0x1C0029450
 * Callers:
 *     ?ndisInitializePeriodicReceives@@_Y2INIT@@AHXZ @ 0x1C0144608 (-ndisInitializePeriodicReceives@@_Y2INIT@@AHXZ.c)
 *     DriverEntry @ 0x1C0144AD0 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     ?ndisPplCreatePool@@YAPEAXK_KKGP6AXPEAXPEAU_LOOKASIDE_LIST_EX@@@Z@Z @ 0x1C00296E8 (-ndisPplCreatePool@@YAPEAXK_KKGP6AXPEAXPEAU_LOOKASIDE_LIST_EX@@@Z@Z.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032358 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_PP @ 0x1C007ACAC (WPP_RECORDER_SF_PP.c)
 */

NDIS_HANDLE __stdcall NdisAllocateNetBufferListPool(
        NDIS_HANDLE NdisHandle,
        PNET_BUFFER_LIST_POOL_PARAMETERS Parameters)
{
  unsigned __int16 v2; // r9
  char v3; // si
  unsigned int v4; // ecx
  KSPIN_LOCK *v5; // rbx
  int v6; // r12d
  _UNKNOWN **v8; // rdx
  unsigned __int8 fAllocateNetBuffer; // r13
  unsigned __int16 ContextSize; // r15
  unsigned int DataSize; // esi
  int v12; // r14d
  unsigned int v13; // r14d
  KSPIN_LOCK *Pool; // rax
  KIRQL v15; // al
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *v17; // rcx
  int v19; // [rsp+20h] [rbp-48h]
  KSPIN_LOCK retaddr; // [rsp+68h] [rbp+0h]

  v3 = (char)NdisHandle;
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  v8 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v8,
      21,
      15,
      (struct _GUID *)&WPP_bf9390a7733c3604c68517bfe51cf4c5_Traceguids,
      v3);
    v8 = &WPP_RECORDER_INITIALIZED;
  }
  if ( Parameters->Header.Type != 0x80 || !Parameters->Header.Revision )
    goto LABEL_17;
  fAllocateNetBuffer = Parameters->fAllocateNetBuffer;
  ContextSize = Parameters->ContextSize;
  DataSize = Parameters->DataSize;
  v12 = fAllocateNetBuffer != 0 ? 560 : 384;
  if ( ContextSize )
  {
    if ( (ContextSize & 7) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v5;
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v8,
        21,
        16,
        (struct _GUID *)&WPP_bf9390a7733c3604c68517bfe51cf4c5_Traceguids,
        ContextSize);
      goto LABEL_16;
    }
    v12 += ContextSize + 16;
  }
  if ( DataSize )
  {
    if ( !fAllocateNetBuffer )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v5;
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v8,
        21,
        17,
        (struct _GUID *)&WPP_bf9390a7733c3604c68517bfe51cf4c5_Traceguids);
      goto LABEL_16;
    }
    if ( DataSize > 0x100000 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v5;
      WPP_RECORDER_SF_PP(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        (unsigned int)&WPP_bf9390a7733c3604c68517bfe51cf4c5_Traceguids,
        18,
        v19,
        Parameters->DataSize);
      goto LABEL_16;
    }
    v6 = (MmSizeOfMdl((PVOID)0xFFF, Parameters->DataSize) + 7) & 0xFFFFFFF8;
    v12 += DataSize + v6;
  }
  v13 = (v12 + 7) & 0xFFFFFFF8;
  Pool = (KSPIN_LOCK *)ndisPplCreatePool(
                         v4,
                         v13,
                         Parameters->PoolTag,
                         v2,
                         (void (*)(void *, struct _LOOKASIDE_LIST_EX *))ndisFreeNblToNPagedPool);
  v5 = Pool;
  if ( Pool )
  {
    *(_WORD *)Pool = 269;
    *((_WORD *)Pool + 1) = 384;
    Pool[5] = (KSPIN_LOCK)NdisHandle;
    *((_DWORD *)Pool + 14) = Parameters->PoolTag;
    *((_BYTE *)Pool + 32) = Parameters->ProtocolId;
    if ( fAllocateNetBuffer )
      *((_DWORD *)Pool + 15) |= 1u;
    if ( ContextSize )
    {
      *((_DWORD *)Pool + 15) |= 2u;
      *((_WORD *)Pool + 17) = ContextSize;
    }
    if ( DataSize )
    {
      *((_DWORD *)Pool + 15) |= 4u;
      *((_DWORD *)Pool + 22) = DataSize;
      *((_DWORD *)Pool + 23) = v6;
    }
    *((_DWORD *)Pool + 24) = v13;
    KeInitializeSpinLock(Pool + 8);
    KeInitializeSpinLock(v5 + 1);
    v5[3] = (KSPIN_LOCK)(v5 + 2);
    v5[2] = (KSPIN_LOCK)(v5 + 2);
    v15 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalNetBufferListPoolListLock);
    Flink = ndisGlobalNetBufferListPoolList.Flink;
    v17 = (_LIST_ENTRY *)(v5 + 9);
    if ( ndisGlobalNetBufferListPoolList.Flink->Blink != &ndisGlobalNetBufferListPoolList )
      __fastfail(3u);
    v17->Flink = ndisGlobalNetBufferListPoolList.Flink;
    v5[10] = (KSPIN_LOCK)&ndisGlobalNetBufferListPoolList;
    Flink->Blink = v17;
    ndisGlobalNetBufferListPoolList.Flink = (_LIST_ENTRY *)(v5 + 9);
    KeReleaseSpinLock(&ndisGlobalNetBufferListPoolListLock, v15);
    v5[6] = retaddr;
  }
LABEL_16:
  v3 = (char)NdisHandle;
LABEL_17:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v8,
      21,
      19,
      (struct _GUID *)&WPP_bf9390a7733c3604c68517bfe51cf4c5_Traceguids,
      v3,
      (char)v5);
  }
  return v5;
}
