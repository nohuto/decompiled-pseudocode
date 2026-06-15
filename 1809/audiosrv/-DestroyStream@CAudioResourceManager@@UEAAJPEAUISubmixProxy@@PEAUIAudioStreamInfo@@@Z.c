/*
 * XREFs of ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x180047460
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800161F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18003DF00 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x180049504 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18004D6E0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004E2A0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x1800E025C (--_G_WorkTask@@QEAAPEAXI@Z.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$CComHeapPtr@G@ATL@@@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAV?$CComHeapPtr@G@ATL@@@Z @ 0x1800E1CC0 (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAV-$CComHeapPtr@G.c)
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800E9CFC (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$map@V-$basic.c)
 *     ??_G_RecurringTask@@QEAAPEAXI@Z @ 0x1800EA274 (--_G_RecurringTask@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall CAudioResourceManager::DestroyStream(
        CAudioResourceManager *this,
        struct ISubmixProxy *a2,
        struct IAudioStreamInfo *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  const WCHAR *v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // r14d
  bool v11; // r15
  char v12; // r12
  int v13; // r14d
  unsigned int v14; // r13d
  __int64 v15; // rcx
  bool v16; // bl
  char v17; // al
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r15
  signed int v22; // esi
  _QWORD *v23; // rax
  _QWORD *v24; // rbx
  HANDLE ProcessHeap; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rsi
  std::_Ref_count_base *v28; // rcx
  struct _TP_WORK *ThreadpoolWork; // r14
  __int64 v30; // rdx
  __int64 (__fastcall ***v31)(_QWORD, GUID *, __int64 *); // rdx
  __int64 (__fastcall ***v33)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v34; // rax
  CAudioResourceManager *v35; // rsi
  _RecurringTask **v36; // rbx
  unsigned int v37; // edx
  _RecurringTask *v38; // rcx
  char *v39; // rax
  std::_Ref_count_base *v40; // rcx
  __int64 v41; // rax
  int v42; // eax
  const char *v43; // r9
  PTP_POOL Threadpool; // rax
  signed int LastError; // eax
  signed int v46; // eax
  signed int v47; // eax
  int v48; // [rsp+20h] [rbp-258h]
  __int64 v49; // [rsp+30h] [rbp-248h] BYREF
  __int64 (__fastcall ***v50)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-240h] BYREF
  __int64 v51; // [rsp+40h] [rbp-238h] BYREF
  __int64 v52; // [rsp+48h] [rbp-230h] BYREF
  int v53; // [rsp+50h] [rbp-228h]
  __int64 v54; // [rsp+58h] [rbp-220h] BYREF
  _BYTE *v55; // [rsp+60h] [rbp-218h]
  WINBOOL fPending; // [rsp+68h] [rbp-210h] BYREF
  int v57; // [rsp+6Ch] [rbp-20Ch] BYREF
  unsigned int v58; // [rsp+70h] [rbp-208h]
  LPVOID Context; // [rsp+78h] [rbp-200h] BYREF
  __int64 v60; // [rsp+80h] [rbp-1F8h] BYREF
  CAudioResourceManager *v61; // [rsp+88h] [rbp-1F0h]
  __int64 v62; // [rsp+90h] [rbp-1E8h] BYREF
  _QWORD *v63; // [rsp+98h] [rbp-1E0h]
  __int64 v64; // [rsp+A0h] [rbp-1D8h] BYREF
  std::_Ref_count_base *v65; // [rsp+A8h] [rbp-1D0h]
  __int64 v66; // [rsp+B0h] [rbp-1C8h] BYREF
  _DWORD v67[2]; // [rsp+B8h] [rbp-1C0h] BYREF
  __int64 v68; // [rsp+C0h] [rbp-1B8h]
  _QWORD v69[7]; // [rsp+C8h] [rbp-1B0h] BYREF
  _QWORD *v70; // [rsp+100h] [rbp-178h]
  _BYTE v71[56]; // [rsp+108h] [rbp-170h] BYREF
  _BYTE *v72; // [rsp+140h] [rbp-138h]
  __int64 v73; // [rsp+148h] [rbp-130h]
  _QWORD *v74; // [rsp+150h] [rbp-128h]
  __int64 v75; // [rsp+158h] [rbp-120h] BYREF
  char *v76; // [rsp+168h] [rbp-110h]
  _QWORD v77[8]; // [rsp+180h] [rbp-F8h] BYREF
  void *v78[2]; // [rsp+1C0h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+1D0h] [rbp-A8h]
  unsigned __int16 *v80; // [rsp+1E0h] [rbp-98h] BYREF
  int v81; // [rsp+1E8h] [rbp-90h]
  int v82; // [rsp+1ECh] [rbp-8Ch]
  void *v83; // [rsp+1F0h] [rbp-88h]
  int v84; // [rsp+1F8h] [rbp-80h]
  int v85; // [rsp+1FCh] [rbp-7Ch]
  __int64 *v86; // [rsp+200h] [rbp-78h]
  __int64 v87; // [rsp+208h] [rbp-70h]
  const WCHAR *v88; // [rsp+210h] [rbp-68h]
  int v89; // [rsp+218h] [rbp-60h]
  int v90; // [rsp+21Ch] [rbp-5Ch]
  int *v91; // [rsp+220h] [rbp-58h]
  __int64 v92; // [rsp+228h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  v73 = -2LL;
  v61 = this;
  v51 = 0LL;
  v52 = 0LL;
  if ( (*(int (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(*(_QWORD *)a3 + 32LL))(a3, &v52) >= 0 )
  {
    if ( v52 )
    {
      v51 = 0LL;
      if ( (*(int (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(*(_QWORD *)a3 + 24LL))(a3, &v51) >= 0 )
      {
        if ( v52 )
        {
          Context = 0LL;
          if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
            && fPending )
          {
            Context = qword_1801B3518;
            qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
            qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
            wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530);
            InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
          }
          v5 = *((_QWORD *)Context + 1);
          if ( *(_DWORD *)v5 > 4u )
          {
            v66 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a3 + 80LL))(a3);
            v86 = &v66;
            v87 = 8LL;
            v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 64LL))(v52);
            v7 = &word_18015F720;
            LODWORD(v8) = 0;
            if ( v6 )
            {
              v7 = (const WCHAR *)v6;
              v8 = -1LL;
              do
                ++v8;
              while ( *(_WORD *)(v6 + 2 * v8) );
            }
            v88 = v7;
            v89 = 2 * v8 + 2;
            v90 = 0;
            v57 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 40LL))(v51);
            v91 = &v57;
            v92 = 4LL;
            v67[0] = ((unsigned int)&unk_180174212 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
            v67[1] = 4;
            v68 = 0LL;
            v80 = *(unsigned __int16 **)(v5 + 8);
            v81 = *v80;
            v82 = 2;
            v83 = &unk_18017421D;
            v84 = 62;
            v85 = 1;
            EtwEventWriteTransfer(*(_QWORD *)(v5 + 32), v67, 0LL, 0LL, 5, &v80);
          }
        }
      }
    }
  }
  v49 = 0LL;
  v50 = 0LL;
  v9 = (*(__int64 (__fastcall **)(struct ISubmixProxy *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)a2 + 80LL))(
         a2,
         &v50);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v49 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v50)[25])(v50, &v49);
    v54 = 0LL;
    (**(void (__fastcall ***)(struct ISubmixProxy *, GUID *, __int64 *))a2)(
      a2,
      &GUID_1c09b051_783b_4f90_a426_dc76e6cdb825,
      &v54);
    if ( v49 )
    {
      v11 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v49 + 152LL))(v49)
         || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v49 + 120LL))(v49);
      if ( v49 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 128LL))(v49);
        goto LABEL_20;
      }
    }
    else
    {
      v11 = 0;
    }
    v12 = 0;
LABEL_20:
    if ( v54 )
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v54 + 216LL))(v54);
    else
      v13 = 0;
    v53 = v13;
    v14 = (*(__int64 (__fastcall **)(struct ISubmixProxy *, struct IAudioStreamInfo *))(*(_QWORD *)a2 + 32LL))(a2, a3);
    v58 = v14;
    v15 = v49;
    if ( v49 )
    {
      v16 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v49 + 152LL))(v49)
         || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v49 + 120LL))(v49);
      v15 = v49;
      if ( v49 )
      {
        v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 128LL))(v49);
        v15 = v49;
        goto LABEL_28;
      }
    }
    else
    {
      v16 = 0;
    }
    v17 = 0;
LABEL_28:
    if ( v11 && !v16 || v12 && v17 )
    {
      try
      {
        v34 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v50)[16])(v50);
        std::wstring::wstring(v78, v34);
        v35 = v61;
        std::map<std::wstring,std::unique_ptr<_RecurringTask>>::_Try_emplace<std::wstring,>((char *)v61 + 48, &v75, v78);
        v36 = (_RecurringTask **)(v75 + 64);
        v37 = si128.m128i_u32[2];
        if ( si128.m128i_i64[1] >= 8uLL )
          std::_Deallocate<16,0>(v78[0], (const struct std::nothrow_t *)(2 * si128.m128i_i64[1] + 2));
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        LOWORD(v78[0]) = 0;
        v38 = *v36;
        *v36 = 0LL;
        if ( v38 )
          _RecurringTask::`scalar deleting destructor'(v38, v37);
        v62 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v50)[16])(v50);
        std::make_shared<std::wstring,ATL::CComHeapPtr<unsigned short> &>(&v64, &v62);
        v61 = (CAudioResourceManager *)v77;
        v39 = (char *)v35 - 8;
        v76 = (char *)v35 - 8;
        v40 = v65;
        if ( v65 )
        {
          _InterlockedIncrement((volatile signed __int32 *)v65 + 2);
          v40 = v65;
          v39 = v76;
        }
        v77[0] = off_18014E2B8;
        v77[1] = v39;
        v77[2] = v64;
        v77[3] = v40;
        v77[7] = v77;
        v41 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
        v42 = CSerialWorkQueue::QueueRecurringItem(v41, 10000LL, 0LL, v77, v36);
        if ( v42 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x663,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v42);
        if ( v65 )
          std::_Ref_count_base::_Decref(v65);
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x665,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          v43);
        v13 = v53;
        v14 = v58;
      }
      v15 = v49;
    }
    if ( !v13 )
      goto LABEL_68;
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v54 + 216LL))(v54) )
    {
LABEL_67:
      v15 = v49;
LABEL_68:
      v30 = v54;
      if ( v54 )
      {
        v54 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
        v15 = v49;
      }
      v31 = v50;
      if ( v50 )
      {
        v50 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v31)[2])(v31);
        v15 = v49;
      }
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      if ( v51 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
      if ( v52 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
      return v14;
    }
    v60 = 0LL;
    if ( (int)Microsoft::WRL::AsWeak<IStreamGroupProxy>(v50, &v60) < 0 )
    {
LABEL_65:
      if ( v60 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
      goto LABEL_67;
    }
    v63 = v69;
    v18 = v60;
    if ( v60 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 8LL))(v60);
    v69[0] = off_18014BD50;
    v69[1] = v18;
    v70 = v69;
    v61 = (CAudioResourceManager *)v69;
    v19 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
    v21 = v19;
    v22 = 0;
    if ( *(_BYTE *)(v19 + 80) )
    {
LABEL_59:
      if ( v70 )
      {
        if ( v70 == v69 )
          v20 = 0LL;
        else
          LOBYTE(v20) = 1;
        (*(void (__fastcall **)(_QWORD *, __int64))(*v70 + 32LL))(v70, v20);
        v70 = 0LL;
      }
      if ( v22 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x678,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v22);
      goto LABEL_65;
    }
    if ( !*(_QWORD *)v19 )
    {
      Threadpool = CreateThreadpool(0LL);
      *(_QWORD *)v21 = Threadpool;
      if ( !Threadpool )
      {
        LastError = GetLastError();
        v22 = LastError;
        if ( LastError > 0 )
          v22 = (unsigned __int16)LastError | 0x80070000;
        if ( v22 < 0 )
          goto LABEL_59;
      }
      if ( !SetThreadpoolThreadMinimum(*(PTP_POOL *)v21, 1u) )
      {
        v46 = GetLastError();
        v22 = v46;
        if ( v46 > 0 )
          v22 = (unsigned __int16)v46 | 0x80070000;
        if ( v22 < 0 )
          goto LABEL_59;
      }
      SetThreadpoolThreadMaximum(*(PTP_POOL *)v21, 1u);
      *(_QWORD *)(v21 + 16) = *(_QWORD *)v21;
    }
    v23 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v24 = v23;
    v55 = v23;
    if ( v23 )
    {
      *v23 = 0LL;
      v23[1] = 0LL;
      v23[2] = 0LL;
    }
    else
    {
      v24 = 0LL;
    }
    v74 = v24;
    if ( v24 )
    {
      v55 = v71;
      v72 = 0LL;
      if ( v70 )
        v72 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))*v70)(v70, v71);
      v55 = v71;
      v24[2] = v21;
      ProcessHeap = GetProcessHeap();
      v26 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
      v27 = v26;
      v63 = v26;
      if ( v26 )
      {
        *((_DWORD *)v26 + 2) = 1;
        *((_DWORD *)v26 + 3) = 1;
        *v26 = &std::_Ref_count_obj<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>::`vftable';
        v62 = (__int64)(v26 + 2);
        v26[9] = 0LL;
        if ( v72 )
          v26[9] = (**(__int64 (__fastcall ***)(_BYTE *, __int64))v72)(v72, (__int64)(v26 + 2));
      }
      else
      {
        v27 = 0LL;
      }
      *v24 = v27 + 2;
      v28 = (std::_Ref_count_base *)v24[1];
      v24[1] = v27;
      if ( v28 )
        std::_Ref_count_base::_Decref(v28);
      if ( *v24 )
        v22 = 0;
      else
        v22 = -2147024882;
      if ( v72 )
      {
        if ( v72 == v71 )
          v20 = 0LL;
        else
          LOBYTE(v20) = 1;
        (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v72 + 32LL))(v72, v20);
        v72 = 0LL;
      }
      if ( v22 < 0 )
        goto LABEL_57;
      ThreadpoolWork = CreateThreadpoolWork(
                         (PTP_WORK_CALLBACK)CSerialWorkQueue::WorkCallback,
                         v24,
                         (PTP_CALLBACK_ENVIRON)(v21 + 8));
      if ( ThreadpoolWork )
      {
        v22 = 0;
      }
      else
      {
        v47 = GetLastError();
        v22 = v47;
        if ( v47 > 0 )
          v22 = (unsigned __int16)v47 | 0x80070000;
        if ( v22 < 0 )
          goto LABEL_57;
      }
      v24 = 0LL;
      SubmitThreadpoolWork(ThreadpoolWork);
    }
    else
    {
      v22 = -2147024882;
    }
LABEL_57:
    if ( v24 )
      _WorkTask::`scalar deleting destructor'((_WorkTask *)v24, v20);
    goto LABEL_59;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x642,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v9,
    v48);
  v33 = v50;
  if ( v50 )
  {
    v50 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v33)[2])(v33);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v49);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v51);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v52);
  return v10;
}
