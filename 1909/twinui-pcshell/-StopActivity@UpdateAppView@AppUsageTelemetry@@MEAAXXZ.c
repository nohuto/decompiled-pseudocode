/*
 * XREFs of ?StopActivity@UpdateAppView@AppUsageTelemetry@@MEAAXXZ @ 0x1800B73D0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1800800E8 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?zInternalStop@?$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18009B1A4 (-zInternalStop@-$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorT.c)
 *     ?Provider@AppUsageTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x1800B2940 (-Provider@AppUsageTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 */

void __fastcall AppUsageTelemetry::UpdateAppView::StopActivity(AppUsageTelemetry::UpdateAppView *this)
{
  int *v1; // rsi
  int v3; // eax
  int *v4; // rsi
  __int64 v5; // rcx
  const struct _TlgProvider_t *v6; // rax
  const struct _TlgProvider_t *v7; // rdi
  const CHAR *v8; // rdx
  const CHAR *v9; // rdx
  const WCHAR *v10; // rdx
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  const CHAR *v13; // rdx
  int v14; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v16; // [rsp+38h] [rbp-D0h] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  int v18; // [rsp+40h] [rbp-C8h] BYREF
  int v19; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v20; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR v22; // [rsp+58h] [rbp-B0h] BYREF
  void *v23; // [rsp+78h] [rbp-90h]
  __int64 v24; // [rsp+80h] [rbp-88h]
  int *v25; // [rsp+88h] [rbp-80h]
  __int64 v26; // [rsp+90h] [rbp-78h]
  DWORD *v27; // [rsp+98h] [rbp-70h]
  __int64 v28; // [rsp+A0h] [rbp-68h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-60h] BYREF
  void *v30; // [rsp+C8h] [rbp-40h]
  __int64 v31; // [rsp+D0h] [rbp-38h]
  __int64 *v32; // [rsp+D8h] [rbp-30h]
  __int64 v33; // [rsp+E0h] [rbp-28h]
  int *v34; // [rsp+E8h] [rbp-20h]
  __int64 v35; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F8h] [rbp-10h] BYREF
  int *v37; // [rsp+108h] [rbp+0h]
  __int64 v38; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+118h] [rbp+10h] BYREF
  int *v40; // [rsp+128h] [rbp+20h]
  __int64 v41; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+138h] [rbp+30h] BYREF
  __int64 *v43; // [rsp+148h] [rbp+40h]
  __int64 v44; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+158h] [rbp+50h] BYREF
  DWORD *v46; // [rsp+168h] [rbp+60h]
  __int64 v47; // [rsp+170h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+178h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+188h] [rbp+80h] BYREF
  int *v50; // [rsp+198h] [rbp+90h]
  __int64 v51; // [rsp+1A0h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+1A8h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+1B8h] [rbp+B0h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<AppUsageTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v6 = AppUsageTelemetry::Provider(v5);
  v7 = v6;
  if ( v4 )
  {
    if ( *(_DWORD *)v6 > 5u && TlgKeywordOn(v6, 0x400000000000uLL) )
    {
      v8 = (const CHAR *)*((_QWORD *)v4 + 6);
      v30 = &`AppUsageTelemetry::UpdateAppView::Stop'::`10'::_TlgActivityPrivacyTag;
      v31 = 8LL;
      v32 = &v21;
      v18 = v4[1];
      v34 = &v18;
      v21 = 0x1000000LL;
      v33 = 8LL;
      v35 = 4LL;
      TlgCreateSz(&pDesc, v8);
      v9 = (const CHAR *)*((_QWORD *)v4 + 15);
      v37 = v4 + 14;
      v38 = 4LL;
      TlgCreateSz(&v39, v9);
      v10 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v19 = *v4;
      v40 = &v19;
      v41 = 4LL;
      TlgCreateWsz(&v42, v10);
      v11 = (const CHAR *)*((_QWORD *)v4 + 8);
      LODWORD(v20) = v4[6];
      v43 = &v20;
      v44 = 4LL;
      TlgCreateSz(&v45, v11);
      v12 = (const CHAR *)*((_QWORD *)v4 + 10);
      v16 = v4[18];
      v46 = &v16;
      v47 = 4LL;
      TlgCreateSz(&v48, v12);
      TlgCreateWsz(&v49, *((LPCWSTR *)v4 + 11));
      v13 = (const CHAR *)*((_QWORD *)v4 + 13);
      v17 = v4[24];
      v50 = &v17;
      v51 = 4LL;
      TlgCreateSz(&v52, v13);
      TlgCreateWsz(&v53, *((LPCWSTR *)v4 + 14));
      TlgWrite(v7, &unk_18050A107, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x12u, &pData);
    }
  }
  else if ( *(_DWORD *)v6 > 5u && TlgKeywordOn(v6, 0x400000000000uLL) )
  {
    v24 = 8LL;
    v23 = &`AppUsageTelemetry::UpdateAppView::Stop'::`10'::_TlgActivityPrivacyTag;
    v14 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
    v25 = &v17;
    v17 = v14;
    v26 = 4LL;
    CurrentThreadId = GetCurrentThreadId();
    v28 = 4LL;
    v16 = CurrentThreadId;
    v27 = &v16;
    TlgWrite(v7, &unk_18050A0B9, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &v22);
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((AppUsageTelemetry::UpdateAppView *)((char *)this + 8));
}
