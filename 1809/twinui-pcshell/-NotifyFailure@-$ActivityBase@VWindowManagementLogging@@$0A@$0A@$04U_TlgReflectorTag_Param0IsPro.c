/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180306560
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18001BAD0 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002F628 (-LockExclusive@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18002F694 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x18006C010 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1800EB014 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 */

char __fastcall wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        __int64 a1,
        int *a2)
{
  int v4; // edx
  int v5; // eax
  int v6; // r11d
  const CHAR *v7; // rdx
  const CHAR *v8; // rdx
  int v9; // r11d
  int v10; // ecx
  const WCHAR *v11; // rdx
  int v12; // r11d
  int v13; // ecx
  const CHAR *v14; // rdx
  int v15; // r11d
  int v16; // ecx
  const CHAR *v17; // rdx
  int v18; // r11d
  int v19; // ecx
  const CHAR *v20; // rdx
  int v21; // r11d
  int v22; // ecx
  const CHAR *v23; // rdx
  int v24; // r11d
  TraceLoggingHProvider v25; // r10
  _DWORD *v26; // rcx
  int v27; // eax
  LPVOID Context; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-C8h] BYREF
  int v31; // [rsp+3Ch] [rbp-C4h] BYREF
  int v32; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+44h] [rbp-BCh] BYREF
  int v34; // [rsp+48h] [rbp-B8h] BYREF
  int v35; // [rsp+4Ch] [rbp-B4h] BYREF
  int v36; // [rsp+50h] [rbp-B0h] BYREF
  int v37; // [rsp+54h] [rbp-ACh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v39; // [rsp+80h] [rbp-80h]
  int v40; // [rsp+88h] [rbp-78h]
  int v41; // [rsp+8Ch] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  int *v43; // [rsp+A0h] [rbp-60h]
  int v44; // [rsp+A8h] [rbp-58h]
  int v45; // [rsp+ACh] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+B0h] [rbp-50h] BYREF
  int *v47; // [rsp+C0h] [rbp-40h]
  int v48; // [rsp+C8h] [rbp-38h]
  int v49; // [rsp+CCh] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+D0h] [rbp-30h] BYREF
  int *v51; // [rsp+E0h] [rbp-20h]
  int v52; // [rsp+E8h] [rbp-18h]
  int v53; // [rsp+ECh] [rbp-14h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+F0h] [rbp-10h] BYREF
  int *v55; // [rsp+100h] [rbp+0h]
  int v56; // [rsp+108h] [rbp+8h]
  int v57; // [rsp+10Ch] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+120h] [rbp+20h] BYREF
  int *v60; // [rsp+130h] [rbp+30h]
  int v61; // [rsp+138h] [rbp+38h]
  int v62; // [rsp+13Ch] [rbp+3Ch]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+150h] [rbp+50h] BYREF
  int *v65; // [rsp+160h] [rbp+60h]
  int v66; // [rsp+168h] [rbp+68h]
  int v67; // [rsp+16Ch] [rbp+6Ch]
  int *v68; // [rsp+170h] [rbp+70h]
  int v69; // [rsp+178h] [rbp+78h]
  int v70; // [rsp+17Ch] [rbp+7Ch]
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+180h] [rbp+80h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18050F8E8;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_18050F8E8);
    qword_18050F8E8 = &ImmersiveIconsLogging::`vftable';
    qword_18050F900 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050F8E8, qword_18050F900);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18050F8E8);
  }
  if ( **((_DWORD **)Context + 1) > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0LL) )
  {
    v5 = a2[1];
    v6 = v4 + 4;
    v41 &= v4;
    v7 = (const CHAR *)*((_QWORD *)a2 + 6);
    v31 = v5;
    v39 = &v31;
    v40 = v6;
    TlgCreateSz(&pDesc, v7);
    v8 = (const CHAR *)*((_QWORD *)a2 + 15);
    v45 = 0;
    v43 = a2 + 14;
    v44 = v9;
    TlgCreateSz(&v46, v8);
    v10 = *a2;
    v11 = (const WCHAR *)*((_QWORD *)a2 + 2);
    v49 = 0;
    v32 = v10;
    v47 = &v32;
    v48 = v12;
    TlgCreateWsz(&v50, v11);
    v13 = a2[6];
    v14 = (const CHAR *)*((_QWORD *)a2 + 8);
    v53 = 0;
    v33 = v13;
    v51 = &v33;
    v52 = v15;
    TlgCreateSz(&v54, v14);
    v16 = a2[18];
    v17 = (const CHAR *)*((_QWORD *)a2 + 10);
    v57 = 0;
    v34 = v16;
    v55 = &v34;
    v56 = v18;
    TlgCreateSz(&v58, v17);
    TlgCreateWsz(&v59, *((LPCWSTR *)a2 + 11));
    v19 = a2[24];
    v20 = (const CHAR *)*((_QWORD *)a2 + 13);
    v62 = 0;
    v35 = v19;
    v60 = &v35;
    v61 = v21;
    TlgCreateSz(&v63, v20);
    TlgCreateWsz(&v64, *((LPCWSTR *)a2 + 14));
    v22 = a2[2];
    v67 = 0;
    v70 = 0;
    v23 = (const CHAR *)*((_QWORD *)a2 + 5);
    v65 = &v36;
    v37 = a2[15];
    v36 = v22;
    v68 = &v37;
    v66 = v24;
    v69 = v24;
    TlgCreateSz(&v71, v23);
    TlgWrite(v25, &unk_180447A98, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x13u, &pData);
  }
  wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    (__int64)&Context);
  v26 = *(_DWORD **)(a1 + 48);
  v27 = a2[1];
  if ( v27 != v26[21] && (v27 != v26[19] || (int)v26[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v26 + 20), (const struct wil::FailureInfo *)a2);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&Context);
  return 1;
}
