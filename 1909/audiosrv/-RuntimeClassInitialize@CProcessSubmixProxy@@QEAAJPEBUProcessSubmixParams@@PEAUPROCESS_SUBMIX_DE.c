/*
 * XREFs of ?RuntimeClassInitialize@CProcessSubmixProxy@@QEAAJPEBUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@K@Z @ 0x1800335D0
 * Callers:
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x1800323B0 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProcessSubmixProxy::RuntimeClassInitialize(
        CProcessSubmixProxy *this,
        const struct ProcessSubmixParams *a2,
        struct PROCESS_SUBMIX_DESCRIPTOR *a3,
        struct IStreamGroupProxy *a4)
{
  HRESULT Instance; // eax
  int v9; // ebx
  HRESULT v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned __int16 *v14; // r15
  __int64 v15; // rbx
  void *v16; // rax
  void *v17; // r14
  void *v18; // rcx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rbx
  IUnknown *v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rsi
  IUnknown *pProxy; // [rsp+40h] [rbp-91h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-89h] BYREF
  int v28; // [rsp+4Ch] [rbp-85h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-81h] BYREF
  __int64 v30; // [rsp+58h] [rbp-79h] BYREF
  unsigned int v31; // [rsp+60h] [rbp-71h]
  char *v32; // [rsp+68h] [rbp-69h] BYREF
  _DWORD v33[2]; // [rsp+70h] [rbp-61h] BYREF
  __int64 v34; // [rsp+78h] [rbp-59h]
  __int64 v35; // [rsp+80h] [rbp-51h]
  unsigned __int16 *v36; // [rsp+90h] [rbp-41h] BYREF
  int v37; // [rsp+98h] [rbp-39h]
  int v38; // [rsp+9Ch] [rbp-35h]
  void *v39; // [rsp+A0h] [rbp-31h]
  int v40; // [rsp+A8h] [rbp-29h]
  int v41; // [rsp+ACh] [rbp-25h]
  char **v42; // [rsp+B0h] [rbp-21h]
  __int64 v43; // [rsp+B8h] [rbp-19h]
  int *v44; // [rsp+C0h] [rbp-11h]
  __int64 v45; // [rsp+C8h] [rbp-9h]
  char *v46; // [rsp+D0h] [rbp-1h]
  __int64 v47; // [rsp+D8h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+57h]

  v35 = -2LL;
  pProxy = 0LL;
  Instance = CoCreateInstance(
               &GUID_9db0b5d8_7db4_445f_a896_38636dc7c07a,
               0LL,
               0x17u,
               &GUID_5d857e80_f074_4ad8_a9ce_0ddca68d8212,
               (LPVOID *)&pProxy);
  v9 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9F0,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)Instance);
  }
  else
  {
    v10 = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
    v9 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9F6,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v10);
    }
    else
    {
      v11 = ((__int64 (__fastcall *)(IUnknown *, struct PROCESS_SUBMIX_DESCRIPTOR *))pProxy->lpVtbl[3].QueryInterface)(
              pProxy,
              a3);
      v9 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9F8,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v11);
      }
      else
      {
        *((_BYTE *)this + 124) = *((_BYTE *)a2 + 8);
        v12 = *(_QWORD *)a2;
        v13 = *((_QWORD *)this + 14);
        *((_QWORD *)this + 14) = *(_QWORD *)a2;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        v14 = (unsigned __int16 *)*((_QWORD *)a3 + 6);
        v15 = v14[8];
        v16 = CoTaskMemAlloc(v15 + 18);
        v17 = v16;
        if ( v16 )
        {
          memcpy_0(v16, v14, v15 + 18);
          v9 = 0;
        }
        else
        {
          v9 = -2147024882;
        }
        v18 = (void *)*((_QWORD *)this + 26);
        *((_QWORD *)this + 26) = v17;
        if ( v18 )
          CoTaskMemFree(v18);
        if ( v9 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x9FC,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)(unsigned int)v9);
        }
        else
        {
          v30 = 0LL;
          v19 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *, __int64 *))(*(_QWORD *)a4 + 256LL))(a4, &v30);
          v9 = v19;
          if ( v19 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xA00,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
              (const char *)(unsigned int)v19);
          }
          else
          {
            v20 = ((__int64 (__fastcall *)(IUnknown *, __int64))pProxy->lpVtbl[3].AddRef)(pProxy, v30);
            v9 = v20;
            if ( v20 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xA01,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                (const char *)(unsigned int)v20);
            }
            else
            {
              v21 = *((_QWORD *)this + 6);
              v22 = pProxy;
              *((_QWORD *)this + 6) = pProxy;
              if ( v22 )
                ((void (__fastcall *)(IUnknown *))v22->lpVtbl->AddRef)(v22);
              if ( v21 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
              v23 = *((_QWORD *)this + 25);
              *((_QWORD *)this + 25) = a4;
              if ( a4 )
                (*(void (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a4 + 8LL))(a4);
              if ( v23 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
              Context = 0LL;
              if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
                && fPending )
              {
                Context = &qword_1801B7588;
                qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
                qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
                atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
                wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0);
                InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
              }
              v24 = *((_QWORD *)Context + 1);
              if ( *(_DWORD *)v24 > 4u )
              {
                v32 = (char *)this + 8;
                v42 = &v32;
                v43 = 8LL;
                v28 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 40LL))(*((_QWORD *)this + 14));
                v44 = &v28;
                v45 = 4LL;
                v46 = (char *)this + 124;
                v47 = 1LL;
                v33[0] = 184549376;
                v33[1] = 4;
                v34 = 0LL;
                v36 = *(unsigned __int16 **)(v24 + 8);
                v37 = *v36;
                v38 = 2;
                v39 = &unk_180177540;
                v40 = 55;
                v41 = 1;
                v31 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
                EtwEventWriteTransfer(*(_QWORD *)(v24 + 32), v33, 0LL, 0LL, 5, &v36);
              }
              *((_QWORD *)this + 27) = _InterlockedIncrement64(&CProcessSubmixProxy::s_processSubmixId);
              v9 = 0;
            }
          }
          if ( v30 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
        }
      }
    }
  }
  if ( pProxy )
    ((void (__fastcall *)(IUnknown *))pProxy->lpVtbl->Release)(pProxy);
  return (unsigned int)v9;
}
