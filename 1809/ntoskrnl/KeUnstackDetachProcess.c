/*
 * XREFs of KeUnstackDetachProcess @ 0x1400F1070
 * Callers:
 *     MmNewProcessInitialized @ 0x140582398 (MmNewProcessInitialized.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C2750 (EtwpAddRegEntryToGroup.c)
 *     NtQueryInformationProcess @ 0x14066DB90 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140671C60 (NtSetInformationProcess.c)
 * Callees:
 *     KiDetachProcess @ 0x1400B9C80 (KiDetachProcess.c)
 */

void __stdcall KeUnstackDetachProcess(PRKAPC_STATE ApcState)
{
  __int64 v1; // r8
  _KPROCESS *Process; // rax

  Process = ApcState->Process;
  if ( Process != (_KPROCESS *)1 )
  {
    if ( !Process )
      ApcState = &KeGetCurrentThread()->SavedApcState;
    KiDetachProcess((__int64 *)ApcState, 0LL, v1);
  }
}
