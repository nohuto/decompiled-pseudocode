/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18007FC10
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18000469C (_TlgWrite.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002AD60 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateSz @ 0x180073E78 (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x180073EB0 (_TlgCreateWsz.c)
 *     ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18007FB1C (-LockExclusive@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x1800801DC (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 */

char __fastcall wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        int *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r10
  const CHAR *v6; // rdx
  const CHAR *v7; // rdx
  const WCHAR *v8; // rdx
  const CHAR *v9; // rdx
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  TraceLoggingHProvider v12; // r10
  __int64 v13; // r10
  const CHAR *v14; // rdx
  const CHAR *v15; // rdx
  const WCHAR *v16; // rdx
  const CHAR *v17; // rdx
  const CHAR *v18; // rdx
  const CHAR *v19; // rdx
  int v20; // ecx
  const CHAR *v21; // rdx
  TraceLoggingHProvider v22; // r10
  _DWORD *v23; // rcx
  int v24; // eax
  int v26; // [rsp+30h] [rbp-D0h] BYREF
  int v27; // [rsp+34h] [rbp-CCh] BYREF
  int v28; // [rsp+38h] [rbp-C8h] BYREF
  int v29; // [rsp+3Ch] [rbp-C4h] BYREF
  int v30; // [rsp+40h] [rbp-C0h] BYREF
  int v31; // [rsp+44h] [rbp-BCh] BYREF
  PSRWLOCK SRWLock; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v34; // [rsp+70h] [rbp-90h]
  __int64 v35; // [rsp+78h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  int *v37; // [rsp+90h] [rbp-70h]
  __int64 v38; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+A0h] [rbp-60h] BYREF
  int *v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+C0h] [rbp-40h] BYREF
  int *v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+E0h] [rbp-20h] BYREF
  int *v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+110h] [rbp+10h] BYREF
  int *v50; // [rsp+120h] [rbp+20h]
  __int64 v51; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+140h] [rbp+40h] BYREF
  int *v54; // [rsp+150h] [rbp+50h]
  __int64 v55; // [rsp+158h] [rbp+58h]
  PSRWLOCK *p_SRWLock; // [rsp+160h] [rbp+60h]
  __int64 v57; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+170h] [rbp+70h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[2]) )
  {
    v13 = wil::details::static_lazy<WindowFrameLogging>::get(
            v4,
            (void (__cdecl *)())lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v13 > 5u
      && (*(_QWORD *)(v13 + 16) & 0x200000000000LL) != 0
      && (*(_QWORD *)(v13 + 24) & 0x200000000000LL) == *(_QWORD *)(v13 + 24) )
    {
      v14 = (const CHAR *)*((_QWORD *)a2 + 6);
      v30 = a2[1];
      v34 = &v30;
      v35 = 4LL;
      TlgCreateSz(&pDesc, v14);
      v15 = (const CHAR *)*((_QWORD *)a2 + 15);
      v37 = a2 + 14;
      v38 = 4LL;
      TlgCreateSz(&v39, v15);
      v16 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v29 = *a2;
      v40 = &v29;
      v41 = 4LL;
      TlgCreateWsz(&v42, v16);
      v17 = (const CHAR *)*((_QWORD *)a2 + 8);
      v28 = a2[6];
      v43 = &v28;
      v44 = 4LL;
      TlgCreateSz(&v45, v17);
      v18 = (const CHAR *)*((_QWORD *)a2 + 10);
      v27 = a2[18];
      v46 = &v27;
      v47 = 4LL;
      TlgCreateSz(&v48, v18);
      TlgCreateWsz(&v49, *((LPCWSTR *)a2 + 11));
      v19 = (const CHAR *)*((_QWORD *)a2 + 13);
      v26 = a2[24];
      v50 = &v26;
      v51 = 4LL;
      TlgCreateSz(&v52, v19);
      TlgCreateWsz(&v53, *((LPCWSTR *)a2 + 14));
      v20 = a2[2];
      v21 = (const CHAR *)*((_QWORD *)a2 + 5);
      v54 = &v31;
      LODWORD(SRWLock) = a2[15];
      v31 = v20;
      p_SRWLock = &SRWLock;
      v55 = 4LL;
      v57 = 4LL;
      TlgCreateSz(&v58, v21);
      TlgWrite(v22, &unk_1800C26E6, (LPCGUID)(a1[6] + 8LL), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    v5 = wil::details::static_lazy<WindowFrameLogging>::get(
           v4,
           (void (__cdecl *)())lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v5 > 5u
      && (*(_QWORD *)(v5 + 16) & 0x200000000000LL) != 0
      && (*(_QWORD *)(v5 + 24) & 0x200000000000LL) == *(_QWORD *)(v5 + 24) )
    {
      v6 = (const CHAR *)*((_QWORD *)a2 + 6);
      v26 = a2[1];
      v34 = &v26;
      v35 = 4LL;
      TlgCreateSz(&pDesc, v6);
      v7 = (const CHAR *)*((_QWORD *)a2 + 15);
      v37 = a2 + 14;
      v38 = 4LL;
      TlgCreateSz(&v39, v7);
      v8 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v27 = *a2;
      v40 = &v27;
      v41 = 4LL;
      TlgCreateWsz(&v42, v8);
      v9 = (const CHAR *)*((_QWORD *)a2 + 8);
      v28 = a2[6];
      v43 = &v28;
      v44 = 4LL;
      TlgCreateSz(&v45, v9);
      v10 = (const CHAR *)*((_QWORD *)a2 + 10);
      v29 = a2[18];
      v46 = &v29;
      v47 = 4LL;
      TlgCreateSz(&v48, v10);
      TlgCreateWsz(&v49, *((LPCWSTR *)a2 + 11));
      v11 = (const CHAR *)*((_QWORD *)a2 + 13);
      v30 = a2[24];
      v50 = &v30;
      v51 = 4LL;
      TlgCreateSz(&v52, v11);
      TlgCreateWsz(&v53, *((LPCWSTR *)a2 + 14));
      TlgWrite(v12, &unk_1800C25E1, (LPCGUID)(a1[6] + 8LL), 0LL, 0x10u, &pData);
    }
  }
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &SRWLock);
  v23 = (_DWORD *)a1[6];
  v24 = a2[1];
  if ( v24 != v23[21] && (v24 != v23[19] || (int)v23[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v23 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 1;
}
