/*
 * XREFs of TtmGetSessionDisplayRequiredCount @ 0x1408BCC8C
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x1400D5B9C (PopGetConsoleDisplayRequestCount.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     TtmpAcquireSessionById @ 0x1408BDC44 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1408C157C (TtmiLogError.c)
 */

__int64 __fastcall TtmGetSessionDisplayRequiredCount(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  if ( (int)TtmpAcquireSessionById(&v3, a1) < 0 )
  {
    TtmiLogError("TtmGetSessionDisplayRequiredCount");
  }
  else
  {
    v1 = *(_DWORD *)(v3 + 20);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  return v1;
}
