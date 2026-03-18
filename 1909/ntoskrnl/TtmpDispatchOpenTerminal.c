/*
 * XREFs of TtmpDispatchOpenTerminal @ 0x1408BF528
 * Callers:
 *     TtmDispatchApi @ 0x1408BED60 (TtmDispatchApi.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     TtmiOpenDefaultTerminal @ 0x1408BBED0 (TtmiOpenDefaultTerminal.c)
 *     TtmiAcquireCurrentSession @ 0x1408BD634 (TtmiAcquireCurrentSession.c)
 *     TtmiLogError @ 0x1408C157C (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchOpenTerminal(__int64 a1, HANDLE *a2)
{
  int v4; // ebx
  __int64 v5; // rdi
  HANDLE *v6; // r9
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = TtmiAcquireCurrentSession((__int64)&v8);
  if ( v4 >= 0 )
  {
    v6 = a2;
    v5 = v8;
    v4 = TtmiOpenDefaultTerminal(v8, *(_DWORD *)(a1 + 8), KeGetCurrentThread()->PreviousMode, v6);
  }
  else
  {
    TtmiLogError("TtmpDispatchOpenTerminal");
    v5 = v8;
  }
  if ( v5 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v4;
}
