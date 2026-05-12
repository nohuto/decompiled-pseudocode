/*
 * XREFs of StorpTelemetryCollectPerfData @ 0x1C000AB20
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0009590 (RaidUnitCompleteRequest.c)
 * Callees:
 *     <none>
 */

__int64 StorpTelemetryCollectPerfData(_QWORD *a1, __int64 a2, __int64 a3, ...)
{
  unsigned __int8 v3; // al
  unsigned int v4; // esi
  _QWORD *v7; // r13
  int v8; // edi
  union _LARGE_INTEGER v9; // r8
  bool v10; // zf
  ULONGLONG UnbiasedInterruptTime; // rax
  LARGE_INTEGER v12; // rcx
  __int64 v13; // r10
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rax
  char v17; // di
  __int64 *v18; // rdx
  int v19; // r8d
  unsigned int v20; // eax
  BOOL v21; // r9d
  unsigned int v22; // r15d
  int v23; // ebp
  unsigned int v24; // ebp
  ULONG CurrentProcessorNumber; // eax
  unsigned int v26; // r9d
  __int64 v27; // rax
  char v28; // r9
  unsigned __int64 v29; // rdx
  char v30; // r8
  unsigned int v31; // r10d
  __int64 v32; // rcx
  unsigned int v33; // eax
  int v34; // ecx
  volatile signed __int64 *v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int8 v44; // dl
  char *v46; // r15
  unsigned int v47; // r11d
  unsigned int v48; // r12d
  __int64 v49; // r9
  char v50; // r9
  unsigned __int64 v51; // r10
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v53; // r11
  unsigned __int64 v54; // rbp
  __int64 *v55; // rdx
  int v56; // eax
  unsigned int v57; // r8d
  __int64 v58; // r13
  int v59; // r9d
  int v60; // r9d
  __int64 v61; // [rsp+20h] [rbp-48h]
  unsigned __int64 v63; // [rsp+78h] [rbp+10h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+88h] [rbp+20h] BYREF
  va_list PerformanceFrequencya; // [rsp+88h] [rbp+20h]
  __int64 v66; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(PerformanceFrequencya, a3);
  PerformanceFrequency.QuadPart = va_arg(va1, _QWORD);
  v66 = va_arg(va1, _QWORD);
  v3 = *(_BYTE *)(a2 + 2);
  v4 = 0;
  v7 = a1;
  if ( v3 == 40 )
    v8 = *(_DWORD *)(a2 + 20);
  else
    v8 = v3;
  v9.QuadPart = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  if ( StorEtwLoggingEnabled )
  {
    v10 = UseQPCTime == 0;
  }
  else
  {
    if ( !g_StorpTraceLoggingPerformanceEnabled )
    {
      v12.QuadPart = 0LL;
      goto LABEL_7;
    }
    if ( !UseQPCTime )
      goto LABEL_6;
    v10 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
  }
  if ( v10 )
  {
LABEL_6:
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
    v9 = PerformanceFrequency;
    v12.QuadPart = UnbiasedInterruptTime;
    goto LABEL_7;
  }
  PerformanceCounter = KeQueryPerformanceCounter((PLARGE_INTEGER)PerformanceFrequencya);
  v9 = PerformanceFrequency;
  v12 = PerformanceCounter;
LABEL_7:
  v13 = v7[87];
  v14 = v12.QuadPart - v13;
  if ( StorEtwLoggingEnabled )
  {
    if ( !UseQPCTime )
    {
LABEL_132:
      v16 = v14;
      goto LABEL_15;
    }
    if ( !g_StorpTraceLoggingPerformanceHighResolutionTimer )
    {
      if ( !v9.QuadPart )
        return 3221225534LL;
      v14 = 10000000 * v14 / v9.QuadPart;
    }
  }
  if ( !UseQPCTime || !g_StorpTraceLoggingPerformanceHighResolutionTimer )
    goto LABEL_132;
  if ( !v9.QuadPart )
    return 3221225534LL;
  v15 = 10000000 * v14;
  if ( v9.QuadPart == 10000000 )
    v16 = v15 / 10000000;
  else
    v16 = v15 / v9.QuadPart;
LABEL_15:
  v63 = v16;
  if ( !*(_BYTE *)(a3 + 2976) )
    goto LABEL_16;
  v44 = *(_BYTE *)(a2 + 2);
  if ( v44 == 40 ? *(_DWORD *)(a2 + 20) : v44 )
    goto LABEL_16;
  if ( v44 != 40 )
  {
    v46 = (char *)(a2 + 72);
    goto LABEL_78;
  }
  v46 = 0LL;
  if ( *(_DWORD *)(a2 + 20) )
    goto LABEL_77;
  v47 = 0;
  v48 = *(_DWORD *)(a2 + 56);
  if ( !v48 )
    goto LABEL_77;
  while ( 1 )
  {
    v49 = *(unsigned int *)(a2 + 4LL * v47 + 120);
    if ( (unsigned int)v49 < 0x80 )
      goto LABEL_76;
    v54 = *(unsigned int *)(a2 + 16);
    if ( (unsigned int)v49 >= (unsigned int)v54 )
      goto LABEL_76;
    v58 = *(unsigned int *)(a2 + 4LL * v47 + 120);
    v59 = *(_DWORD *)(a2 + v49) - 64;
    if ( v59 )
      break;
    if ( v58 + 40 <= v54 )
    {
      if ( !*(_BYTE *)(a2 + v58 + 10) )
        goto LABEL_77;
LABEL_125:
      v46 = (char *)(v58 + a2 + 24);
      goto LABEL_77;
    }
LABEL_76:
    if ( ++v47 >= v48 )
      goto LABEL_77;
  }
  v60 = v59 - 1;
  if ( !v60 )
  {
    if ( v58 + 56 <= v54 )
    {
      if ( !*(_BYTE *)(a2 + v58 + 10) )
        goto LABEL_77;
      goto LABEL_125;
    }
    goto LABEL_76;
  }
  if ( v60 != 1 || v58 + 40 > v54 )
    goto LABEL_76;
  v46 = (char *)(v58 + a2 + 32);
  if ( !*(_DWORD *)(a2 + v58 + 12) )
    v46 = 0LL;
LABEL_77:
  v7 = a1;
LABEL_78:
  if ( v46 )
  {
    v50 = *v46;
    if ( ((*v46 - 8) & 0x5D) == 0 || v50 == 37 || v50 == -98 || (unsigned __int8)(v50 - 94) <= 1u )
    {
      v51 = v7[86];
      if ( v51 + v16 >= *(_QWORD *)(a3 + 3016) )
        _InterlockedIncrement64((volatile signed __int64 *)(a3 + 2088));
      goto LABEL_82;
    }
  }
LABEL_16:
  if ( *(_BYTE *)(a2 + 2) == 40 && (*(_DWORD *)(a2 + 4) || *(_DWORD *)(a2 + 28)) )
  {
    LODWORD(v61) = *(_DWORD *)(a2 + 4);
    HIDWORD(v61) = *(_DWORD *)(a2 + 28);
    v51 = v13 - v61;
    if ( UseQPCTime && (g_StorpTraceLoggingPerformanceHighResolutionTimer || StorEtwLoggingEnabled) )
      v51 = 10000000 * v51 / v9.QuadPart;
LABEL_82:
    if ( v51 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(a3 + 2136));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 2144), v51);
      if ( v51 > *(_QWORD *)(a3 + 2152) )
        *(_QWORD *)(a3 + 2152) = v51;
      if ( *(_BYTE *)(a2 + 2) == 40 && v51 > *(unsigned int *)(a2 + 40) )
        _InterlockedIncrement64((volatile signed __int64 *)(a3 + 2160));
    }
  }
  if ( v8 )
    return 3221225473LL;
  v17 = v66;
  if ( (((_BYTE)v66 - 8) & 0x5D) == 0 )
  {
    v18 = (__int64 *)*(&P + 1);
    v19 = 11;
    v20 = 0;
    v21 = (((_BYTE)v66 - 8) & 0x5F) != 0;
    while ( v14 > *v18 )
    {
      ++v20;
      ++v18;
      if ( v20 >= 0xB )
        goto LABEL_26;
    }
    v19 = v20;
LABEL_26:
    v22 = dword_1C006244C;
    v23 = v19 * (unsigned __int16)TelemetryPerfContext;
    goto LABEL_27;
  }
  if ( (_BYTE)v66 == 66 )
  {
    v55 = (__int64 *)qword_1C0062460;
    v21 = 1;
  }
  else
  {
    if ( (_BYTE)v66 != 53 && (_BYTE)v66 != 0x91 )
      return 3221225473LL;
    v55 = (__int64 *)qword_1C0062460;
    v21 = 0;
  }
  v56 = 4;
  v57 = 0;
  while ( v14 > *v55 )
  {
    ++v57;
    ++v55;
    if ( v57 >= 4 )
      goto LABEL_100;
  }
  v56 = v57;
