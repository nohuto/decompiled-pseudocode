/*
 * XREFs of TtmiSessionsRundown @ 0x140880254
 * Callers:
 *     TtmpTraceLoggingCallback @ 0x140886610 (TtmpTraceLoggingCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     TtmiLogError @ 0x1407616DC (TtmiLogError.c)
 *     TtmiDevicesRundown @ 0x14087D58C (TtmiDevicesRundown.c)
 *     TtmiTerminalsRundown @ 0x14087EF44 (TtmiTerminalsRundown.c)
 *     TtmiAcquireCurrentSession @ 0x1408801C4 (TtmiAcquireCurrentSession.c)
 *     TtmiLogSessionRundown @ 0x140885544 (TtmiLogSessionRundown.c)
 */

void TtmiSessionsRundown()
{
  int v0; // eax
  int *v1; // rbx
  _DWORD v2[12]; // [rsp+20h] [rbp-30h] BYREF
  int *v3; // [rsp+60h] [rbp+10h] BYREF

  v3 = 0LL;
  v0 = TtmiAcquireCurrentSession(&v3);
  v1 = v3;
  if ( v0 >= 0 )
  {
    memset(v2, 0, 0x28uLL);
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
    TtmiLogError("TtmiSessionsRundown", 4292, v0, -1);
  }
  if ( v1 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
}
