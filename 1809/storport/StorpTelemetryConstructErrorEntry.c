/*
 * XREFs of StorpTelemetryConstructErrorEntry @ 0x1C0008544
 * Callers:
 *     StorpTelemetryCollectErrorData @ 0x1C00088F8 (StorpTelemetryCollectErrorData.c)
 * Callees:
 *     memset @ 0x1C002C3C0 (memset.c)
 *     RaidGetIoStartingLbaAndLength @ 0x1C004DBF0 (RaidGetIoStartingLbaAndLength.c)
 */

__int64 __fastcall StorpTelemetryConstructErrorEntry(
        __int64 a1,
        __int64 a2,
        union _LARGE_INTEGER a3,
        __int64 a4,
        _BYTE *a5)
{
  unsigned __int8 v5; // al
  _BYTE *v6; // rsi
  char v8; // bp
  _BYTE *v9; // r14
  int v12; // r15d
  _BYTE *v13; // rdi
  char v14; // al
  LARGE_INTEGER v15; // r11
  char v16; // r10
  unsigned int v17; // r9d
  unsigned int v18; // r11d
  __int64 v19; // rcx
  unsigned __int64 v20; // r8
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // ecx
  _BYTE *v24; // rax
  _BYTE *v25; // rax
  char v26; // r10
  char v27; // al
  char v28; // al
  __int64 v29; // rax
  union _LARGE_INTEGER v30; // rsi
  int v31; // ebx
  union _LARGE_INTEGER v32; // r8
  bool v33; // zf
  LARGE_INTEGER v34; // rax
  LARGE_INTEGER v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdx
  unsigned __int64 v38; // rcx
  __int64 result; // rax
  unsigned __int8 v40; // [rsp+60h] [rbp+8h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp+18h] BYREF
  char v42; // [rsp+78h] [rbp+20h]

  PerformanceFrequency = a3;
  v5 = *(_BYTE *)(a4 + 2);
  v6 = 0LL;
  v40 = 0;
  v8 = 0;
  v9 = 0LL;
  v42 = *(_BYTE *)(a4 + 3);
  if ( v5 == 40 )
    v12 = *(_DWORD *)(a4 + 20);
  else
    v12 = v5;
  v13 = a5;
  memset(a5, 0, 0x28uLL);
  v14 = *(_BYTE *)(a4 + 2);
  v15.QuadPart = 0LL;
  if ( v14 == 40 )
  {
    v16 = 0;
    if ( *(_DWORD *)(a4 + 20) )
    {
      v8 = 0;
      v40 = 0;
      goto LABEL_30;
    }
    v17 = 0;
    v18 = *(_DWORD *)(a4 + 56);
    if ( !v18 )
    {
LABEL_25:
      v15.QuadPart = 0LL;
      goto LABEL_30;
    }
    while ( 1 )
    {
      v19 = *(unsigned int *)(a4 + 4LL * v17 + 120);
      if ( (unsigned int)v19 >= 0x80 )
      {
        v20 = *(unsigned int *)(a4 + 16);
        if ( (unsigned int)v19 < (unsigned int)v20 )
          break;
      }
LABEL_24:
      if ( ++v17 >= v18 )
        goto LABEL_25;
    }
    v21 = (unsigned int)v19;
    v22 = *(_DWORD *)(v19 + a4) - 64;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( v23 )
      {
        if ( v23 == 1 && v21 + 40 <= v20 )
        {
          v8 = *(_BYTE *)(v21 + a4 + 8);
          v24 = (_BYTE *)(v21 + a4 + 32);
          v9 = *(_BYTE **)(v21 + a4 + 24);
          v15.QuadPart = 0LL;
          v40 = *(_BYTE *)(v21 + a4 + 9);
          if ( !*(_DWORD *)(v21 + a4 + 12) )
            v24 = v6;
          v6 = v24;
          goto LABEL_30;
        }
        goto LABEL_23;
      }
      if ( v21 + 56 > v20 )
      {
LABEL_23:
        if ( v16 )
          goto LABEL_25;
        goto LABEL_24;
      }
      v40 = *(_BYTE *)(v21 + a4 + 9);
    }
    else
    {
      if ( v21 + 40 > v20 )
        goto LABEL_23;
      v40 = *(_BYTE *)(v21 + a4 + 9);
    }
    v9 = *(_BYTE **)(v21 + a4 + 16);
    v8 = *(_BYTE *)(v21 + a4 + 8);
    v25 = (_BYTE *)(v21 + a4 + 24);
    v16 = 1;
    if ( !*(_BYTE *)(v21 + a4 + 10) )
      v25 = v6;
    v6 = v25;
    goto LABEL_23;
  }
  if ( !v14 )
  {
    v6 = (_BYTE *)(a4 + 72);
    v8 = *(_BYTE *)(a4 + 4);
    v9 = *(_BYTE **)(a4 + 32);
    v40 = *(_BYTE *)(a4 + 11);
    if ( !*(_BYTE *)(a4 + 10) )
      v6 = 0LL;
  }
