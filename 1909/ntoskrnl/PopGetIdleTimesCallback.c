/*
 * XREFs of PopGetIdleTimesCallback @ 0x140004B50
 * Callers:
 *     PoGetIdleTimes @ 0x140004998 (PoGetIdleTimes.c)
 * Callees:
 *     PpmContinueActiveTimeAccumulation @ 0x1400046D8 (PpmContinueActiveTimeAccumulation.c)
 *     PpmConvertTime @ 0x140004EB4 (PpmConvertTime.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall PopGetIdleTimesCallback(__int64 a1, __int64 *a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rax
  BOOL v7; // edi
  unsigned __int64 v8; // rbp
  _DWORD *v9; // r12
  _QWORD *v10; // r15
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  LARGE_INTEGER v13; // r8
  unsigned __int64 QuadPart; // r13
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // edx
  __int64 v22; // r10
  unsigned int i; // edx
  unsigned int v24; // eax
  _QWORD *v25; // r11
  __int64 v26; // r8
  int v27; // eax
  int v28; // eax
  int v29; // eax
  _DWORD *v30; // r8
  _QWORD *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned int v35; // [rsp+20h] [rbp-68h]
  _QWORD *v36; // [rsp+28h] [rbp-60h]
  unsigned int *v37; // [rsp+30h] [rbp-58h]
  __int64 v38; // [rsp+38h] [rbp-50h]
  _DWORD *v39; // [rsp+40h] [rbp-48h]
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp-40h]
  unsigned int v41; // [rsp+90h] [rbp+8h]
  int v42; // [rsp+A8h] [rbp+20h]

  CurrentPrcb = KeGetCurrentPrcb();
  v7 = CurrentPrcb != (struct _KPRCB *)a1;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( CurrentPrcb != (struct _KPRCB *)a1 )
  {
    _m_prefetchw((const void *)(a1 + 23840));
    v11 = *(_QWORD *)(a1 + 23840);
    do
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 23840), v11, v11);
    }
    while ( v12 != v11 );
    v8 = v11;
    if ( !v11 )
      return 3221225473LL;
  }
  v37 = *(unsigned int **)(a1 + 23816);
  v38 = *(_QWORD *)(a1 + 23808);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  QuadPart = PerformanceCounter.QuadPart;
  v42 = *(_DWORD *)(a1 + 23428);
  v41 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 652LL);
  if ( a2 )
  {
    memset(a2, 0, 0x30uLL);
    if ( v37 )
    {
      v22 = v38;
      if ( v38 )
      {
        for ( i = 0; ; ++i )
        {
          v24 = *v37;
          v25 = v10;
          v35 = i;
          v39 = v9;
          if ( *v37 >= *(_DWORD *)(v22 + 32) )
            v24 = *(_DWORD *)(v22 + 32);
          if ( i >= v24 )
          {
            QuadPart = PerformanceCounter.QuadPart;
            *a2 = PpmConvertTime(*((_QWORD *)v37 + 3), PopQpcFrequency, 10000000LL);
            break;
          }
          v26 = 248LL * i;
          if ( *(_BYTE *)(v26 + v22 + 1056) )
          {
            if ( *(_BYTE *)(v26 + v22 + 1056) == 1 )
            {
              v27 = 1;
              goto LABEL_33;
            }
            if ( *(_BYTE *)(v26 + v22 + 1056) == 2 )
            {
              v27 = 2;
              goto LABEL_33;
            }
          }
          else if ( *(_BYTE *)(v26 + v22 + 1059) )
          {
            v27 = 2 - (*(_BYTE *)(v26 + v22 + 1060) != 0);
            goto LABEL_33;
          }
          v27 = 3;
LABEL_33:
          v28 = v27 - 1;
          if ( v28 )
          {
            v29 = v28 - 1;
            if ( v29 )
            {
              if ( v29 == 1 )
              {
                v30 = a2 + 5;
                v31 = a2 + 3;
              }
              else
              {
                v30 = 0LL;
                v31 = 0LL;
              }
            }
            else
            {
              v30 = (_DWORD *)a2 + 9;
              v31 = a2 + 2;
            }
          }
          else
          {
            v30 = a2 + 4;
            v31 = a2 + 1;
          }
          v10 = v31;
          v9 = v30;
          v36 = v31;
          if ( i != *(_DWORD *)(v22 + 20) )
          {
            v9 = v39;
            v10 = v25;
          }
          if ( v30 && v31 )
          {
            *v30 += v37[250 * i + 13] + v37[250 * i + 14];
            v32 = *(_QWORD *)&v37[250 * i + 10];
            if ( *(_DWORD *)(v22 + 20) == i )
              v32 += *(_QWORD *)(a1 + 23824);
            v33 = PpmConvertTime(v32, PopQpcFrequency, 10000000LL);
            i = v35;
            v22 = v38;
            *v36 += v33;
          }
        }
      }
    }
  }
  if ( a3 )
  {
    if ( !v7 )
      PpmContinueActiveTimeAccumulation(a1, QuadPart, v13.QuadPart);
    *(_QWORD *)(a3 + 8) = PpmConvertTime(*(_QWORD *)(a1 + 24008), PopQpcFrequency, 10000000LL);
  }
  if ( !v7 )
    goto LABEL_18;
  _m_prefetchw((const void *)(a1 + 23840));
  v15 = *(_QWORD *)(a1 + 23840);
  do
  {
    v16 = v15;
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 23840), v15, v15);
  }
  while ( v16 != v15 );
  if ( v8 != v15 )
    return 3221225473LL;
  if ( QuadPart <= v8 )
    goto LABEL_18;
  v17 = PpmConvertTime(QuadPart - v8, PopQpcFrequency, 10000000LL);
  if ( v10 && v9 )
  {
    ++*v9;
    *v10 += v17;
  }
  if ( v17 > KeMaximumIncrement )
  {
    v18 = v17 / KeMaximumIncrement;
    v19 = (unsigned int)v18 + v41 - 1;
    v20 = v18 + v42 - 1;
    v41 = v18 + v41 - 1;
    v42 = v20;
  }
  else
  {
LABEL_18:
    v19 = v41;
    v20 = v42;
  }
  if ( a2 )
  {
    if ( v37 && v38 )
    {
      *a2 += a2[1] + a2[2] + a2[3];
    }
    else
    {
      v34 = v19 * KeMaximumIncrement;
      LODWORD(v19) = v41;
      *a2 = v34;
      v20 = v42;
    }
  }
  if ( a3 )
  {
    *(_DWORD *)a3 = v19;
    *(_DWORD *)(a3 + 4) = v20;
  }
  return 0LL;
}
