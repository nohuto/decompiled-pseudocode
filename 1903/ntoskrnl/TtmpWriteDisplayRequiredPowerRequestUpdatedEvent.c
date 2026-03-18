/*
 * XREFs of TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x1408BF3E8
 * Callers:
 *     TtmpPublishDisplayRequiredPowerRequestEvents @ 0x1408BECE4 (TtmpPublishDisplayRequiredPowerRequestEvents.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x1408BF260 (TtmpUpdateDisplayRequiredPowerRequest.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     TtmiWriteEventToAllQueues @ 0x1408BE2FC (TtmiWriteEventToAllQueues.c)
 *     TtmiWriteEventToSingleQueue @ 0x1408C0344 (TtmiWriteEventToSingleQueue.c)
 *     TtmiLogError @ 0x1408C1CAC (TtmiLogError.c)
 */

void __fastcall TtmpWriteDisplayRequiredPowerRequestUpdatedEvent(__int64 a1, __int64 a2, __int64 a3)
{
  bool v6; // zf
  int v7; // eax
  _QWORD v8[68]; // [rsp+20h] [rbp-228h] BYREF

  memset(v8, 0, sizeof(v8));
  v6 = *(_DWORD *)(a3 + 40) == 0;
  LODWORD(v8[1]) = *(_DWORD *)(a3 + 16);
  v7 = *(_DWORD *)(a3 + 20);
  LOBYTE(v8[3]) = !v6;
  HIDWORD(v8[1]) = v7;
  v8[2] = *(_QWORD *)(a3 + 32);
  LODWORD(v8[0]) = 6;
  if ( a2 )
  {
    if ( (int)TtmiWriteEventToSingleQueue(a2, v8) < 0 )
      TtmiLogError("TtmpWriteDisplayRequiredPowerRequestUpdatedEvent");
  }
  else
  {
    TtmiWriteEventToAllQueues(a1, (__int64)v8);
  }
}
