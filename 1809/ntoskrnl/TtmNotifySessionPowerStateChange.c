/*
 * XREFs of TtmNotifySessionPowerStateChange @ 0x140881260
 * Callers:
 *     PopPowerInformationInternal @ 0x14058EF30 (PopPowerInformationInternal.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x140762864 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1407628CC (TtmiLogError.c)
 *     TtmiScheduleSessionWorker @ 0x140881480 (TtmiScheduleSessionWorker.c)
 *     TtmiLogSessionPowerStateChange @ 0x1408866D0 (TtmiLogSessionPowerStateChange.c)
 */

void __fastcall TtmNotifySessionPowerStateChange(int a1, char a2)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // eax
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = TtmpAcquireSessionById(&v8, a1);
  if ( v3 < 0 )
  {
    TtmiLogError("TtmNotifySessionPowerStateChange", 3161, v3, v3);
    return;
  }
  LOBYTE(v4) = a2;
  TtmiLogSessionPowerStateChange(v4);
  v5 = v8;
  v6 = *(_DWORD *)(v8 + 4);
  if ( a2 )
  {
    if ( (v6 & 0x80u) != 0 )
    {
      v7 = v6 & 0xFFFFFB7F;
      goto LABEL_8;
    }
  }
  else if ( (v6 & 0x40) != 0 )
  {
    v7 = v6 & 0xFFFFFBBF | 0x400;
LABEL_8:
    *(_DWORD *)(v8 + 4) = v7;
    TtmiScheduleSessionWorker(v5, 4LL);
  }
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
}
