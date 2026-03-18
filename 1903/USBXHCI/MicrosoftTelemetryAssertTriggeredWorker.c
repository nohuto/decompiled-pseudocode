/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x1C000830C
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C00082F0 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 * Callees:
 *     _TlgCreateSz @ 0x1C0001008 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1C0001040 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000106C (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(unsigned __int64 a1)
{
  KIRQL v2; // al
  __int64 *v3; // rcx
  KIRQL v4; // r12
  __int64 *v5; // rdi
  __int64 *PoolWithTag; // rax
  __int64 v7; // rbx
  ULONG TimeIncrement; // eax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int16 v13; // cx
  unsigned int v14; // r15d
  unsigned int v15; // r14d
  unsigned __int64 v16; // rcx
  unsigned int v17; // ebx
  int v18; // eax
  int v19; // r13d
  int v20; // edi
  const CHAR *v21; // r12
  const CHAR *v22; // rdx
  unsigned __int8 CurrentIrql; // al
  TraceLoggingHProvider v24; // rcx
  LPCGUID v25; // r8
  LPCGUID v26; // r9
  int v27; // edi
  LPCGUID v28; // r8
  LPCGUID v29; // r9
  UINT32 cData; // r11d
  KIRQL v31; // al
  __int64 *v32; // rcx
  int v33; // [rsp+58h] [rbp-B0h] BYREF
  int v34; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v35; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v36; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v37; // [rsp+68h] [rbp-A0h] BYREF
  int v38; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v39; // [rsp+70h] [rbp-98h] BYREF
  int v40; // [rsp+74h] [rbp-94h] BYREF
  int v41; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v42; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v43; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v44; // [rsp+84h] [rbp-84h] BYREF
  int v45; // [rsp+88h] [rbp-80h] BYREF
  int v46; // [rsp+8Ch] [rbp-7Ch] BYREF
  EVENT_DATA_DESCRIPTOR v47; // [rsp+98h] [rbp-70h] BYREF
  int *v48; // [rsp+B8h] [rbp-50h]
  __int64 v49; // [rsp+C0h] [rbp-48h]
  int *v50; // [rsp+C8h] [rbp-40h]
  __int64 v51; // [rsp+D0h] [rbp-38h]
  int *v52; // [rsp+D8h] [rbp-30h]
  __int64 v53; // [rsp+E0h] [rbp-28h]
  int *v54; // [rsp+E8h] [rbp-20h]
  __int64 v55; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+F8h] [rbp-10h] BYREF
  int *v57; // [rsp+108h] [rbp+0h]
  __int64 v58; // [rsp+110h] [rbp+8h]
  int *v59; // [rsp+118h] [rbp+10h]
  __int64 v60; // [rsp+120h] [rbp+18h]
  int *v61; // [rsp+128h] [rbp+20h]
  __int64 v62; // [rsp+130h] [rbp+28h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+138h] [rbp+30h] BYREF
  int *v64; // [rsp+158h] [rbp+50h]
  __int64 v65; // [rsp+160h] [rbp+58h]
  int *v66; // [rsp+168h] [rbp+60h]
  __int64 v67; // [rsp+170h] [rbp+68h]
  int *v68; // [rsp+178h] [rbp+70h]
  __int64 v69; // [rsp+180h] [rbp+78h]
  int *v70; // [rsp+188h] [rbp+80h]
  __int64 v71; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+198h] [rbp+90h] BYREF
  int *v73; // [rsp+1A8h] [rbp+A0h]
  __int64 v74; // [rsp+1B0h] [rbp+A8h]
  int *v75; // [rsp+1B8h] [rbp+B0h]
  __int64 v76; // [rsp+1C0h] [rbp+B8h]
  int *v77; // [rsp+1C8h] [rbp+C0h]
  __int64 v78; // [rsp+1D0h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+1D8h] [rbp+D0h] BYREF

  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return;
  v2 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
  v3 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
  v4 = v2;
  if ( &g_MicrosoftTelemetryAssertsTriggeredList == (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
  {
LABEL_5:
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x74727341u);
    v5 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_38:
      KeReleaseSpinLock(&g_AssertSpinLock, v4);
      return;
    }
    v7 = MEMORY[0xFFFFF78000000320];
    *PoolWithTag = a1;
    TimeIncrement = KeQueryTimeIncrement();
    v5[2] = 0LL;
    *((_DWORD *)v5 + 6) = 0;
    v5[1] = ((__int64)((unsigned __int128)(v7 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
          + ((unsigned __int64)((unsigned __int128)(v7 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
          - 60001;
    v9 = v5 + 4;
    v10 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v9 = g_MicrosoftTelemetryAssertsTriggeredList;
    v5[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v10 + 8) = v9;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)(v5 + 4);
  }
  else
  {
    while ( 1 )
    {
      v5 = v3 - 4;
      if ( *(v3 - 4) == a1 )
        break;
      v3 = (__int64 *)*v3;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == v3 )
        goto LABEL_5;
    }
  }
  ++*((_DWORD *)v5 + 4);
  ++*((_DWORD *)v5 + 5);
  v11 = MEMORY[0xFFFFF78000000320];
  v12 = v11 * KeQueryTimeIncrement() / 10000;
  if ( (unsigned __int64)(v12 - v5[1]) <= 0xEA60 )
    goto LABEL_38;
  v13 = *(_WORD *)(0x1C0000018LL + MEMORY[0x1C000003C]);
  if ( v13 == 267 || v13 == 523 )
  {
    v14 = *(_DWORD *)(0x1C0000008LL + MEMORY[0x1C000003C]);
    v15 = *(_DWORD *)(0x1C0000050LL + MEMORY[0x1C000003C]);
  }
  else
  {
    v14 = 0;
    v15 = 0;
  }
  if ( a1 < 0x1C0000000LL || (v16 = 0x1C0000000LL + v15, v16 <= 0x1C0000000LL) || a1 > v16 )
    v17 = 0;
  else
    v17 = a1 - 0xC0000000;
  v18 = *((_DWORD *)v5 + 5);
  v19 = *((_DWORD *)v5 + 4);
  v5[1] = v12;
  v20 = *((_DWORD *)v5 + 6);
  v33 = v18;
  KeReleaseSpinLock(&g_AssertSpinLock, v4);
  v21 = "<unknown>";
  if ( (unsigned int)hProvider > 5 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
  {
    v22 = "<unknown>";
    v34 = 10;
    v35 = v17;
    if ( g_ModuleName )
      v22 = g_ModuleName;
    v36 = v14;
    v39 = v33;
    v37 = v15;
    v38 = v19;
    CurrentIrql = KeGetCurrentIrql();
    v64 = &v34;
    v66 = (int *)&v35;
    v68 = (int *)&v36;
    v40 = CurrentIrql;
    v70 = (int *)&v37;
    v65 = 4LL;
    v67 = 4LL;
    v69 = 4LL;
    v71 = 4LL;
    TlgCreateSz(&pDesc, v22);
    v74 = 4LL;
    v75 = &v39;
    v73 = &v38;
    v77 = &v40;
    v76 = 4LL;
    v78 = 4LL;
    TlgCreateSz(&v79, "HW_COMPLIANCE: Port %2d Resume failed to complete before timeout");
    TlgWrite(v24, &unk_1C004E544, v25, v26, 0xBu, &pData);
  }
  if ( dword_1C005D078 && !v20 && !KeGetCurrentIrql() )
  {
    v27 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v17, g_ModuleName, v14, v15, 0LL, 0LL, 0);
    if ( (unsigned int)hProvider > 5 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v42 = v17;
      v43 = v14;
      if ( g_ModuleName )
        v21 = g_ModuleName;
      v41 = 10;
      v48 = &v41;
      v50 = (int *)&v42;
      v52 = (int *)&v43;
      v54 = (int *)&v44;
      v44 = v15;
      v45 = v19;
      v46 = v27;
      v49 = 4LL;
      v51 = 4LL;
      v53 = 4LL;
      v55 = 4LL;
      TlgCreateSz(&v56, v21);
      v58 = 4LL;
      v59 = &v33;
      v57 = &v45;
      v61 = &v46;
      v60 = 4LL;
      v62 = 4LL;
      TlgWrite((TraceLoggingHProvider)&v45, &unk_1C004E4DB, v28, v29, cData, &v47);
    }
    if ( !v27 )
    {
      v31 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
      v32 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
      v4 = v31;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
      {
        while ( *(v32 - 4) != a1 )
        {
          v32 = (__int64 *)*v32;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v32 )
            goto LABEL_38;
        }
        ++*((_DWORD *)v32 - 2);
      }
      goto LABEL_38;
    }
  }
}
