/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800ABB24
 * Callers:
 *     ??1TouchKeyboardExperienceManagerDelayedInitialization@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18032CDE0 (--1TouchKeyboardExperienceManagerDelayedInitialization@TouchKeyboardExperienceTelemetryLogger@@Q.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1800800E8 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180332E58 (-Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 */

__int64 __fastcall wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        _QWORD *a1,
        int a2)
{
  int *v4; // rsi
  int v5; // eax
  int *v6; // rsi
  const struct _TlgProvider_t *v7; // rax
  const struct _TlgProvider_t *v8; // rdi
  const CHAR *v9; // rdx
  const CHAR *v10; // rdx
  int v11; // ecx
  const WCHAR *v12; // rdx
  int v13; // ecx
  const CHAR *v14; // rdx
  DWORD v15; // ecx
  const CHAR *v16; // rdx
  int v17; // ecx
  const CHAR *v18; // rdx
  DWORD CurrentThreadId; // eax
  __int64 v20; // rdx
  DWORD v22; // [rsp+30h] [rbp-D0h] BYREF
  int v23; // [rsp+34h] [rbp-CCh] BYREF
  int v24; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+3Ch] [rbp-C4h] BYREF
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v29; // [rsp+70h] [rbp-90h]
  int v30; // [rsp+78h] [rbp-88h]
  int v31; // [rsp+7Ch] [rbp-84h]
  int *v32; // [rsp+80h] [rbp-80h]
  int v33; // [rsp+88h] [rbp-78h]
  int v34; // [rsp+8Ch] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  int *v36; // [rsp+A0h] [rbp-60h]
  int v37; // [rsp+A8h] [rbp-58h]
  int v38; // [rsp+ACh] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+B0h] [rbp-50h] BYREF
  int *v40; // [rsp+C0h] [rbp-40h]
  int v41; // [rsp+C8h] [rbp-38h]
  int v42; // [rsp+CCh] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+D0h] [rbp-30h] BYREF
  int *v44; // [rsp+E0h] [rbp-20h]
  int v45; // [rsp+E8h] [rbp-18h]
  int v46; // [rsp+ECh] [rbp-14h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+F0h] [rbp-10h] BYREF
  DWORD *v48; // [rsp+100h] [rbp+0h]
  int v49; // [rsp+108h] [rbp+8h]
  int v50; // [rsp+10Ch] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+120h] [rbp+20h] BYREF
  int *v53; // [rsp+130h] [rbp+30h]
  int v54; // [rsp+138h] [rbp+38h]
  int v55; // [rsp+13Ch] [rbp+3Ch]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+150h] [rbp+50h] BYREF
  EVENT_DATA_DESCRIPTOR v58; // [rsp+160h] [rbp+60h] BYREF
  __int64 *v59; // [rsp+180h] [rbp+80h]
  int v60; // [rsp+188h] [rbp+88h]
  int v61; // [rsp+18Ch] [rbp+8Ch]
  int *v62; // [rsp+190h] [rbp+90h]
  int v63; // [rsp+198h] [rbp+98h]
  int v64; // [rsp+19Ch] [rbp+9Ch]
  DWORD *v65; // [rsp+1A0h] [rbp+A0h]
  int v66; // [rsp+1A8h] [rbp+A8h]
  int v67; // [rsp+1ACh] [rbp+ACh]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+1C0h] [rbp+C0h] BYREF

  if ( a2 < 0 )
  {
    v4 = (int *)a1[6];
    v5 = v4[19];
    if ( v5 < 0 && v5 == v4[21] )
      v6 = v4 + 20;
    else
      v6 = 0LL;
    v7 = TouchKeyboardExperienceTraceLogging::Provider();
    v8 = v7;
    if ( v6 )
    {
      if ( *(_DWORD *)v7 > 2u && TlgKeywordOn(v7, 0x200000000000uLL) )
      {
        v9 = (const CHAR *)*((_QWORD *)v6 + 6);
        v31 = 0;
        v34 = 0;
        v29 = &v27;
        v24 = v6[1];
        v32 = &v24;
        v27 = 0x1000000LL;
        v30 = 8;
        v33 = 4;
        TlgCreateSz(&pDesc, v9);
        v10 = (const CHAR *)*((_QWORD *)v6 + 15);
        v38 = 0;
        v36 = v6 + 14;
        v37 = 4;
        TlgCreateSz(&v39, v10);
        v11 = *v6;
        v12 = (const WCHAR *)*((_QWORD *)v6 + 2);
        v42 = 0;
        v25 = v11;
        v40 = &v25;
        v41 = 4;
        TlgCreateWsz(&v43, v12);
        v13 = v6[6];
        v14 = (const CHAR *)*((_QWORD *)v6 + 8);
        v46 = 0;
        v26 = v13;
        v44 = &v26;
        v45 = 4;
        TlgCreateSz(&v47, v14);
        v15 = v6[18];
        v16 = (const CHAR *)*((_QWORD *)v6 + 10);
        v50 = 0;
        v22 = v15;
        v48 = &v22;
        v49 = 4;
        TlgCreateSz(&v51, v16);
        TlgCreateWsz(&v52, *((LPCWSTR *)v6 + 11));
        v17 = v6[24];
        v18 = (const CHAR *)*((_QWORD *)v6 + 13);
        v55 = 0;
        v23 = v17;
        v53 = &v23;
        v54 = 4;
        TlgCreateSz(&v56, v18);
        TlgCreateWsz(&v57, *((LPCWSTR *)v6 + 14));
        TlgWrite(v8, &unk_1804E0E08, (LPCGUID)(a1[6] + 8LL), 0LL, 0x11u, &pData);
      }
    }
    else if ( *(_DWORD *)v7 > 2u && TlgKeywordOn(v7, 0x200000000000uLL) )
    {
      v61 = 0;
      v64 = 0;
      v59 = &v27;
      v23 = a2;
      v62 = &v23;
      v27 = 0x1000000LL;
      v60 = 8;
      v63 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v20 = a1[6];
      v67 = 0;
      v22 = CurrentThreadId;
      v65 = &v22;
      v66 = 4;
      TlgCreateSz(&v68, *(LPCSTR *)(v20 + 48));
      TlgCreateWsz(&v69, *(LPCWSTR *)(a1[6] + 56LL));
      TlgWrite(v8, &unk_1804E0F1F, (LPCGUID)(a1[6] + 8LL), 0LL, 7u, &v58);
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
}
