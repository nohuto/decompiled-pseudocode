/*
 * XREFs of ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180005DAC
 * Callers:
 *     ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180006DC0 (-WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_.c)
 * Callees:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180004670 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     memset_0 @ 0x180043A5E (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x180043B2A (_invalid_parameter_noinfo.c)
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
  _OWORD *v11; // rcx
  size_t v12; // r8
  __int64 v13; // rcx
  __int128 v14; // [rsp+20h] [rbp-18h]
  __int128 v15; // [rsp+20h] [rbp-18h]

  *a2 = 0LL;
  v4 = (wil::details_abi::SubscriptionList *)((char *)this + 40);
  v5 = *((_QWORD *)this + 5);
  v6 = 0LL;
  v8 = (unsigned __int64)(*((_QWORD *)this + 6) - v5) >> 4;
  if ( !v8 )
  {
LABEL_5:
    *(_QWORD *)&v14 = a3;
    *((_QWORD *)&v14 + 1) = a4;
    if ( !wil::details_abi::heap_buffer::ensure(v4, 0x10uLL) )
      return;
    v11 = (_OWORD *)*((_QWORD *)v4 + 1);
    v12 = (*((_QWORD *)v4 + 2) - (_QWORD)v11) & -(__int64)((unsigned __int64)v11 < *((_QWORD *)v4 + 2));
    if ( v11 )
    {
      if ( v12 >= 0x10 )
      {
        *v11 = v14;
LABEL_13:
        *((_QWORD *)v4 + 1) += 16LL;
        *a2 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)((*((_QWORD *)v4 + 1) - *(_QWORD *)v4) >> 4);
        return;
      }
      memset_0(v11, 0, v12);
      *(_DWORD *)_o__errno(v13) = 34;
    }
    else
    {
      *(_DWORD *)_o__errno(0LL) = 22;
    }
    invalid_parameter_noinfo();
    goto LABEL_13;
  }
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
  *(_QWORD *)&v15 = a3;
  *((_QWORD *)&v15 + 1) = a4;
  *(_OWORD *)(v5 + 16 * v6) = v15;
  *a2 = v10;
}
