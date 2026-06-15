/*
 * XREFs of ?CreateBridgeStream@CSharedStreamGroupProxy@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800EE1D0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800EF6F0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::CreateBridgeStream(
        unsigned __int64 this,
        struct BRIDGE_STREAM_DESCRIPTOR *a2,
        struct IStreamGroupProxy *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  __int64 v4; // rax
  int v9; // eax
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  const GUID *v12; // r9
  void *v13; // r8
  const struct _TlgProvider_t *v14; // r8
  unsigned int v15; // ebx
  int v17; // [rsp+30h] [rbp-59h] BYREF
  WINBOOL fPending; // [rsp+34h] [rbp-55h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-51h] BYREF
  __int64 v20; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-41h] BYREF
  struct IStreamGroupProxy *v22; // [rsp+50h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-29h] BYREF
  int *v24; // [rsp+80h] [rbp-9h]
  int v25; // [rsp+88h] [rbp-1h]
  int v26; // [rsp+8Ch] [rbp+3h]
  unsigned __int64 *v27; // [rsp+90h] [rbp+7h]
  int v28; // [rsp+98h] [rbp+Fh]
  int v29; // [rsp+9Ch] [rbp+13h]
  struct IStreamGroupProxy **v30; // [rsp+A0h] [rbp+17h]
  int v31; // [rsp+A8h] [rbp+1Fh]
  int v32; // [rsp+ACh] [rbp+23h]

  v4 = *(_QWORD *)a3;
  v20 = 0LL;
  v9 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *, __int64 *))(v4 + 256))(a3, &v20);
  v17 = v9;
  if ( v9 >= 0 )
  {
    if ( v20 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, struct BRIDGE_STREAM_DESCRIPTOR *, __int64, struct SYSTEM_AUDIO_STREAM *))(**(_QWORD **)(this + 80) + 96LL))(
             *(_QWORD *)(this + 80),
             a2,
             v20,
             a4);
      v17 = v9;
    }
    if ( v9 >= 0 )
    {
      *((_QWORD *)a4 + 6) = this & -(__int64)(this != 8);
      v10 = *(_QWORD *)(this + 264);
      while ( v10 >= 0 )
      {
        if ( (_DWORD)v10 != 0x7FFFFFFF )
        {
          v11 = v10;
          v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(this + 264), v10 + 1, v10);
          if ( v11 != v10 )
            continue;
        }
        goto LABEL_11;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v10 + 16));
    }
  }
LABEL_11:
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B7588;
    qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v13);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
  }
  v14 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v14 > 4u )
  {
    v26 = 0;
    v24 = &v17;
    v25 = 4;
    v22 = a3;
    v27 = &v21;
    v29 = 0;
    v30 = &v22;
    v32 = 0;
    v21 = this & -(__int64)(this != 8);
    v28 = 8;
    v31 = 8;
    TlgWrite(v14, &unk_180177962, (LPCGUID)v14, v12, 5u, &pData);
  }
  v15 = v17;
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  return v15;
}
