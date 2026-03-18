/*
 * XREFs of TtmNotifyDeviceDeparture @ 0x1408BA690
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     TtmpFindDeviceByToken @ 0x1408BB420 (TtmpFindDeviceByToken.c)
 *     TtmiAcquireCurrentSession @ 0x1408BD634 (TtmiAcquireCurrentSession.c)
 *     TtmiScheduleSessionWorker @ 0x1408BD7AC (TtmiScheduleSessionWorker.c)
 *     TtmiLogDeviceDepartureNotified @ 0x1408C0AB0 (TtmiLogDeviceDepartureNotified.c)
 *     TtmiLogError @ 0x1408C157C (TtmiLogError.c)
 */

__int64 __fastcall TtmNotifyDeviceDeparture(unsigned int a1, __int64 a2)
{
  char DeviceByToken; // bl
  __int64 v5; // r8
  int v6; // edx
  __int64 v7; // rcx
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  DeviceByToken = 0;
  if ( (int)TtmiAcquireCurrentSession(&v9) >= 0 )
  {
    DeviceByToken = TtmpFindDeviceByToken(v9, a1, a2, &v10);
    if ( DeviceByToken )
    {
      v6 = *(_DWORD *)(v10 + 600);
      if ( (v6 & 4) == 0 )
      {
        v7 = v9;
        *(_DWORD *)(v10 + 600) = v6 | 4;
        TtmiScheduleSessionWorker(v7, 1LL);
      }
    }
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    TtmiLogError("TtmNotifyDeviceDeparture");
  }
  LOBYTE(v5) = DeviceByToken;
  return TtmiLogDeviceDepartureNotified(a1, a2, v5);
}