LABEL_100:
  v22 = dword_1C006247C;
  v23 = v56 * (unsigned __int16)qword_1C0062450;
LABEL_27:
  v24 = v21 + v23;
  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  if ( g_RaidNumberProcessors == 24 )
    v26 = CurrentProcessorNumber % 0x18;
  else
    v26 = CurrentProcessorNumber % g_RaidNumberProcessors;
  v27 = v26 * HIDWORD(qword_1C0062480);
  v28 = 0;
  v29 = *(_QWORD *)(a3 + 2208) + v27 + 24 * (v24 + (unsigned __int64)v22);
  v30 = *(_BYTE *)(a2 + 3);
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    if ( !*(_DWORD *)(a2 + 20) )
    {
      v31 = *(_DWORD *)(a2 + 56);
      if ( v31 )
      {
        do
        {
          v32 = *(unsigned int *)(a2 + 4LL * v4 + 120);
          if ( (unsigned int)v32 >= 0x80 )
          {
            v53 = *(unsigned int *)(a2 + 16);
            if ( (unsigned int)v32 < (unsigned int)v53 )
            {
              if ( *(_DWORD *)(v32 + a2) == 64 )
              {
                if ( v32 + 40 <= v53 )
                  goto LABEL_112;
              }
              else if ( *(_DWORD *)(v32 + a2) == 65 )
              {
                if ( v32 + 56 <= v53 )
                  goto LABEL_112;
              }
              else if ( *(_DWORD *)(v32 + a2) == 66 && v32 + 40 <= v53 )
              {
LABEL_112:
                v28 = *(_BYTE *)(v32 + a2 + 8);
                break;
              }
            }
          }
          ++v4;
        }
        while ( v4 < v31 );
      }
    }
  }
  else
  {
    v28 = *(_BYTE *)(a2 + 4);
  }
  v33 = (unsigned __int8)v30;
  LOBYTE(v33) = v30 & 0x3F;
  if ( v30 < 0 || v28 == 2 || (unsigned __int8)v33 > 0x12u || (v34 = 262211, !_bittest(&v34, v33)) )
    v35 = (volatile signed __int64 *)(v29 + 8);
  else
    v35 = (volatile signed __int64 *)v29;
  _InterlockedIncrement64(v35);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 16), v63);
  if ( ((v17 - 8) & 0x5D) == 0 )
  {
    if ( *(_QWORD *)(a3 + 2232) )
    {
      v36 = *(_QWORD *)(a3 + 2232)
          + dword_1C0062498
          * (KeGetCurrentNodeNumber() % ((unsigned int)(unsigned __int16)g_RaidNumaHighestNodeNumber + 1));
      if ( *(_QWORD *)v36 < v63 )
        *(_QWORD *)v36 = v63;
      if ( ((v17 - 8) & 0x5F) != 0 )
      {
        if ( *(_BYTE *)(a2 + 2) == 40 )
          v39 = *(unsigned int *)(a2 + 60);
        else
          v39 = *(unsigned int *)(a2 + 16);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 16), v39);
      }
      else
      {
        if ( *(_BYTE *)(a2 + 2) == 40 )
          v37 = *(unsigned int *)(a2 + 60);
        else
          v37 = *(unsigned int *)(a2 + 16);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 8), v37);
      }
    }
    goto LABEL_53;
  }
  if ( v17 == 53 || v17 == -111 )
  {
    if ( *(_QWORD *)(a3 + 2264) < v63 )
      *(_QWORD *)(a3 + 2264) = v63;
LABEL_53:
    if ( ((v17 - 10) & 0x5F) == 0 )
    {
      v40 = *(_BYTE *)(a2 + 2) == 40 ? *(unsigned int *)(a2 + 60) : *(unsigned int *)(a2 + 16);
      *(_QWORD *)(a3 + 2944) += v40;
      v41 = v7[96];
      if ( v41 || (v41 = v7[22]) != 0 )
      {
        if ( (*(_DWORD *)(v41 + 16) & 8) != 0 )
          v41 = *(_QWORD *)(v41 + 24);
        if ( v41 )
        {
          v42 = *(_QWORD *)(v41 + 184);
          if ( v42 )
          {
            if ( (unsigned __int16)*(_DWORD *)(v42 + 16) )
            {
              if ( *(_BYTE *)(a2 + 2) == 40 )
                v43 = *(unsigned int *)(a2 + 60);
              else
                v43 = *(unsigned int *)(a2 + 16);
              *(_QWORD *)(a3 + 2952) += v43;
            }
          }
        }
      }
    }
  }
  else
  {
    if ( v17 != 66 )
      goto LABEL_53;
    if ( *(_QWORD *)(a3 + 2272) < v63 )
      *(_QWORD *)(a3 + 2272) = v63;
  }
  return 0LL;
}
