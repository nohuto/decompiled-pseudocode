/*
 * XREFs of NdisMPromoteMiniport @ 0x1C0098600
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BC9C (ndisReferenceMiniportNoCheck.c)
 *     ?NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z @ 0x1C00C38B4 (-NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z.c)
 */

NDIS_STATUS __stdcall NdisMPromoteMiniport(NDIS_HANDLE MiniportHandle)
{
  unsigned int v2; // esi
  KIRQL v3; // bp
  bool v4; // zf
  struct _WORK_QUEUE_ITEM *PoolWithTag; // r14
  __int64 v6; // r15
  __int64 v7; // rbx
  KIRQL v8; // dl
  __int64 i; // rax

  v2 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      109,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)MiniportHandle);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportHandle + 12);
  v4 = (*((_DWORD *)MiniportHandle + 30) & 0x10000000) == 0;
  *((_QWORD *)MiniportHandle + 65) = KeGetCurrentThread();
  if ( v4
    || *((NDIS_HANDLE *)MiniportHandle + 22) == MiniportHandle
    || (*((_DWORD *)MiniportHandle + 31) & 0x20000) != 0 )
  {
    *((_QWORD *)MiniportHandle + 65) = 0LL;
    v2 = -1073741637;
    KeReleaseSpinLock((PKSPIN_LOCK)MiniportHandle + 12, v3);
  }
  else
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x6977444Eu);
    if ( PoolWithTag )
    {
      v6 = *((_QWORD *)MiniportHandle + 22);
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag->WorkerRoutine = ndisMQueuedPromoteMiniport;
      PoolWithTag->Parameter = MiniportHandle;
      *((_DWORD *)MiniportHandle + 30) &= ~0x10000000u;
      ndisReferenceMiniportNoCheck((__int64)MiniportHandle, 0x21u);
      *((_QWORD *)MiniportHandle + 65) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)MiniportHandle + 12, v3);
      v7 = *((_QWORD *)MiniportHandle + 470);
      v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 392));
      for ( i = *(_QWORD *)(v7 + 16); i; i = *(_QWORD *)(i + 8) )
      {
        if ( *(_QWORD *)(i + 176) == v6 )
          *(_QWORD *)(i + 176) = MiniportHandle;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 392), v8);
      ExQueueWorkItem(PoolWithTag, (WORK_QUEUE_TYPE)40);
    }
    else
    {
      *((_QWORD *)MiniportHandle + 65) = 0LL;
      v2 = -1073741670;
      KeReleaseSpinLock((PKSPIN_LOCK)MiniportHandle + 12, v3);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      110,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)MiniportHandle);
  NdisTraceLoggingRareMiniportPath(MiniportHandle, 4097LL, v2);
  return v2;
}
