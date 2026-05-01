/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180215F40
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180013B04 (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18001BAD0 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x18006C010 (_TlgCreateSz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

char __fastcall wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        __int64 a1,
        int *a2)
{
  int v4; // eax
  const CHAR *v5; // rdx
  const CHAR *v6; // rdx
  int v7; // r11d
  int v8; // ecx
  const WCHAR *v9; // rdx
  int v10; // r11d
  int v11; // ecx
  const CHAR *v12; // rdx
  int v13; // r11d
  int v14; // ecx
  const CHAR *v15; // rdx
  int v16; // r11d
  int v17; // ecx
  const CHAR *v18; // rdx
  int v19; // r11d
  int v20; // ecx
  const CHAR *v21; // rdx
  int v22; // r11d
  TraceLoggingHProvider v23; // r10
  _DWORD *v24; // rcx
  int v25; // eax
  LPVOID Context; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-C8h] BYREF
  int v29; // [rsp+3Ch] [rbp-C4h] BYREF
  int v30; // [rsp+40h] [rbp-C0h] BYREF
  int v31; // [rsp+44h] [rbp-BCh] BYREF
  int v32; // [rsp+48h] [rbp-B8h] BYREF
  int v33; // [rsp+4Ch] [rbp-B4h] BYREF
  int v34; // [rsp+50h] [rbp-B0h] BYREF
  int v35; // [rsp+54h] [rbp-ACh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v37; // [rsp+80h] [rbp-80h]
  int v38; // [rsp+88h] [rbp-78h]
  int v39; // [rsp+8Ch] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  int *v41; // [rsp+A0h] [rbp-60h]
  int v42; // [rsp+A8h] [rbp-58h]
  int v43; // [rsp+ACh] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+B0h] [rbp-50h] BYREF
  int *v45; // [rsp+C0h] [rbp-40h]
  int v46; // [rsp+C8h] [rbp-38h]
  int v47; // [rsp+CCh] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+D0h] [rbp-30h] BYREF
  int *v49; // [rsp+E0h] [rbp-20h]
  int v50; // [rsp+E8h] [rbp-18h]
  int v51; // [rsp+ECh] [rbp-14h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+F0h] [rbp-10h] BYREF
  int *v53; // [rsp+100h] [rbp+0h]
  int v54; // [rsp+108h] [rbp+8h]
  int v55; // [rsp+10Ch] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+120h] [rbp+20h] BYREF
  int *v58; // [rsp+130h] [rbp+30h]
  int v59; // [rsp+138h] [rbp+38h]
  int v60; // [rsp+13Ch] [rbp+3Ch]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+150h] [rbp+50h] BYREF
  int *v63; // [rsp+160h] [rbp+60h]
  int v64; // [rsp+168h] [rbp+68h]
  int v65; // [rsp+16Ch] [rbp+6Ch]
  int *v66; // [rsp+170h] [rbp+70h]
  int v67; // [rsp+178h] [rbp+78h]
  int v68; // [rsp+17Ch] [rbp+7Ch]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+180h] [rbp+80h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18050FB08;
    qword_18050FB08 = &ShellScreenClippingLogging::`vftable';
    qword_18050FB20 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050FB08, qword_18050FB20);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &qword_18050FB08);
  }
  if ( **((_DWORD **)Context + 1) > 5u )
  {
    v4 = a2[1];
    v5 = (const CHAR *)*((_QWORD *)a2 + 6);
    v39 = 0;
    v29 = v4;
    v37 = &v29;
    v38 = 4;
    TlgCreateSz(&pDesc, v5);
    v6 = (const CHAR *)*((_QWORD *)a2 + 15);
    v43 = 0;
    v41 = a2 + 14;
    v42 = v7;
    TlgCreateSz(&v44, v6);
    v8 = *a2;
    v9 = (const WCHAR *)*((_QWORD *)a2 + 2);
    v47 = 0;
    v30 = v8;
    v45 = &v30;
    v46 = v10;
    TlgCreateWsz(&v48, v9);
    v11 = a2[6];
    v12 = (const CHAR *)*((_QWORD *)a2 + 8);
    v51 = 0;
    v31 = v11;
    v49 = &v31;
    v50 = v13;
    TlgCreateSz(&v52, v12);
    v14 = a2[18];
    v15 = (const CHAR *)*((_QWORD *)a2 + 10);
    v55 = 0;
    v32 = v14;
    v53 = &v32;
    v54 = v16;
    TlgCreateSz(&v56, v15);
    TlgCreateWsz(&v57, *((LPCWSTR *)a2 + 11));
    v17 = a2[24];
    v18 = (const CHAR *)*((_QWORD *)a2 + 13);
    v60 = 0;
    v33 = v17;
    v58 = &v33;
    v59 = v19;
    TlgCreateSz(&v61, v18);
    TlgCreateWsz(&v62, *((LPCWSTR *)a2 + 14));
    v20 = a2[2];
    v65 = 0;
    v68 = 0;
    v21 = (const CHAR *)*((_QWORD *)a2 + 5);
    v63 = &v34;
    v35 = a2[15];
    v34 = v20;
    v66 = &v35;
    v64 = v22;
    v67 = v22;
    TlgCreateSz(&v69, v21);
    TlgWrite(v23, &unk_180447A98, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x13u, &pData);
  }
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    (RTL_SRWLOCK **)&Context);
  v24 = *(_DWORD **)(a1 + 48);
  v25 = a2[1];
  if ( v25 != v24[21] && (v25 != v24[19] || (int)v24[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v24 + 20), (const struct wil::FailureInfo *)a2);
  if ( Context )
    ReleaseSRWLockExclusive((PSRWLOCK)Context);
  return 1;
}
