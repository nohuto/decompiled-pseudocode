/*
 * XREFs of ndisNdkPcwRemoveCounter @ 0x1C00F7F30
 * Callers:
 *     ndisNdkPcwProviderCallback @ 0x1C00F7EE0 (ndisNdkPcwProviderCallback.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ?ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z @ 0x1C00B964C (-ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2AE0 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00C2E30 (--1KLockHolder@@QEAA@XZ.c)
 *     NDIS_NDK_PCW_NUM_COUNTERS_SET_IN_MASK @ 0x1C00F7548 (NDIS_NDK_PCW_NUM_COUNTERS_SET_IN_MASK.c)
 */

__int64 __fastcall ndisNdkPcwRemoveCounter(__int64 a1)
{
  char v2; // r8
  struct _NDIS_NDK_BLOCK *v3; // rbx
  struct _NDIS_NDK_BLOCK **v4; // rsi
  __int64 v5; // rdi
  const struct _UNICODE_STRING *v6; // rdx
  unsigned __int8 v7; // al
  struct _NDIS_NDK_BLOCK *v8; // rax
  KLockHolder v10; // [rsp+20h] [rbp-28h] BYREF

  v10.m_State = Unlocked;
  v10.m_Lock = (KPushLockBase *)&ndisPcwMutex;
  v10.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v10);
  v3 = NdkPcwNdkBlockList;
  v4 = &NdkPcwNdkBlockList;
  while ( v3 )
  {
    v5 = *((_QWORD *)v3 + 1);
    v6 = *(const struct _UNICODE_STRING **)(v5 + 4448);
    if ( !v6 )
      v6 = *(const struct _UNICODE_STRING **)(v5 + 3888);
    if ( ndisWildCardStringMatch(*(const struct _UNICODE_STRING **)(a1 + 8), v6, v2)
      && (v7 = NDIS_NDK_PCW_NUM_COUNTERS_SET_IN_MASK(*(_QWORD *)a1)) != 0
      && (*((_DWORD *)v3 + 4) -= v7, *((int *)v3 + 4) <= 0) )
    {
      v8 = *(struct _NDIS_NDK_BLOCK **)v3;
      *((_DWORD *)v3 + 4) = 0;
      *v4 = v8;
      *(_QWORD *)v3 = 0LL;
      *((_QWORD *)v3 + 1) = 0LL;
      v3 = *v4;
      ndisDereferenceMiniport(v5, 0x5Du);
    }
    else
    {
      v4 = (struct _NDIS_NDK_BLOCK **)v3;
      v3 = *(struct _NDIS_NDK_BLOCK **)v3;
    }
  }
  KLockHolder::~KLockHolder(&v10);
  return 0LL;
}
