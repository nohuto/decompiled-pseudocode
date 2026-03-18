/*
 * XREFs of ?Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ @ 0x1C0145A2C
 * Callers:
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01243EC (-AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00035A0 (_TlgKeywordOn.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x1C000E2B8 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0019EC0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 */

void __fastcall DXGDEADLOCK_TRACKER::Cancel(DXGDEADLOCK_TRACKER *this)
{
  __int64 v2; // rdx
  __int64 v3; // r11
  __int64 v4; // r10
  __int64 v5; // r10
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // edx
  LPCGUID v9; // r9
  __int16 v10; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v11; // [rsp+3Ah] [rbp-CEh] BYREF
  int v12; // [rsp+3Ch] [rbp-CCh] BYREF
  int v13; // [rsp+40h] [rbp-C8h] BYREF
  int v14; // [rsp+44h] [rbp-C4h] BYREF
  int v15; // [rsp+48h] [rbp-C0h] BYREF
  int v16; // [rsp+4Ch] [rbp-BCh] BYREF
  int v17; // [rsp+50h] [rbp-B8h] BYREF
  int v18; // [rsp+54h] [rbp-B4h] BYREF
  int v19; // [rsp+58h] [rbp-B0h] BYREF
  int v20; // [rsp+5Ch] [rbp-ACh] BYREF
  int v21; // [rsp+60h] [rbp-A8h] BYREF
  int IsDebuggerPresent; // [rsp+64h] [rbp-A4h] BYREF
  int v23; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+70h] [rbp-98h] BYREF
  __int64 v25; // [rsp+78h] [rbp-90h] BYREF
  signed __int64 v26; // [rsp+80h] [rbp-88h] BYREF
  __int64 v27; // [rsp+88h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-70h] BYREF
  __int16 *v29; // [rsp+B8h] [rbp-50h]
  __int64 v30; // [rsp+C0h] [rbp-48h]
  __int64 *v31; // [rsp+C8h] [rbp-40h]
  __int64 v32; // [rsp+D0h] [rbp-38h]
  signed __int64 *v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-28h]
  __int64 *v35; // [rsp+E8h] [rbp-20h]
  __int64 v36; // [rsp+F0h] [rbp-18h]
  int *v37; // [rsp+F8h] [rbp-10h]
  __int64 v38; // [rsp+100h] [rbp-8h]
  int *v39; // [rsp+108h] [rbp+0h]
  __int64 v40; // [rsp+110h] [rbp+8h]
  int *v41; // [rsp+118h] [rbp+10h]
  __int64 v42; // [rsp+120h] [rbp+18h]
  int *v43; // [rsp+128h] [rbp+20h]
  __int64 v44; // [rsp+130h] [rbp+28h]
  int *v45; // [rsp+138h] [rbp+30h]
  __int64 v46; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+148h] [rbp+40h] BYREF
  __int64 v48; // [rsp+158h] [rbp+50h]
  __int64 v49; // [rsp+160h] [rbp+58h]
  __int16 *v50; // [rsp+168h] [rbp+60h]
  __int64 v51; // [rsp+170h] [rbp+68h]
  __int64 *v52; // [rsp+178h] [rbp+70h]
  __int64 v53; // [rsp+180h] [rbp+78h]
  int *v54; // [rsp+188h] [rbp+80h]
  __int64 v55; // [rsp+190h] [rbp+88h]
  int *v56; // [rsp+198h] [rbp+90h]
  __int64 v57; // [rsp+1A0h] [rbp+98h]
  int *v58; // [rsp+1A8h] [rbp+A0h]
  __int64 v59; // [rsp+1B0h] [rbp+A8h]
  int *v60; // [rsp+1B8h] [rbp+B0h]
  __int64 v61; // [rsp+1C0h] [rbp+B8h]
  int *v62; // [rsp+1C8h] [rbp+C0h]
  __int64 v63; // [rsp+1D0h] [rbp+C8h]
  int *p_IsDebuggerPresent; // [rsp+1D8h] [rbp+D0h]
  __int64 v65; // [rsp+1E0h] [rbp+D8h]
  int *v66; // [rsp+1E8h] [rbp+E0h]
  __int64 v67; // [rsp+1F0h] [rbp+E8h]

  if ( *((_BYTE *)this + 42) )
  {
    *((_BYTE *)this + 42) = 0;
    if ( !KeCancelTimer((PKTIMER)((char *)this + 176)) )
      KeFlushQueuedDpcs();
    if ( !KeCancelTimer((PKTIMER)((char *)this + 48)) )
    {
      KeFlushQueuedDpcs();
      if ( !KeCancelTimer((PKTIMER)((char *)this + 48)) )
        KeFlushQueuedDpcs();
    }
    v24 = *(_QWORD *)(*((_QWORD *)this + 4) + 276LL);
    v26 = _InterlockedExchangeAdd64((volatile signed __int64 *)&DXGDEADLOCK_TRACKER::DeadlockCounter, 1uLL);
    if ( (*((_BYTE *)this + 40) || *((_BYTE *)this + 41)) && dword_1C00A1888 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C00A1888, 0x400000004000uLL) )
      {
        v2 = *((_QWORD *)this + 4);
        v30 = 2LL;
        v10 = 7;
        v29 = &v10;
        v31 = &v25;
        v33 = &v26;
        v35 = &v24;
        v25 = 0x1000000LL;
        v32 = 8LL;
        v34 = 8LL;
        v36 = 8LL;
        v12 = *(_DWORD *)(v2 + 284);
        v37 = &v12;
        v38 = 4LL;
        v13 = *(_DWORD *)(v2 + 288);
        v39 = &v13;
        v40 = 4LL;
        v14 = *(_DWORD *)(v2 + 292);
        v41 = &v14;
        v42 = 4LL;
        v15 = *(_DWORD *)(v2 + 296);
        v43 = &v15;
        v44 = 4LL;
        v16 = *(_DWORD *)(v2 + 300);
        v45 = &v16;
        v46 = 4LL;
        TlgCreateWsz(&pDesc, *(LPCWSTR *)(v2 + 1480));
        v3 = *((_QWORD *)this + 4);
        v5 = v4 - *(_QWORD *)this;
        v49 = 8LL;
        v48 = v3 + 1488;
        v11 = *(_WORD *)(v3 + 2452);
        v50 = &v11;
        v52 = &v27;
        v51 = 2LL;
        v27 = v5;
        v53 = 8LL;
        v17 = *(_DWORD *)(v3 + 4364);
        v54 = &v17;
        v55 = 4LL;
        v18 = *(_DWORD *)(v3 + 4368);
        v56 = &v18;
        v19 = *((unsigned __int8 *)this + 41);
        v58 = &v19;
        v57 = 4LL;
        v59 = 4LL;
        v20 = *(unsigned __int8 *)(v3 + 2502);
        v60 = &v20;
        v61 = 4LL;
        v21 = *(_DWORD *)(v3 + 2588);
        LOBYTE(v6) = 1;
        v62 = &v21;
        v63 = 4LL;
        IsDebuggerPresent = (unsigned __int8)WdIsDebuggerPresent(v6);
        p_IsDebuggerPresent = &IsDebuggerPresent;
        v7 = *((_QWORD *)this + 4);
        v65 = 4LL;
        v8 = *(unsigned __int8 *)(v7 + 185);
        v66 = &v23;
        v23 = v8;
        v67 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C00A1888, &unk_1C00721C9, 0LL, v9, 0x16u, &pData);
      }
    }
    DXGADAPTER::ReleaseReferenceNoTracking(*((DXGADAPTER **)this + 4));
  }
}
