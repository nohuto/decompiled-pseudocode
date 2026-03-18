/*
 * XREFs of PpmPerfInitialize @ 0x140A1B738
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     PopInitializeTimer @ 0x1407823E4 (PopInitializeTimer.c)
 */

__int64 PpmPerfInitialize()
{
  __int64 v0; // rcx
  _BYTE *v1; // rax
  int v2; // ecx
  unsigned int v3; // edx

  qword_1405724B0 = (__int64)&PpmPerfDomainHead;
  v0 = 2LL;
  PpmPerfDomainHead = (__int64)&PpmPerfDomainHead;
  dword_14043709C = 50;
  dword_140437B44 = 50;
  v1 = &unk_140437B48;
  do
  {
    *(v1 - 2728) = 1;
    *v1 = 1;
    *(v1 - 2712) = 70;
    v1[16] = 70;
    *(v1 - 2714) = 30;
    v1[14] = 30;
    *(v1 - 2726) = 100;
    v1[2] = 100;
    *(v1 - 2724) = 100;
    v1[4] = 100;
    ++v1;
    --v0;
  }
  while ( v0 );
  v2 = PpmPerfQosTransitionHysteresisOverride;
  dword_1404370C0 = 2;
  dword_140437B68 = 2;
  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))PpmMediaBufferingWorker;
  PpmPerfLatencyBoostWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PpmPerfLatencySensitivityHintWorker;
  dword_1404370BC = 100;
  dword_140437B64 = 100;
  PpmMediaBufferingWork = 0LL;
  WorkItem.Parameter = 0LL;
  WorkItem.List.Flink = 0LL;
  PpmPerfLatencyBoostWorkItem.Parameter = 0LL;
  PpmPerfLatencyBoostWorkItem.List.Flink = 0LL;
  if ( PpmPerfQosTransitionHysteresisOverride == -1 )
  {
    v3 = PpmPerfQosTransitionHysteresis19h2;
    if ( !PpmPerfQosTransitionHysteresisUse19h2Value )
      v3 = PpmPerfQosTransitionHysteresis;
  }
  else
  {
    v3 = PpmPerfQosTransitionHysteresisOverride;
  }
  if ( v3 <= 0x1F4 )
  {
    v2 = 500;
  }
  else if ( PpmPerfQosTransitionHysteresisOverride == -1 )
  {
    v2 = PpmPerfQosTransitionHysteresis19h2;
    if ( !PpmPerfQosTransitionHysteresisUse19h2Value )
      v2 = PpmPerfQosTransitionHysteresis;
  }
  PpmPerfQosIdleExpirationTimeout = (unsigned int)(10 * v2);
  return PopInitializeTimer(
           (__int64)&PpmPerfTelemetryTimer,
           (__int64)PpmPerfTelemetryCallback,
           0LL,
           (__int64)PpmPerfTelemetryWorker,
           0LL);
}
