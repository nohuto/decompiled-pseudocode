/*
 * XREFs of NdisFSetAttributes @ 0x1C003D7A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisSetupLwfMiniportHandlers @ 0x1C00240A4 (ndisSetupLwfMiniportHandlers.c)
 */

NDIS_STATUS __stdcall NdisFSetAttributes(
        NDIS_HANDLE NdisFilterHandle,
        NDIS_HANDLE FilterModuleContext,
        PNDIS_FILTER_ATTRIBUTES FilterAttributes)
{
  struct _NDIS_MINIPORT_BLOCK *v3; // rbp
  NDIS_HANDLE v4; // rbx
  KIRQL v6; // al
  KIRQL v7; // bl
  int v8; // edx

  v3 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisFilterHandle + 4);
  v4 = FilterModuleContext;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(FilterModuleContext) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)FilterModuleContext,
      1,
      31,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      (char)NdisFilterHandle);
  }
  *((_QWORD *)NdisFilterHandle + 3) = v4;
  v6 = KeAcquireSpinLockRaiseToDpc(&v3->Lock);
  v3->MiniportThread = KeGetCurrentThread();
  v7 = v6;
  ndisSetupLwfMiniportHandlers(v3);
  v3->MiniportThread = 0LL;
  KeReleaseSpinLock(&v3->Lock, v7);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      1,
      32,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      (char)NdisFilterHandle);
  }
  return 0;
}
