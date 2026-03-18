/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x1C02C1D80
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C02C1D3C (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0117C48 (_TlgCreateSz.c)
 *     TakeTelemetryAssertsLock @ 0x1C0131EB0 (TakeTelemetryAssertsLock.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     TraceLoggingProviderEnabled @ 0x1C01C4FA8 (TraceLoggingProviderEnabled.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 *v7; // rcx
  __int64 *v8; // rdi
  __int64 *PoolWithTag; // rax
  __int64 v10; // rbx
  ULONG TimeIncrement; // eax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int16 v16; // cx
  int v17; // r15d
  unsigned int v18; // r14d
  unsigned __int64 v19; // rcx
  unsigned int v20; // ebx
  int v21; // eax
  int v22; // r13d
  struct _FAST_MUTEX *v23; // rcx
  int v24; // edi
  UCHAR v25; // dl
  const CHAR *v26; // r12
  const CHAR *v27; // rdx
  unsigned __int8 CurrentIrql; // al
  LPCSTR v29; // r9
  int v30; // edi
  LPCGUID v31; // r9
  UINT32 cData; // r11d
  __int64 *v33; // rcx
  int v34; // [rsp+58h] [rbp-B0h]
  int v35; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v36; // [rsp+60h] [rbp-A8h] BYREF
  int v37; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v38; // [rsp+68h] [rbp-A0h] BYREF
  int v39; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v40; // [rsp+70h] [rbp-98h] BYREF
  int v41; // [rsp+74h] [rbp-94h] BYREF
  int v42; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v43; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v44; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v45; // [rsp+84h] [rbp-84h] BYREF
  int v46; // [rsp+88h] [rbp-80h] BYREF
  int v47; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v48; // [rsp+90h] [rbp-78h] BYREF
  __int64 v49; // [rsp+98h] [rbp-70h]
  EVENT_DATA_DESCRIPTOR v50; // [rsp+A8h] [rbp-60h] BYREF
  int *v51; // [rsp+C8h] [rbp-40h]
  __int64 v52; // [rsp+D0h] [rbp-38h]
  int *v53; // [rsp+D8h] [rbp-30h]
  __int64 v54; // [rsp+E0h] [rbp-28h]
  int *v55; // [rsp+E8h] [rbp-20h]
  __int64 v56; // [rsp+F0h] [rbp-18h]
  int *v57; // [rsp+F8h] [rbp-10h]
  __int64 v58; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+108h] [rbp+0h] BYREF
  int *v60; // [rsp+118h] [rbp+10h]
  __int64 v61; // [rsp+120h] [rbp+18h]
  int *v62; // [rsp+128h] [rbp+20h]
  __int64 v63; // [rsp+130h] [rbp+28h]
  int *v64; // [rsp+138h] [rbp+30h]
  __int64 v65; // [rsp+140h] [rbp+38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+148h] [rbp+40h] BYREF
  int *v67; // [rsp+168h] [rbp+60h]
  __int64 v68; // [rsp+170h] [rbp+68h]
  int *v69; // [rsp+178h] [rbp+70h]
  __int64 v70; // [rsp+180h] [rbp+78h]
  int *v71; // [rsp+188h] [rbp+80h]
  __int64 v72; // [rsp+190h] [rbp+88h]
  int *v73; // [rsp+198h] [rbp+90h]
  __int64 v74; // [rsp+1A0h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1A8h] [rbp+A0h] BYREF
  int *v76; // [rsp+1B8h] [rbp+B0h]
  __int64 v77; // [rsp+1C0h] [rbp+B8h]
  int *v78; // [rsp+1C8h] [rbp+C0h]
  __int64 v79; // [rsp+1D0h] [rbp+C8h]
  int *v80; // [rsp+1D8h] [rbp+D0h]
  __int64 v81; // [rsp+1E0h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+1E8h] [rbp+E0h] BYREF

  v49 = a6;
  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) || (unsigned int)TakeTelemetryAssertsLock() )
    return;
  v7 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
  if ( &g_MicrosoftTelemetryAssertsTriggeredList == (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
  {
LABEL_6:
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x30uLL, 0x74727341u);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_40:
      ExReleaseFastMutex(g_AssertFastMutex);
      return;
    }
    v10 = MEMORY[0xFFFFF78000000320];
    *PoolWithTag = a1;
    TimeIncrement = KeQueryTimeIncrement();
    v8[2] = 0LL;
    *((_DWORD *)v8 + 6) = 0;
    v8[1] = ((__int64)((unsigned __int128)(v10 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
          + ((unsigned __int64)((unsigned __int128)(v10 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
          - 60001;
    v12 = v8 + 4;
    v13 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v12 = g_MicrosoftTelemetryAssertsTriggeredList;
    v8[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v13 + 8) = v12;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)(v8 + 4);
  }
  else
  {
    while ( 1 )
    {
      v8 = v7 - 4;
      if ( *(v7 - 4) == a1 )
        break;
      v7 = (__int64 *)*v7;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == v7 )
        goto LABEL_6;
    }
  }
  ++*((_DWORD *)v8 + 4);
  ++*((_DWORD *)v8 + 5);
  v14 = MEMORY[0xFFFFF78000000320];
  v15 = v14 * KeQueryTimeIncrement() / 10000;
  if ( (unsigned __int64)(v15 - v8[1]) <= 0xEA60 )
    goto LABEL_40;
  v16 = *(_WORD *)(0x1C0000018LL + MEMORY[0x1C000003C]);
  if ( v16 == 267 || v16 == 523 )
  {
    v17 = *(_DWORD *)(0x1C0000008LL + MEMORY[0x1C000003C]);
    v18 = *(_DWORD *)(0x1C0000050LL + MEMORY[0x1C000003C]);
  }
  else
  {
    v17 = 0;
    v18 = 0;
  }
  if ( a1 < 0x1C0000000LL || (v19 = 0x1C0000000LL + v18, v19 <= 0x1C0000000LL) || a1 > v19 )
    v20 = 0;
  else
    v20 = a1 - 0xC0000000;
  v21 = *((_DWORD *)v8 + 5);
  v22 = *((_DWORD *)v8 + 4);
  v23 = g_AssertFastMutex;
  v8[1] = v15;
  v24 = *((_DWORD *)v8 + 6);
  v34 = v21;
  ExReleaseFastMutex(v23);
  v26 = "<unknown>";
  if ( (unsigned int)dword_1C0354040 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0354040, 0x400000000000uLL) )
  {
    v27 = "<unknown>";
    v35 = 10;
    v36 = v20;
    if ( g_ModuleName )
      v27 = (const CHAR *)g_ModuleName;
    v37 = v17;
    v40 = v34;
    v38 = v18;
    v39 = v22;
    CurrentIrql = KeGetCurrentIrql();
    v41 = CurrentIrql;
    v68 = 4LL;
    v70 = 4LL;
    v72 = 4LL;
    v67 = &v35;
    v69 = (int *)&v36;
    v71 = &v37;
    v73 = (int *)&v38;
    v74 = 4LL;
    TlgCreateSz(&pDesc, v27);
    v77 = 4LL;
    v78 = &v40;
    v76 = &v39;
    v80 = &v41;
    v79 = 4LL;
    v81 = 4LL;
    TlgCreateSz(&v82, v29);
    TlgWrite((TraceLoggingHProvider)&dword_1C0354040, &unk_1C02D737F, 0LL, 0LL, 0xBu, &pData);
  }
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C0354078, v25, 0LL) && !v24 && !KeGetCurrentIrql() )
  {
    v30 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v20);
    if ( (unsigned int)dword_1C0354040 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0354040, 0x400000000000uLL) )
    {
      v42 = 10;
      v43 = v20;
      if ( g_ModuleName )
        v26 = (const CHAR *)g_ModuleName;
      v44 = v17;
      v47 = v34;
      v51 = &v42;
      v53 = (int *)&v43;
      v55 = &v44;
      v57 = (int *)&v45;
      v45 = v18;
      v46 = v22;
      v48 = v30;
      v52 = 4LL;
      v54 = 4LL;
      v56 = 4LL;
      v58 = 4LL;
      TlgCreateSz(&v59, v26);
      v61 = 4LL;
      v62 = &v47;
      v60 = &v46;
      v64 = &v48;
      v63 = 4LL;
      v65 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0354040, &unk_1C02D7316, 0LL, v31, cData, &v50);
    }
    if ( !v30 && !(unsigned int)TakeTelemetryAssertsLock() )
    {
      v33 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
      {
        while ( *(v33 - 4) != a1 )
        {
          v33 = (__int64 *)*v33;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v33 )
            goto LABEL_40;
        }
        ++*((_DWORD *)v33 - 2);
      }
      goto LABEL_40;
    }
  }
}
