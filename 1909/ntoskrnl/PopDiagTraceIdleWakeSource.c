/*
 * XREFs of PopDiagTraceIdleWakeSource @ 0x1402FE15C
 * Callers:
 *     PpmExitCoordinatedIdle @ 0x140033070 (PpmExitCoordinatedIdle.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x14009E060 (KeAddProcessorAffinityEx.c)
 *     KeGetCurrentProcessorNumberEx @ 0x1400E1240 (KeGetCurrentProcessorNumberEx.c)
 *     RtlStringCbCopyW @ 0x1400EDC5C (RtlStringCbCopyW.c)
 *     PopDiagAreIdenticalWakeSources @ 0x1402FC0F8 (PopDiagAreIdenticalWakeSources.c)
 */

__int64 __fastcall PopDiagTraceIdleWakeSource(int a1, unsigned __int64 a2, int a3, __int64 a4)
{
  unsigned int v6; // edi
  __int64 result; // rax
  __int64 v9; // r9
  _DWORD *v10; // rbx
  char *v11; // rsi
  wchar_t *v12; // r9
  const wchar_t *v13; // r8
  bool v14; // dl
  char *v15; // r15
  unsigned int v16; // r13d
  char *v17; // rax
  unsigned int v18; // edx
  unsigned __int64 *v19; // r8
  unsigned __int64 v20; // rdx
  unsigned __int64 *v21; // r8
  ULONG CurrentProcessorNumber; // eax
  __int64 v23; // [rsp+20h] [rbp-38h]

  v6 = 0;
  result = MEMORY[0xFFFFF78000000014];
  v9 = MEMORY[0xFFFFF78000000008];
  v23 = MEMORY[0xFFFFF78000000008];
  if ( PopDiagGlobalIdleWakeAccounting && a1 == PpmDripsStateIndex && a3 >= 0 )
  {
    v10 = &unk_140439DE8;
    if ( a3 > 4 )
    {
      if ( a3 == 6 && *(_BYTE *)a4 == 3 )
      {
        v12 = 0LL;
        if ( PopTimeBrokerExpirationDueTime )
        {
          if ( MEMORY[0xFFFFF78000000014] >= (unsigned __int64)PopTimeBrokerExpirationDueTime )
          {
            v12 = &PopTimeBrokerExpirationReason;
            if ( (unsigned __int64)(PopTimeBrokerExpirationDueTime + 20000000) < MEMORY[0xFFFFF78000000014] )
              v12 = 0LL;
          }
        }
        v13 = L"Unknown";
        if ( v12 )
          v13 = v12;
        RtlStringCbCopyW((NTSTRSAFE_PWSTR)(a4 + 2), 0x80uLL, v13);
      }
      v14 = 0;
      v15 = (char *)&unk_140439FE0;
      v16 = 5;
      while ( 1 )
      {
        v11 = v15;
        if ( !*((_DWORD *)v15 + 1) )
          break;
        if ( a3 == *(_DWORD *)v15 )
        {
          v14 = PopDiagAreIdenticalWakeSources(a3, (_BYTE *)a4, (_QWORD *)v15 + 25);
          if ( v14 )
            goto LABEL_25;
        }
        ++v16;
        v15 += 504;
        if ( v16 >= 0x45 )
          goto LABEL_22;
      }
      *(_DWORD *)v15 = a3;
      v14 = 1;
      *(_OWORD *)(v15 + 200) = *(_OWORD *)a4;
      *(_OWORD *)(v15 + 216) = *(_OWORD *)(a4 + 16);
      *(_OWORD *)(v15 + 232) = *(_OWORD *)(a4 + 32);
      *(_OWORD *)(v15 + 248) = *(_OWORD *)(a4 + 48);
      *(_OWORD *)(v15 + 264) = *(_OWORD *)(a4 + 64);
      *(_OWORD *)(v15 + 280) = *(_OWORD *)(a4 + 80);
      *(_OWORD *)(v15 + 296) = *(_OWORD *)(a4 + 96);
      *(_OWORD *)(v15 + 312) = *(_OWORD *)(a4 + 112);
      *((_QWORD *)v15 + 41) = *(_QWORD *)(a4 + 128);
LABEL_22:
      v17 = (char *)&unk_140439DE8;
      if ( v14 )
        v17 = v11;
      v11 = v17;
LABEL_25:
      v9 = v23;
    }
    else
    {
      v11 = (char *)&unk_140439608 + 504 * a3;
    }
    if ( v11 )
      v10 = v11;
    ++v10[1];
    *((_QWORD *)v10 + 3) += a2;
    if ( a2 < *((_QWORD *)v10 + 1) )
      *((_QWORD *)v10 + 1) = a2;
    if ( a2 > *((_QWORD *)v10 + 2) )
      *((_QWORD *)v10 + 2) = a2;
    v18 = 0;
    v19 = PopDripsWakeIdleAccountingBucketLimitsQpc;
    while ( a2 < *v19 || a2 >= PopDripsWakeIdleAccountingBucketLimitsQpc[v18 + 1] )
    {
      ++v18;
      ++v19;
      if ( v18 >= 9 )
        goto LABEL_38;
    }
    ++*(_QWORD *)&v10[2 * v18 + 8];
LABEL_38:
    if ( v10[1] > 1u )
    {
      v20 = v9 - *((_QWORD *)v10 + 24);
      v21 = PopDripsWakePeriodAccountingBucketLimitsHns;
      while ( v20 < *v21 || v20 >= PopDripsWakePeriodAccountingBucketLimitsHns[v6 + 1] )
      {
        ++v6;
        ++v21;
        if ( v6 >= 0xB )
          goto LABEL_45;
      }
      ++*(_QWORD *)&v10[2 * v6 + 26];
    }
LABEL_45:
    *((_QWORD *)v10 + 24) = v9;
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    return KeAddProcessorAffinityEx((_WORD *)v10 + 168, CurrentProcessorNumber);
  }
  return result;
}
