/*
 * XREFs of TtmpDispatchCreateTerminal @ 0x1408BFA10
 * Callers:
 *     TtmDispatchApi @ 0x1408BF490 (TtmDispatchApi.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     TtmiCreateTerminal @ 0x1408BC32C (TtmiCreateTerminal.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1408BF718 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiLogError @ 0x1408C1CAC (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchCreateTerminal(__int64 a1, _QWORD *a2)
{
  int Terminal; // ebx
  __int64 v5; // rdi
  ACCESS_MASK v6; // edx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  Terminal = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 16), 1, 0, &v8, (__int64 *)&Object);
  if ( Terminal >= 0 )
  {
    v6 = *(_DWORD *)(a1 + 8);
    v5 = v8;
    Terminal = TtmiCreateTerminal(
                 v8,
                 v6,
                 KeGetCurrentThread()->$42514DC6747B59BF81E16C40547B231E::gap0[10],
                 a2,
                 a2 + 1,
                 0LL);
    if ( Terminal >= 0 )
      Terminal = 0;
    else
      TtmiLogError("TtmpDispatchCreateTerminal");
  }
  else
  {
    TtmiLogError("TtmpDispatchCreateTerminal");
    v5 = v8;
  }
  if ( v5 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)Terminal;
}
