/*
 * XREFs of ?OnDefaultDeviceChanged@CMMNotificationDelegator@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x1800EF7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800D4F8C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800DFBC4 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 */

__int64 __fastcall CMMNotificationDelegator::OnDefaultDeviceChanged(
        CMMNotificationDelegator *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 a3,
        const unsigned __int16 *a4)
{
  __int64 *v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // edi
  const GUID *v9; // r8
  const GUID *v10; // r9
  void *v11; // r8
  const struct _TlgProvider_t *v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // [rsp+30h] [rbp-9h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-1h] BYREF
  LPVOID Context; // [rsp+40h] [rbp+7h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+Fh] BYREF
  const char *v19; // [rsp+68h] [rbp+2Fh]
  int v20; // [rsp+70h] [rbp+37h]
  int v21; // [rsp+74h] [rbp+3Bh]
  EVENT_DATA_DESCRIPTOR *p_pData; // [rsp+80h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  v15 = 0LL;
  if ( a2 != *((_DWORD *)this + 11)
    || *((_DWORD *)this + 10) != a3
    || (v4 = (__int64 *)((char *)this + 32), (int)Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)this + 4, &v15) < 0)
    || !v15 )
  {
LABEL_17:
    v8 = 0;
    goto LABEL_18;
  }
  v5 = *v4;
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  pData.Ptr = (ULONGLONG)off_1801520F8;
  p_pData = &pData;
  *(_QWORD *)&pData.Size = v5;
  v6 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
  v7 = CSerialWorkQueue::QueueWorkItem(v6, (__int64)&pData);
  v8 = v7;
  if ( v7 >= 0 )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = &qword_1801B7588;
      qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
      qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v11);
      InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
    }
    v12 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v12 > 4u )
    {
      v21 = 0;
      v19 = "DefaultDeviceChange";
      v20 = 20;
      TlgWrite(v12, &unk_1801779B6, v9, v10, 3u, &pData);
    }
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC3,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v7);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
LABEL_18:
  v13 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v8;
}
