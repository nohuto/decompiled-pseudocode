/*
 * XREFs of TtmpDispatchCreateTerminal @ 0x140882F08
 * Callers:
 *     TtmDispatchApi @ 0x140882960 (TtmDispatchApi.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     TtmiLogError @ 0x1407628CC (TtmiLogError.c)
 *     TtmiCreateTerminal @ 0x14087FA6C (TtmiCreateTerminal.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140882BE8 (TtmpAcquireSessionFromTerminalHandle.c)
 */

__int64 __fastcall TtmpDispatchCreateTerminal(__int64 a1, unsigned __int64 *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdi
  unsigned int v7; // edx
  int Terminal; // eax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v4 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 16), 1, 0, &v10, (__int64 *)&Object);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = *(_DWORD *)(a1 + 8);
    v6 = v10;
    Terminal = TtmiCreateTerminal(
                 v10,
                 v7,
                 KeGetCurrentThread()->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10],
                 a2,
                 a2 + 1,
                 0LL);
    v5 = Terminal;
    if ( Terminal >= 0 )
      v5 = 0;
    else
      TtmiLogError("TtmpDispatchCreateTerminal", 239, Terminal, Terminal);
  }
  else
  {
    TtmiLogError("TtmpDispatchCreateTerminal", 227, v4, v4);
    v6 = v10;
  }
  if ( v6 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v5;
}
