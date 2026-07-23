/*
 * XREFs of PopGetIdleTimesCallback @ 0x1400A78F0
 * Callers:
 *     PoGetIdleTimes @ 0x1400A7260 (PoGetIdleTimes.c)
 * Callees:
 *     PpmContinueActiveTimeAccumulation @ 0x1400A5F8C (PpmContinueActiveTimeAccumulation.c)
 *     PpmConvertTime @ 0x1400A7C54 (PpmConvertTime.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall PopGetIdleTimesCallback(__int64 a1, _QWORD *a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rax
  BOOL v7; // edi
  unsigned __int64 v8; // rbp
  _DWORD *v9; // r13
  _QWORD *v10; // r15
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  LARGE_INTEGER v13; // r8
  LARGE_INTEGER v14; // r9
  unsigned __int64 QuadPart; // r12
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  unsigned __int64 v18; // rax
  unsigned int v19; // r8d
  int v20; // r9d
  unsigned __int64 v22; // rax
  __int64 v23; // r10
  unsigned int i; // edx
  unsigned int v25; // eax
  _QWORD *v26; // r11
  __int64 v27; // r8
  int v28; // eax
  int v29; // eax
  _DWORD *v30; // r8
  _QWORD *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // eax
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
  v41 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 652LL);
  v42 = *(_DWORD *)(a1 + 23428);
  if ( a2 )
  {
    memset(a2, 0, 0x30uLL);
    if ( v37 )
    {
      v23 = v38;
      if ( v38 )
      {
        for ( i = 0; ; ++i )
        {
          v25 = *v37;
          v26 = v10;
          v35 = i;
          v39 = v9;
          if ( *v37 >= *(_DWORD *)(v23 + 32) )
            v25 = *(_DWORD *)(v23 + 32);
          if ( i >= v25 )
          {
            QuadPart = PerformanceCounter.QuadPart;
            *a2 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))PpmConvertTime)(
                    *((_QWORD *)v37 + 3),
                    PopQpcFrequency,
                    10000000LL,
                    (LARGE_INTEGER)v14.QuadPart);
            break;
          }
          v14.QuadPart = i;
          v27 = 248LL * i;
          if ( *(_BYTE *)(v27 + v23 + 1056) )
          {
            if ( *(_BYTE *)(v27 + v23 + 1056) == 1 )
            {
              v28 = 1;
              goto LABEL_33;
            }
            if ( *(_BYTE *)(v27 + v23 + 1056) == 2 )
            {
              v28 = 2;
              goto LABEL_33;
            }
          }
          else if ( *(_BYTE *)(v27 + v23 + 1059) )
          {
            v28 = 2 - (*(_BYTE *)(v27 + v23 + 1060) != 0);
            goto LABEL_33;
          }
          v28 = 3;
LABEL_33:
          v29 = v28 - 1;
          if ( v29 )
          {
            v34 = v29 - 1;
            if ( v34 )
            {
              if ( v34 == 1 )
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
          if ( i != *(_DWORD *)(v23 + 20) )
          {
            v9 = v39;
            v10 = v26;
          }
          if ( v30 && v31 )
          {
            *v30 += v37[250 * i + 13] + v37[250 * i + 14];
            v32 = *(_QWORD *)&v37[250 * i + 10];
            if ( *(_DWORD *)(v23 + 20) == i )
              v32 += *(_QWORD *)(a1 + 23824);
            v33 = PpmConvertTime(v32, PopQpcFrequency, 10000000LL, i);
            i = v35;
            v23 = v38;
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
    *(_QWORD *)(a3 + 8) = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))PpmConvertTime)(
                            *(_QWORD *)(a1 + 24008),
                            PopQpcFrequency,
                            10000000LL,
                            (LARGE_INTEGER)v14.QuadPart);
  }
  if ( !v7 )
    goto LABEL_22;
  _m_prefetchw((const void *)(a1 + 23840));
  v16 = *(_QWORD *)(a1 + 23840);
  do
  {
    v17 = v16;
    v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 23840), v16, v16);
  }
  while ( v17 != v16 );
  if ( v8 != v16 )
    return 3221225473LL;
  if ( QuadPart > v8 )
  {
    v18 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))PpmConvertTime)(
            QuadPart - v8,
            PopQpcFrequency,
            10000000LL,
            (LARGE_INTEGER)v14.QuadPart);
    if ( v10 && v9 )
    {
      ++*v9;
      *v10 += v18;
    }
    v19 = v41;
    v20 = v42;
    if ( v18 > KeMaximumIncrement )
    {
      v22 = v18 / KeMaximumIncrement;
      v19 = v22 + v41 - 1;
      v20 = v22 + v42 - 1;
    }
  }
  else
  {
LABEL_22:
    v20 = v42;
    v19 = v41;
  }
  if ( a2 )
  {
    if ( v37 && v38 )
      *a2 += a2[1] + a2[2] + a2[3];
    else
      *a2 = v19 * (unsigned __int64)KeMaximumIncrement;
  }
  if ( a3 )
  {
    *(_DWORD *)a3 = v19;
    *(_DWORD *)(a3 + 4) = v20;
  }
  return 0LL;
}
