/*
 * XREFs of ?RuntimeClassInitialize@CProcessSubmixProxy@@QEAAJPEBUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@K@Z @ 0x1800400E0
 * Callers:
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x18003FA50 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
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
  int ppv; // [rsp+20h] [rbp-A1h]
  int ppva; // [rsp+20h] [rbp-A1h]
  IUnknown *pProxy; // [rsp+40h] [rbp-81h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-79h] BYREF
  int v30; // [rsp+4Ch] [rbp-75h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-71h] BYREF
  __int64 v32; // [rsp+58h] [rbp-69h] BYREF
  char *v33; // [rsp+60h] [rbp-61h] BYREF
  _DWORD v34[2]; // [rsp+68h] [rbp-59h] BYREF
  __int64 v35; // [rsp+70h] [rbp-51h]
  __int64 v36; // [rsp+78h] [rbp-49h]
  unsigned __int16 *v37; // [rsp+80h] [rbp-41h] BYREF
  int v38; // [rsp+88h] [rbp-39h]
  int v39; // [rsp+8Ch] [rbp-35h]
  void *v40; // [rsp+90h] [rbp-31h]
  int v41; // [rsp+98h] [rbp-29h]
  int v42; // [rsp+9Ch] [rbp-25h]
  char **v43; // [rsp+A0h] [rbp-21h]
  __int64 v44; // [rsp+A8h] [rbp-19h]
  int *v45; // [rsp+B0h] [rbp-11h]
  __int64 v46; // [rsp+B8h] [rbp-9h]
  char *v47; // [rsp+C0h] [rbp-1h]
  __int64 v48; // [rsp+C8h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+57h]

  v36 = -2LL;
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
      (void *)0x9E8,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)Instance,
      ppv);
  }
  else
  {
    v10 = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
    v9 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9EE,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v10,
        ppva);
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
          (void *)0x9F0,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v11,
          ppva);
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
        if ( v17 != v18 )
        {
          if ( v18 )
            CoTaskMemFree(v18);
          *((_QWORD *)this + 26) = v17;
        }
        if ( v9 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x9F4,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)(unsigned int)v9,
            ppva);
        }
        else
        {
          v32 = 0LL;
          v19 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *, __int64 *))(*(_QWORD *)a4 + 256LL))(a4, &v32);
          v9 = v19;
          if ( v19 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x9F8,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
              (const char *)(unsigned int)v19,
              ppva);
          }
          else
          {
            v20 = ((__int64 (__fastcall *)(IUnknown *, __int64))pProxy->lpVtbl[3].AddRef)(pProxy, v32);
            v9 = v20;
            if ( v20 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x9F9,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                (const char *)(unsigned int)v20,
                ppva);
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
                Context = qword_1801B3518;
                qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
                qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
                atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
                wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530);
                InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
              }
              v24 = *((_QWORD *)Context + 1);
              if ( *(_DWORD *)v24 > 4u )
              {
                v33 = (char *)this + 8;
                v43 = &v33;
                v44 = 8LL;
                v30 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 40LL))(*((_QWORD *)this + 14));
                v45 = &v30;
                v46 = 4LL;
                v47 = (char *)this + 124;
                v48 = 1LL;
                v34[0] = ((unsigned int)&unk_180173450 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
                v34[1] = 4;
                v35 = 0LL;
                v37 = *(unsigned __int16 **)(v24 + 8);
                v38 = *v37;
                v39 = 2;
                v40 = &unk_18017345B;
                v41 = 55;
                v42 = 1;
                EtwEventWriteTransfer(*(_QWORD *)(v24 + 32), v34, 0LL, 0LL, 5, &v37);
              }
              *((_QWORD *)this + 27) = _InterlockedIncrement64(&CProcessSubmixProxy::s_processSubmixId);
              v9 = 0;
            }
          }
          if ( v32 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
        }
      }
    }
  }
  if ( pProxy )
    ((void (__fastcall *)(IUnknown *))pProxy->lpVtbl->Release)(pProxy);
  return (unsigned int)v9;
}
