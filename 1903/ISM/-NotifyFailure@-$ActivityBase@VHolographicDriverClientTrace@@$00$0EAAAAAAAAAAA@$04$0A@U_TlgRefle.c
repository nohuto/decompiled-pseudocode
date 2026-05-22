/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18015A570
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180051CAC (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     _TlgCreateSz @ 0x18005319C (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x1800531D4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?LockExclusive@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18009D8B4 (-LockExclusive@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161814 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

char __fastcall wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        int *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  const CHAR *v6; // rdx
  const CHAR *v7; // rdx
  const WCHAR *v8; // rdx
  const CHAR *v9; // rdx
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  TraceLoggingHProvider v12; // r10
  __int64 v13; // rax
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
  __int64 v32; // [rsp+48h] [rbp-B8h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  PSRWLOCK *v35; // [rsp+80h] [rbp-80h]
  __int64 v36; // [rsp+88h] [rbp-78h]
  int *v37; // [rsp+90h] [rbp-70h]
  __int64 v38; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-60h] BYREF
  int *v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+C0h] [rbp-40h] BYREF
  int *v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+E0h] [rbp-20h] BYREF
  int *v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+100h] [rbp+0h] BYREF
  int *v49; // [rsp+110h] [rbp+10h]
  __int64 v50; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+130h] [rbp+30h] BYREF
  int *v53; // [rsp+140h] [rbp+40h]
  __int64 v54; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+160h] [rbp+60h] BYREF
  int *v57; // [rsp+170h] [rbp+70h]
  __int64 v58; // [rsp+178h] [rbp+78h]
  __int64 *v59; // [rsp+180h] [rbp+80h]
  __int64 v60; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+190h] [rbp+90h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[2]) )
  {
    v13 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
            v4,
            lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    if ( **(_DWORD **)(v13 + 8) > 2u && TlgKeywordOn(*(TraceLoggingHProvider *)(v13 + 8), 0x400000000000uLL) )
    {
      v14 = (const CHAR *)*((_QWORD *)a2 + 6);
      v35 = SRWLock;
      v30 = a2[1];
      v37 = &v30;
      SRWLock[0] = (PSRWLOCK)0x1000000;
      v36 = 8LL;
      v38 = 4LL;
      TlgCreateSz(&pDesc, v14);
      v15 = (const CHAR *)*((_QWORD *)a2 + 15);
      v40 = a2 + 14;
      v41 = 4LL;
      TlgCreateSz(&v42, v15);
      v16 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v29 = *a2;
      v43 = &v29;
      v44 = 4LL;
      TlgCreateWsz(&v45, v16);
      v17 = (const CHAR *)*((_QWORD *)a2 + 8);
      v28 = a2[6];
      v46 = &v28;
      v47 = 4LL;
      TlgCreateSz(&v48, v17);
      v18 = (const CHAR *)*((_QWORD *)a2 + 10);
      v27 = a2[18];
      v49 = &v27;
      v50 = 4LL;
      TlgCreateSz(&v51, v18);
      TlgCreateWsz(&v52, *((LPCWSTR *)a2 + 11));
      v19 = (const CHAR *)*((_QWORD *)a2 + 13);
      v26 = a2[24];
      v53 = &v26;
      v54 = 4LL;
      TlgCreateSz(&v55, v19);
      TlgCreateWsz(&v56, *((LPCWSTR *)a2 + 14));
      v20 = a2[2];
      v21 = (const CHAR *)*((_QWORD *)a2 + 5);
      v57 = &v31;
      LODWORD(v32) = a2[15];
      v31 = v20;
      v59 = &v32;
      v58 = 4LL;
      v60 = 4LL;
      TlgCreateSz(&v61, v21);
      TlgWrite(v22, &unk_18019C77A, (LPCGUID)(a1[6] + 8LL), 0LL, 0x14u, &pData);
    }
  }
  else
  {
    v5 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
           v4,
           lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    if ( **(_DWORD **)(v5 + 8) > 2u && TlgKeywordOn(*(TraceLoggingHProvider *)(v5 + 8), 0x600000000000uLL) )
    {
      v6 = (const CHAR *)*((_QWORD *)a2 + 6);
      v35 = (PSRWLOCK *)&v32;
      v26 = a2[1];
      v37 = &v26;
      v32 = 0x1000000LL;
      v36 = 8LL;
      v38 = 4LL;
      TlgCreateSz(&pDesc, v6);
      v7 = (const CHAR *)*((_QWORD *)a2 + 15);
      v40 = a2 + 14;
      v41 = 4LL;
      TlgCreateSz(&v42, v7);
      v8 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v27 = *a2;
      v43 = &v27;
      v44 = 4LL;
      TlgCreateWsz(&v45, v8);
      v9 = (const CHAR *)*((_QWORD *)a2 + 8);
      v28 = a2[6];
      v46 = &v28;
      v47 = 4LL;
      TlgCreateSz(&v48, v9);
      v10 = (const CHAR *)*((_QWORD *)a2 + 10);
      v29 = a2[18];
      v49 = &v29;
      v50 = 4LL;
      TlgCreateSz(&v51, v10);
      TlgCreateWsz(&v52, *((LPCWSTR *)a2 + 11));
      v11 = (const CHAR *)*((_QWORD *)a2 + 13);
      v30 = a2[24];
      v53 = &v30;
      v54 = 4LL;
      TlgCreateSz(&v55, v11);
      TlgCreateWsz(&v56, *((LPCWSTR *)a2 + 14));
      TlgWrite(v12, &unk_18019C665, (LPCGUID)(a1[6] + 8LL), 0LL, 0x11u, &pData);
    }
  }
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    SRWLock);
  v23 = (_DWORD *)a1[6];
  v24 = a2[1];
  if ( v24 != v23[21] && (v24 != v23[19] || (int)v23[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v23 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  return 1;
}
