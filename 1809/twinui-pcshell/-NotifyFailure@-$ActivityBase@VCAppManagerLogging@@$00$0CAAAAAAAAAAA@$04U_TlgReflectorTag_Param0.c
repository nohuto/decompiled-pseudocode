/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800EFED0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800125C0 (-LockExclusive@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorT.c)
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18001BAD0 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x18006C010 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

char __fastcall wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
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
  PSRWLOCK SRWLock; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v33; // [rsp+80h] [rbp-80h]
  __int64 v34; // [rsp+88h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  int *v36; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+B0h] [rbp-50h] BYREF
  int *v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+D0h] [rbp-30h] BYREF
  int *v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+F0h] [rbp-10h] BYREF
  int *v45; // [rsp+100h] [rbp+0h]
  __int64 v46; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+120h] [rbp+20h] BYREF
  WINBOOL *p_fPending; // [rsp+130h] [rbp+30h]
  __int64 v50; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+150h] [rbp+50h] BYREF
  int *v53; // [rsp+160h] [rbp+60h]
  __int64 v54; // [rsp+168h] [rbp+68h]
  LPVOID *p_Context; // [rsp+170h] [rbp+70h]
  __int64 v56; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+180h] [rbp+80h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[2]) )
  {
    SRWLock = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v28, (LPVOID *)&SRWLock) && v28 )
    {
      SRWLock = (PSRWLOCK)qword_18050F7D0;
      qword_18050F7D0[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F7E8 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F7D0, qword_18050F7E8);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18050F7D0);
    }
    if ( *(_DWORD *)SRWLock[1].Ptr > 5u && TlgKeywordOn((TraceLoggingHProvider)SRWLock[1].Ptr, 0x200000000000uLL) )
    {
      v11 = (const CHAR *)*((_QWORD *)a2 + 6);
      v27 = a2[1];
      v33 = &v27;
      v34 = 4LL;
      TlgCreateSz(&pDesc, v11);
      v12 = (const CHAR *)*((_QWORD *)a2 + 15);
      v36 = a2 + 14;
      v37 = 4LL;
      TlgCreateSz(&v38, v12);
      v13 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v26 = *a2;
      v39 = &v26;
      v40 = 4LL;
      TlgCreateWsz(&v41, v13);
      v14 = (const CHAR *)*((_QWORD *)a2 + 8);
      v25 = a2[6];
      v42 = &v25;
      v43 = 4LL;
      TlgCreateSz(&v44, v14);
      v15 = (const CHAR *)*((_QWORD *)a2 + 10);
      v24 = a2[18];
      v45 = &v24;
      v46 = 4LL;
      TlgCreateSz(&v47, v15);
      TlgCreateWsz(&v48, *((LPCWSTR *)a2 + 11));
      v16 = (const CHAR *)*((_QWORD *)a2 + 13);
      fPending = a2[24];
      p_fPending = &fPending;
      v50 = 4LL;
      TlgCreateSz(&v51, v16);
      TlgCreateWsz(&v52, *((LPCWSTR *)a2 + 14));
      v17 = a2[2];
      v18 = (const CHAR *)*((_QWORD *)a2 + 5);
      v53 = &v31;
      LODWORD(Context) = a2[15];
      v31 = v17;
      p_Context = &Context;
      v54 = 4LL;
      v56 = 4LL;
      TlgCreateSz(&v57, v18);
      TlgWrite(v19, &unk_1804474B8, (LPCGUID)(a1[6] + 8LL), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_18050F7D0;
      qword_18050F7D0[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F7E8 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F7D0, qword_18050F7E8);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18050F7D0);
    }
    if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
    {
      v4 = (const CHAR *)*((_QWORD *)a2 + 6);
      v24 = a2[1];
      v33 = &v24;
      v34 = 4LL;
      TlgCreateSz(&pDesc, v4);
      v5 = (const CHAR *)*((_QWORD *)a2 + 15);
      v36 = a2 + 14;
      v37 = 4LL;
      TlgCreateSz(&v38, v5);
      v6 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v25 = *a2;
      v39 = &v25;
      v40 = 4LL;
      TlgCreateWsz(&v41, v6);
      v7 = (const CHAR *)*((_QWORD *)a2 + 8);
      v26 = a2[6];
      v42 = &v26;
      v43 = 4LL;
      TlgCreateSz(&v44, v7);
      v8 = (const CHAR *)*((_QWORD *)a2 + 10);
      v27 = a2[18];
      v45 = &v27;
      v46 = 4LL;
      TlgCreateSz(&v47, v8);
      TlgCreateWsz(&v48, *((LPCWSTR *)a2 + 11));
      v9 = (const CHAR *)*((_QWORD *)a2 + 13);
      v28 = a2[24];
      p_fPending = &v28;
      v50 = 4LL;
      TlgCreateSz(&v51, v9);
      TlgCreateWsz(&v52, *((LPCWSTR *)a2 + 14));
      TlgWrite(v10, &unk_1804473B3, (LPCGUID)(a1[6] + 8LL), 0LL, 0x10u, &pData);
    }
  }
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &SRWLock);
  v20 = (_DWORD *)a1[6];
  v21 = a2[1];
  if ( v21 != v20[21] && (v21 != v20[19] || (int)v20[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v20 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 1;
}
