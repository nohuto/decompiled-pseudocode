/*
 * XREFs of ndisMFinishClose @ 0x1C0137820
 * Callers:
 *     ndisOidRequestComplete @ 0x1C00076F0 (ndisOidRequestComplete.c)
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C118 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BC9C (ndisReferenceMiniportNoCheck.c)
 *     ndisUpdateLoopbackOpens @ 0x1C0026D44 (ndisUpdateLoopbackOpens.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C0026E38 (ndisUpdateCheckForLoopbackFlag.c)
 *     ndisMCoFreeResources @ 0x1C008763C (ndisMCoFreeResources.c)
 *     ndisDeQueueOpenOnMiniport @ 0x1C0136A1C (ndisDeQueueOpenOnMiniport.c)
 *     ndisDeQueueOpenOnProtocol @ 0x1C0138AA8 (ndisDeQueueOpenOnProtocol.c)
 */

void __fastcall ndisMFinishClose(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      12,
      (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
      a1);
  ndisReferenceMiniportNoCheck(v1, 0x32u);
  if ( (*(_DWORD *)(v1 + 120) & 0x20000) != 0 )
    ndisMCoFreeResources(a1);
  while ( 1 )
  {
    v3 = *(_QWORD **)(a1 + 496);
    if ( !v3 )
      break;
    *(_QWORD *)(a1 + 496) = *v3;
    ExFreePoolWithTag(v3, 0);
  }
  while ( 1 )
  {
    v4 = *(_QWORD **)(a1 + 504);
    if ( !v4 )
      break;
    *(_QWORD *)(a1 + 504) = *v4;
    ExFreePoolWithTag(v4, 0);
  }
  while ( 1 )
  {
    v5 = *(_QWORD **)(a1 + 512);
    if ( !v5 )
      break;
    *(_QWORD *)(a1 + 512) = *v5;
    ExFreePoolWithTag(v5, 0);
  }
  ndisDeQueueOpenOnProtocol(a1, *(_QWORD *)(a1 + 24));
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 232));
  if ( (*(_DWORD *)(a1 + 224) & 4) != 0 )
  {
    --*(_BYTE *)(v1 + 90);
    *(_DWORD *)(a1 + 224) &= ~4u;
    ndisUpdateCheckForLoopbackFlag(v1);
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 232));
  ndisDeQueueOpenOnMiniport(a1, v1);
  ndisUpdateLoopbackOpens(v1);
  *(_DWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 360) = ndisMQueuedFinishClose;
  *(_QWORD *)(a1 + 368) = a1;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 344), (WORK_QUEUE_TYPE)40);
  ndisDereferenceMiniport(v1, 0x32u);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      13,
      (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
      a1);
}
