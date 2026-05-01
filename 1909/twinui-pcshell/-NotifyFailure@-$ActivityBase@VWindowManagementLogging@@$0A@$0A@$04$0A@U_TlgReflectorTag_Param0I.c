/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1803864E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18001666C (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18003B1B0 (-LockExclusive@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18003B218 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     _TlgCreateSz @ 0x1800800E8 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x18011EF44 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x18011F2C4 (--2@YAPEAX_KPEAX@Z.c)
 */

char __fastcall wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        __int64 a1,
        int *a2)
{
  __int64 v4; // rcx
  wil::TraceLoggingProvider *v5; // rax
  _QWORD *v6; // rcx
  const CHAR *v7; // rdx
  const CHAR *v8; // rdx
  const WCHAR *v9; // rdx
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  int v13; // ecx
  const CHAR *v14; // rdx
  TraceLoggingHProvider v15; // r10
  _DWORD *v16; // rcx
  int v17; // eax
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  int v20; // [rsp+34h] [rbp-CCh] BYREF
  int v21; // [rsp+38h] [rbp-C8h] BYREF
  int v22; // [rsp+3Ch] [rbp-C4h] BYREF
  int v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+44h] [rbp-BCh] BYREF
  int v25; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+4Ch] [rbp-B4h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v30; // [rsp+80h] [rbp-80h]
  __int64 v31; // [rsp+88h] [rbp-78h]
  int *v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-60h] BYREF
  int *v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+C0h] [rbp-40h] BYREF
  int *v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+E0h] [rbp-20h] BYREF
  int *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+100h] [rbp+0h] BYREF
  int *v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+130h] [rbp+30h] BYREF
  int *v48; // [rsp+140h] [rbp+40h]
  __int64 v49; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+160h] [rbp+60h] BYREF
  int *v52; // [rsp+170h] [rbp+70h]
  __int64 v53; // [rsp+178h] [rbp+78h]
  int *v54; // [rsp+180h] [rbp+80h]
  __int64 v55; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+190h] [rbp+90h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &unk_1805C2098;
    v5 = (wil::TraceLoggingProvider *)operator new(v4, &unk_1805C2098);
    wil::TraceLoggingProvider::TraceLoggingProvider(v5);
    *v6 = &ImmersiveIconsLogging::`vftable';
    v6[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_1805C2098, qword_1805C20B0);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_1805C2098);
  }
  if ( **((_DWORD **)Context + 1) > 2u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0LL) )
  {
    v7 = (const CHAR *)*((_QWORD *)a2 + 6);
    v30 = &v28;
    v20 = a2[1];
    v32 = &v20;
    v28 = 0x1000000LL;
    v31 = 8LL;
    v33 = 4LL;
    TlgCreateSz(&pDesc, v7);
    v8 = (const CHAR *)*((_QWORD *)a2 + 15);
    v35 = a2 + 14;
    v36 = 4LL;
    TlgCreateSz(&v37, v8);
    v9 = (const WCHAR *)*((_QWORD *)a2 + 2);
    v21 = *a2;
    v38 = &v21;
    v39 = 4LL;
    TlgCreateWsz(&v40, v9);
    v10 = (const CHAR *)*((_QWORD *)a2 + 8);
    v22 = a2[6];
    v41 = &v22;
    v42 = 4LL;
    TlgCreateSz(&v43, v10);
    v11 = (const CHAR *)*((_QWORD *)a2 + 10);
    v23 = a2[18];
    v44 = &v23;
    v45 = 4LL;
    TlgCreateSz(&v46, v11);
    TlgCreateWsz(&v47, *((LPCWSTR *)a2 + 11));
    v12 = (const CHAR *)*((_QWORD *)a2 + 13);
    v24 = a2[24];
    v48 = &v24;
    v49 = 4LL;
    TlgCreateSz(&v50, v12);
    TlgCreateWsz(&v51, *((LPCWSTR *)a2 + 14));
    v13 = a2[2];
    v14 = (const CHAR *)*((_QWORD *)a2 + 5);
    v52 = &v25;
    v26 = a2[15];
    v25 = v13;
    v54 = &v26;
    v53 = 4LL;
    v55 = 4LL;
    TlgCreateSz(&v56, v14);
    TlgWrite(v15, &unk_1804DBF9F, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x14u, &pData);
  }
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    (__int64)&v28);
  v16 = *(_DWORD **)(a1 + 48);
  v17 = a2[1];
  if ( v17 != v16[21] && (v17 != v16[19] || (int)v16[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v16 + 20), (const struct wil::FailureInfo *)a2);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&v28);
  return 1;
}
