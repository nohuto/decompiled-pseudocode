/*
 * XREFs of ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18001DFBC
 * Callers:
 *     ?SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18001D698 (-SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANG.c)
 *     ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x18001EFF4 (-SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRI.c)
 *     ?EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ @ 0x18001F08C (-EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ.c)
 * Callees:
 *     memcpy_s @ 0x18001E168 (memcpy_s.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18001E1C4 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 */

void __fastcall wil::details_abi::SubscriptionList::SubscribeUnderLock(
        wil::details_abi::SubscriptionList *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *),
        void *a4)
{
  void **v4; // rbx
  __int64 v5; // r11
  __int64 v6; // rax
  unsigned __int64 v8; // r10
  _QWORD *v9; // rcx
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v10; // rdx
  __int128 Source; // [rsp+20h] [rbp-18h] BYREF

  *a2 = 0LL;
  v4 = (void **)((char *)this + 40);
  v5 = *((_QWORD *)this + 5);
  v6 = 0LL;
  v8 = (unsigned __int64)(*((_QWORD *)this + 6) - v5) >> 4;
  if ( v8 )
  {
    v9 = (_QWORD *)*((_QWORD *)this + 5);
    while ( 1 )
    {
      v10 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)(v6 + 1);
      if ( !*v9 )
        break;
      v9 += 2;
      ++v6;
      if ( (unsigned __int64)v10 >= v8 )
        goto LABEL_2;
    }
    *(_QWORD *)&Source = a3;
    *((_QWORD *)&Source + 1) = a4;
    *(_OWORD *)(v5 + 16 * v6) = Source;
    *a2 = v10;
  }
  else
  {
LABEL_2:
    *(_QWORD *)&Source = a3;
    *((_QWORD *)&Source + 1) = a4;
    if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)v4, 0x10uLL) )
    {
      memcpy_s(v4[1], ((_BYTE *)v4[2] - (_BYTE *)v4[1]) & -(__int64)(v4[1] < v4[2]), &Source, 0x10uLL);
      v4[1] = (char *)v4[1] + 16;
      *a2 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)((unsigned __int64)((_BYTE *)v4[1] - (_BYTE *)*v4) >> 4);
    }
  }
}
