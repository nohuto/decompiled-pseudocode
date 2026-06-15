/*
 * XREFs of ?OnEndpointUnavailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800EFC90
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x180032CA0 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180036858 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180042C04 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D84 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180057130 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C1ADC (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800D5B3C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800DFBC4 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??$?0VCSharedStreamGroupProxy@@@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStreamGroupProxy@@@Z @ 0x1800EC530 (--$-0VCSharedStreamGroupProxy@@@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStr.c)
 *     _lambda_b2f72c50110305d9aa06d2931c2147e0_::__lambda_b2f72c50110305d9aa06d2931c2147e0_ @ 0x1800ED164 (_lambda_b2f72c50110305d9aa06d2931c2147e0_--__lambda_b2f72c50110305d9aa06d2931c2147e0_.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CSharedStreamGroupProxy::OnEndpointUnavailableForUse(
        CSharedStreamGroupProxy *this,
        unsigned __int16 *a2)
{
  unsigned __int16 *v2; // rsi
  volatile signed __int32 *v3; // rax
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // r14
  __int64 *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // eax
  void *v10; // r8
  LPCGUID v11; // r8
  TraceLoggingHProvider v12; // r9
  __int64 v13; // rcx
  const char *v14; // r9
  __int64 v15; // [rsp+30h] [rbp-118h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-110h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-108h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-100h] BYREF
  __int64 *v19; // [rsp+50h] [rbp-F8h] BYREF
  const unsigned __int16 *v20; // [rsp+58h] [rbp-F0h]
  __int64 v21; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v22; // [rsp+68h] [rbp-E0h]
  volatile signed __int32 *v23; // [rsp+78h] [rbp-D0h]
  volatile signed __int32 *v24; // [rsp+80h] [rbp-C8h]
  __int64 v25; // [rsp+88h] [rbp-C0h]
  _QWORD *v26; // [rsp+90h] [rbp-B8h]
  _QWORD v27[9]; // [rsp+98h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp-48h] BYREF
  const char *v30; // [rsp+110h] [rbp-38h]
  int v31; // [rsp+118h] [rbp-30h]
  int v32; // [rsp+11Ch] [rbp-2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+0h]

  v25 = -2LL;
  v2 = a2;
  v20 = a2;
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::ComPtr<IStreamGroupProxy>((__int64 *)&v18, (__int64)this - 8);
  v15 = 0LL;
  v3 = (volatile signed __int32 *)operator new(0x30uLL);
  try
  {
    v4 = v3;
    v19 = (__int64 *)v3;
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
    v23 = v4 + 4;
    v24 = v4;
    v19 = &v15;
    v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v19);
    if ( (int)Microsoft::WRL::AsWeak<IStreamGroupProxy>(v18, v6) >= 0 )
    {
      v26 = v27;
      v7 = v15;
      v21 = v15;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      if ( v4 )
      {
        _InterlockedIncrement(v4 + 2);
        v5 = v23;
        v7 = v21;
        v2 = (unsigned __int16 *)v20;
      }
      v27[0] = off_180152098;
      v27[1] = v7;
      v21 = 0LL;
      v27[2] = v5;
      v27[3] = v4;
      v22 = 0LL;
      v27[7] = v27;
      lambda_b2f72c50110305d9aa06d2931c2147e0_::__lambda_b2f72c50110305d9aa06d2931c2147e0_(&v21);
      v8 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
      v9 = CSerialWorkQueue::QueueWorkItem(v8, (__int64)v27);
      if ( v9 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          1324LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v9);
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = &qword_1801B7588;
        qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v10);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
      }
      if ( **((_DWORD **)Context + 1) > 4u )
      {
        TlgCreateWsz(&pDesc, v2);
        v30 = "OnEndpointUnavailableForUse";
        v31 = 28;
        v32 = 0;
        TlgWrite(v12, &unk_180177894, v11, (LPCGUID)v12, 4u, &pData);
      }
    }
    if ( v4 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v4);
    v13 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v18);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x535,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      v14);
  }
}
