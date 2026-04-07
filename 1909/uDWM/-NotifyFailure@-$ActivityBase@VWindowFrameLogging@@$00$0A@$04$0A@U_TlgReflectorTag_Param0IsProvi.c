/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18008D5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x1800081E0 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180008A2C (-LockExclusive@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     _TlgWrite @ 0x180008F5C (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateSz @ 0x18007A4C8 (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x18007A500 (_TlgCreateWsz.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180086554 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 */

char __fastcall wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
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
  const CHAR *v13; // rdx
  const CHAR *v14; // rdx
  const WCHAR *v15; // rdx
  const CHAR *v16; // rdx
  const CHAR *v17; // rdx
  const CHAR *v18; // rdx
  int v19; // ecx
  const CHAR *v20; // rdx
  TraceLoggingHProvider v21; // r10
  _DWORD *v22; // rcx
  int v23; // eax
  int v25; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+34h] [rbp-CCh] BYREF
  int v27; // [rsp+38h] [rbp-C8h] BYREF
  int v28; // [rsp+3Ch] [rbp-C4h] BYREF
  int v29; // [rsp+40h] [rbp-C0h] BYREF
  int v30; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v31; // [rsp+48h] [rbp-B8h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  PSRWLOCK *v34; // [rsp+80h] [rbp-80h]
  __int64 v35; // [rsp+88h] [rbp-78h]
  int *v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-60h] BYREF
  int *v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+C0h] [rbp-40h] BYREF
  int *v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+E0h] [rbp-20h] BYREF
  int *v45; // [rsp+F0h] [rbp-10h]
  __int64 v46; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+100h] [rbp+0h] BYREF
  int *v48; // [rsp+110h] [rbp+10h]
  __int64 v49; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+130h] [rbp+30h] BYREF
  int *v52; // [rsp+140h] [rbp+40h]
  __int64 v53; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+160h] [rbp+60h] BYREF
  int *v56; // [rsp+170h] [rbp+70h]
  __int64 v57; // [rsp+178h] [rbp+78h]
  __int64 *v58; // [rsp+180h] [rbp+80h]
  __int64 v59; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+190h] [rbp+90h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[2]) )
  {
    if ( *(_DWORD *)wil::details::static_lazy<WindowFrameLogging>::get(
                      v4,
                      (void (__cdecl *)())lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)[1] > 2u )
    {
      v13 = (const CHAR *)*((_QWORD *)a2 + 6);
      v34 = SRWLock;
      v29 = a2[1];
      v36 = &v29;
      SRWLock[0] = (PSRWLOCK)0x1000000;
      v35 = 8LL;
      v37 = 4LL;
      TlgCreateSz(&pDesc, v13);
      v14 = (const CHAR *)*((_QWORD *)a2 + 15);
      v39 = a2 + 14;
      v40 = 4LL;
      TlgCreateSz(&v41, v14);
      v15 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v28 = *a2;
      v42 = &v28;
      v43 = 4LL;
      TlgCreateWsz(&v44, v15);
      v16 = (const CHAR *)*((_QWORD *)a2 + 8);
      v27 = a2[6];
      v45 = &v27;
      v46 = 4LL;
      TlgCreateSz(&v47, v16);
      v17 = (const CHAR *)*((_QWORD *)a2 + 10);
      v26 = a2[18];
      v48 = &v26;
      v49 = 4LL;
      TlgCreateSz(&v50, v17);
      TlgCreateWsz(&v51, *((LPCWSTR *)a2 + 11));
      v18 = (const CHAR *)*((_QWORD *)a2 + 13);
      v25 = a2[24];
      v52 = &v25;
      v53 = 4LL;
      TlgCreateSz(&v54, v18);
      TlgCreateWsz(&v55, *((LPCWSTR *)a2 + 14));
      v19 = a2[2];
      v20 = (const CHAR *)*((_QWORD *)a2 + 5);
      v56 = &v30;
      LODWORD(v31) = a2[15];
      v30 = v19;
      v58 = &v31;
      v57 = 4LL;
      v59 = 4LL;
      TlgCreateSz(&v60, v20);
      TlgWrite(v21, &unk_1800C8D84, (LPCGUID)(a1[6] + 8LL), 0LL, 0x14u, &pData);
    }
  }
  else
  {
    v5 = wil::details::static_lazy<WindowFrameLogging>::get(
           v4,
           (void (__cdecl *)())lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v5 > 2u
      && (*(_QWORD *)(v5 + 16) & 0x200000000000LL) != 0
      && (*(_QWORD *)(v5 + 24) & 0x200000000000LL) == *(_QWORD *)(v5 + 24) )
    {
      v6 = (const CHAR *)*((_QWORD *)a2 + 6);
      v34 = (PSRWLOCK *)&v31;
      v25 = a2[1];
      v36 = &v25;
      v31 = 0x1000000LL;
      v35 = 8LL;
      v37 = 4LL;
      TlgCreateSz(&pDesc, v6);
      v7 = (const CHAR *)*((_QWORD *)a2 + 15);
      v39 = a2 + 14;
      v40 = 4LL;
      TlgCreateSz(&v41, v7);
      v8 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v26 = *a2;
      v42 = &v26;
      v43 = 4LL;
      TlgCreateWsz(&v44, v8);
      v9 = (const CHAR *)*((_QWORD *)a2 + 8);
      v27 = a2[6];
      v45 = &v27;
      v46 = 4LL;
      TlgCreateSz(&v47, v9);
      v10 = (const CHAR *)*((_QWORD *)a2 + 10);
      v28 = a2[18];
      v48 = &v28;
      v49 = 4LL;
      TlgCreateSz(&v50, v10);
      TlgCreateWsz(&v51, *((LPCWSTR *)a2 + 11));
      v11 = (const CHAR *)*((_QWORD *)a2 + 13);
      v29 = a2[24];
      v52 = &v29;
      v53 = 4LL;
      TlgCreateSz(&v54, v11);
      TlgCreateWsz(&v55, *((LPCWSTR *)a2 + 14));
      TlgWrite(v12, &unk_1800C8839, (LPCGUID)(a1[6] + 8LL), 0LL, 0x11u, &pData);
    }
  }
  wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    SRWLock);
  v22 = (_DWORD *)a1[6];
  v23 = a2[1];
  if ( v23 != v22[21] && (v23 != v22[19] || (int)v22[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v22 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  return 1;
}
