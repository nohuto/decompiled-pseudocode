/*
 * XREFs of NdisFreeNetBufferListPool @ 0x1C0021AA0
 * Callers:
 *     ?ndisUnloadPeriodicReceives@@_Y2INIT@@AXXZ @ 0x1C0147FA0 (-ndisUnloadPeriodicReceives@@_Y2INIT@@AXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ?ndisPplDestroyPool@@YAXPEAXK@Z @ 0x1C0021B8C (-ndisPplDestroyPool@@YAXPEAXK@Z.c)
 */

void __stdcall NdisFreeNetBufferListPool(NDIS_HANDLE PoolHandle)
{
  KIRQL v2; // al
  NDIS_HANDLE *v3; // r9
  NDIS_HANDLE *v4; // r8
  unsigned int v5; // edx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      21,
      20,
      (struct _GUID *)&WPP_bf9390a7733c3604c68517bfe51cf4c5_Traceguids,
      (char)PoolHandle);
  if ( PoolHandle )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalNetBufferListPoolListLock);
    v3 = (NDIS_HANDLE *)*((_QWORD *)PoolHandle + 9);
    if ( v3[1] != (char *)PoolHandle + 72
      || (v4 = (NDIS_HANDLE *)*((_QWORD *)PoolHandle + 10), *v4 != (char *)PoolHandle + 72) )
    {
      __fastfail(3u);
    }
    *v4 = v3;
    v3[1] = v4;
    KeReleaseSpinLock(&ndisGlobalNetBufferListPoolListLock, v2);
    ndisPplDestroyPool(PoolHandle, v5);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        21,
        21,
        (struct _GUID *)&WPP_bf9390a7733c3604c68517bfe51cf4c5_Traceguids,
        (char)PoolHandle);
  }
}
