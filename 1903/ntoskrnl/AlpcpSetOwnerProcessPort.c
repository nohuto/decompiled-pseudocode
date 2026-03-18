/*
 * XREFs of AlpcpSetOwnerProcessPort @ 0x140649208
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140648064 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x140648DD8 (AlpcpCreateClientPort.c)
 *     AlpcpCreateConnectionPort @ 0x1406D9518 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 */

LONG_PTR __fastcall AlpcpSetOwnerProcessPort(__int64 a1, _DWORD *a2)
{
  PEPROCESS Process; // rbx
  LONG_PTR result; // rax

  if ( a2 && (*a2 & 0x100000) != 0 )
    Process = PsInitialSystemProcess;
  else
    Process = KeGetCurrentThread()->ApcState.Process;
  result = ObfReferenceObjectWithTag(Process, 0x63706C41u);
  *(_QWORD *)(a1 + 24) = Process;
  return result;
}
