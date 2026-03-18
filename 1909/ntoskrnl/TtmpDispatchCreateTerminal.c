/*
 * XREFs of TtmpDispatchCreateTerminal @ 0x1408BF2E0
 * Callers:
 *     TtmDispatchApi @ 0x1408BED60 (TtmDispatchApi.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     TtmiCreateTerminal @ 0x1408BBBFC (TtmiCreateTerminal.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1408BEFE8 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiLogError @ 0x1408C157C (TtmiLogError.c)
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
                 KeGetCurrentThread()->$24A664F1AFBF48775CBEA2BECCC9B900::gap0[10],
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
