/*
 * XREFs of ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18010407C
 * Callers:
 *     ?EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ @ 0x1801010B8 (-EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ.c)
 *     ?SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180103F40 (-SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANG.c)
 *     ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x180103FE4 (-SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRI.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18004A290 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 */

void __fastcall wil::details_abi::SubscriptionList::SubscribeUnderLock(
        wil::details_abi::SubscriptionList *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *),
        void *a4)
{
  wil::details_abi::heap_buffer *v4; // rbx
  __int64 v5; // r11
  __int64 v6; // rax
  unsigned __int64 v8; // r10
  _QWORD *v9; // rcx
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v10; // rdx
  __int128 Source; // [rsp+20h] [rbp-18h] BYREF

  *a2 = 0LL;
  v4 = (wil::details_abi::SubscriptionList *)((char *)this + 40);
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
        goto LABEL_5;
    }
    *(_QWORD *)&Source = a3;
    *((_QWORD *)&Source + 1) = a4;
    *(_OWORD *)(v5 + 16 * v6) = Source;
    *a2 = v10;
  }
  else
  {
LABEL_5:
    *(_QWORD *)&Source = a3;
    *((_QWORD *)&Source + 1) = a4;
    if ( wil::details_abi::heap_buffer::push_back(v4, &Source, 0x10uLL) )
      *a2 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)((*((_QWORD *)v4 + 1) - *(_QWORD *)v4) >> 4);
  }
}
