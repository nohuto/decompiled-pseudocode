/*
 * XREFs of StorpTelemetryConstructErrorEntry @ 0x1C000BE04
 * Callers:
 *     StorpTelemetryCollectErrorData @ 0x1C000BB68 (StorpTelemetryCollectErrorData.c)
 * Callees:
 *     memset @ 0x1C0024DC0 (memset.c)
 */

__int64 __fastcall StorpTelemetryConstructErrorEntry(
        __int64 a1,
        __int64 a2,
        union _LARGE_INTEGER a3,
        __int64 a4,
        _BYTE *a5)
{
  _BYTE *v5; // rsi
  unsigned __int8 v6; // r15
  int v7; // r14d
  char v8; // r13
  _BYTE *v9; // r12
  int v11; // eax
  _BYTE *v12; // rbx
  unsigned __int8 v13; // r15
  char v14; // r9
  char v15; // al
  __int64 v16; // r8
  int v17; // edi
  union _LARGE_INTEGER v18; // rsi
  unsigned __int64 v19; // rcx
  __int64 result; // rax
  union _LARGE_INTEGER v21; // r8
  bool v22; // zf
  LARGE_INTEGER v23; // rax
  char v24; // r10
  unsigned int v25; // r9d
  unsigned int v26; // r11d
  __int64 v27; // rcx
  unsigned __int64 v28; // r8
  __int64 v29; // rdx
  int v30; // ecx
  _BYTE *v31; // rax
  LARGE_INTEGER v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdx
  int v35; // ecx
  _BYTE *v36; // rax
  __int64 v37; // rax
  char v38; // [rsp+20h] [rbp-28h]
  int v39; // [rsp+24h] [rbp-24h]
  int v40; // [rsp+28h] [rbp-20h]
  unsigned __int64 v41; // [rsp+30h] [rbp-18h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+A0h] [rbp+58h] BYREF
  unsigned __int8 v45; // [rsp+A8h] [rbp+60h]

  PerformanceFrequency = a3;
  v5 = 0LL;
  v6 = *(_BYTE *)(a4 + 2);
  v7 = 0;
  v8 = 0;
  v38 = *(_BYTE *)(a4 + 3);
  v9 = 0LL;
  v39 = 0;
  v45 = 0;
  if ( v6 == 40 )
    v11 = *(_DWORD *)(a4 + 20);
  else
    v11 = v6;
  v12 = a5;
  v40 = v11;
  memset(a5, 0, 0x28uLL);
  if ( v6 != 40 )
  {
    if ( v6 )
      goto LABEL_36;
    v7 = *(unsigned __int8 *)(a4 + 10);
    v5 = (_BYTE *)(a4 + 72);
    v8 = *(_BYTE *)(a4 + 4);
    v9 = *(_BYTE **)(a4 + 32);
    v13 = *(_BYTE *)(a4 + 11);
    if ( !*(_BYTE *)(a4 + 10) )
      v5 = 0LL;
    goto LABEL_7;
  }
  v24 = 0;
  if ( *(_DWORD *)(a4 + 20) )
    goto LABEL_36;
  v25 = 0;
  v26 = *(_DWORD *)(a4 + 56);
  if ( !v26 )
    goto LABEL_36;
  while ( 1 )
  {
    v27 = *(unsigned int *)(a4 + 4LL * v25 + 120);
    if ( (unsigned int)v27 >= 0x80 )
    {
      v28 = *(unsigned int *)(a4 + 16);
      if ( (unsigned int)v27 < (unsigned int)v28 )
        break;
    }
LABEL_70:
    if ( ++v25 >= v26 )
    {
LABEL_35:
      v7 = v39;
      goto LABEL_36;
    }
  }
  v29 = (unsigned int)v27;
  v30 = *(_DWORD *)(v27 + a4) - 64;
  if ( !v30 )
  {
    if ( v29 + 40 > v28 )
      goto LABEL_34;
    v45 = *(_BYTE *)(v29 + a4 + 9);
LABEL_31:
    v9 = *(_BYTE **)(v29 + a4 + 16);
    v31 = (_BYTE *)(v29 + a4 + 24);
    v8 = *(_BYTE *)(v29 + a4 + 8);
    LOBYTE(v39) = *(_BYTE *)(v29 + a4 + 10);
    v24 = 1;
    if ( !(_BYTE)v39 )
      v31 = v5;
    v5 = v31;
LABEL_34:
    if ( v24 )
      goto LABEL_35;
    goto LABEL_70;
  }
  v35 = v30 - 1;
  if ( !v35 )
  {
    if ( v29 + 56 > v28 )
      goto LABEL_34;
    v45 = *(_BYTE *)(v29 + a4 + 9);
    goto LABEL_31;
  }
  if ( v35 != 1 || v29 + 40 > v28 )
    goto LABEL_34;
  v7 = *(_DWORD *)(v29 + a4 + 12);
  v8 = *(_BYTE *)(v29 + a4 + 8);
  v9 = *(_BYTE **)(v29 + a4 + 24);
  v45 = *(_BYTE *)(v29 + a4 + 9);
  v36 = (_BYTE *)(v29 + a4 + 32);
  if ( !v7 )
    v36 = v5;
  v5 = v36;
LABEL_36:
  v13 = v45;
LABEL_7:
  v14 = v38;
  v12[1] = v8;
  v12[5] = -1;
  *v12 = v38 & 0x3F;
  if ( v5 )
  {
    v15 = *v5;
    v12[5] = *v5;
    if ( !v40 && ((v15 - 8) & 0x5D) == 0 )
    {
      if ( v7 == 16 )
      {
        HIBYTE(v41) = v5[2];
        BYTE6(v41) = v5[3];
        BYTE5(v41) = v5[4];
        BYTE4(v41) = v5[5];
        BYTE3(v41) = v5[6];
        BYTE2(v41) = v5[7];
        BYTE1(v41) = v5[8];
        LOBYTE(v41) = v5[9];
      }
      else
      {
        v41 = (unsigned __int8)v5[5] | (unsigned __int64)(((unsigned __int8)v5[4] | ((((unsigned __int8)v5[2] << 8) | (unsigned int)(unsigned __int8)v5[3]) << 8)) << 8);
      }
      *((_QWORD *)v12 + 3) = v41;
      if ( a2 )
      {
        v37 = *(_QWORD *)(a2 + 8);
        if ( v37 )
          *((_DWORD *)v12 + 2) = *(_DWORD *)(v37 + 40);
      }
    }
  }
  v16 = a1;
  v17 = -1;
  v18 = PerformanceFrequency;
  if ( *(_DWORD *)(a1 + 2200) == 1 )
  {
    if ( !PerformanceFrequency.QuadPart )
      goto LABEL_80;
    v21.QuadPart = 0LL;
    PerformanceFrequency.QuadPart = 0LL;
    if ( StorEtwLoggingEnabled )
    {
      v22 = UseQPCTime == 0;
    }
    else
    {
      if ( !g_StorpTraceLoggingPerformanceEnabled )
      {
        v32.QuadPart = 0LL;
        goto LABEL_41;
      }
      if ( !UseQPCTime )
        goto LABEL_39;
      v22 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
    }
    if ( !v22 )
    {
      v23 = KeQueryPerformanceCounter(&PerformanceFrequency);
LABEL_40:
      v21 = PerformanceFrequency;
      v32 = v23;
      v14 = v38;
LABEL_41:
      v33 = v32.QuadPart - *(_QWORD *)(v18.QuadPart + 696);
      if ( StorEtwLoggingEnabled )
      {
        if ( !UseQPCTime )
          goto LABEL_48;
        if ( !g_StorpTraceLoggingPerformanceHighResolutionTimer )
        {
          if ( !v21.QuadPart )
            goto LABEL_52;
          v33 = 10000000 * v33 / v21.QuadPart;
        }
      }
      if ( !UseQPCTime || !g_StorpTraceLoggingPerformanceHighResolutionTimer )
      {
LABEL_48:
        v34 = v33 / 10000;
        if ( (unsigned __int64)(v33 / 10000) > 0xFFFFFFFF )
        {
          *((_DWORD *)v12 + 3) = -1;
        }
        else if ( v34 || !v33 )
        {
          *((_DWORD *)v12 + 3) = v34;
        }
        else
        {
          *((_DWORD *)v12 + 3) = 1;
        }
        goto LABEL_52;
      }
      if ( v21.QuadPart )
      {
        v33 = 10000000 * v33 / v21.QuadPart;
        goto LABEL_48;
      }
LABEL_52:
      v16 = a1;
      goto LABEL_11;
    }
LABEL_39:
    v23.QuadPart = KeQueryUnbiasedInterruptTime();
    goto LABEL_40;
  }
LABEL_11:
  if ( v18.QuadPart )
  {
    v19 = *(_QWORD *)(v18.QuadPart + 688);
    if ( v19 / 0x2710 <= 0xFFFFFFFF )
    {
      if ( v19 / 0x2710 || (v17 = 1, !v19) )
        v17 = v19 / 0x2710;
    }
    *((_DWORD *)v12 + 4) = v17;
    goto LABEL_17;
  }
LABEL_80:
  if ( *(_BYTE *)(v16 + 2976) == 1 && *v12 == 9 )
    *((_DWORD *)v12 + 4) = 5000000 * *(_DWORD *)(v16 + 3000);
LABEL_17:
  *((_DWORD *)v12 + 5) = *(_DWORD *)(v16 + 672);
  if ( v14 < 0 && v9 && v13 >= 8u && (unsigned __int8)((*v9 & 0x7F) - 112) <= 1u )
  {
    v12[2] = v9[2] & 0xF;
    v12[3] = v9[12];
    v12[4] = v9[13];
  }
  result = *(unsigned int *)(v16 + 2288);
  *((_DWORD *)v12 + 8) = result;
  return result;
}
