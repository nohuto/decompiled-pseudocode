/*
 * XREFs of ndisNdkPcwMiniportCleanup @ 0x1C00F7E38
 * Callers:
 *     ndisMCommonHaltMiniport @ 0x1C0115B88 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2AE0 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00C2E30 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2F4C (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall ndisNdkPcwMiniportCleanup(__int64 a1)
{
  struct _NDIS_NDK_BLOCK *v2; // rax
  struct _NDIS_NDK_BLOCK **v3; // rdx
  struct _NDIS_NDK_BLOCK *v4; // rcx
  __int64 v5; // rbx
  KLockHolder v6; // [rsp+20h] [rbp-28h] BYREF

  v6.m_State = Unlocked;
  v6.m_Lock = (KPushLockBase *)&ndisPcwMutex;
  v6.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v6);
  if ( *(_DWORD *)(a1 + 16) )
  {
    v2 = NdkPcwNdkBlockList;
    v3 = &NdkPcwNdkBlockList;
    if ( NdkPcwNdkBlockList )
    {
      while ( 1 )
      {
        v4 = *(struct _NDIS_NDK_BLOCK **)v2;
        if ( v2 == (struct _NDIS_NDK_BLOCK *)a1 )
          break;
        v3 = (struct _NDIS_NDK_BLOCK **)v2;
        v2 = *(struct _NDIS_NDK_BLOCK **)v2;
        if ( !v4 )
          goto LABEL_7;
      }
      *v3 = v4;
      *(_QWORD *)v2 = 0LL;
    }
LABEL_7:
    if ( v2 == (struct _NDIS_NDK_BLOCK *)a1 )
    {
      v5 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_DWORD *)(a1 + 16) = 0;
      KLockHolder::ReleaseExclusive(&v6);
      ndisDereferenceMiniport(v5, 0x5Du);
    }
  }
  KLockHolder::~KLockHolder(&v6);
}
