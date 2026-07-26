/*
 * XREFs of ?ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1C00B92AC
 * Callers:
 *     ?ndisCounterSetProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C00B8FA0 (-ndisCounterSetProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z.c)
 * Callees:
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C0012CE4 (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2AE0 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00C2E30 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall ndisPcwAddCounter(unsigned int a1, __int64 a2)
{
  int v4; // ebp
  int ReferencesForConsumer; // edi
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rbx
  KLockHolder v9; // [rsp+20h] [rbp-28h] BYREF

  v4 = **(unsigned __int16 **)(a2 + 8);
  ReferencesForConsumer = 0;
  if ( (unsigned int)(v4 + 56) >= 0x38 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v4 + 56), 0x7763444Eu);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      ReferencesForConsumer = ndisPcwGetReferencesForConsumer(a1, a2, (__int64)PoolWithTag);
      if ( ReferencesForConsumer < 0 )
      {
        ExFreePoolWithTag(v7, 0);
      }
      else
      {
        *((_WORD *)v7 + 13) = v4;
        v7[4] = v7 + 7;
        *((_WORD *)v7 + 12) = v4;
        memmove(v7 + 7, *(const void **)(*(_QWORD *)(a2 + 8) + 8LL), (unsigned __int16)v4);
        v9.m_State = Unlocked;
        *((_DWORD *)v7 + 2) = a1;
        v7[2] = *(_QWORD *)a2;
        v9.m_Lock = (KPushLockBase *)&ndisPcwMutex;
        v9.m_Region.m_Entered = 0;
        KLockHolder::AcquireExclusive(&v9);
        *v7 = ndisPcwConsumerList;
        ndisPcwConsumerList = v7;
        KLockHolder::~KLockHolder(&v9);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)ReferencesForConsumer;
}
