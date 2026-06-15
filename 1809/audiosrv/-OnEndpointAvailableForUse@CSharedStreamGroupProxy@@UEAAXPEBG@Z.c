/*
 * XREFs of ?OnEndpointAvailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800E4920
 * Callers:
 *     <none>
 * Callees:
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180013A08 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18003DF00 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800E0AE0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??$?0VCSharedStreamGroupProxy@@@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStreamGroupProxy@@@Z @ 0x1800E1358 (--$-0VCSharedStreamGroupProxy@@@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStr.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800E6340 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CSharedStreamGroupProxy::OnEndpointAvailableForUse(
        CSharedStreamGroupProxy *this,
        const unsigned __int16 *a2)
{
  __int64 v3; // rax
  __int64 *v4; // rax
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rdi
  int v6; // eax
  const char *v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  void *v11; // r8
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  TraceLoggingHProvider v14; // r10
  __int64 v15; // rcx
  UINT32 cData; // [rsp+20h] [rbp-98h]
  LPVOID Context; // [rsp+30h] [rbp-88h] BYREF
  __int64 v18; // [rsp+38h] [rbp-80h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-78h] BYREF
  __int64 v20[3]; // [rsp+48h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-38h] BYREF
  const char *v23; // [rsp+90h] [rbp-28h]
  __int64 p_pData; // [rsp+98h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v20[1] = -2LL;
  v3 = *((_QWORD *)this + 8);
  if ( v3 && !*(_DWORD *)(v3 + 8) )
  {
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::ComPtr<IStreamGroupProxy>(v20, (__int64)this - 8);
    v18 = 0LL;
    Context = &v18;
    v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&Context);
    v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v20[0];
    v6 = Microsoft::WRL::AsWeak<IStreamGroupProxy>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v20[0], v4);
    try
    {
      if ( v6 >= 0 )
      {
        Context = &pData;
        v8 = v18;
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
        pData.Ptr = (ULONGLONG)off_18014DF00;
        *(_QWORD *)&pData.Size = v8;
        p_pData = (__int64)&pData;
        v9 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
        v10 = CSerialWorkQueue::QueueWorkItem(v9, (__int64)&pData);
        if ( v10 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x549,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)(unsigned int)v10,
            cData);
        Context = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
          && fPending )
        {
          Context = qword_1801B3518;
          qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v11);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
        }
        if ( **((_DWORD **)Context + 1) > 4u )
        {
          TlgCreateWsz(&pDesc, a2);
          v23 = "OnEndpointAvailableForUse";
          p_pData = 26LL;
          TlgWrite(v14, &unk_180173763, v12, v13, 4u, &pData);
        }
      }
      v15 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      if ( v5 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v5)[2])(v5);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x553,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        v7);
    }
  }
}
