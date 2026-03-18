/*
 * XREFs of TtmpUpdatePowerRequestAttribute @ 0x1408BEBFC
 * Callers:
 *     TtmNotifySessionPowerRequestPresent @ 0x1408BD3CC (TtmNotifySessionPowerRequestPresent.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     TtmpAcquireSessionById @ 0x1408BDC44 (TtmpAcquireSessionById.c)
 *     TtmpFindPowerRequestEntryById @ 0x1408BE064 (TtmpFindPowerRequestEntryById.c)
 *     TtmiLogError @ 0x1408C157C (TtmiLogError.c)
 */

char __fastcall TtmpUpdatePowerRequestAttribute(int a1, int a2, int a3, __int64 a4, __int64 a5, int a6)
{
  char v9; // bl
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h] BYREF

  v9 = 0;
  if ( (int)TtmpAcquireSessionById(&v11, a1) >= 0 )
  {
    if ( TtmpFindPowerRequestEntryById(v11, a2, &v12)
      && *(_DWORD *)(v12 + 20) == a3
      && *(_QWORD *)(v12 + 24) == a4
      && *(_DWORD *)(v12 + 40) == a6 )
    {
      v9 = 1;
      *(_QWORD *)(v12 + 32) = a5;
    }
  }
  else
  {
    TtmiLogError("TtmpUpdatePowerRequestAttribute");
  }
  if ( v11 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  return v9;
}
