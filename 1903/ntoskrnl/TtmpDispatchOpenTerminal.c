/*
 * XREFs of TtmpDispatchOpenTerminal @ 0x1408BFC58
 * Callers:
 *     TtmDispatchApi @ 0x1408BF490 (TtmDispatchApi.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     TtmiOpenDefaultTerminal @ 0x1408BC600 (TtmiOpenDefaultTerminal.c)
 *     TtmiAcquireCurrentSession @ 0x1408BDD64 (TtmiAcquireCurrentSession.c)
 *     TtmiLogError @ 0x1408C1CAC (TtmiLogError.c)
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
