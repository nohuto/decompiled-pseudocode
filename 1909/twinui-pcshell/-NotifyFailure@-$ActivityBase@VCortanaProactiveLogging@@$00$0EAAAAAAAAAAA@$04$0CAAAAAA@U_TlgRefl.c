/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1801E6580
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18001666C (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1800800E8 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180150C54 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 */

char __fastcall wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        int *a2)
{
  const CHAR *v4; // rdx
  const CHAR *v5; // rdx
  const WCHAR *v6; // rdx
  const CHAR *v7; // rdx
  const CHAR *v8; // rdx
  const CHAR *v9; // rdx
  TraceLoggingHProvider v10; // r10
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  const WCHAR *v13; // rdx
  const CHAR *v14; // rdx
  const CHAR *v15; // rdx
  const CHAR *v16; // rdx
  int v17; // ecx
  const CHAR *v18; // rdx
  TraceLoggingHProvider v19; // r10
  _DWORD *v20; // rcx
  int v21; // eax
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+34h] [rbp-CCh] BYREF
  int v25; // [rsp+38h] [rbp-C8h] BYREF
  int v26; // [rsp+3Ch] [rbp-C4h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL v28; // [rsp+44h] [rbp-BCh] BYREF
  LPVOID Context; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID v30; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+58h] [rbp-A8h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  void *v34; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+98h] [rbp-68h]
  int *v36; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-50h] BYREF
  int *v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+D0h] [rbp-30h] BYREF
  int *v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+F0h] [rbp-10h] BYREF
  int *v45; // [rsp+100h] [rbp+0h]
  __int64 v46; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+110h] [rbp+10h] BYREF
  int *v48; // [rsp+120h] [rbp+20h]
  __int64 v49; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+140h] [rbp+40h] BYREF
  WINBOOL *p_fPending; // [rsp+150h] [rbp+50h]
  __int64 v53; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+170h] [rbp+70h] BYREF
  int *v56; // [rsp+180h] [rbp+80h]
  __int64 v57; // [rsp+188h] [rbp+88h]
  LPVOID *p_Context; // [rsp+190h] [rbp+90h]
  __int64 v59; // [rsp+198h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+1A0h] [rbp+A0h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[2]) )
  {
    v30 = 0LL;
    if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &v28, &v30) && v28 )
    {
      v30 = qword_1805C2118;
      qword_1805C2118[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805C2130 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2118, qword_1805C2130);
      InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_1805C2118);
    }
    if ( **((_DWORD **)v30 + 1) > 2u && TlgKeywordOn(*((TraceLoggingHProvider *)v30 + 1), 0x400000000000uLL) )
    {
      v11 = (const CHAR *)*((_QWORD *)a2 + 6);
      v34 = SRWLock;
      v27 = a2[1];
      v36 = &v27;
      SRWLock[0] = (PSRWLOCK)0x1000000;
      v35 = 8LL;
      v37 = 4LL;
      TlgCreateSz(&pDesc, v11);
      v12 = (const CHAR *)*((_QWORD *)a2 + 15);
      v39 = a2 + 14;
      v40 = 4LL;
      TlgCreateSz(&v41, v12);
      v13 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v26 = *a2;
      v42 = &v26;
      v43 = 4LL;
      TlgCreateWsz(&v44, v13);
      v14 = (const CHAR *)*((_QWORD *)a2 + 8);
      v25 = a2[6];
      v45 = &v25;
      v46 = 4LL;
      TlgCreateSz(&v47, v14);
      v15 = (const CHAR *)*((_QWORD *)a2 + 10);
      v24 = a2[18];
      v48 = &v24;
      v49 = 4LL;
      TlgCreateSz(&v50, v15);
      TlgCreateWsz(&v51, *((LPCWSTR *)a2 + 11));
      v16 = (const CHAR *)*((_QWORD *)a2 + 13);
      fPending = a2[24];
      p_fPending = &fPending;
      v53 = 4LL;
      TlgCreateSz(&v54, v16);
      TlgCreateWsz(&v55, *((LPCWSTR *)a2 + 14));
      v17 = a2[2];
      v18 = (const CHAR *)*((_QWORD *)a2 + 5);
      v56 = &v31;
      LODWORD(Context) = a2[15];
      v31 = v17;
      p_Context = &Context;
      v57 = 4LL;
      v59 = 4LL;
      TlgCreateSz(&v60, v18);
      TlgWrite(v19, &unk_1804DE59B, (LPCGUID)(a1[6] + 8LL), 0LL, 0x14u, &pData);
    }
  }
  else
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_1805C2118;
      qword_1805C2118[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805C2130 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2118, qword_1805C2130);
      InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_1805C2118);
    }
    if ( **((_DWORD **)Context + 1) > 2u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x600000000000uLL) )
    {
      v4 = (const CHAR *)*((_QWORD *)a2 + 6);
      v34 = &v30;
      v24 = a2[1];
      v36 = &v24;
      v30 = (LPVOID)0x1000000;
      v35 = 8LL;
      v37 = 4LL;
      TlgCreateSz(&pDesc, v4);
      v5 = (const CHAR *)*((_QWORD *)a2 + 15);
      v39 = a2 + 14;
      v40 = 4LL;
      TlgCreateSz(&v41, v5);
      v6 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v25 = *a2;
      v42 = &v25;
      v43 = 4LL;
      TlgCreateWsz(&v44, v6);
      v7 = (const CHAR *)*((_QWORD *)a2 + 8);
      v26 = a2[6];
      v45 = &v26;
      v46 = 4LL;
      TlgCreateSz(&v47, v7);
      v8 = (const CHAR *)*((_QWORD *)a2 + 10);
      v27 = a2[18];
      v48 = &v27;
      v49 = 4LL;
      TlgCreateSz(&v50, v8);
      TlgCreateWsz(&v51, *((LPCWSTR *)a2 + 11));
      v9 = (const CHAR *)*((_QWORD *)a2 + 13);
      v28 = a2[24];
      p_fPending = &v28;
      v53 = 4LL;
      TlgCreateSz(&v54, v9);
      TlgCreateWsz(&v55, *((LPCWSTR *)a2 + 14));
      TlgWrite(v10, &unk_1804DE486, (LPCGUID)(a1[6] + 8LL), 0LL, 0x11u, &pData);
    }
  }
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    SRWLock);
  v20 = (_DWORD *)a1[6];
  v21 = a2[1];
  if ( v21 != v20[21] && (v21 != v20[19] || (int)v20[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v20 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  return 1;
}
