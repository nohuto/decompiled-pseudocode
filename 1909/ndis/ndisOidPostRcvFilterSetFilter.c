/*
 * XREFs of ndisOidPostRcvFilterSetFilter @ 0x1C005F9D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1C005EFFC (-ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KK.c)
 *     ndisClearReceiveFilter @ 0x1C005F39C (ndisClearReceiveFilter.c)
 */

void __fastcall ndisOidPostRcvFilterSetFilter(__int64 a1)
{
  __int64 v1; // rbx
  struct _NDIS_MINIPORT_BLOCK *v3; // rdi
  __int64 v4; // rbp
  unsigned int v5; // edx
  __int64 v6; // r8
  unsigned int *v7; // r9
  KIRQL v8; // r10

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      22,
      (struct _GUID *)&WPP_618aa347117e3c7f045079f88f1cf08e_Traceguids,
      (char)v3,
      v1);
  if ( v3 && *(_DWORD *)(v1 + 48) >= 0x14u )
  {
    v4 = *(_QWORD *)(v1 + 40);
    if ( *(_DWORD *)(a1 + 40) )
    {
      v5 = *(_DWORD *)(v4 + 16);
      if ( v5 )
        ndisClearReceiveFilter(v3, v5);
    }
    else
    {
      KeAcquireSpinLockRaiseToDpc(&v3->Lock);
      v3->MiniportThread = KeGetCurrentThread();
      ndisFindReceiveFilterByFilterId(v3, *(_DWORD *)(v4 + 16), v6, v7);
      v3->MiniportThread = 0LL;
      KeReleaseSpinLock(&v3->Lock, v8);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      23,
      (struct _GUID *)&WPP_618aa347117e3c7f045079f88f1cf08e_Traceguids,
      (char)v3,
      *(_DWORD *)(a1 + 40));
}
