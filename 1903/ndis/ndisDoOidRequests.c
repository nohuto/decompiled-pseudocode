/*
 * XREFs of ndisDoOidRequests @ 0x1C0016AC0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     NdisDereferenceWithTag @ 0x1C0002EB0 (NdisDereferenceWithTag.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisMDoOidRequest @ 0x1C0006D10 (ndisMDoOidRequest.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C00903E8 (ndisQueueStackExpansionFallbackWorkItem.c)
 *     NdisFreeRefCount @ 0x1C00C7B10 (NdisFreeRefCount.c)
 */

void __fastcall ndisDoOidRequests(_QWORD *P)
{
  __int64 v1; // rsi
  KIRQL v3; // di
  bool v4; // zf
  KIRQL v5; // al
  KIRQL v6; // bl

  v1 = P[7];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      20,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)P,
      P[7]);
  if ( *(_BYTE *)v1 == 17 )
  {
    ndisMDoOidRequest((struct _NDIS_MINIPORT_BLOCK *)v1);
    ndisDereferenceMiniport(v1, 0x47u);
  }
  else if ( *(_BYTE *)v1 == 5 )
  {
    if ( KeExpandKernelStackAndCalloutEx((PEXPAND_STACK_CALLOUT)ndisFDoOidRequestInternal, (PVOID)v1, 0x4CCCuLL, 0, 0LL) < 0 )
    {
      v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 144));
      *(_QWORD *)(v1 + 152) = KeGetCurrentThread();
      v6 = v5;
      *(_BYTE *)(v1 + 232) = 1;
      ndisQueueStackExpansionFallbackWorkItem(v1);
      *(_QWORD *)(v1 + 152) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 144), v6);
    }
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 312));
    NdisDereferenceWithTag(*(_QWORD *)(v1 + 328), 0xCu);
    v4 = (*(_WORD *)(v1 + 320))-- == 1;
    if ( v4 && !*(_BYTE *)(v1 + 323) )
    {
      NdisFreeRefCount(*(_QWORD *)(v1 + 328));
      *(_QWORD *)(v1 + 328) = 1LL;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 312), v3);
  }
  ExFreePoolWithTag(P, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      21,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      0,
      v1);
}
