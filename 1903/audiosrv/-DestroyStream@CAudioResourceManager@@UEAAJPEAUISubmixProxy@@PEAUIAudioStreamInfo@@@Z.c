/*
 * XREFs of ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18004A840
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180009D00 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18002FE10 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A220 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003EA64 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180043864 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x18004EC1C (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006430C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800CA630 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x1800DD5AC (--_G_WorkTask@@QEAAPEAXI@Z.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$CComHeapPtr@G@ATL@@@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAV?$CComHeapPtr@G@ATL@@@Z @ 0x1800ED31C (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAV-$CComHeapPtr@G.c)
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800F4DC0 (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$map@V-$basic.c)
 *     ??_G_RecurringTask@@QEAAPEAXI@Z @ 0x1800F6078 (--_G_RecurringTask@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall CAudioResourceManager::DestroyStream(
        CAudioResourceManager *this,
        struct ISubmixProxy *a2,
        struct IAudioStreamInfo *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  void *v7; // rdx
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
  _WORD *v33; // rax
  CAudioResourceManager *v34; // rsi
  _RecurringTask **v35; // rbx
  unsigned int v36; // edx
  struct std::nothrow_t *v37; // rdx
  void *v38; // rcx
  _RecurringTask *v39; // rcx
  char *v40; // rax
  std::_Ref_count_base *v41; // rcx
  __int64 v42; // rax
  int v43; // eax
  const char *v44; // r9
  PTP_POOL Threadpool; // rax
  signed int LastError; // eax
  signed int v47; // eax
  signed int v48; // eax
  __int64 v49; // [rsp+30h] [rbp-258h] BYREF
  __int64 (__fastcall ***v50)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-250h] BYREF
  __int64 v51; // [rsp+40h] [rbp-248h] BYREF
  __int64 v52; // [rsp+48h] [rbp-240h] BYREF
  int v53; // [rsp+50h] [rbp-238h]
  unsigned int v54; // [rsp+54h] [rbp-234h]
  __int64 v55; // [rsp+58h] [rbp-230h] BYREF
  _BYTE *v56; // [rsp+60h] [rbp-228h]
  WINBOOL fPending; // [rsp+68h] [rbp-220h] BYREF
  int v58; // [rsp+6Ch] [rbp-21Ch] BYREF
  LPVOID Context; // [rsp+70h] [rbp-218h] BYREF
  __int64 v60; // [rsp+78h] [rbp-210h] BYREF
  CAudioResourceManager *v61; // [rsp+80h] [rbp-208h]
  struct std::nothrow_t *v62; // [rsp+88h] [rbp-200h] BYREF
  void *v63; // [rsp+90h] [rbp-1F8h] BYREF
  __int64 v64; // [rsp+98h] [rbp-1F0h] BYREF
  _QWORD *v65; // [rsp+A0h] [rbp-1E8h]
  __int64 v66; // [rsp+A8h] [rbp-1E0h] BYREF
  std::_Ref_count_base *v67; // [rsp+B0h] [rbp-1D8h]
  __int64 v68; // [rsp+B8h] [rbp-1D0h] BYREF
  _DWORD v69[2]; // [rsp+C0h] [rbp-1C8h] BYREF
  __int64 v70; // [rsp+C8h] [rbp-1C0h]
  _QWORD v71[7]; // [rsp+D0h] [rbp-1B8h] BYREF
  _QWORD *v72; // [rsp+108h] [rbp-180h]
  _BYTE v73[56]; // [rsp+110h] [rbp-178h] BYREF
  _BYTE *v74; // [rsp+148h] [rbp-140h]
  __int64 v75; // [rsp+150h] [rbp-138h]
  _QWORD *v76; // [rsp+158h] [rbp-130h]
  __int64 v77; // [rsp+160h] [rbp-128h] BYREF
  char *v78; // [rsp+170h] [rbp-118h]
  _QWORD v79[8]; // [rsp+188h] [rbp-100h] BYREF
  _QWORD v80[2]; // [rsp+1C8h] [rbp-C0h] BYREF
  __m128i si128; // [rsp+1D8h] [rbp-B0h]
  unsigned __int16 *v82; // [rsp+1F0h] [rbp-98h] BYREF
  int v83; // [rsp+1F8h] [rbp-90h]
  int v84; // [rsp+1FCh] [rbp-8Ch]
  void *v85; // [rsp+200h] [rbp-88h]
  int v86; // [rsp+208h] [rbp-80h]
  int v87; // [rsp+20Ch] [rbp-7Ch]
  __int64 *v88; // [rsp+210h] [rbp-78h]
  __int64 v89; // [rsp+218h] [rbp-70h]
  void *v90; // [rsp+220h] [rbp-68h]
  int v91; // [rsp+228h] [rbp-60h]
  int v92; // [rsp+22Ch] [rbp-5Ch]
  int *v93; // [rsp+230h] [rbp-58h]
  __int64 v94; // [rsp+238h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+0h]

  v75 = -2LL;
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
            Context = &qword_1801B8588;
            qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
            qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
            wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0);
            InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
          }
          v5 = *((_QWORD *)Context + 1);
          if ( *(_DWORD *)v5 > 4u )
          {
            v68 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a3 + 80LL))(a3);
            v88 = &v68;
            v89 = 8LL;
            v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 64LL))(v52);
            v7 = &unk_180162EC4;
            LODWORD(v8) = 0;
            if ( v6 )
            {
              v7 = (void *)v6;
              v8 = -1LL;
              do
                ++v8;
              while ( *(_WORD *)(v6 + 2 * v8) );
            }
            v90 = v7;
            v91 = 2 * v8 + 2;
            v92 = 0;
            v58 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 40LL))(v51);
            v93 = &v58;
            v94 = 4LL;
            v69[0] = 184549376;
            v69[1] = 4;
            v70 = 0LL;
            v82 = *(unsigned __int16 **)(v5 + 8);
            v83 = *v82;
            v84 = 2;
            v85 = &unk_1801791F5;
            v86 = 62;
            v87 = 1;
            v54 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
            EtwEventWriteTransfer(*(_QWORD *)(v5 + 32), v69, 0LL, 0LL, 5, &v82);
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
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x66A,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v50);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v49);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v51);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v52);
    return v10;
  }
  v49 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v50)[25])(v50, &v49);
  v55 = 0LL;
  (**(void (__fastcall ***)(struct ISubmixProxy *, GUID *, __int64 *))a2)(
    a2,
    &GUID_1c09b051_783b_4f90_a426_dc76e6cdb825,
    &v55);
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
  if ( v55 )
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 216LL))(v55);
  else
    v13 = 0;
  v53 = v13;
  v14 = (*(__int64 (__fastcall **)(struct ISubmixProxy *, struct IAudioStreamInfo *))(*(_QWORD *)a2 + 32LL))(a2, a3);
  v54 = v14;
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
      v33 = (_WORD *)((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v50)[16])(v50);
      std::wstring::wstring(v80, v33);
      v34 = v61;
      std::map<std::wstring,std::unique_ptr<_RecurringTask>>::_Try_emplace<std::wstring,>((char *)v61 + 48, &v77, v80);
      v35 = (_RecurringTask **)(v77 + 64);
      v36 = si128.m128i_u32[2];
      if ( si128.m128i_i64[1] >= 8uLL )
      {
        v37 = (struct std::nothrow_t *)(2 * si128.m128i_i64[1] + 2);
        v62 = v37;
        v38 = (void *)v80[0];
        v63 = (void *)v80[0];
        if ( (unsigned __int64)v37 >= 0x1000 )
        {
          std::_Adjust_manually_vector_aligned(&v63, (unsigned __int64 *)&v62);
          v37 = v62;
          v38 = v63;
        }
        operator delete(v38, v37);
      }
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      LOWORD(v80[0]) = 0;
      v39 = *v35;
      *v35 = 0LL;
      if ( v39 )
        _RecurringTask::`scalar deleting destructor'(v39, v36);
      v64 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v50)[16])(v50);
      std::make_shared<std::wstring,ATL::CComHeapPtr<unsigned short> &>(&v66, &v64);
      v61 = (CAudioResourceManager *)v79;
      v40 = (char *)v34 - 8;
      v78 = (char *)v34 - 8;
      v41 = v67;
      if ( v67 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v67 + 2);
        v41 = v67;
        v40 = v78;
      }
      v79[0] = off_1801535B0;
      v79[1] = v40;
      v79[2] = v66;
      v79[3] = v41;
      v79[7] = v79;
      v42 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
      v43 = CSerialWorkQueue::QueueRecurringItem(v42, 10000LL, 0LL, v79, v35);
      if ( v43 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x68B,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v43);
      if ( v67 )
        std::_Ref_count_base::_Decref(v67);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x68D,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        v44);
      v13 = v53;
      v14 = v54;
    }
    v15 = v49;
  }
  if ( !v13 )
    goto LABEL_68;
  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v55 + 216LL))(v55) )
  {
    v60 = 0LL;
    if ( (int)Microsoft::WRL::AsWeak<IStreamGroupProxy>(v50, &v60) < 0 )
    {
LABEL_65:
      if ( v60 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
      goto LABEL_67;
    }
    v65 = v71;
    v18 = v60;
    if ( v60 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 8LL))(v60);
    v71[0] = off_180150CD0;
    v71[1] = v18;
    v72 = v71;
    v61 = (CAudioResourceManager *)v71;
    v19 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
    v21 = v19;
    v22 = 0;
    if ( *(_BYTE *)(v19 + 80) )
    {
LABEL_59:
      if ( v72 )
      {
        if ( v72 == v71 )
          v20 = 0LL;
        else
          LOBYTE(v20) = 1;
        (*(void (__fastcall **)(_QWORD *, __int64))(*v72 + 32LL))(v72, v20);
        v72 = 0LL;
      }
      if ( v22 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x6A0,
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
        v47 = GetLastError();
        v22 = v47;
        if ( v47 > 0 )
          v22 = (unsigned __int16)v47 | 0x80070000;
        if ( v22 < 0 )
          goto LABEL_59;
      }
      SetThreadpoolThreadMaximum(*(PTP_POOL *)v21, 1u);
      *(_QWORD *)(v21 + 16) = *(_QWORD *)v21;
    }
    v23 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v24 = v23;
    v56 = v23;
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
    v76 = v24;
    if ( v24 )
    {
      v56 = v73;
      v74 = 0LL;
      if ( v72 )
        v74 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))*v72)(v72, v73);
      v56 = v73;
      v24[2] = v21;
      ProcessHeap = GetProcessHeap();
      v26 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
      v27 = v26;
      v65 = v26;
      if ( v26 )
      {
        *((_DWORD *)v26 + 2) = 1;
        *((_DWORD *)v26 + 3) = 1;
        *v26 = &std::_Ref_count_obj<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>::`vftable';
        v64 = (__int64)(v26 + 2);
        v26[9] = 0LL;
        if ( v74 )
          v26[9] = (**(__int64 (__fastcall ***)(_BYTE *, __int64))v74)(v74, (__int64)(v26 + 2));
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
      if ( v74 )
      {
        if ( v74 == v73 )
          v20 = 0LL;
        else
          LOBYTE(v20) = 1;
        (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v74 + 32LL))(v74, v20);
        v74 = 0LL;
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
        v48 = GetLastError();
        v22 = v48;
        if ( v48 > 0 )
          v22 = (unsigned __int16)v48 | 0x80070000;
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
LABEL_67:
  v15 = v49;
LABEL_68:
  v30 = v55;
  if ( v55 )
  {
    v55 = 0LL;
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
