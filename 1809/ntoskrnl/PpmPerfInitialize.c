/*
 * XREFs of PpmPerfInitialize @ 0x1409D81A0
 * Callers:
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 * Callees:
 *     PopInitializeTimer @ 0x140759468 (PopInitializeTimer.c)
 */

__int64 PpmPerfInitialize()
{
  __int64 v0; // rcx
  _BYTE *v1; // rax
  int v2; // ecx
  unsigned int v3; // eax

  qword_1405413F8 = (__int64)&PpmPerfDomainHead;
  v0 = 2LL;
  PpmPerfDomainHead = (__int64)&PpmPerfDomainHead;
  dword_14040E7DC = 50;
  dword_14040F284 = 50;
  v1 = &unk_14040F288;
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
  stru_140418810.WorkerRoutine = (void (__fastcall *)(void *))PpmMediaBufferingWorker;
  dword_14040E800 = 2;
  PpmPerfLatencyBoostWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PpmPerfLatencySensitivityHintWorker;
  dword_14040F2A8 = 2;
  v3 = PpmPerfQosTransitionHysteresisOverride;
  dword_14040E7FC = 100;
  dword_14040F2A4 = 100;
  if ( PpmPerfQosTransitionHysteresisOverride == -1 )
    v3 = PpmPerfQosTransitionHysteresis;
  PpmMediaBufferingWork = 0LL;
  stru_140418810.Parameter = 0LL;
  stru_140418810.List.Flink = 0LL;
  PpmPerfLatencyBoostWorkItem.Parameter = 0LL;
  PpmPerfLatencyBoostWorkItem.List.Flink = 0LL;
  if ( v3 <= 0x1F4 )
  {
    v2 = 500;
  }
  else if ( PpmPerfQosTransitionHysteresisOverride == -1 )
  {
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
