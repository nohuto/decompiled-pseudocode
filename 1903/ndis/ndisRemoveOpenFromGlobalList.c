/*
 * XREFs of ndisRemoveOpenFromGlobalList @ 0x1C009C1F0
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0093A48 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C01169C0 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     NdisOpenAdapterEx @ 0x1C012B900 (NdisOpenAdapterEx.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 */

char __fastcall ndisRemoveOpenFromGlobalList(__int64 a1)
{
  char v2; // bl
  KIRQL v3; // dl
  char *v4; // rcx
  __int64 i; // rax

  v2 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      118,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1);
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  v4 = ndisGlobalOpenList;
  for ( i = *(_QWORD *)ndisGlobalOpenList; i; i = *(_QWORD *)(i + 384) )
  {
    if ( i == a1 )
    {
      v2 = 1;
      *(_QWORD *)v4 = *(_QWORD *)(a1 + 384);
      break;
    }
    v4 = (char *)(i + 384);
  }
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      119,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1);
  return v2;
}