LABEL_30:
  v26 = v42;
  v27 = v42;
  v13[1] = v8;
  v13[5] = -1;
  *v13 = v27 & 0x3F;
  if ( v6 )
  {
    v28 = *v6;
    v13[5] = *v6;
    if ( !v12 && ((v28 - 8) & 0x5D) == 0 )
    {
      RaidGetIoStartingLbaAndLength(v6, v13 + 24);
      if ( a2 )
      {
        v29 = *(_QWORD *)(a2 + 8);
        if ( v29 )
          *((_DWORD *)v13 + 2) = *(_DWORD *)(v29 + 40);
      }
    }
  }
  v30 = PerformanceFrequency;
  v31 = -1;
  if ( *(_DWORD *)(a1 + 2220) == 1 )
  {
    if ( !PerformanceFrequency.QuadPart )
      goto LABEL_69;
    v32.QuadPart = 0LL;
    PerformanceFrequency.QuadPart = 0LL;
    if ( StorEtwLoggingEnabled == LOBYTE(v15.LowPart) )
    {
      if ( g_StorpTraceLoggingPerformanceEnabled == v15.LowPart )
      {
        v35 = v15;
LABEL_48:
        v36 = v35.QuadPart - *(_QWORD *)(v30.QuadPart + 696);
        if ( StorEtwLoggingEnabled != LOBYTE(v15.LowPart) )
        {
          if ( UseQPCTime == LOBYTE(v15.LowPart) )
          {
LABEL_57:
            v37 = v36 / 10000;
            if ( (unsigned __int64)(v36 / 10000) <= 0xFFFFFFFF )
            {
              if ( v37 || !v36 )
                *((_DWORD *)v13 + 3) = v37;
              else
                *((_DWORD *)v13 + 3) = 1;
            }
            else
            {
              *((_DWORD *)v13 + 3) = -1;
            }
            goto LABEL_63;
          }
          if ( g_StorpTraceLoggingPerformanceHighResolutionTimer == v15.LowPart )
          {
            if ( !v32.QuadPart )
              goto LABEL_63;
            v36 = 10000000 * v36 / v32.QuadPart;
          }
        }
        if ( UseQPCTime != LOBYTE(v15.LowPart) && g_StorpTraceLoggingPerformanceHighResolutionTimer != v15.LowPart )
        {
          if ( !v32.QuadPart )
            goto LABEL_63;
          v36 = 10000000 * v36 / v32.QuadPart;
        }
        goto LABEL_57;
      }
      if ( UseQPCTime == LOBYTE(v15.LowPart) )
        goto LABEL_45;
      v33 = g_StorpTraceLoggingPerformanceHighResolutionTimer == v15.LowPart;
    }
    else
    {
      v33 = UseQPCTime == LOBYTE(v15.LowPart);
    }
    if ( !v33 )
    {
      v34 = KeQueryPerformanceCounter(&PerformanceFrequency);
LABEL_46:
      v32 = PerformanceFrequency;
      v35 = v34;
      v26 = v42;
      v15.LowPart = 0;
      goto LABEL_48;
    }
LABEL_45:
    v34.QuadPart = KeQueryUnbiasedInterruptTime();
    goto LABEL_46;
  }
LABEL_63:
  if ( v30.QuadPart )
  {
    v38 = *(_QWORD *)(v30.QuadPart + 688);
    if ( v38 / 0x2710 <= 0xFFFFFFFF )
    {
      if ( v38 / 0x2710 || (v31 = 1, !v38) )
        v31 = v38 / 0x2710;
    }
    *((_DWORD *)v13 + 4) = v31;
    goto LABEL_72;
  }
LABEL_69:
  if ( *(_BYTE *)(a1 + 3192) == 1 && *v13 == 9 )
    *((_DWORD *)v13 + 4) = 5000000 * *(_DWORD *)(a1 + 3216) / 0x2710u;
LABEL_72:
  *((_DWORD *)v13 + 5) = *(_DWORD *)(a1 + 672);
  if ( v26 < 0 && v9 && v40 >= 8u && (unsigned __int8)((*v9 & 0x7F) - 112) <= 1u )
  {
    v13[2] = v9[2] & 0xF;
    v13[3] = v9[12];
    v13[4] = v9[13];
  }
  result = *(unsigned int *)(a1 + 2304);
  *((_DWORD *)v13 + 8) = result;
  return result;
}
