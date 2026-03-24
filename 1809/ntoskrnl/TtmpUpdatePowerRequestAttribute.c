/*
 * XREFs of TtmpUpdatePowerRequestAttribute @ 0x14088159C
 * Callers:
 *     TtmNotifySessionPowerRequestPresent @ 0x14087FF60 (TtmNotifySessionPowerRequestPresent.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x140761674 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1407616DC (TtmiLogError.c)
 *     TtmpFindPowerRequestEntryById @ 0x14088097C (TtmpFindPowerRequestEntryById.c)
 */

char __fastcall TtmpUpdatePowerRequestAttribute(int a1, int a2, int a3, __int64 a4, __int64 a5, int a6)
{
  char v9; // bl
  int v10; // eax
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h] BYREF

  v9 = 0;
  v10 = TtmpAcquireSessionById(&v12, a1);
  if ( v10 >= 0 )
  {
    if ( TtmpFindPowerRequestEntryById(v12, a2, &v13)
      && *(_DWORD *)(v13 + 20) == a3
      && *(_QWORD *)(v13 + 24) == a4
      && *(_DWORD *)(v13 + 40) == a6 )
    {
      v9 = 1;
      *(_QWORD *)(v13 + 32) = a5;
    }
  }
  else
  {
    TtmiLogError("TtmpUpdatePowerRequestAttribute", 3472, v10, -1);
  }
  if ( v12 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  return v9;
}
