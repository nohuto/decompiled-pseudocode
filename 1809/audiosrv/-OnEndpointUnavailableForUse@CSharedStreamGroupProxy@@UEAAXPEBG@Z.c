/*
 * XREFs of ?OnEndpointUnavailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800E4BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000CFC0 (--2@YAPEAX_K@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180013A08 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18003DF00 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18004D6E0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004E2A0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800E0AE0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??$?0VCSharedStreamGroupProxy@@@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStreamGroupProxy@@@Z @ 0x1800E1358 (--$-0VCSharedStreamGroupProxy@@@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStr.c)
 *     _lambda_b2f72c50110305d9aa06d2931c2147e0_::__lambda_b2f72c50110305d9aa06d2931c2147e0_ @ 0x1800E1F30 (_lambda_b2f72c50110305d9aa06d2931c2147e0_--__lambda_b2f72c50110305d9aa06d2931c2147e0_.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800E6340 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CSharedStreamGroupProxy::OnEndpointUnavailableForUse(
        CSharedStreamGroupProxy *this,
        unsigned __int16 *a2)
{
  unsigned __int16 *v2; // r14
  volatile signed __int32 *v3; // rax
  volatile signed __int32 *v4; // rdi
  volatile signed __int32 *v5; // r15
  __int64 *v6; // rax
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rbx
  const char *v8; // r9
  __int64 v9; // rsi
  __int64 v10; // rax
  int v11; // eax
  void *v12; // r8
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  TraceLoggingHProvider v15; // r10
  __int64 v16; // rcx
  UINT32 cData; // [rsp+20h] [rbp-128h]
  __int64 v18; // [rsp+30h] [rbp-118h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-110h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-108h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-100h] BYREF
  __int64 *v22; // [rsp+50h] [rbp-F8h] BYREF
  const unsigned __int16 *v23; // [rsp+58h] [rbp-F0h]
  __int64 v24; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v25; // [rsp+68h] [rbp-E0h]
  volatile signed __int32 *v26; // [rsp+78h] [rbp-D0h]
  volatile signed __int32 *v27; // [rsp+80h] [rbp-C8h]
  __int64 v28; // [rsp+88h] [rbp-C0h]
  _QWORD *v29; // [rsp+90h] [rbp-B8h]
  _QWORD v30[9]; // [rsp+98h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp-48h] BYREF
  const char *v33; // [rsp+110h] [rbp-38h]
  int v34; // [rsp+118h] [rbp-30h]
  int v35; // [rsp+11Ch] [rbp-2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+0h]

  v28 = -2LL;
  v2 = a2;
  v23 = a2;
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::ComPtr<IStreamGroupProxy>((__int64 *)&v21, (__int64)this - 8);
  v18 = 0LL;
  v3 = (volatile signed __int32 *)operator new(0x30uLL);
  try
  {
    v4 = v3;
    v22 = (__int64 *)v3;
    if ( v3 )
    {
      *((_DWORD *)v3 + 2) = 1;
      *((_DWORD *)v3 + 3) = 1;
      *(_QWORD *)v3 = &std::_Ref_count_obj<std::wstring>::`vftable';
      std::wstring::wstring((_QWORD *)v3 + 2, v2);
    }
    else
    {
      v4 = 0LL;
    }
    v5 = v4 + 4;
    v26 = v4 + 4;
    v27 = v4;
    v22 = &v18;
    v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v22);
    v7 = v21;
    if ( (int)Microsoft::WRL::AsWeak<IStreamGroupProxy>(v21, v6) >= 0 )
    {
      v29 = v30;
      v9 = v18;
      v24 = v18;
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
      if ( v4 )
      {
        _InterlockedIncrement(v4 + 2);
        v7 = v21;
        v5 = v26;
        v9 = v24;
        v2 = (unsigned __int16 *)v23;
      }
      v30[0] = off_18014DF30;
      v30[1] = v9;
      v24 = 0LL;
      v30[2] = v5;
      v30[3] = v4;
      v25 = 0LL;
      v30[7] = v30;
      lambda_b2f72c50110305d9aa06d2931c2147e0_::__lambda_b2f72c50110305d9aa06d2931c2147e0_(&v24);
      v10 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
      v11 = CSerialWorkQueue::QueueWorkItem(v10, (__int64)v30);
      if ( v11 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x52A,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v11,
          cData);
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = qword_1801B3518;
        qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v12);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
      }
      if ( **((_DWORD **)Context + 1) > 4u )
      {
        TlgCreateWsz(&pDesc, v2);
        v33 = "OnEndpointUnavailableForUse";
        v34 = 28;
        v35 = 0;
        TlgWrite(v15, &unk_1801737AF, v13, v14, 4u, &pData);
      }
    }
    if ( v4 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v4);
    v16 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    if ( v7 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v7)[2])(v7);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x533,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      v8);
  }
}
