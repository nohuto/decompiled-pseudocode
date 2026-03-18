/*
 * XREFs of IoAllocateMiniCompletionPacket @ 0x1406816A0
 * Callers:
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 *     NtCreateWorkerFactory @ 0x140680E40 (NtCreateWorkerFactory.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x1406815C8 (AlpcpAllocateCompletionPacketLookaside.c)
 * Callees:
 *     IopAllocateMiniCompletionPacket @ 0x14068178C (IopAllocateMiniCompletionPacket.c)
 */

__int64 __fastcall IoAllocateMiniCompletionPacket(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = a1;
  LOBYTE(a1) = 4;
  result = IopAllocateMiniCompletionPacket(a1, 0LL);
  if ( result )
  {
    *(_QWORD *)(result + 56) = v3;
    *(_QWORD *)(result + 64) = a2;
    *(_BYTE *)(result + 72) = 1;
  }
  return result;
}
