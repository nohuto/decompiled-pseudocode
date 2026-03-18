/*
 * XREFs of TtmNotifySessionPowerStateChange @ 0x1408BD46C
 * Callers:
 *     PopPowerInformationInternal @ 0x14069B7B4 (PopPowerInformationInternal.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     TtmiScheduleSessionWorker @ 0x1408BD7AC (TtmiScheduleSessionWorker.c)
 *     TtmpAcquireSessionById @ 0x1408BDC44 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1408C157C (TtmiLogError.c)
 *     TtmiLogSessionPowerStateChange @ 0x1408C2C44 (TtmiLogSessionPowerStateChange.c)
 */

void __fastcall TtmNotifySessionPowerStateChange(unsigned int a1, char a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // eax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  if ( (int)TtmpAcquireSessionById(&v7, a1) < 0 )
  {
    TtmiLogError("TtmNotifySessionPowerStateChange");
    return;
  }
  LOBYTE(v3) = a2;
  TtmiLogSessionPowerStateChange(v3);
  v4 = v7;
  v5 = *(_DWORD *)(v7 + 4);
  if ( a2 )
  {
    if ( (v5 & 0x80u) != 0 )
    {
      v6 = v5 & 0xFFFFFB7F;
      goto LABEL_8;
    }
  }
  else if ( (v5 & 0x40) != 0 )
  {
    v6 = v5 & 0xFFFFFBBF | 0x400;
LABEL_8:
    *(_DWORD *)(v7 + 4) = v6;
    TtmiScheduleSessionWorker(v4, 4LL);
  }
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
}
