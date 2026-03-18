/*
 * XREFs of TtmiSessionsRundown @ 0x1408BDF10
 * Callers:
 *     TtmpTraceLoggingCallback @ 0x1408C4510 (TtmpTraceLoggingCallback.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     TtmiDevicesRundown @ 0x1408BB08C (TtmiDevicesRundown.c)
 *     TtmiTerminalsRundown @ 0x1408BCAC0 (TtmiTerminalsRundown.c)
 *     TtmiAcquireCurrentSession @ 0x1408BDD64 (TtmiAcquireCurrentSession.c)
 *     TtmiLogError @ 0x1408C1CAC (TtmiLogError.c)
 *     TtmiLogSessionRundown @ 0x1408C3448 (TtmiLogSessionRundown.c)
 */

void TtmiSessionsRundown()
{
  int v0; // eax
  _DWORD *v1; // rbx
  _DWORD v2[12]; // [rsp+20h] [rbp-30h] BYREF
  _DWORD *v3; // [rsp+60h] [rbp+10h] BYREF

  v3 = 0LL;
  v0 = TtmiAcquireCurrentSession((__int64)&v3);
  v1 = v3;
  if ( v0 >= 0 )
  {
    v2[0] = *v3;
    v2[1] = v3[1];
    v2[2] = v3[2];
    v2[3] = v3[19];
    v2[4] = v3[29];
    v2[5] = v3[3];
    v2[6] = v3[4];
    v2[7] = v3[5];
    v2[8] = v3[66];
    v2[9] = v3[67];
    TtmiLogSessionRundown(v2);
    TtmiTerminalsRundown((__int64)v1);
    TtmiDevicesRundown(v1);
  }
  else
  {
    TtmiLogError("TtmiSessionsRundown");
  }
  if ( v1 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
}
