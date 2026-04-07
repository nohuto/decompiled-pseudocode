/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180007FF8
 * Callers:
 *     ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x180007CFC (--1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180007F54 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x1800081E0 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     _TlgWrite @ 0x180008F5C (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateSz @ 0x18007A4C8 (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x18007A500 (_TlgCreateWsz.c)
 */

__int64 __fastcall wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        _QWORD *a1,
        int a2)
{
  int *v5; // rdi
  int v6; // eax
  int *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r10
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  int v12; // ecx
  const WCHAR *v13; // rdx
  int v14; // ecx
  const CHAR *v15; // rdx
  DWORD v16; // ecx
  const CHAR *v17; // rdx
  int v18; // ecx
  const CHAR *v19; // rdx
  TraceLoggingHProvider v20; // r10
  const struct _TlgProvider_t *v21; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v23; // rdx
  DWORD v24; // [rsp+38h] [rbp-D0h] BYREF
  int v25; // [rsp+3Ch] [rbp-CCh] BYREF
  int v26; // [rsp+40h] [rbp-C8h] BYREF
  int v27; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v28; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v31; // [rsp+78h] [rbp-90h]
  int v32; // [rsp+80h] [rbp-88h]
  int v33; // [rsp+84h] [rbp-84h]
  int *v34; // [rsp+88h] [rbp-80h]
  int v35; // [rsp+90h] [rbp-78h]
  int v36; // [rsp+94h] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-70h] BYREF
  int *v38; // [rsp+A8h] [rbp-60h]
  int v39; // [rsp+B0h] [rbp-58h]
  int v40; // [rsp+B4h] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+B8h] [rbp-50h] BYREF
  int *v42; // [rsp+C8h] [rbp-40h]
  int v43; // [rsp+D0h] [rbp-38h]
  int v44; // [rsp+D4h] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v46; // [rsp+E8h] [rbp-20h]
  int v47; // [rsp+F0h] [rbp-18h]
  int v48; // [rsp+F4h] [rbp-14h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+F8h] [rbp-10h] BYREF
  DWORD *v50; // [rsp+108h] [rbp+0h]
  int v51; // [rsp+110h] [rbp+8h]
  int v52; // [rsp+114h] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+118h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+128h] [rbp+20h] BYREF
  int *v55; // [rsp+138h] [rbp+30h]
  int v56; // [rsp+140h] [rbp+38h]
  int v57; // [rsp+144h] [rbp+3Ch]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+148h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+158h] [rbp+50h] BYREF
  EVENT_DATA_DESCRIPTOR v60; // [rsp+168h] [rbp+60h] BYREF
  __int64 *v61; // [rsp+188h] [rbp+80h]
  int v62; // [rsp+190h] [rbp+88h]
  int v63; // [rsp+194h] [rbp+8Ch]
  int *v64; // [rsp+198h] [rbp+90h]
  int v65; // [rsp+1A0h] [rbp+98h]
  int v66; // [rsp+1A4h] [rbp+9Ch]
  DWORD *v67; // [rsp+1A8h] [rbp+A0h]
  int v68; // [rsp+1B0h] [rbp+A8h]
  int v69; // [rsp+1B4h] [rbp+ACh]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+1B8h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+1C8h] [rbp+C0h] BYREF

  if ( a2 < 0 )
  {
    v5 = (int *)a1[6];
    v6 = v5[19];
    if ( v6 < 0 && v6 == v5[21] )
      v7 = v5 + 20;
    else
      v7 = 0LL;
    v8 = wil::details::static_lazy<WindowFrameLogging>::get(
           a1,
           lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_);
    if ( v7 )
    {
      v9 = *(_QWORD *)(v8 + 8);
      if ( *(_DWORD *)v9 > 2u
        && (*(_QWORD *)(v9 + 16) & 0x200000000000LL) != 0
        && (*(_QWORD *)(v9 + 24) & 0x200000000000LL) == *(_QWORD *)(v9 + 24) )
      {
        v10 = (const CHAR *)*((_QWORD *)v7 + 6);
        v33 = 0;
        v36 = 0;
        v31 = &v29;
        v26 = v7[1];
        v34 = &v26;
        v29 = 0x1000000LL;
        v32 = 8;
        v35 = 4;
        TlgCreateSz(&pDesc, v10);
        v11 = (const CHAR *)*((_QWORD *)v7 + 15);
        v40 = 0;
        v38 = v7 + 14;
        v39 = 4;
        TlgCreateSz(&v41, v11);
        v12 = *v7;
        v13 = (const WCHAR *)*((_QWORD *)v7 + 2);
        v44 = 0;
        v27 = v12;
        v42 = &v27;
        v43 = 4;
        TlgCreateWsz(&v45, v13);
        v14 = v7[6];
        v15 = (const CHAR *)*((_QWORD *)v7 + 8);
        v48 = 0;
        LODWORD(v28) = v14;
        v46 = &v28;
        v47 = 4;
        TlgCreateSz(&v49, v15);
        v16 = v7[18];
        v17 = (const CHAR *)*((_QWORD *)v7 + 10);
        v52 = 0;
        v24 = v16;
        v50 = &v24;
        v51 = 4;
        TlgCreateSz(&v53, v17);
        TlgCreateWsz(&v54, *((LPCWSTR *)v7 + 11));
        v18 = v7[24];
        v19 = (const CHAR *)*((_QWORD *)v7 + 13);
        v57 = 0;
        v25 = v18;
        v55 = &v25;
        v56 = 4;
        TlgCreateSz(&v58, v19);
        TlgCreateWsz(&v59, *((LPCWSTR *)v7 + 14));
        TlgWrite(v20, &unk_1800C907A, (LPCGUID)(a1[6] + 8LL), 0LL, 0x11u, &pData);
      }
    }
    else
    {
      v21 = *(const struct _TlgProvider_t **)(v8 + 8);
      if ( *(_DWORD *)v21 > 2u
        && (*((_QWORD *)v21 + 2) & 0x200000000000LL) != 0
        && (*((_QWORD *)v21 + 3) & 0x200000000000LL) == *((_QWORD *)v21 + 3) )
      {
        v63 = 0;
        v66 = 0;
        v61 = &v29;
        v25 = a2;
        v64 = &v25;
        v29 = 0x1000000LL;
        v62 = 8;
        v65 = 4;
        CurrentThreadId = GetCurrentThreadId();
        v23 = a1[6];
        v69 = 0;
        v24 = CurrentThreadId;
        v67 = &v24;
        v68 = 4;
        TlgCreateSz(&v70, *(LPCSTR *)(v23 + 48));
        TlgCreateWsz(&v71, *(LPCWSTR *)(a1[6] + 56LL));
        TlgWrite(v21, &unk_1800C9191, (LPCGUID)(a1[6] + 8LL), 0LL, 7u, &v60);
      }
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
}
