/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180190B10
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18001666C (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18003B218 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     _TlgCreateSz @ 0x1800800E8 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x18011EF44 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x18011F2C4 (--2@YAPEAX_KPEAX@Z.c)
 *     ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1801905B0 (-LockExclusive@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

char __fastcall wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
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
  TraceLoggingHProvider v13; // r10
  __int64 v14; // rcx
  wil::TraceLoggingProvider *v15; // rax
  _QWORD *v16; // rcx
  const CHAR *v17; // rdx
  const CHAR *v18; // rdx
  const WCHAR *v19; // rdx
  const CHAR *v20; // rdx
  const CHAR *v21; // rdx
  const CHAR *v22; // rdx
  int v23; // ecx
  const CHAR *v24; // rdx
  TraceLoggingHProvider v25; // r10
  _DWORD *v26; // rcx
  int v27; // eax
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  int v30; // [rsp+34h] [rbp-CCh] BYREF
  int v31; // [rsp+38h] [rbp-C8h] BYREF
  int v32; // [rsp+3Ch] [rbp-C4h] BYREF
  int v33; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL v34; // [rsp+44h] [rbp-BCh] BYREF
  LPVOID Context; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID v36; // [rsp+50h] [rbp-B0h] BYREF
  int v37; // [rsp+58h] [rbp-A8h] BYREF
  RTL_SRWLOCK *v38[2]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  LPVOID *v40; // [rsp+90h] [rbp-70h]
  __int64 v41; // [rsp+98h] [rbp-68h]
  int *v42; // [rsp+A0h] [rbp-60h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-50h] BYREF
  int *v45; // [rsp+C0h] [rbp-40h]
  __int64 v46; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+D0h] [rbp-30h] BYREF
  int *v48; // [rsp+E0h] [rbp-20h]
  __int64 v49; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+F0h] [rbp-10h] BYREF
  int *v51; // [rsp+100h] [rbp+0h]
  __int64 v52; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+110h] [rbp+10h] BYREF
  int *v54; // [rsp+120h] [rbp+20h]
  __int64 v55; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+140h] [rbp+40h] BYREF
  WINBOOL *p_fPending; // [rsp+150h] [rbp+50h]
  __int64 v59; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+170h] [rbp+70h] BYREF
  int *v62; // [rsp+180h] [rbp+80h]
  __int64 v63; // [rsp+188h] [rbp+88h]
  LPVOID *p_Context; // [rsp+190h] [rbp+90h]
  __int64 v65; // [rsp+198h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+1A0h] [rbp+A0h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[2]) )
  {
    v36 = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v34, &v36) && v34 )
    {
      v36 = &unk_1805C2098;
      v15 = (wil::TraceLoggingProvider *)operator new(v14, &unk_1805C2098);
      wil::TraceLoggingProvider::TraceLoggingProvider(v15);
      *v16 = &ImmersiveIconsLogging::`vftable';
      v16[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_1805C2098, qword_1805C20B0);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_1805C2098);
    }
    if ( **((_DWORD **)v36 + 1) > 2u && TlgKeywordOn(*((TraceLoggingHProvider *)v36 + 1), 0x400000000000uLL) )
    {
      v17 = (const CHAR *)*((_QWORD *)a2 + 6);
      v40 = (LPVOID *)v38;
      v33 = a2[1];
      v42 = &v33;
      v38[0] = (RTL_SRWLOCK *)0x1000000;
      v41 = 8LL;
      v43 = 4LL;
      TlgCreateSz(&pDesc, v17);
      v18 = (const CHAR *)*((_QWORD *)a2 + 15);
      v45 = a2 + 14;
      v46 = 4LL;
      TlgCreateSz(&v47, v18);
      v19 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v32 = *a2;
      v48 = &v32;
      v49 = 4LL;
      TlgCreateWsz(&v50, v19);
      v20 = (const CHAR *)*((_QWORD *)a2 + 8);
      v31 = a2[6];
      v51 = &v31;
      v52 = 4LL;
      TlgCreateSz(&v53, v20);
      v21 = (const CHAR *)*((_QWORD *)a2 + 10);
      v30 = a2[18];
      v54 = &v30;
      v55 = 4LL;
      TlgCreateSz(&v56, v21);
      TlgCreateWsz(&v57, *((LPCWSTR *)a2 + 11));
      v22 = (const CHAR *)*((_QWORD *)a2 + 13);
      fPending = a2[24];
      p_fPending = &fPending;
      v59 = 4LL;
      TlgCreateSz(&v60, v22);
      TlgCreateWsz(&v61, *((LPCWSTR *)a2 + 14));
      v23 = a2[2];
      v24 = (const CHAR *)*((_QWORD *)a2 + 5);
      v62 = &v37;
      LODWORD(Context) = a2[15];
      v37 = v23;
      p_Context = &Context;
      v63 = 4LL;
      v65 = 4LL;
      TlgCreateSz(&v66, v24);
      TlgWrite(v25, &unk_1804DE59B, (LPCGUID)(a1[6] + 8LL), 0LL, 0x14u, &pData);
    }
  }
  else
  {
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
    if ( **((_DWORD **)Context + 1) > 2u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x600000000000uLL) )
    {
      v7 = (const CHAR *)*((_QWORD *)a2 + 6);
      v40 = &v36;
      v30 = a2[1];
      v42 = &v30;
      v36 = (LPVOID)0x1000000;
      v41 = 8LL;
      v43 = 4LL;
      TlgCreateSz(&pDesc, v7);
      v8 = (const CHAR *)*((_QWORD *)a2 + 15);
      v45 = a2 + 14;
      v46 = 4LL;
      TlgCreateSz(&v47, v8);
      v9 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v31 = *a2;
      v48 = &v31;
      v49 = 4LL;
      TlgCreateWsz(&v50, v9);
      v10 = (const CHAR *)*((_QWORD *)a2 + 8);
      v32 = a2[6];
      v51 = &v32;
      v52 = 4LL;
      TlgCreateSz(&v53, v10);
      v11 = (const CHAR *)*((_QWORD *)a2 + 10);
      v33 = a2[18];
      v54 = &v33;
      v55 = 4LL;
      TlgCreateSz(&v56, v11);
      TlgCreateWsz(&v57, *((LPCWSTR *)a2 + 11));
      v12 = (const CHAR *)*((_QWORD *)a2 + 13);
      v34 = a2[24];
      p_fPending = &v34;
      v59 = 4LL;
      TlgCreateSz(&v60, v12);
      TlgCreateWsz(&v61, *((LPCWSTR *)a2 + 14));
      TlgWrite(v13, &unk_1804DE486, (LPCGUID)(a1[6] + 8LL), 0LL, 0x11u, &pData);
    }
  }
  wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    v38);
  v26 = (_DWORD *)a1[6];
  v27 = a2[1];
  if ( v27 != v26[21] && (v27 != v26[19] || (int)v26[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v26 + 20), (const struct wil::FailureInfo *)a2);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(v38);
  return 1;
}
