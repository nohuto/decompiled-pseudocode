/*
 * XREFs of ndisNdkPcwCollectData @ 0x1C010037C
 * Callers:
 *     ndisNdkPcwProviderCallback @ 0x1C0100340 (ndisNdkPcwProviderCallback.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FCD0C (--1KLockHolder@@QEAA@XZ.c)
 *     ndisNdkPcwCollectMiniportStats @ 0x1C010041C (ndisNdkPcwCollectMiniportStats.c)
 */

__int64 __fastcall ndisNdkPcwCollectData(__int64 a1)
{
  int v2; // edi
  struct _NDIS_NDK_BLOCK *v3; // rbx
  int v4; // eax
  KLockHolder v6; // [rsp+20h] [rbp-28h] BYREF

  v6.m_Lock = (KPushLockBase *)&ndisPcwMutex;
  v2 = -1073741823;
  KeEnterCriticalRegion();
  v6.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(&ndisPcwMutex, 0LL);
  v3 = NdkPcwNdkBlockList;
  v6.m_State = Exclusive;
  while ( v3 )
  {
    v4 = *(_DWORD *)(a1 + 16);
    if ( v4 == -1 )
    {
      v2 = ndisNdkPcwCollectMiniportStats(v3, *(_QWORD *)(a1 + 24));
      if ( v2 < 0 )
        break;
    }
    else if ( v4 == *((_DWORD *)v3 + 5) )
    {
      v2 = ndisNdkPcwCollectMiniportStats(v3, *(_QWORD *)(a1 + 24));
      break;
    }
    v3 = *(struct _NDIS_NDK_BLOCK **)v3;
  }
  KLockHolder::~KLockHolder(&v6);
  return (unsigned int)v2;
}
