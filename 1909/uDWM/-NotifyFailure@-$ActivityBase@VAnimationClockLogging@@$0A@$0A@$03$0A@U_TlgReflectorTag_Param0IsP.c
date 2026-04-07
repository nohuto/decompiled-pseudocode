/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800B2880
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x18000889C (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180008A2C (-LockExclusive@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     _TlgWrite @ 0x180008F5C (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x18007A4C8 (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x18007A500 (_TlgCreateWsz.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180086554 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 */

char __fastcall wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        __int64 a1,
        int *a2)
{
  const CHAR *v4; // rdx
  const CHAR *v5; // rdx
  int v6; // r11d
  int v7; // ecx
  const WCHAR *v8; // rdx
  int v9; // r11d
  int v10; // ecx
  const CHAR *v11; // rdx
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
  TraceLoggingHProvider v22; // r10
  _DWORD *v23; // rcx
  int v24; // eax
  int v26; // [rsp+30h] [rbp-D0h] BYREF
  int v27; // [rsp+34h] [rbp-CCh] BYREF
  int v28; // [rsp+38h] [rbp-C8h] BYREF
  int v29; // [rsp+3Ch] [rbp-C4h] BYREF
  int v30; // [rsp+40h] [rbp-C0h] BYREF
  int v31; // [rsp+44h] [rbp-BCh] BYREF
  int v32; // [rsp+48h] [rbp-B8h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  PSRWLOCK *v35; // [rsp+80h] [rbp-80h]
  int v36; // [rsp+88h] [rbp-78h]
  int v37; // [rsp+8Ch] [rbp-74h]
  int *v38; // [rsp+90h] [rbp-70h]
  int v39; // [rsp+98h] [rbp-68h]
  int v40; // [rsp+9Ch] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-60h] BYREF
  int *v42; // [rsp+B0h] [rbp-50h]
  int v43; // [rsp+B8h] [rbp-48h]
  int v44; // [rsp+BCh] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+C0h] [rbp-40h] BYREF
  int *v46; // [rsp+D0h] [rbp-30h]
  int v47; // [rsp+D8h] [rbp-28h]
  int v48; // [rsp+DCh] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+E0h] [rbp-20h] BYREF
  int *v50; // [rsp+F0h] [rbp-10h]
  int v51; // [rsp+F8h] [rbp-8h]
  int v52; // [rsp+FCh] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+100h] [rbp+0h] BYREF
  int *v54; // [rsp+110h] [rbp+10h]
  int v55; // [rsp+118h] [rbp+18h]
  int v56; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+130h] [rbp+30h] BYREF
  int *v59; // [rsp+140h] [rbp+40h]
  int v60; // [rsp+148h] [rbp+48h]
  int v61; // [rsp+14Ch] [rbp+4Ch]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+160h] [rbp+60h] BYREF
  int *v64; // [rsp+170h] [rbp+70h]
  int v65; // [rsp+178h] [rbp+78h]
  int v66; // [rsp+17Ch] [rbp+7Ch]
  int *v67; // [rsp+180h] [rbp+80h]
  int v68; // [rsp+188h] [rbp+88h]
  int v69; // [rsp+18Ch] [rbp+8Ch]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+190h] [rbp+90h] BYREF

  if ( *(_DWORD *)wil::details::static_lazy<AnimationClockLogging>::get(
                    a1,
                    (void (__cdecl *)())lambda_9ef98c5d6b8c5c3c74462e1eb0f6f12e_::_lambda_invoker_cdecl_)[1] > 2u )
  {
    v4 = (const CHAR *)*((_QWORD *)a2 + 6);
    v37 = 0;
    v40 = 0;
    v35 = SRWLock;
    v26 = a2[1];
    v38 = &v26;
    SRWLock[0] = (PSRWLOCK)0x1000000;
    v36 = 8;
    v39 = 4;
    TlgCreateSz(&pDesc, v4);
    v5 = (const CHAR *)*((_QWORD *)a2 + 15);
    v44 = 0;
    v42 = a2 + 14;
    v43 = v6;
    TlgCreateSz(&v45, v5);
    v7 = *a2;
    v8 = (const WCHAR *)*((_QWORD *)a2 + 2);
    v48 = 0;
    v27 = v7;
    v46 = &v27;
    v47 = v9;
    TlgCreateWsz(&v49, v8);
    v10 = a2[6];
    v11 = (const CHAR *)*((_QWORD *)a2 + 8);
    v52 = 0;
    v28 = v10;
    v50 = &v28;
    v51 = v12;
    TlgCreateSz(&v53, v11);
    v13 = a2[18];
    v14 = (const CHAR *)*((_QWORD *)a2 + 10);
    v56 = 0;
    v29 = v13;
    v54 = &v29;
    v55 = v15;
    TlgCreateSz(&v57, v14);
    TlgCreateWsz(&v58, *((LPCWSTR *)a2 + 11));
    v16 = a2[24];
    v17 = (const CHAR *)*((_QWORD *)a2 + 13);
    v61 = 0;
    v30 = v16;
    v59 = &v30;
    v60 = v18;
    TlgCreateSz(&v62, v17);
    TlgCreateWsz(&v63, *((LPCWSTR *)a2 + 14));
    v19 = a2[2];
    v66 = 0;
    v69 = 0;
    v20 = (const CHAR *)*((_QWORD *)a2 + 5);
    v64 = &v31;
    v32 = a2[15];
    v31 = v19;
    v67 = &v32;
    v65 = v21;
    v68 = v21;
    TlgCreateSz(&v70, v20);
    TlgWrite(v22, &unk_1800C8D84, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x14u, &pData);
  }
  wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, SRWLock);
  v23 = *(_DWORD **)(a1 + 48);
  v24 = a2[1];
  if ( v24 != v23[21] && (v24 != v23[19] || (int)v23[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v23 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  return 1;
}
