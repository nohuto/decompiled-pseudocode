/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x1C02D4E2C
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C010F258 (_TlgCreateSz.c)
 *     TakeTelemetryAssertsLock @ 0x1C013D5B0 (TakeTelemetryAssertsLock.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     TraceLoggingProviderEnabled @ 0x1C01CC684 (TraceLoggingProviderEnabled.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(unsigned __int64 a1)
{
  __int64 *v2; // rcx
  __int64 *v3; // rdi
  __int64 *PoolWithTag; // rax
  __int64 v5; // rbx
  ULONG TimeIncrement; // eax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int16 v11; // cx
  int v12; // r15d
  unsigned int v13; // r14d
  unsigned __int64 v14; // rcx
  unsigned int v15; // ebx
  int v16; // eax
  int v17; // r13d
  struct _FAST_MUTEX *v18; // rcx
  int v19; // edi
  UCHAR v20; // dl
  const CHAR *v21; // r12
  const CHAR *v22; // rdx
  unsigned __int8 CurrentIrql; // al
  int v24; // edi
  LPCGUID v25; // r9
  UINT32 cData; // r11d
  __int64 *v27; // rcx
  int v28; // [rsp+58h] [rbp-B0h]
  int v29; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v30; // [rsp+60h] [rbp-A8h] BYREF
  int v31; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v32; // [rsp+68h] [rbp-A0h] BYREF
  int v33; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v34; // [rsp+70h] [rbp-98h] BYREF
  int v35; // [rsp+74h] [rbp-94h] BYREF
  int v36; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v37; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v38; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v39; // [rsp+84h] [rbp-84h] BYREF
  int v40; // [rsp+88h] [rbp-80h] BYREF
  int v41; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v42; // [rsp+90h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR v43; // [rsp+98h] [rbp-70h] BYREF
  int *v44; // [rsp+B8h] [rbp-50h]
  __int64 v45; // [rsp+C0h] [rbp-48h]
  int *v46; // [rsp+C8h] [rbp-40h]
  __int64 v47; // [rsp+D0h] [rbp-38h]
  int *v48; // [rsp+D8h] [rbp-30h]
  __int64 v49; // [rsp+E0h] [rbp-28h]
  int *v50; // [rsp+E8h] [rbp-20h]
  __int64 v51; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+F8h] [rbp-10h] BYREF
  int *v53; // [rsp+108h] [rbp+0h]
  __int64 v54; // [rsp+110h] [rbp+8h]
  int *v55; // [rsp+118h] [rbp+10h]
  __int64 v56; // [rsp+120h] [rbp+18h]
  int *v57; // [rsp+128h] [rbp+20h]
  __int64 v58; // [rsp+130h] [rbp+28h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+138h] [rbp+30h] BYREF
  int *v60; // [rsp+158h] [rbp+50h]
  __int64 v61; // [rsp+160h] [rbp+58h]
  int *v62; // [rsp+168h] [rbp+60h]
  __int64 v63; // [rsp+170h] [rbp+68h]
  int *v64; // [rsp+178h] [rbp+70h]
  __int64 v65; // [rsp+180h] [rbp+78h]
  int *v66; // [rsp+188h] [rbp+80h]
  __int64 v67; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+198h] [rbp+90h] BYREF
  int *v69; // [rsp+1A8h] [rbp+A0h]
  __int64 v70; // [rsp+1B0h] [rbp+A8h]
  int *v71; // [rsp+1B8h] [rbp+B0h]
  __int64 v72; // [rsp+1C0h] [rbp+B8h]
  int *v73; // [rsp+1C8h] [rbp+C0h]
  __int64 v74; // [rsp+1D0h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+1D8h] [rbp+D0h] BYREF

  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) || (unsigned int)TakeTelemetryAssertsLock() )
    return;
  v2 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
  if ( &g_MicrosoftTelemetryAssertsTriggeredList == (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
  {
LABEL_6:
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x30uLL, 0x74727341u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_40:
      ExReleaseFastMutex(g_AssertFastMutex);
      return;
    }
    v5 = MEMORY[0xFFFFF78000000320];
    *PoolWithTag = a1;
    TimeIncrement = KeQueryTimeIncrement();
    v3[2] = 0LL;
    *((_DWORD *)v3 + 6) = 0;
    v3[1] = ((__int64)((unsigned __int128)(v5 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
          + ((unsigned __int64)((unsigned __int128)(v5 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
          - 60001;
    v7 = v3 + 4;
    v8 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v7 = g_MicrosoftTelemetryAssertsTriggeredList;
    v3[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v8 + 8) = v7;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)(v3 + 4);
  }
  else
  {
    while ( 1 )
    {
      v3 = v2 - 4;
      if ( *(v2 - 4) == a1 )
        break;
      v2 = (__int64 *)*v2;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == v2 )
        goto LABEL_6;
    }
  }
  ++*((_DWORD *)v3 + 4);
  ++*((_DWORD *)v3 + 5);
  v9 = MEMORY[0xFFFFF78000000320];
  v10 = v9 * KeQueryTimeIncrement() / 10000;
  if ( (unsigned __int64)(v10 - v3[1]) <= 0xEA60 )
    goto LABEL_40;
  v11 = *(_WORD *)(0x1C0000018LL + MEMORY[0x1C000003C]);
  if ( v11 == 267 || v11 == 523 )
  {
    v12 = *(_DWORD *)(0x1C0000008LL + MEMORY[0x1C000003C]);
    v13 = *(_DWORD *)(0x1C0000050LL + MEMORY[0x1C000003C]);
  }
  else
  {
    v12 = 0;
    v13 = 0;
  }
  if ( a1 < 0x1C0000000LL || (v14 = 0x1C0000000LL + v13, v14 <= 0x1C0000000LL) || a1 > v14 )
    v15 = 0;
  else
    v15 = a1 - 0xC0000000;
  v16 = *((_DWORD *)v3 + 5);
  v17 = *((_DWORD *)v3 + 4);
  v18 = g_AssertFastMutex;
  v3[1] = v10;
  v19 = *((_DWORD *)v3 + 6);
  v28 = v16;
  ExReleaseFastMutex(v18);
  v21 = "<unknown>";
  if ( (unsigned int)dword_1C036A040 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C036A040, 0x400000000000uLL) )
  {
    v22 = "<unknown>";
    v29 = 10;
    v30 = v15;
    if ( g_ModuleName )
      v22 = (const CHAR *)g_ModuleName;
    v31 = v12;
    v34 = v28;
    v32 = v13;
    v33 = v17;
    CurrentIrql = KeGetCurrentIrql();
    v60 = &v29;
    v62 = (int *)&v30;
    v64 = &v31;
    v35 = CurrentIrql;
    v66 = (int *)&v32;
    v61 = 4LL;
    v63 = 4LL;
    v65 = 4LL;
    v67 = 4LL;
    TlgCreateSz(&pDesc, v22);
    v70 = 4LL;
    v71 = &v34;
    v69 = &v33;
    v73 = &v35;
    v72 = 4LL;
    v74 = 4LL;
    TlgCreateSz(&v75, "<unknown>");
    TlgWrite((TraceLoggingHProvider)&dword_1C036A040, &unk_1C02E9F1D, 0LL, 0LL, 0xBu, &pData);
  }
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1C036A078, v20, 0LL) && !v19 && !KeGetCurrentIrql() )
  {
    v24 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v15);
    if ( (unsigned int)dword_1C036A040 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C036A040, 0x400000000000uLL) )
    {
      v36 = 10;
      v37 = v15;
      if ( g_ModuleName )
        v21 = (const CHAR *)g_ModuleName;
      v38 = v12;
      v41 = v28;
      v44 = &v36;
      v46 = (int *)&v37;
      v48 = &v38;
      v50 = (int *)&v39;
      v39 = v13;
      v40 = v17;
      v42 = v24;
      v45 = 4LL;
      v47 = 4LL;
      v49 = 4LL;
      v51 = 4LL;
      TlgCreateSz(&v52, v21);
      v54 = 4LL;
      v55 = &v41;
      v53 = &v40;
      v57 = &v42;
      v56 = 4LL;
      v58 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C036A040, &unk_1C02E9EB4, 0LL, v25, cData, &v43);
    }
    if ( !v24 && !(unsigned int)TakeTelemetryAssertsLock() )
    {
      v27 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
      {
        while ( *(v27 - 4) != a1 )
        {
          v27 = (__int64 *)*v27;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v27 )
            goto LABEL_40;
        }
        ++*((_DWORD *)v27 - 2);
      }
      goto LABEL_40;
    }
  }
}
