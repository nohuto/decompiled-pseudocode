/*
 * XREFs of ?DeadlockPulseDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00328D0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1C00036AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000E9D0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C000EA70 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 */

void __fastcall DeadlockPulseDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rsi
  signed __int64 v6; // r9
  unsigned int v7; // edi
  unsigned __int64 v8; // rax
  const WCHAR *v9; // rdx
  __int64 v10; // rcx
  LPCGUID v11; // r9
  __int16 v12; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v13; // [rsp+3Ah] [rbp-CEh] BYREF
  int v14; // [rsp+3Ch] [rbp-CCh] BYREF
  int v15; // [rsp+40h] [rbp-C8h] BYREF
  int v16; // [rsp+44h] [rbp-C4h] BYREF
  int v17; // [rsp+48h] [rbp-C0h] BYREF
  int v18; // [rsp+4Ch] [rbp-BCh] BYREF
  int v19; // [rsp+50h] [rbp-B8h] BYREF
  int v20; // [rsp+54h] [rbp-B4h] BYREF
  int v21; // [rsp+58h] [rbp-B0h] BYREF
  int v22; // [rsp+5Ch] [rbp-ACh] BYREF
  int IsDebuggerPresent; // [rsp+60h] [rbp-A8h] BYREF
  int v24; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v25; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  __int16 *v29; // [rsp+A8h] [rbp-60h]
  __int64 v30; // [rsp+B0h] [rbp-58h]
  __int64 *v31; // [rsp+B8h] [rbp-50h]
  __int64 v32; // [rsp+C0h] [rbp-48h]
  unsigned __int64 *v33; // [rsp+C8h] [rbp-40h]
  __int64 v34; // [rsp+D0h] [rbp-38h]
  __int64 *v35; // [rsp+D8h] [rbp-30h]
  __int64 v36; // [rsp+E0h] [rbp-28h]
  int *v37; // [rsp+E8h] [rbp-20h]
  __int64 v38; // [rsp+F0h] [rbp-18h]
  int *v39; // [rsp+F8h] [rbp-10h]
  __int64 v40; // [rsp+100h] [rbp-8h]
  int *v41; // [rsp+108h] [rbp+0h]
  __int64 v42; // [rsp+110h] [rbp+8h]
  int *v43; // [rsp+118h] [rbp+10h]
  __int64 v44; // [rsp+120h] [rbp+18h]
  int *v45; // [rsp+128h] [rbp+20h]
  __int64 v46; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+138h] [rbp+30h] BYREF
  __int64 v48; // [rsp+148h] [rbp+40h]
  __int64 v49; // [rsp+150h] [rbp+48h]
  __int16 *v50; // [rsp+158h] [rbp+50h]
  __int64 v51; // [rsp+160h] [rbp+58h]
  unsigned __int64 *v52; // [rsp+168h] [rbp+60h]
  __int64 v53; // [rsp+170h] [rbp+68h]
  int *v54; // [rsp+178h] [rbp+70h]
  __int64 v55; // [rsp+180h] [rbp+78h]
  int *v56; // [rsp+188h] [rbp+80h]
  __int64 v57; // [rsp+190h] [rbp+88h]
  int *v58; // [rsp+198h] [rbp+90h]
  __int64 v59; // [rsp+1A0h] [rbp+98h]
  int *v60; // [rsp+1A8h] [rbp+A0h]
  __int64 v61; // [rsp+1B0h] [rbp+A8h]
  int *p_IsDebuggerPresent; // [rsp+1B8h] [rbp+B0h]
  __int64 v63; // [rsp+1C0h] [rbp+B8h]
  int *v64; // [rsp+1C8h] [rbp+C0h]
  __int64 v65; // [rsp+1D0h] [rbp+C8h]

  v4 = *((_QWORD *)DeferredContext + 4);
  v6 = *(_QWORD *)(v4 + 4312);
  v7 = *((_DWORD *)DeferredContext + 3);
  v25 = *(_QWORD *)(v4 + 276);
  v8 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)DeferredContext;
  v27 = v8;
  if ( v8 <= 0x861C46800LL )
  {
    if ( v8 <= 0xB2D05E00 )
    {
      if ( v8 > 0x23C34600 )
        v7 = 60000;
    }
    else
    {
      v7 = 900000;
    }
  }
  else
  {
    v7 = 3600000;
  }
  if ( MEMORY[0xFFFFF78000000014] - v6 > 10000 * (unsigned __int64)(v7 - *((_DWORD *)DeferredContext + 4))
    && v6 == _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 4312), MEMORY[0xFFFFF78000000014], v6) )
  {
    if ( dword_1C00A1888 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C00A1888, 0x400000004000uLL) )
    {
      v9 = *(const WCHAR **)(v4 + 1480);
      v30 = 2LL;
      v12 = 7;
      v29 = &v12;
      v31 = &v26;
      v33 = &DXGDEADLOCK_TRACKER::DeadlockCounter;
      v35 = &v25;
      v14 = *(_DWORD *)(v4 + 284);
      v37 = &v14;
      v15 = *(_DWORD *)(v4 + 288);
      v39 = &v15;
      v16 = *(_DWORD *)(v4 + 292);
      v41 = &v16;
      v17 = *(_DWORD *)(v4 + 296);
      v43 = &v17;
      v18 = *(_DWORD *)(v4 + 300);
      v45 = &v18;
      v26 = 0x1000000LL;
      v32 = 8LL;
      v34 = 8LL;
      v36 = 8LL;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 4LL;
      TlgCreateWsz(&pDesc, v9);
      v10 = v4 + 1488;
      v13 = *(_WORD *)(v4 + 2452);
      v50 = &v13;
      v52 = &v27;
      v19 = *(_DWORD *)(v4 + 4364);
      v54 = &v19;
      v20 = *(_DWORD *)(v4 + 4368);
      v56 = &v20;
      v21 = *(unsigned __int8 *)(v4 + 2502);
      v58 = &v21;
      v22 = *(_DWORD *)(v4 + 2588);
      v48 = v4 + 1488;
      LOBYTE(v10) = 1;
      v60 = &v22;
      v49 = 8LL;
      v51 = 2LL;
      v53 = 8LL;
      v55 = 4LL;
      v57 = 4LL;
      v59 = 4LL;
      v61 = 4LL;
      IsDebuggerPresent = (unsigned __int8)WdIsDebuggerPresent(v10);
      p_IsDebuggerPresent = &IsDebuggerPresent;
      v63 = 4LL;
      v24 = *(unsigned __int8 *)(v4 + 185);
      v64 = &v24;
      v65 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C00A1888, &unk_1C00723B1, 0LL, v11, 0x15u, &pData);
    }
    DeferredContext[40] = 1;
  }
  if ( DeferredContext[42] )
    KeSetTimer((PKTIMER)(DeferredContext + 48), (LARGE_INTEGER)(-10000LL * v7), (PKDPC)(DeferredContext + 112));
}
