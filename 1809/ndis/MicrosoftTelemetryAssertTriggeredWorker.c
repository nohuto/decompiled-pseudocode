/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x1C0083704
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00836E8 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 * Callees:
 *     _TlgWrite @ 0x1C0013A1C (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x1C001DC04 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C001DC2C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0083C4C (_TlgCreateSz.c)
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
  UCHAR v21; // dl
  ULONGLONG v22; // r8
  const CHAR *v23; // r12
  const CHAR *v24; // rdx
  unsigned __int8 CurrentIrql; // al
  LPCGUID v26; // r8
  LPCGUID v27; // r9
  __int64 v28; // r10
  int v29; // edi
  LPCGUID v30; // r8
  LPCGUID v31; // r9
  UINT32 cData; // r11d
  KIRQL v33; // al
  __int64 *v34; // rcx
  int v35; // [rsp+58h] [rbp-B0h] BYREF
  int v36; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v37; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v38; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v39; // [rsp+68h] [rbp-A0h] BYREF
  int v40; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v41; // [rsp+70h] [rbp-98h] BYREF
  int v42; // [rsp+74h] [rbp-94h] BYREF
  int v43; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v44; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v45; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v46; // [rsp+84h] [rbp-84h] BYREF
  int v47; // [rsp+88h] [rbp-80h] BYREF
  int v48; // [rsp+8Ch] [rbp-7Ch] BYREF
  EVENT_DATA_DESCRIPTOR v49; // [rsp+98h] [rbp-70h] BYREF
  int *v50; // [rsp+B8h] [rbp-50h]
  __int64 v51; // [rsp+C0h] [rbp-48h]
  int *v52; // [rsp+C8h] [rbp-40h]
  __int64 v53; // [rsp+D0h] [rbp-38h]
  int *v54; // [rsp+D8h] [rbp-30h]
  __int64 v55; // [rsp+E0h] [rbp-28h]
  int *v56; // [rsp+E8h] [rbp-20h]
  __int64 v57; // [rsp+F0h] [rbp-18h]
  _EVENT_DATA_DESCRIPTOR v58; // [rsp+F8h] [rbp-10h] BYREF
  int *v59; // [rsp+108h] [rbp+0h]
  __int64 v60; // [rsp+110h] [rbp+8h]
  int *v61; // [rsp+118h] [rbp+10h]
  __int64 v62; // [rsp+120h] [rbp+18h]
  int *v63; // [rsp+128h] [rbp+20h]
  __int64 v64; // [rsp+130h] [rbp+28h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+138h] [rbp+30h] BYREF
  int *v66; // [rsp+158h] [rbp+50h]
  __int64 v67; // [rsp+160h] [rbp+58h]
  int *v68; // [rsp+168h] [rbp+60h]
  __int64 v69; // [rsp+170h] [rbp+68h]
  int *v70; // [rsp+178h] [rbp+70h]
  __int64 v71; // [rsp+180h] [rbp+78h]
  int *v72; // [rsp+188h] [rbp+80h]
  __int64 v73; // [rsp+190h] [rbp+88h]
  _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+198h] [rbp+90h] BYREF
  int *v75; // [rsp+1A8h] [rbp+A0h]
  __int64 v76; // [rsp+1B0h] [rbp+A8h]
  int *v77; // [rsp+1B8h] [rbp+B0h]
  __int64 v78; // [rsp+1C0h] [rbp+B8h]
  int *v79; // [rsp+1C8h] [rbp+C0h]
  __int64 v80; // [rsp+1D0h] [rbp+C8h]
  _EVENT_DATA_DESCRIPTOR v81; // [rsp+1D8h] [rbp+D0h] BYREF

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
  v35 = v18;
  KeReleaseSpinLock(&g_AssertSpinLock, v4);
  v23 = "<unknown>";
  if ( stru_1C00B2040.LevelPlus1 > 5 && TlgKeywordOn(&stru_1C00B2040, 0x400000000000uLL) )
  {
    v24 = "<unknown>";
    v36 = 10;
    v37 = v17;
    if ( g_ModuleName )
      v24 = g_ModuleName;
    v38 = v14;
    v41 = v35;
    v39 = v15;
    v40 = v19;
    CurrentIrql = KeGetCurrentIrql();
    v66 = &v36;
    v68 = (int *)&v37;
    v70 = (int *)&v38;
    v42 = CurrentIrql;
    v72 = (int *)&v39;
    v67 = 4LL;
    v69 = 4LL;
    v71 = 4LL;
    v73 = 4LL;
    TlgCreateSz(&pDesc, v24);
    v76 = 4LL;
    v77 = &v41;
    v75 = &v40;
    v79 = &v42;
    v78 = 4LL;
    v80 = 4LL;
    TlgCreateSz(&v81, "<unknown>");
    TlgWrite(&stru_1C00B2040, &unk_1C008D804, v26, v27, 0xBu, &pData);
  }
  if ( TraceLoggingProviderEnabled(&stru_1C00B2078, v21, v22) && !v20 && !KeGetCurrentIrql() )
  {
    v29 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v17, g_ModuleName, v14, v15, v28, v28, 0);
    if ( stru_1C00B2040.LevelPlus1 > 5 && TlgKeywordOn(&stru_1C00B2040, 0x400000000000uLL) )
    {
      v44 = v17;
      v45 = v14;
      if ( g_ModuleName )
        v23 = g_ModuleName;
      v43 = 10;
      v50 = &v43;
      v52 = (int *)&v44;
      v54 = (int *)&v45;
      v56 = (int *)&v46;
      v46 = v15;
      v47 = v19;
      v48 = v29;
      v51 = 4LL;
      v53 = 4LL;
      v55 = 4LL;
      v57 = 4LL;
      TlgCreateSz(&v58, v23);
      v60 = 4LL;
      v61 = &v35;
      v59 = &v47;
      v63 = &v48;
      v62 = 4LL;
      v64 = 4LL;
      TlgWrite(&stru_1C00B2040, &unk_1C008D79B, v30, v31, cData, &v49);
    }
    if ( !v29 )
    {
      v33 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
      v34 = (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList;
      v4 = v33;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList != (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList )
      {
        while ( *(v34 - 4) != a1 )
        {
          v34 = (__int64 *)*v34;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v34 )
            goto LABEL_38;
        }
        ++*((_DWORD *)v34 - 2);
      }
      goto LABEL_38;
    }
  }
}
