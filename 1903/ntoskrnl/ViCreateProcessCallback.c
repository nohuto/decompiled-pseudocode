/*
 * XREFs of ViCreateProcessCallback @ 0x140137230
 * Callers:
 *     <none>
 * Callees:
 *     ViCreateProcessCallbackInternal @ 0x140979E7C (ViCreateProcessCallbackInternal.c)
 */

void __fastcall ViCreateProcessCallback(HANDLE ParentId, HANDLE ProcessId, BOOLEAN Create)
{
  HANDLE v3; // rax

  v3 = ProcessId;
  if ( ViVerifierEnabled )
  {
    LOBYTE(ProcessId) = Create;
    ViCreateProcessCallbackInternal(v3, ProcessId);
  }
}
