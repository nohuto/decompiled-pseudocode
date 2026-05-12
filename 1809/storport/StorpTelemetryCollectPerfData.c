/*
 * XREFs of StorpTelemetryCollectPerfData @ 0x1C000AFC0
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C000B940 (RaidUnitCompleteRequest.c)
 * Callees:
 *     IsReadWriteRequest @ 0x1C000B920 (IsReadWriteRequest.c)
 *     McTemplateK0zqjuuujsssxqquqiq @ 0x1C002A4D0 (McTemplateK0zqjuuujsssxqquqiq.c)
 *     RaidGetIoStartingLbaAndLength @ 0x1C004DBF0 (RaidGetIoStartingLbaAndLength.c)
 */

__int64 __fastcall StorpTelemetryCollectPerfData(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  unsigned __int8 v5; // r9
  _BYTE *v6; // r15
  __int64 v9; // rbx
  unsigned int v10; // eax
  char v11; // r9
  __int64 v12; // r11
  unsigned int v13; // ebx
  unsigned int v14; // r10d
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r8
  int v19; // ecx
  int v20; // ecx
  unsigned __int64 v21; // rcx
  union _LARGE_INTEGER v22; // r8
  bool v23; // zf
  LARGE_INTEGER v24; // rax
  LARGE_INTEGER v25; // rcx
  ULONGLONG UnbiasedInterruptTime; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v30; // rdi
  unsigned __int8 v31; // al
  char *v33; // rbx
  unsigned int v34; // esi
  unsigned int i; // r11d
  __int64 v36; // rdx
  unsigned __int64 v37; // r8
  __int64 v38; // r10
  __int64 v39; // r9
  int v40; // edx
  int v41; // edx
  unsigned __int64 v42; // rdx
  char v43; // dl
  int v44; // r12d
  __int64 *v45; // rdx
  int v46; // r8d
  unsigned int v47; // eax
  int v48; // ebx
  unsigned int v49; // edi
  __int64 *v50; // rax
  unsigned int v51; // edx
  unsigned int v52; // ebx
  ULONG v53; // edx
  char v54; // si
  __int64 v55; // rax
  unsigned __int8 v56; // bl
  __int64 v57; // rcx
  char v58; // di
  char v59; // al
  __int64 v60; // r12
  int v61; // esi
  unsigned int v62; // r11d
  unsigned int v63; // r9d
  __int64 v64; // rcx
  unsigned __int64 v65; // rdx
  __int64 v66; // r10
  __int64 v67; // r8
  int v68; // ecx
  int v69; // ecx
  unsigned __int64 v70; // rcx
  unsigned __int8 v71; // r11
  unsigned int v72; // esi
  unsigned int j; // r10d
  __int64 v74; // rcx
  unsigned __int64 v75; // rdx
  __int64 v76; // r9
  __int64 v77; // r8
  int v78; // ecx
  int v79; // ecx
  char v80; // al
  unsigned __int64 v81; // rcx
  volatile signed __int64 *v82; // rax
  __int64 v83; // rcx
  unsigned __int8 v84; // cl
  int v85; // ecx
  unsigned __int64 v86; // rax
  unsigned __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rax
  char v90; // [rsp+A0h] [rbp-21h]
  unsigned int v91; // [rsp+A4h] [rbp-1Dh]
  unsigned __int64 v92; // [rsp+A8h] [rbp-19h]
  int v93; // [rsp+B0h] [rbp-11h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+B8h] [rbp-9h] BYREF
  __int64 v95; // [rsp+C0h] [rbp-1h]
  int v96; // [rsp+C8h] [rbp+7h]
  int v97; // [rsp+CCh] [rbp+Bh]
  _BYTE *v98; // [rsp+D0h] [rbp+Fh]
  __int64 v99; // [rsp+D8h] [rbp+17h] BYREF

  v5 = *(_BYTE *)(a2 + 2);
  v6 = 0LL;
  v96 = 0;
  LOBYTE(v93) = 0;
  v99 = 0LL;
  v9 = a1;
  if ( v5 == 40 )
    v10 = *(_DWORD *)(a2 + 20);
  else
    v10 = v5;
  v91 = v10;
  v97 = IsReadWriteRequest(v10, a5);
  if ( !v97 )
    goto LABEL_29;
  if ( v11 != 40 )
  {
    v93 = *(_DWORD *)(a2 + 16);
    if ( !v11 && *(_BYTE *)(a2 + 10) )
    {
      v12 = a2 + 72;
      goto LABEL_27;
    }
    goto LABEL_29;
  }
  v12 = 0LL;
  v93 = *(_DWORD *)(a2 + 60);
  if ( *(_DWORD *)(a2 + 20) )
    goto LABEL_27;
  v13 = *(_DWORD *)(a2 + 56);
  v14 = 0;
  if ( !v13 )
  {
LABEL_16:
    v9 = a1;
    goto LABEL_27;
  }
  while ( 1 )
  {
    v15 = *(unsigned int *)(a2 + 4LL * v14 + 120);
    if ( (unsigned int)v15 < 0x80 )
      goto LABEL_20;
    v16 = *(unsigned int *)(a2 + 16);
    if ( (unsigned int)v15 >= (unsigned int)v16 )
      goto LABEL_20;
    v17 = v15 + a2;
    v18 = (unsigned int)v15;
    v19 = *(_DWORD *)(v15 + a2) - 64;
    if ( !v19 )
      break;
    v20 = v19 - 1;
    if ( !v20 )
    {
      v21 = v18 + 56;
      goto LABEL_19;
    }
    if ( v20 == 1 && v18 + 40 <= v16 )
    {
      v12 = v17 + 32;
      if ( !*(_DWORD *)(v17 + 12) )
        v12 = 0LL;
      goto LABEL_16;
    }
LABEL_20:
    if ( ++v14 >= v13 )
    {
      v9 = a1;
      goto LABEL_27;
    }
  }
  v21 = v18 + 40;
LABEL_19:
  if ( v21 > v16 )
    goto LABEL_20;
  v9 = a1;
  if ( *(_BYTE *)(v17 + 10) )
    v12 = v17 + 24;
LABEL_27:
  if ( v12 )
    RaidGetIoStartingLbaAndLength(v12, &v99);
LABEL_29:
  v22.QuadPart = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  if ( StorEtwLoggingEnabled )
  {
    v23 = UseQPCTime == 0;
    goto LABEL_31;
  }
  if ( g_StorpTraceLoggingPerformanceEnabled )
  {
    if ( !UseQPCTime )
      goto LABEL_36;
    v23 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
LABEL_31:
    if ( v23 )
    {
LABEL_36:
      UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
      v22 = PerformanceFrequency;
      v25.QuadPart = UnbiasedInterruptTime;
    }
    else
    {
      v24 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v22 = PerformanceFrequency;
      v25 = v24;
    }
  }
  else
  {
    v25.QuadPart = 0LL;
  }
  v27 = v25.QuadPart - *(_QWORD *)(v9 + 696);
  v28 = v27;
  v95 = v27;
  if ( !StorEtwLoggingEnabled )
    goto LABEL_43;
  if ( !UseQPCTime )
    goto LABEL_48;
  if ( g_StorpTraceLoggingPerformanceHighResolutionTimer )
  {
LABEL_43:
    if ( UseQPCTime && g_StorpTraceLoggingPerformanceHighResolutionTimer )
    {
      if ( !v22.QuadPart )
        return 3221225534LL;
      v92 = 10000000 * v28 / v22.QuadPart;
LABEL_49:
      v30 = *(_QWORD *)(v9 + 688);
      if ( *(_BYTE *)(a3 + 3192) )
      {
        v31 = *(_BYTE *)(a2 + 2);
        if ( !(v31 == 40 ? *(_DWORD *)(a2 + 20) : v31) )
        {
          if ( v31 != 40 )
          {
            v33 = (char *)(a2 + 72);
            goto LABEL_74;
          }
          v33 = 0LL;
          if ( !*(_DWORD *)(a2 + 20) )
          {
            v34 = *(_DWORD *)(a2 + 56);
            for ( i = 0; i < v34; ++i )
            {
              v36 = *(unsigned int *)(a2 + 4LL * i + 120);
              if ( (unsigned int)v36 < 0x80 )
                continue;
              v37 = *(unsigned int *)(a2 + 16);
              if ( (unsigned int)v36 >= (unsigned int)v37 )
                continue;
              v38 = v36 + a2;
              v39 = (unsigned int)v36;
              v40 = *(_DWORD *)(v36 + a2) - 64;
              if ( v40 )
              {
                v41 = v40 - 1;
                if ( v41 )
                {
                  if ( v41 == 1 && v39 + 40 <= v37 )
                  {
                    v33 = (char *)(v38 + 32);
                    if ( !*(_DWORD *)(v38 + 12) )
                      v33 = 0LL;
                    break;
                  }
                  continue;
                }
                v42 = v39 + 56;
              }
              else
              {
                v42 = v39 + 40;
              }
              if ( v42 <= v37 )
              {
                if ( *(_BYTE *)(v38 + 10) )
                  v33 = (char *)(v38 + 24);
                break;
              }
            }
          }
LABEL_74:
          if ( v33 )
          {
            v43 = *v33;
            if ( (((*v33 - 8) & 0x5D) == 0 || v43 == 37 || v43 == -98 || (unsigned __int8)(v43 - 94) <= 1u)
              && v30 + v92 >= *(_QWORD *)(a3 + 3232) )
            {
              _InterlockedIncrement64((volatile signed __int64 *)(a3 + 2088));
              v27 = v95;
            }
          }
        }
      }
      if ( v30 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(a3 + 2144));
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 2152), v30);
        if ( v30 > *(_QWORD *)(a3 + 2160) )
          *(_QWORD *)(a3 + 2160) = v30;
        if ( *(_BYTE *)(a2 + 2) == 40 )
        {
          if ( v30 > 10000000 * (unsigned __int64)*(unsigned int *)(a2 + 40) )
            _InterlockedIncrement64((volatile signed __int64 *)(a3 + 2168));
          v96 = *(_DWORD *)(a2 + 48);
        }
        v27 = v95;
      }
      if ( *(_BYTE *)(a2 + 2) == 40 )
        *(_DWORD *)(a2 + 48) = 0;
      v44 = 1;
      if ( v30 + v92 >= HighLatencyIoThreshold )
      {
        if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a3 + 2216)) <= 0x80
          && (byte_1C00617E5 & 0x10) != 0 )
        {
          McTemplateK0zqjuuujsssxqquqiq(
            HighLatencyIoThreshold / 0x2710uLL,
            a3 + 1976,
            a3 + 186,
            *(_QWORD *)(*(_QWORD *)(a3 + 24) + 4864LL),
            *(_DWORD *)(*(_QWORD *)(a3 + 24) + 56LL),
            *(_QWORD *)(a3 + 24) + 5256LL,
            *(_BYTE *)(a3 + 96),
            *(_BYTE *)(a3 + 97),
            *(_BYTE *)(a3 + 98),
            a3 + 1976,
            a3 + 160,
            a3 + 169,
            a3 + 186,
            HighLatencyIoThreshold / 0x2710uLL,
            (int)v92 / 10000,
            v30 / 0x2710,
            a5,
            v93,
            v99,
            v96);
        }
        v27 = v95;
      }
      if ( v97 )
      {
        v45 = (__int64 *)qword_1C0061510;
        if ( !v91 && ((a5 - 8) & 0x5F) == 0 )
          v44 = 0;
        v46 = 11;
        v47 = 0;
        while ( v27 > *v45 )
        {
          ++v47;
          ++v45;
          if ( v47 >= 0xB )
          {
            v48 = (unsigned __int16)TelemetryPerfContext;
            v49 = dword_1C006152C;
            goto LABEL_117;
          }
        }
        v48 = (unsigned __int16)TelemetryPerfContext;
        v46 = v47;
        v49 = dword_1C006152C;
        goto LABEL_117;
      }
      if ( !v91 )
      {
        if ( a5 == 66 )
        {
          v50 = (__int64 *)qword_1C0061540;
          goto LABEL_111;
        }
        if ( a5 == 53 || a5 == 0x91 )
        {
          v50 = (__int64 *)qword_1C0061540;
          v44 = 0;
LABEL_111:
          v46 = 4;
          v51 = 0;
          while ( v27 > *v50 )
          {
            ++v51;
            ++v50;
            if ( v51 >= 4 )
              goto LABEL_116;
          }
          v46 = v51;
LABEL_116:
          v48 = (unsigned __int16)qword_1C0061530;
          v49 = dword_1C006155C;
LABEL_117:
          v52 = v44 + v46 * v48;
          v53 = KeGetCurrentProcessorNumberEx(0LL) % g_RaidNumberProcessors;
          v54 = 0;
          v55 = v52;
          v56 = 0;
          v57 = v55 + v49;
          v90 = *(_BYTE *)(a2 + 3);
          v58 = 0;
          v98 = 0LL;
          v59 = *(_BYTE *)(a2 + 2);
          v60 = *(_QWORD *)(a3 + 2224) + v53 * HIDWORD(qword_1C0061560) + 24 * v57;
          if ( v59 == 40 )
          {
            v61 = *(_DWORD *)(a2 + 20);
            if ( !v61 )
            {
              v62 = *(_DWORD *)(a2 + 56);
              v63 = 0;
              if ( !v62 )
                goto LABEL_132;
              while ( 1 )
              {
                v64 = *(unsigned int *)(a2 + 4LL * v63 + 120);
                if ( (unsigned int)v64 < 0x80 )
                  goto LABEL_127;
                v65 = *(unsigned int *)(a2 + 16);
                if ( (unsigned int)v64 >= (unsigned int)v65 )
                  goto LABEL_127;
                v66 = v64 + a2;
                v67 = (unsigned int)v64;
                v68 = *(_DWORD *)(v64 + a2) - 64;
                if ( !v68 )
                  goto LABEL_125;
                v69 = v68 - 1;
                if ( v69 )
                  break;
                v70 = v67 + 56;
LABEL_126:
                if ( v70 <= v65 )
                {
                  v58 = *(_BYTE *)(v66 + 8);
                  goto LABEL_132;
                }
LABEL_127:
                if ( ++v63 >= v62 )
                  goto LABEL_132;
              }
              if ( v69 != 1 )
                goto LABEL_127;
LABEL_125:
              v70 = v67 + 40;
              goto LABEL_126;
            }
            v58 = 0;
LABEL_132:
            v71 = v90 & 0x3F;
            if ( v61 )
            {
              v56 = 0;
              goto LABEL_142;
            }
            v72 = *(_DWORD *)(a2 + 56);
            for ( j = 0; j < v72; ++j )
            {
              v74 = *(unsigned int *)(a2 + 4LL * j + 120);
              if ( (unsigned int)v74 < 0x80 )
                continue;
              v75 = *(unsigned int *)(a2 + 16);
              if ( (unsigned int)v74 >= (unsigned int)v75 )
                continue;
              v76 = v74 + a2;
              v77 = (unsigned int)v74;
              v78 = *(_DWORD *)(v74 + a2) - 64;
              if ( v78 )
              {
                v79 = v78 - 1;
                if ( v79 )
                {
                  if ( v79 == 1 && v77 + 40 <= v75 )
                  {
                    v6 = *(_BYTE **)(v76 + 24);
                    goto LABEL_141;
                  }
                  continue;
                }
                v81 = v77 + 56;
              }
              else
              {
                v81 = v77 + 40;
              }
              if ( v81 <= v75 )
              {
                v6 = *(_BYTE **)(v76 + 16);
LABEL_141:
                v56 = *(_BYTE *)(v76 + 9);
LABEL_142:
                v98 = v6;
                break;
              }
            }
            v54 = 0;
          }
          else
          {
            v58 = *(_BYTE *)(a2 + 4);
            v71 = v90 & 0x3F;
            if ( !v59 )
            {
              v6 = *(_BYTE **)(a2 + 32);
              v56 = *(_BYTE *)(a2 + 11);
              v98 = v6;
            }
          }
          if ( v90 >= 0 )
          {
            if ( v58 == 2 || v71 > 0x12u || (v85 = 262211, !_bittest(&v85, v71)) )
            {
LABEL_162:
              v82 = (volatile signed __int64 *)(v60 + 8);
              goto LABEL_163;
            }
          }
          else
          {
            if ( v6 && v56 >= 8u && (unsigned __int8)((*v6 & 0x7F) - 112) <= 1u )
            {
              v80 = v6[12];
              v54 = v6[2] & 0xF;
            }
            else
            {
              v80 = 0;
            }
            if ( v71 != 1 || v54 || v80 )
              goto LABEL_162;
          }
          v82 = (volatile signed __int64 *)v60;
LABEL_163:
          _InterlockedIncrement64(v82);
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v60 + 16), v92);
          if ( v97 )
          {
            if ( *(_QWORD *)(a3 + 2248) )
            {
              v83 = *(_QWORD *)(a3 + 2248)
                  + dword_1C0061578
                  * (KeGetCurrentNodeNumber() % ((unsigned int)(unsigned __int16)g_RaidNumaHighestNodeNumber + 1));
              if ( *(_QWORD *)v83 < v92 )
                *(_QWORD *)v83 = v92;
              if ( !v91 && ((a5 - 8) & 0x5F) == 0 )
              {
                if ( *(_BYTE *)(a2 + 2) == 40 )
                  _InterlockedExchangeAdd64((volatile signed __int64 *)(v83 + 8), *(unsigned int *)(a2 + 60));
                else
                  _InterlockedExchangeAdd64((volatile signed __int64 *)(v83 + 8), *(unsigned int *)(a2 + 16));
                v84 = a5;
                goto LABEL_191;
              }
              if ( *(_BYTE *)(a2 + 2) == 40 )
                v86 = *(unsigned int *)(a2 + 60);
              else
                v86 = *(unsigned int *)(a2 + 16);
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v83 + 16), v86);
            }
            if ( !v91 )
            {
              v84 = a5;
              goto LABEL_191;
            }
          }
          else if ( !v91 )
          {
            v84 = a5;
            if ( a5 == 53 || a5 == 0x91 )
            {
              if ( *(_QWORD *)(a3 + 2280) < v92 )
                *(_QWORD *)(a3 + 2280) = v92;
            }
            else if ( a5 == 66 )
            {
              if ( *(_QWORD *)(a3 + 2288) < v92 )
              {
                *(_QWORD *)(a3 + 2288) = v92;
                return 0LL;
              }
              return 0LL;
            }
LABEL_191:
            if ( ((v84 - 10) & 0x5F) == 0 )
            {
              v87 = *(_BYTE *)(a2 + 2) == 40 ? *(unsigned int *)(a2 + 60) : *(unsigned int *)(a2 + 16);
              _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 3160), v87);
              v88 = *(_QWORD *)(a1 + 768);
              if ( v88 || (v88 = *(_QWORD *)(a1 + 176)) != 0 )
              {
                if ( (*(_DWORD *)(v88 + 16) & 8) != 0 )
                  v88 = *(_QWORD *)(v88 + 24);
                if ( v88 )
                {
                  v89 = *(_QWORD *)(v88 + 184);
                  if ( v89 )
                  {
                    if ( (unsigned __int16)*(_DWORD *)(v89 + 16) )
                    {
                      if ( *(_BYTE *)(a2 + 2) == 40 )
                      {
                        _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 3168), *(unsigned int *)(a2 + 60));
                        return 0LL;
                      }
                      _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 3168), *(unsigned int *)(a2 + 16));
                    }
                  }
                }
              }
            }
          }
          return 0LL;
        }
      }
      return 3221225473LL;
    }
LABEL_48:
    v92 = v27;
    goto LABEL_49;
  }
  if ( v22.QuadPart )
  {
    v28 = 10000000 * v27 / v22.QuadPart;
    v27 = v28;
    v95 = v28;
    goto LABEL_43;
  }
  return 3221225534LL;
}
