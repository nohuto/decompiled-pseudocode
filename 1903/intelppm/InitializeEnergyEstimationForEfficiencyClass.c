/*
 * XREFs of InitializeEnergyEstimationForEfficiencyClass @ 0x1C0023620
 * Callers:
 *     InitializeEnergyEstimation @ 0x1C0024390 (InitializeEnergyEstimation.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C0001520 (InitializeEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0003934 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0003974 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00046C0 (memset.c)
 *     EnableEnergyEstimation @ 0x1C0024100 (EnableEnergyEstimation.c)
 *     DisableEnergyEstimation @ 0x1C0037578 (DisableEnergyEstimation.c)
 *     EnablePerformanceMonitoringCounters @ 0x1C0037640 (EnablePerformanceMonitoringCounters.c)
 */

__int64 __fastcall InitializeEnergyEstimationForEfficiencyClass(unsigned int a1)
{
  int *v2; // rbx
  __int64 result; // rax
  int v4; // r10d
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // r10d
  __int64 v9; // rdi
  _QWORD *v10; // rsi
  __int64 v11[4]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v12; // [rsp+68h] [rbp+28h] BYREF

  memset(v11, 0, sizeof(v11));
  v2 = &dword_1C001B948[64 * (unsigned __int64)a1];
  InitializeEnumerationContext((__int64)&qword_1C001B3A8, 32, (__int64)v11);
  ResetEnumerationContext(v11);
  result = EnumerateNextDevice((__int64)v11, &v12);
  if ( !(_DWORD)result )
  {
    while ( (*(_QWORD *)(v12 + 264) & 0x2000000000LL) == 0
         || *(unsigned __int8 *)(v12 + 368) != a1
         || (int)EnableEnergyEstimation() >= 0 )
    {
      result = EnumerateNextDevice((__int64)v11, &v12);
      if ( (_DWORD)result )
      {
        if ( v4 >= 0 )
          goto LABEL_7;
        break;
      }
    }
    InitializeEnumerationContext((__int64)&qword_1C001B3A8, 32, (__int64)v11);
    ResetEnumerationContext(v11);
    while ( !(unsigned int)EnumerateNextDevice((__int64)v11, &v12) )
    {
      if ( (*(_QWORD *)(v12 + 264) & 0x2000000000LL) != 0 && *(unsigned __int8 *)(v12 + 368) == a1 )
        DisableEnergyEstimation();
    }
    *((_QWORD *)v2 + 31) = 0LL;
    v5 = 0LL;
    *((_QWORD *)v2 + 30) = 0LL;
    v6 = 0LL;
    result = (unsigned int)v2[10];
    if ( (_DWORD)result )
    {
      do
      {
        if ( (v2[3 * v6 + 12] & 1) == 0 )
        {
          if ( (_DWORD)v6 != (_DWORD)v5 )
          {
            v7 = 3 * v5;
            *(_QWORD *)&v2[v7 + 11] = *(_QWORD *)&v2[3 * v6 + 11];
            v2[v7 + 13] = v2[3 * v6 + 13];
          }
          v5 = (unsigned int)(v5 + 1);
        }
        result = (unsigned int)v2[10];
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < (unsigned int)result );
    }
    if ( (_DWORD)result != (_DWORD)v5 )
    {
      result = (__int64)memset(&v2[2 * v5 + 11 + (unsigned int)v5], 0, 12LL * (unsigned int)(result - v5));
      v2[10] = v5;
    }
    if ( (_DWORD)v5 )
    {
      ResetEnumerationContext(v11);
      result = EnumerateNextDevice((__int64)v11, &v12);
      if ( (_DWORD)result )
      {
LABEL_30:
        if ( *((_QWORD *)v2 + 30) )
          return result;
      }
      else
      {
        while ( (*(_QWORD *)(v12 + 264) & 0x2000000000LL) == 0
             || *(unsigned __int8 *)(v12 + 368) != a1
             || (int)EnablePerformanceMonitoringCounters() >= 0 )
        {
          result = EnumerateNextDevice((__int64)v11, &v12);
          if ( (_DWORD)result )
          {
            if ( v8 < 0 )
              break;
            goto LABEL_30;
          }
        }
      }
      InitializeEnumerationContext((__int64)&qword_1C001B3A8, 32, (__int64)v11);
      ResetEnumerationContext(v11);
      while ( 1 )
      {
        result = EnumerateNextDevice((__int64)v11, &v12);
        if ( (_DWORD)result )
          break;
        v9 = v12;
        if ( (*(_QWORD *)(v12 + 264) & 0x2000000000LL) != 0 && *(unsigned __int8 *)(v12 + 368) == a1 )
        {
          v10 = *(_QWORD **)(v12 + 360);
          if ( v10 )
          {
            if ( v10[1] )
            {
              ((void (*)(void))HalPrivateDispatchTable[74])();
              v10[1] = 0LL;
            }
            ExFreePoolWithTag(v10, 0x72637250u);
            *(_QWORD *)(v9 + 360) = 0LL;
          }
        }
      }
      *((_QWORD *)v2 + 31) = 0LL;
      *((_QWORD *)v2 + 30) = 0LL;
    }
  }
LABEL_7:
  if ( !*((_QWORD *)v2 + 30) )
  {
    result = (__int64)ComputeProcessorEnergy;
    *((_QWORD *)v2 + 30) = ComputeProcessorEnergy;
  }
  return result;
}
