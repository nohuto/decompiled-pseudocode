/*
 * XREFs of ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18011566C
 * Callers:
 *     ?OnStreamDisconnectedFromSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z @ 0x180045650 (-OnStreamDisconnectedFromSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@.c)
 *     ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x18011430C (-HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z.c)
 *     ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x180114A80 (-OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z.c)
 *     ?OnVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@UEAAJKPEBG@Z @ 0x180114C30 (-OnVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@UEAAJKPEBG@Z.c)
 *     ?RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180115504 (-RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 * Callees:
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180046B7C (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x180048A40 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004E2A0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x1800DFFB8 (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Setp@VWorkItem@CWorkFifo@@@?$shared_ptr@VWorkItem@CWorkFifo@@@std@@AEAAXPEAVWorkItem@CWorkFifo@@U?$integral_constant@_N$0A@@1@@Z @ 0x180112AE0 (--$_Setp@VWorkItem@CWorkFifo@@@-$shared_ptr@VWorkItem@CWorkFifo@@@std@@AEAAXPEAVWorkItem@CWorkFi.c)
 *     ?Initialize@CWorkFifo@@AEAAJXZ @ 0x1801144E4 (-Initialize@CWorkFifo@@AEAAJXZ.c)
 *     ?Initialize@WorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180114590 (-Initialize@WorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?push_back@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@VWorkItem@CWorkFifo@@@2@@Z @ 0x1801164B4 (-push_back@-$deque@V-$shared_ptr@VWorkItem@CWorkFifo@@@std@@V-$allocator@V-$shared_ptr@VWorkItem.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CWorkFifo::ScheduleWorkItem(wil::details **this, __int64 a2)
{
  __int64 v2; // rsi
  int v4; // eax
  int v5; // eax
  void *v6; // rdx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  _QWORD *v10; // rax
  std::_Ref_count_base *v11; // rbx
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v18; // eax
  std::_Ref_count_base *v19[2]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v20[96]; // [rsp+38h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  struct _Mtx_internal_imp_t *v22; // [rsp+A0h] [rbp+8h]

  v2 = a2;
  v22 = (struct _Mtx_internal_imp_t *)(this + 18);
  v4 = _Mtx_lock((_Mtx_t)(this + 18));
  if ( v4 )
    std::_Throw_C_error(v4);
  if ( !*((_BYTE *)this + 136) )
  {
    v5 = CWorkFifo::Initialize(this);
    v7 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        84LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\workfifo.h",
        (const char *)(unsigned int)v5);
      v8 = _Mtx_unlock(v22);
      if ( v8 )
        std::_Throw_C_error(v8);
      goto LABEL_30;
    }
    wil::details::ResetEvent(this[28], v6);
    v10 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v10 )
    {
      *v10 = 0LL;
      v10[1] = 0LL;
      *v10 = 0LL;
      v10[1] = 0LL;
    }
    *(_OWORD *)v19 = 0LL;
    std::shared_ptr<CWorkFifo::WorkItem>::_Setp<CWorkFifo::WorkItem>(v19, (__int64)v10);
    v11 = v19[0];
    if ( !v19[0] )
    {
      v7 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        89LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\workfifo.h",
        (const char *)0x8007000ELL);
      if ( v19[1] )
        std::_Ref_count_base::_Decref(v19[1]);
      v12 = _Mtx_unlock(v22);
      if ( v12 )
        std::_Throw_C_error(v12);
      goto LABEL_30;
    }
    v13 = std::function<void (void)>::function<void (void)>((__int64)v20, v2);
    v14 = CWorkFifo::WorkItem::Initialize(v11, v13);
    v7 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        91LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\workfifo.h",
        (const char *)(unsigned int)v14);
      if ( v19[1] )
        std::_Ref_count_base::_Decref(v19[1]);
      v15 = _Mtx_unlock(v22);
      if ( v15 )
        std::_Throw_C_error(v15);
      goto LABEL_30;
    }
    try
    {
      std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::push_back(this + 12, v19);
      if ( this[16] == (wil::details *)1 && !*((_BYTE *)this + 137) )
        SubmitThreadpoolWork(this[2]);
      if ( v19[1] )
        std::_Ref_count_base::_Decref(v19[1]);
    }
    catch ( std::bad_alloc )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        98LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\workfifo.h",
        (const char *)0x8007000ELL);
      if ( v19[1] )
        std::_Ref_count_base::_Decref(v19[1]);
      v18 = _Mtx_unlock(v22);
      if ( v18 )
        std::_Throw_C_error(v18);
      v7 = -2147024882;
      v2 = a2;
      goto LABEL_30;
    }
  }
  v16 = _Mtx_unlock(v22);
  if ( v16 )
    std::_Throw_C_error(v16);
  v7 = 0;
LABEL_30:
  std::_Func_class<void,>::_Tidy(v2, v9);
  return v7;
}
