/*
 * XREFs of KeUnstackDetachProcess @ 0x1400F1110
 * Callers:
 *     MmNewProcessInitialized @ 0x140583398 (MmNewProcessInitialized.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C3750 (EtwpAddRegEntryToGroup.c)
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 * Callees:
 *     KiDetachProcess @ 0x1400B9BE0 (KiDetachProcess.c)
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
