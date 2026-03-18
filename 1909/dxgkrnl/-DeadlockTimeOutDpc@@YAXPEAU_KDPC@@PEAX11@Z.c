/*
 * XREFs of ?DeadlockTimeOutDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C0032C50
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1C00036AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000E9D0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C000EA70 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 */

void __fastcall DeadlockTimeOutDpc(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx
  const WCHAR *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r10
  __int64 v9; // r10
  LPCGUID v10; // r9
  __int16 v11; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v12; // [rsp+3Ah] [rbp-CEh] BYREF
  int v13; // [rsp+3Ch] [rbp-CCh] BYREF
  int v14; // [rsp+40h] [rbp-C8h] BYREF
  int v15; // [rsp+44h] [rbp-C4h] BYREF
  int v16; // [rsp+48h] [rbp-C0h] BYREF
  int v17; // [rsp+4Ch] [rbp-BCh] BYREF
  int v18; // [rsp+50h] [rbp-B8h] BYREF
  int v19; // [rsp+54h] [rbp-B4h] BYREF
  int v20; // [rsp+58h] [rbp-B0h] BYREF
  int v21; // [rsp+5Ch] [rbp-ACh] BYREF
  int IsDebuggerPresent; // [rsp+60h] [rbp-A8h] BYREF
  int v23; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v24; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+70h] [rbp-98h] BYREF
  __int64 v26; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  __int16 *v28; // [rsp+A8h] [rbp-60h]
  __int64 v29; // [rsp+B0h] [rbp-58h]
  __int64 *v30; // [rsp+B8h] [rbp-50h]
  __int64 v31; // [rsp+C0h] [rbp-48h]
  unsigned __int64 *v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D0h] [rbp-38h]
  __int64 *v34; // [rsp+D8h] [rbp-30h]
  __int64 v35; // [rsp+E0h] [rbp-28h]
  int *v36; // [rsp+E8h] [rbp-20h]
  __int64 v37; // [rsp+F0h] [rbp-18h]
  int *v38; // [rsp+F8h] [rbp-10h]
  __int64 v39; // [rsp+100h] [rbp-8h]
  int *v40; // [rsp+108h] [rbp+0h]
  __int64 v41; // [rsp+110h] [rbp+8h]
  int *v42; // [rsp+118h] [rbp+10h]
  __int64 v43; // [rsp+120h] [rbp+18h]
  int *v44; // [rsp+128h] [rbp+20h]
  __int64 v45; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+138h] [rbp+30h] BYREF
  __int64 v47; // [rsp+148h] [rbp+40h]
  __int64 v48; // [rsp+150h] [rbp+48h]
  __int16 *v49; // [rsp+158h] [rbp+50h]
  __int64 v50; // [rsp+160h] [rbp+58h]
  __int64 *v51; // [rsp+168h] [rbp+60h]
  __int64 v52; // [rsp+170h] [rbp+68h]
  int *v53; // [rsp+178h] [rbp+70h]
  __int64 v54; // [rsp+180h] [rbp+78h]
  int *v55; // [rsp+188h] [rbp+80h]
  __int64 v56; // [rsp+190h] [rbp+88h]
  int *v57; // [rsp+198h] [rbp+90h]
  __int64 v58; // [rsp+1A0h] [rbp+98h]
  int *v59; // [rsp+1A8h] [rbp+A0h]
  __int64 v60; // [rsp+1B0h] [rbp+A8h]
  int *p_IsDebuggerPresent; // [rsp+1B8h] [rbp+B0h]
  __int64 v62; // [rsp+1C0h] [rbp+B8h]
  int *v63; // [rsp+1C8h] [rbp+C0h]
  __int64 v64; // [rsp+1D0h] [rbp+C8h]

  v4 = DeferredContext[4];
  v24 = *(_QWORD *)(v4 + 276);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 4304), MEMORY[0xFFFFF78000000014], 0LL) )
  {
    if ( dword_1C00A1888 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C00A1888, 0x400000004000uLL) )
      {
        v6 = *(const WCHAR **)(v4 + 1480);
        v29 = 2LL;
        v11 = 7;
        v28 = &v11;
        v30 = &v25;
        v32 = &DXGDEADLOCK_TRACKER::DeadlockCounter;
        v34 = &v24;
        v13 = *(_DWORD *)(v4 + 284);
        v36 = &v13;
        v14 = *(_DWORD *)(v4 + 288);
        v38 = &v14;
        v15 = *(_DWORD *)(v4 + 292);
        v40 = &v15;
        v16 = *(_DWORD *)(v4 + 296);
        v42 = &v16;
        v17 = *(_DWORD *)(v4 + 300);
        v44 = &v17;
        v25 = 0x1000000LL;
        v31 = 8LL;
        v33 = 8LL;
        v35 = 8LL;
        v37 = 4LL;
        v39 = 4LL;
        v41 = 4LL;
        v43 = 4LL;
        v45 = 4LL;
        TlgCreateWsz(&pDesc, v6);
        v7 = v4 + 1488;
        v9 = v8 - *DeferredContext;
        v12 = *(_WORD *)(v4 + 2452);
        v49 = &v12;
        v51 = &v26;
        v18 = *(_DWORD *)(v4 + 4364);
        v53 = &v18;
        v19 = *(_DWORD *)(v4 + 4368);
        v55 = &v19;
        v20 = *(unsigned __int8 *)(v4 + 2502);
        v57 = &v20;
        v21 = *(_DWORD *)(v4 + 2588);
        v47 = v4 + 1488;
        LOBYTE(v7) = 1;
        v59 = &v21;
        v48 = 8LL;
        v50 = 2LL;
        v26 = v9;
        v52 = 8LL;
        v54 = 4LL;
        v56 = 4LL;
        v58 = 4LL;
        v60 = 4LL;
        IsDebuggerPresent = (unsigned __int8)WdIsDebuggerPresent(v7);
        p_IsDebuggerPresent = &IsDebuggerPresent;
        v23 = *(unsigned __int8 *)(v4 + 185);
        v63 = &v23;
        v62 = 4LL;
        v64 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C00A1888, &unk_1C00724F9, 0LL, v10, 0x15u, &pData);
      }
    }
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v4 + 4320), CriticalWorkQueue);
    *((_BYTE *)DeferredContext + 41) = 1;
  }
}
