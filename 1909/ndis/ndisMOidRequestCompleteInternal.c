/*
 * XREFs of ndisMOidRequestCompleteInternal @ 0x1C001DCEC
 * Callers:
 *     ?ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C001DDE4 (-ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@.c)
 *     ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0068648 (-ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ndisCompleteLegacyRequest @ 0x1C006A4C8 (ndisCompleteLegacyRequest.c)
 *     ndisMAbortRequests @ 0x1C0099BD4 (ndisMAbortRequests.c)
 *     ndisCancelDequeuedDirectOidRequests @ 0x1C00B7FFC (ndisCancelDequeuedDirectOidRequests.c)
 *     ndisReplayDirectOids @ 0x1C00B8C18 (ndisReplayDirectOids.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisOidRequestComplete @ 0x1C00076F0 (ndisOidRequestComplete.c)
 *     ndisQueueRequestWorkItem @ 0x1C001A984 (ndisQueueRequestWorkItem.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BC9C (ndisReferenceMiniportNoCheck.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C006A314 (ndisCancelOidRequestOnMiniport.c)
 */

void __fastcall ndisMOidRequestCompleteInternal(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // r14d
  struct _KEVENT *v5; // rsi
  int v6; // r14d
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  KIRQL v12; // dl
  KIRQL v13; // al
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  __int128 v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+38h] [rbp-20h]
  __int64 v17; // [rsp+40h] [rbp-18h]
  int v18; // [rsp+48h] [rbp-10h]
  int v19; // [rsp+4Ch] [rbp-Ch]

  v4 = *(_DWORD *)(a2 + 88);
  v5 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v6 = v4 & 0x200000;
  v17 = a2;
  v18 = a3;
  v14 = a1;
  v19 = (a4 != 0) | 2;
  ndisReferenceMiniportNoCheck(a1, 0x4Bu);
  if ( a4 )
  {
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_DWORD *)(a1 + 4420) &= ~1u;
    *(_QWORD *)(a1 + 2216) = 0LL;
    *(_QWORD *)(a1 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v13);
  }
  ndisOidRequestComplete((__int64)&v14, v9, v10, v11);
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  if ( v6 )
  {
    if ( (*(_DWORD *)(a1 + 124) & 0x20000) != 0 && !*(_DWORD *)(a1 + 4248) )
    {
      v5 = *(struct _KEVENT **)(a1 + 4256);
      *(_QWORD *)(a1 + 4256) = 0LL;
    }
  }
  else if ( *(_QWORD *)(a1 + 2192) == a1 + 2192 )
  {
    if ( (*(_DWORD *)(a1 + 124) & 0x20000) != 0 )
    {
      v5 = *(struct _KEVENT **)(a1 + 1616);
      *(_QWORD *)(a1 + 1616) = 0LL;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v12);
    if ( (unsigned int)ndisQueueRequestWorkItem((char *)a1, 0LL, 17) != 259 )
      ndisCancelOidRequestOnMiniport(a1);
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v12);
  if ( v5 )
    KeSetEvent(v5, 0, 0);
  ndisDereferenceMiniport(a1, 0x4Bu);
}
