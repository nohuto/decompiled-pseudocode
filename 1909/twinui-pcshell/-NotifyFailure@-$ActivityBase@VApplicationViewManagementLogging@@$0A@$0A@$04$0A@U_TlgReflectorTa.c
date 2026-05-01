/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180016090
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180015E88 (-LockExclusive@-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTa.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18001666C (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1800800E8 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

char __fastcall wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        __int64 a1,
        int *a2)
{
  _DWORD *v4; // rcx
  int v5; // eax
  const CHAR *v7; // rdx
  const CHAR *v8; // rdx
  const WCHAR *v9; // rdx
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  int v13; // ecx
  const CHAR *v14; // rdx
  TraceLoggingHProvider v15; // r10
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+3Ch] [rbp-C4h] BYREF
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+44h] [rbp-BCh] BYREF
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+4Ch] [rbp-B4h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-B0h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  PSRWLOCK *p_SRWLock; // [rsp+80h] [rbp-80h]
  __int64 v28; // [rsp+88h] [rbp-78h]
  int *v29; // [rsp+90h] [rbp-70h]
  __int64 v30; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-60h] BYREF
  int *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+C0h] [rbp-40h] BYREF
  int *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+E0h] [rbp-20h] BYREF
  int *v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+100h] [rbp+0h] BYREF
  int *v41; // [rsp+110h] [rbp+10h]
  __int64 v42; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+130h] [rbp+30h] BYREF
  int *v45; // [rsp+140h] [rbp+40h]
  __int64 v46; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+160h] [rbp+60h] BYREF
  int *v49; // [rsp+170h] [rbp+70h]
  __int64 v50; // [rsp+178h] [rbp+78h]
  int *v51; // [rsp+180h] [rbp+80h]
  __int64 v52; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+190h] [rbp+90h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_1805C2010;
    qword_1805C2010[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2028 = (struct _TlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2010, qword_1805C2028);
    InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_1805C2010);
  }
  if ( **((_DWORD **)Context + 1) > 2u )
  {
    v7 = (const CHAR *)*((_QWORD *)a2 + 6);
    p_SRWLock = &SRWLock;
    v17 = a2[1];
    v29 = &v17;
    SRWLock = (PSRWLOCK)0x1000000;
    v28 = 8LL;
    v30 = 4LL;
    TlgCreateSz(&pDesc, v7);
    v8 = (const CHAR *)*((_QWORD *)a2 + 15);
    v32 = a2 + 14;
    v33 = 4LL;
    TlgCreateSz(&v34, v8);
    v9 = (const WCHAR *)*((_QWORD *)a2 + 2);
    v18 = *a2;
    v35 = &v18;
    v36 = 4LL;
    TlgCreateWsz(&v37, v9);
    v10 = (const CHAR *)*((_QWORD *)a2 + 8);
    v19 = a2[6];
    v38 = &v19;
    v39 = 4LL;
    TlgCreateSz(&v40, v10);
    v11 = (const CHAR *)*((_QWORD *)a2 + 10);
    v20 = a2[18];
    v41 = &v20;
    v42 = 4LL;
    TlgCreateSz(&v43, v11);
    TlgCreateWsz(&v44, *((LPCWSTR *)a2 + 11));
    v12 = (const CHAR *)*((_QWORD *)a2 + 13);
    v21 = a2[24];
    v45 = &v21;
    v46 = 4LL;
    TlgCreateSz(&v47, v12);
    TlgCreateWsz(&v48, *((LPCWSTR *)a2 + 14));
    v13 = a2[2];
    v14 = (const CHAR *)*((_QWORD *)a2 + 5);
    v49 = &v22;
    v23 = a2[15];
    v22 = v13;
    v51 = &v23;
    v50 = 4LL;
    v52 = 4LL;
    TlgCreateSz(&v53, v14);
    TlgWrite(v15, &unk_1804DBF9F, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x14u, &pData);
  }
  wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v4 = *(_DWORD **)(a1 + 48);
  v5 = a2[1];
  if ( v5 != v4[21] && (v5 != v4[19] || (int)v4[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v4 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 1;
}
