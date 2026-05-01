/*
 * XREFs of ?Stop@UpdateAppView@AppUsageTelemetry@@QEAAXPEBG_N1@Z @ 0x1800B70A8
 * Callers:
 *     ?UpdateAppView@UwpAppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@_N@Z @ 0x1800B7790 (-UpdateAppView@UwpAppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety.c)
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x1800BC19C (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
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

void __fastcall AppUsageTelemetry::UpdateAppView::Stop(
        AppUsageTelemetry::UpdateAppView *this,
        const unsigned __int16 *a2,
        char a3,
        char a4)
{
  int *v4; // rsi
  int v7; // eax
  int *v8; // rsi
  __int64 v9; // rcx
  const struct _TlgProvider_t *v10; // rax
  const struct _TlgProvider_t *v11; // rdi
  const CHAR *v12; // rdx
  const CHAR *v13; // rdx
  const WCHAR *v14; // rdx
  const CHAR *v15; // rdx
  const CHAR *v16; // rdx
  const CHAR *v17; // rdx
  int v18; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v20; // [rsp+30h] [rbp-D0h] BYREF
  int v21; // [rsp+34h] [rbp-CCh] BYREF
  int v22; // [rsp+38h] [rbp-C8h] BYREF
  int v23; // [rsp+3Ch] [rbp-C4h] BYREF
  int v24; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR v26; // [rsp+50h] [rbp-B0h] BYREF
  void *v27; // [rsp+70h] [rbp-90h]
  __int64 v28; // [rsp+78h] [rbp-88h]
  int *v29; // [rsp+80h] [rbp-80h]
  __int64 v30; // [rsp+88h] [rbp-78h]
  DWORD *v31; // [rsp+90h] [rbp-70h]
  __int64 v32; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+A0h] [rbp-60h] BYREF
  char *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  char *v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  void *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  __int64 *v41; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+108h] [rbp+8h]
  int *v43; // [rsp+110h] [rbp+10h]
  __int64 v44; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp+20h] BYREF
  int *v46; // [rsp+130h] [rbp+30h]
  __int64 v47; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+140h] [rbp+40h] BYREF
  int *v49; // [rsp+150h] [rbp+50h]
  __int64 v50; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+160h] [rbp+60h] BYREF
  int *v52; // [rsp+170h] [rbp+70h]
  __int64 v53; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+180h] [rbp+80h] BYREF
  DWORD *v55; // [rsp+190h] [rbp+90h]
  __int64 v56; // [rsp+198h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+1B0h] [rbp+B0h] BYREF
  int *v59; // [rsp+1C0h] [rbp+C0h]
  __int64 v60; // [rsp+1C8h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+1F0h] [rbp+F0h] BYREF
  char *v64; // [rsp+200h] [rbp+100h]
  __int64 v65; // [rsp+208h] [rbp+108h]
  char *v66; // [rsp+210h] [rbp+110h]
  __int64 v67; // [rsp+218h] [rbp+118h]
  char v68; // [rsp+280h] [rbp+180h] BYREF
  char v69; // [rsp+288h] [rbp+188h] BYREF

  v69 = a4;
  v68 = a3;
  v4 = (int *)*((_QWORD *)this + 6);
  v7 = v4[19];
  if ( v7 < 0 && v7 == v4[21] )
    v8 = v4 + 20;
  else
    v8 = 0LL;
  wil::ActivityBase<AppUsageTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v10 = AppUsageTelemetry::Provider(v9);
  v11 = v10;
  if ( v8 )
  {
    if ( *(_DWORD *)v10 > 5u && TlgKeywordOn(v10, 0x400000000000uLL) )
    {
      v12 = (const CHAR *)*((_QWORD *)v8 + 6);
      v39 = &`AppUsageTelemetry::UpdateAppView::Stop'::`10'::_TlgActivityPrivacyTag;
      v40 = 8LL;
      v41 = &v25;
      v22 = v8[1];
      v43 = &v22;
      v25 = 0x1000000LL;
      v42 = 8LL;
      v44 = 4LL;
      TlgCreateSz(&pDesc, v12);
      v13 = (const CHAR *)*((_QWORD *)v8 + 15);
      v46 = v8 + 14;
      v47 = 4LL;
      TlgCreateSz(&v48, v13);
      v14 = (const WCHAR *)*((_QWORD *)v8 + 2);
      v23 = *v8;
      v49 = &v23;
      v50 = 4LL;
      TlgCreateWsz(&v51, v14);
      v15 = (const CHAR *)*((_QWORD *)v8 + 8);
      v24 = v8[6];
      v52 = &v24;
      v53 = 4LL;
      TlgCreateSz(&v54, v15);
      v16 = (const CHAR *)*((_QWORD *)v8 + 10);
      v20 = v8[18];
      v55 = &v20;
      v56 = 4LL;
      TlgCreateSz(&v57, v16);
      TlgCreateWsz(&v58, *((LPCWSTR *)v8 + 11));
      v17 = (const CHAR *)*((_QWORD *)v8 + 13);
      v21 = v8[24];
      v59 = &v21;
      v60 = 4LL;
      TlgCreateSz(&v61, v17);
      TlgCreateWsz(&v62, *((LPCWSTR *)v8 + 14));
      TlgCreateWsz(&v63, a2);
      v65 = 1LL;
      v64 = &v68;
      v66 = &v69;
      v67 = 1LL;
      TlgWrite(v11, &unk_180509F7A, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x15u, &pData);
    }
  }
  else if ( *(_DWORD *)v10 > 5u && TlgKeywordOn(v10, 0x400000000000uLL) )
  {
    v28 = 8LL;
    v27 = &`AppUsageTelemetry::UpdateAppView::Stop'::`10'::_TlgActivityPrivacyTag;
    v18 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
    v29 = &v21;
    v21 = v18;
    v30 = 4LL;
    CurrentThreadId = GetCurrentThreadId();
    v32 = 4LL;
    v20 = CurrentThreadId;
    v31 = &v20;
    TlgCreateWsz(&v33, a2);
    v35 = 1LL;
    v34 = &v68;
    v36 = &v69;
    v37 = 1LL;
    TlgWrite(v11, &unk_180509F12, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 8u, &v26);
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((AppUsageTelemetry::UpdateAppView *)((char *)this + 8));
}
