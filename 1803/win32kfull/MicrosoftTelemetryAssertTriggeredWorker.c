/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x1C02AFC28
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 * Callees:
 *     _TlgCreateSz @ 0x1C00BC8A0 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BFD40 (_TlgKeywordOn.c)
 *     TakeTelemetryAssertsLock @ 0x1C010F72C (TakeTelemetryAssertsLock.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     GetImageTuple @ 0x1C02AFBB4 (GetImageTuple.c)
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
  int ImageTuple; // eax
  __int64 v11; // r11
  unsigned int v12; // r14d
  int v13; // r15d
  unsigned int v14; // ebx
  struct _FAST_MUTEX *v15; // rcx
  unsigned int v16; // eax
  int v17; // edi
  const CHAR *v18; // r12
  int v19; // r13d
  const CHAR *v20; // rdx
  unsigned __int8 CurrentIrql; // al
  LPCGUID v22; // r8
  LPCGUID v23; // r9
  int v24; // edi
  LPCGUID v25; // r8
  LPCGUID v26; // r9
  UINT32 cData; // r11d
  __int64 *v28; // rcx
  unsigned int v29; // [rsp+58h] [rbp-B0h] BYREF
  int v30; // [rsp+5Ch] [rbp-ACh]
  int v31; // [rsp+60h] [rbp-A8h] BYREF
  int v32; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v33; // [rsp+68h] [rbp-A0h] BYREF
  int v34; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v35; // [rsp+70h] [rbp-98h] BYREF
  int v36; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v37; // [rsp+78h] [rbp-90h] BYREF
  int v38; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v39; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v40; // [rsp+84h] [rbp-84h] BYREF
  int v41; // [rsp+88h] [rbp-80h] BYREF
  int v42; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v43; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v44; // [rsp+94h] [rbp-74h] BYREF
  int v45; // [rsp+98h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR v46; // [rsp+A8h] [rbp-60h] BYREF
  int *v47; // [rsp+C8h] [rbp-40h]
  __int64 v48; // [rsp+D0h] [rbp-38h]
  int *v49; // [rsp+D8h] [rbp-30h]
  __int64 v50; // [rsp+E0h] [rbp-28h]
  int *v51; // [rsp+E8h] [rbp-20h]
  __int64 v52; // [rsp+F0h] [rbp-18h]
  int *v53; // [rsp+F8h] [rbp-10h]
  __int64 v54; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+108h] [rbp+0h] BYREF
  int *v56; // [rsp+118h] [rbp+10h]
  __int64 v57; // [rsp+120h] [rbp+18h]
  int *v58; // [rsp+128h] [rbp+20h]
  __int64 v59; // [rsp+130h] [rbp+28h]
  int *v60; // [rsp+138h] [rbp+30h]
  __int64 v61; // [rsp+140h] [rbp+38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+148h] [rbp+40h] BYREF
  int *v63; // [rsp+168h] [rbp+60h]
  __int64 v64; // [rsp+170h] [rbp+68h]
  int *v65; // [rsp+178h] [rbp+70h]
  __int64 v66; // [rsp+180h] [rbp+78h]
  int *v67; // [rsp+188h] [rbp+80h]
  __int64 v68; // [rsp+190h] [rbp+88h]
  int *v69; // [rsp+198h] [rbp+90h]
  __int64 v70; // [rsp+1A0h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1A8h] [rbp+A0h] BYREF
  int *v72; // [rsp+1B8h] [rbp+B0h]
  __int64 v73; // [rsp+1C0h] [rbp+B8h]
  int *v74; // [rsp+1C8h] [rbp+C0h]
  __int64 v75; // [rsp+1D0h] [rbp+C8h]
  int *v76; // [rsp+1D8h] [rbp+D0h]
  __int64 v77; // [rsp+1E0h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+1E8h] [rbp+E0h] BYREF

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
LABEL_37:
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
  if ( (unsigned __int64)(v9 * KeQueryTimeIncrement() / 10000 - v3[1]) <= 0xEA60 )
    goto LABEL_37;
  ImageTuple = GetImageTuple(0x1C0000000LL, &v31, &v29);
  v12 = v29;
  v13 = ImageTuple;
  if ( ImageTuple && a1 >= 0x1C0000000LL && v29 + 0x1C0000000uLL > 0x1C0000000LL && a1 <= v29 + 0x1C0000000uLL )
    v14 = a1 - 0xC0000000;
  else
    v14 = 0;
  v15 = g_AssertFastMutex;
  v30 = *((_DWORD *)v3 + 4);
  v16 = *((_DWORD *)v3 + 5);
  v3[1] = v11;
  v17 = *((_DWORD *)v3 + 6);
  v29 = v16;
  ExReleaseFastMutex(v15);
  v18 = "<unknown>";
  v19 = v31;
  if ( (unsigned int)dword_1C0366010 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0366010, 0x400000000000uLL) )
  {
    v32 = 10;
    v33 = v14;
    v20 = "<unknown>";
    v34 = v13 != 0 ? v19 : 0;
    v35 = v13 != 0 ? v12 : 0;
    if ( g_ModuleName )
      v20 = (const CHAR *)g_ModuleName;
    v36 = v30;
    v37 = v29;
    CurrentIrql = KeGetCurrentIrql();
    v63 = &v32;
    v65 = (int *)&v33;
    v67 = &v34;
    v38 = CurrentIrql;
    v69 = &v35;
    v64 = 4LL;
    v66 = 4LL;
    v68 = 4LL;
    v70 = 4LL;
    TlgCreateSz(&pDesc, v20);
    v73 = 4LL;
    v74 = (int *)&v37;
    v72 = &v36;
    v76 = &v38;
    v75 = 4LL;
    v77 = 4LL;
    TlgCreateSz(&v78, "<unknown>");
    TlgWrite((TraceLoggingHProvider)&dword_1C0366010, &unk_1C02E478B, v22, v23, 0xBu, &pData);
  }
  if ( dword_1C0366050 && !v17 && !KeGetCurrentIrql() )
  {
    v24 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v14);
    if ( (unsigned int)dword_1C0366010 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0366010, 0x400000000000uLL) )
    {
      v40 = v14;
      v45 = v24;
      v48 = 4LL;
      v39 = 10;
      v50 = 4LL;
      v41 = v13 != 0 ? v19 : 0;
      v52 = 4LL;
      v54 = 4LL;
      v42 = v13 != 0 ? v12 : 0;
      if ( g_ModuleName )
        v18 = (const CHAR *)g_ModuleName;
      v43 = v30;
      v44 = v29;
      v47 = &v39;
      v49 = (int *)&v40;
      v51 = &v41;
      v53 = &v42;
      TlgCreateSz(&v55, v18);
      v57 = 4LL;
      v58 = (int *)&v44;
      v56 = &v43;
      v60 = &v45;
      v59 = 4LL;
      v61 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0366010, &unk_1C02E4722, v25, v26, cData, &v46);
    }
    if ( !v24 && !(unsigned int)TakeTelemetryAssertsLock() )
    {
      v28 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
      {
        while ( *(v28 - 4) != a1 )
        {
          v28 = (__int64 *)*v28;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v28 )
            goto LABEL_37;
        }
        ++*((_DWORD *)v28 - 2);
      }
      goto LABEL_37;
    }
  }
}
