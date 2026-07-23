/*
 * XREFs of PpmCheckSnapAllDeliveredPerformance @ 0x14005B980
 * Callers:
 *     PpmCheckUpdateDeliveredPerformanceIfTracingEnabled @ 0x140142000 (PpmCheckUpdateDeliveredPerformanceIfTracingEnabled.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x14005B930 (EtwpLevelKeywordEnabled.c)
 *     PpmSnapPerformanceAccumulation @ 0x14005BDC0 (PpmSnapPerformanceAccumulation.c)
 *     KiInsertQueueDpc @ 0x1400621B0 (KiInsertQueueDpc.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400A7860 (KeQueryActiveProcessorCountEx.c)
 *     PpmConvertTime @ 0x1400A7C54 (PpmConvertTime.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     KeCopyAffinityEx @ 0x1400EDB30 (KeCopyAffinityEx.c)
 *     PpmPerfCheckForIllegalProcessorThrottle @ 0x140119684 (PpmPerfCheckForIllegalProcessorThrottle.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char PpmCheckSnapAllDeliveredPerformance()
{
  unsigned __int64 v0; // rsi
  REGHANDLE v1; // r9
  unsigned __int16 v2; // r8
  unsigned __int64 v3; // rdx
  __int64 v4; // r12
  struct _KPRCB *v5; // rdi
  _PROC_PERF_CHECK *PerfCheck; // rbx
  bool v7; // r15
  _PROC_PERF_CHECK_SNAP *p_CurrentSnap; // r14
  char v9; // al
  __int64 v10; // rdx
  unsigned __int64 Time; // rax
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // r8
  __int64 v15; // r8
  unsigned int v17; // ecx
  __int64 v18; // rax
  _QWORD *v19; // rdx
  int v20; // r8d
  unsigned __int64 *v21; // r9
  __int64 v22; // r10
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rbx
  unsigned __int16 v25; // si
  unsigned int v26; // r14d
  unsigned __int64 v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rdx
  unsigned __int16 v31; // [rsp+40h] [rbp-C0h]
  __int16 Group; // [rsp+44h] [rbp-BCh] BYREF
  int v33; // [rsp+48h] [rbp-B8h] BYREF
  int v34; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v35; // [rsp+58h] [rbp-A8h]
  int v36; // [rsp+5Ch] [rbp-A4h]
  int v37; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v38; // [rsp+68h] [rbp-98h]
  __int64 v39; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v40; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v41[21]; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int8 *p_GroupIndex; // [rsp+140h] [rbp+40h]
  __int64 v44; // [rsp+148h] [rbp+48h]
  int *v45; // [rsp+150h] [rbp+50h]
  __int64 v46; // [rsp+158h] [rbp+58h]
  __int64 *v47; // [rsp+160h] [rbp+60h]
  __int64 v48; // [rsp+168h] [rbp+68h]
  int *v49; // [rsp+170h] [rbp+70h]
  __int64 v50; // [rsp+178h] [rbp+78h]

  KeCopyAffinityEx(&v40, &PpmCheckRegistered);
  v0 = v41[0];
  LODWORD(v1) = 0;
  v2 = 0;
  v31 = 0;
  while ( 1 )
  {
    v35 = v40;
    if ( !v0 )
      break;
LABEL_3:
    _BitScanForward64(&v3, v0);
    v0 &= ~(1LL << v3);
    v36 = v3;
    v4 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v2 + (unsigned __int8)v3];
    if ( (unsigned int)v4 >= (unsigned int)KeNumberProcessors_0 )
    {
      v5 = 0LL;
    }
    else
    {
      _mm_lfence();
      v5 = (struct _KPRCB *)KiProcessorBlock[v4];
    }
    PerfCheck = v5->PowerState.PerfCheck;
    v7 = v5 != KeGetCurrentPrcb();
    if ( !PerfCheck )
      goto LABEL_20;
    p_CurrentSnap = &PerfCheck->CurrentSnap;
    LOBYTE(v1) = 1;
    v9 = PpmSnapPerformanceAccumulation((int)v5, 0, v7, v1, &PerfCheck->CurrentSnap);
    v2 = v31;
    v1 = 0LL;
    if ( v9 )
    {
      Time = PerfCheck->LastDeliveredSnap.Time;
      if ( p_CurrentSnap->Time > Time )
      {
        v12 = p_CurrentSnap->Time - Time;
        v13 = PerfCheck->CurrentSnap.Active - PerfCheck->LastDeliveredSnap.Active;
        v38 = v12;
        if ( v13 <= v12 )
        {
          if ( v7 )
            goto LABEL_10;
          goto LABEL_33;
        }
        if ( v7 )
        {
          v2 = v31;
        }
        else
        {
LABEL_33:
          PpmPerfCheckForIllegalProcessorThrottle(v5, v10, v31, 0LL);
          v12 = v38;
LABEL_10:
          if ( v13 )
          {
            v14 = (PerfCheck->CurrentSnap.PerformanceScaledActive - PerfCheck->LastDeliveredSnap.PerformanceScaledActive)
                / v13;
            if ( __PAIR64__(
                   (PerfCheck->CurrentSnap.FrequencyScaledActive - PerfCheck->LastDeliveredSnap.FrequencyScaledActive)
                 / v13,
                   v14) != *(_QWORD *)&PerfCheck->LastDeliveredPerformance )
            {
              v34 = (PerfCheck->CurrentSnap.FrequencyScaledActive - PerfCheck->LastDeliveredSnap.FrequencyScaledActive)
                  / v13;
              v33 = v14;
              if ( PpmEtwRegistered )
              {
                v1 = PpmEtwHandle;
                if ( PpmEtwHandle )
                {
                  if ( EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 32) + 96LL, 4u, 128LL)
                    || *(_BYTE *)(v1 + 101) && EtwpLevelKeywordEnabled(*(_QWORD *)(v1 + 40) + 96LL, 4u, v15) )
                  {
                    Group = v5->Group;
                    v39 = PpmConvertTime(v12, PopQpcFrequency, 1000000LL, v1);
                    *(_QWORD *)&UserData.Size = 2LL;
                    UserData.Ptr = (ULONGLONG)&Group;
                    v44 = 1LL;
                    p_GroupIndex = &v5->GroupIndex;
                    v46 = 4LL;
                    v45 = &v33;
                    v47 = &v39;
                    v49 = &v34;
                    v48 = 8LL;
                    v50 = 4LL;
                    EtwWriteEx(PpmEtwHandle, &PPM_ETW_DELIVERED_PERF_CHANGE, 0LL, 0, 0LL, 0LL, 5u, &UserData);
                  }
                }
              }
            }
          }
          v2 = v31;
          LODWORD(v1) = 0;
          *(_OWORD *)&PerfCheck->LastDeliveredSnap.Time = *(_OWORD *)&p_CurrentSnap->Time;
          *(_OWORD *)&PerfCheck->LastDeliveredSnap.Stall = *(_OWORD *)&PerfCheck->CurrentSnap.Stall;
          *(_OWORD *)&PerfCheck->LastDeliveredSnap.PerformanceScaledActive = *(_OWORD *)&PerfCheck->CurrentSnap.PerformanceScaledActive;
          *(_OWORD *)&PerfCheck->LastDeliveredSnap.CyclesActive = *(_OWORD *)&PerfCheck->CurrentSnap.CyclesActive;
          *(_OWORD *)PerfCheck->LastDeliveredSnap.TaggedThreadCycles = *(_OWORD *)PerfCheck->CurrentSnap.TaggedThreadCycles;
          *(_QWORD *)&PerfCheck->LastDeliveredSnap.ResponsivenessEvents = *(_QWORD *)&PerfCheck->CurrentSnap.ResponsivenessEvents;
LABEL_20:
          v17 = KiProcessorIndexToNumberMappingTable[v4];
          v18 = v17 >> 6;
          if ( v35 > (unsigned int)v18 )
          {
            v19 = &v41[v18];
            *v19 &= ~(1LL << (v17 & 0x3F));
          }
        }
      }
    }
  }
  while ( 1 )
  {
    v31 = ++v2;
    if ( v2 >= (unsigned int)v40 )
      break;
    v0 = v41[v2];
    if ( v0 )
      goto LABEL_3;
  }
  v20 = 0;
  if ( v40 )
  {
    v21 = v41;
    v22 = v40;
    do
    {
      v23 = *v21++;
      v20 += (unsigned int)((0x101010101010101LL
                           * ((((v23 - ((v23 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                             + (((v23 - ((v23 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                             + ((((v23 - ((v23 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v23 - ((v23 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v22;
    }
    while ( v22 );
  }
  PpmCheckCount = v20;
  if ( !v20 )
    return 1;
  v24 = v41[0];
  v25 = 0;
  v26 = v40;
  while ( v24 )
  {
LABEL_29:
    _BitScanForward64(&v27, v24);
    v24 &= ~(1LL << v27);
    v37 = v27;
    v28 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v25 + (unsigned __int8)v27];
    if ( (unsigned int)v28 >= KeQueryActiveProcessorCountEx(0xFFFFu) )
      v29 = 0LL;
    else
      v29 = KiProcessorBlock[v28];
    _m_prefetchw((const void *)(v29 + 24144));
    if ( !_InterlockedOr((volatile signed __int32 *)(v29 + 24144), 1u) )
      KiInsertQueueDpc(v29 + 24080, 0);
  }
  while ( ++v25 < v26 )
  {
    v24 = v41[v25];
    if ( v24 )
      goto LABEL_29;
  }
  return 0;
}
