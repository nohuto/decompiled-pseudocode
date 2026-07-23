/*
 * XREFs of TtmGetSessionDisplayRequiredCount @ 0x140880A8C
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x1400108EC (PopGetConsoleDisplayRequestCount.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x140762864 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1407628CC (TtmiLogError.c)
 */

__int64 __fastcall TtmGetSessionDisplayRequiredCount(int a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = TtmpAcquireSessionById(&v4, a1);
  v2 = 0;
  if ( v1 < 0 )
  {
    TtmiLogError("TtmGetSessionDisplayRequiredCount", 3944, v1, -1);
  }
  else
  {
    v2 = *(_DWORD *)(v4 + 20);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  return v2;
}
