/*
 * XREFs of ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18002DF90
 * Callers:
 *     ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x18002E514 (-SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRI.c)
 *     ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18002ED80 (-WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_.c)
 * Callees:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18002CA40 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     memcpy_s_0 @ 0x180032764 (memcpy_s_0.c)
 */

void __fastcall wil::details_abi::SubscriptionList::SubscribeUnderLock(
        wil::details_abi::SubscriptionList *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *),
        void *a4)
{
  void **v4; // rbx
  _QWORD *v5; // r11
  unsigned __int64 v6; // r10
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rax
  __int128 Source; // [rsp+20h] [rbp-18h] BYREF

  *a2 = 0LL;
  v4 = (void **)((char *)this + 40);
  v5 = (_QWORD *)*((_QWORD *)this + 5);
  v6 = 0LL;
  v8 = (*((_QWORD *)this + 6) - (_QWORD)v5) >> 4;
  if ( v8 )
  {
    v9 = v5;
    while ( *v9 )
    {
      ++v6;
      v9 += 2;
      if ( v6 >= v8 )
        goto LABEL_5;
    }
    *(_QWORD *)&Source = a3;
    *((_QWORD *)&Source + 1) = a4;
    *(_OWORD *)&v5[2 * v6] = Source;
    *a2 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)(v6 + 1);
  }
  else
  {
LABEL_5:
    *(_QWORD *)&Source = a3;
    *((_QWORD *)&Source + 1) = a4;
    if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)v4, 0x10uLL) )
    {
      memcpy_s_0(v4[1], ((_BYTE *)v4[2] - (_BYTE *)v4[1]) & -(__int64)(v4[1] < v4[2]), &Source, 0x10uLL);
      v4[1] = (char *)v4[1] + 16;
      *a2 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)((unsigned __int64)((_BYTE *)v4[1] - (_BYTE *)*v4) >> 4);
    }
  }
}
