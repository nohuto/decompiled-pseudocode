/*
 * XREFs of PspInitPhase2 @ 0x1409FEB44
 * Callers:
 *     Phase1InitializationIoReady @ 0x1409FED48 (Phase1InitializationIoReady.c)
 *     PsInitSystem @ 0x1409FEE9C (PsInitSystem.c)
 * Callees:
 *     EtwpGetSystemTime @ 0x140082460 (EtwpGetSystemTime.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082D98 (KiQueryUnbiasedInterruptTime.c)
 *     RtlRandom @ 0x1406EA830 (RtlRandom.c)
 *     TraceLoggingRegisterEx @ 0x140747E64 (TraceLoggingRegisterEx.c)
 *     PspInitializeProtectedProcessParameters @ 0x14075C838 (PspInitializeProtectedProcessParameters.c)
 *     PspInitializeSystemDlls @ 0x1409FEC94 (PspInitializeSystemDlls.c)
 */

bool PspInitPhase2()
{
  PEPROCESS v0; // rbx
  __int64 UnbiasedInterruptTime; // rax
  _QWORD *v2; // rdx
  char v3; // al
  char v4; // al
  ULONG Seed; // [rsp+30h] [rbp+8h] BYREF

  TraceLoggingRegisterEx(&stru_140425558, 0LL, 0LL);
  v0 = PsInitialSystemProcess;
  v0[1].ThreadListHead.Flink = (struct _LIST_ENTRY *)EtwpGetSystemTime();
  *(_QWORD *)&PsInitialSystemProcess[2].BasePriority = MEMORY[0xFFFFF78000000008];
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v2 = PsIdleProcess;
  *(_QWORD *)&PsInitialSystemProcess[2].ThreadSeed[2] = UnbiasedInterruptTime;
  v2[98] = PsInitialSystemProcess[1].ThreadListHead.Flink;
  v2[240] = *(_QWORD *)&PsInitialSystemProcess[2].BasePriority;
  v2[241] = *(_QWORD *)&PsInitialSystemProcess[2].ThreadSeed[2];
  EtwpGetSystemTime();
  PspWorkOnBehalfEncodingKey = (unsigned __int64)RtlRandom(&Seed) << 32;
  PspWorkOnBehalfEncodingKey = RtlRandom(&Seed) | (unsigned __int64)PspWorkOnBehalfEncodingKey;
  if ( PspSehValidationPolicy )
  {
    if ( PspSehValidationPolicy == 2 )
      v3 = MEMORY[0xFFFFF780000002D5] & 0xF3 | 8;
    else
      v3 = MEMORY[0xFFFFF780000002D5] & 0xF3 | 4;
  }
  else
  {
    v3 = MEMORY[0xFFFFF780000002D5] & 0xF3;
  }
  MEMORY[0xFFFFF780000002D5] = v3;
  switch ( PspCurDirDevicesSkippedForDlls )
  {
    case 1:
      v4 = v3 & 0xCF | 0x10;
      break;
    case 2:
      v4 = v3 & 0xCF | 0x20;
      break;
    case -1:
      v4 = v3 | 0x30;
      break;
    default:
      v4 = v3 & 0xCF;
      break;
  }
  MEMORY[0xFFFFF780000002D5] = v4;
  PspInitializeSystemDlls();
  return (int)PspInitializeProtectedProcessParameters((__int64)&PspHostSiloGlobals) >= 0;
}
