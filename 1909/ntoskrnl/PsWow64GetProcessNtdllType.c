/*
 * XREFs of PsWow64GetProcessNtdllType @ 0x14067FF90
 * Callers:
 *     DbgkCreateThread @ 0x1405E765C (DbgkCreateThread.c)
 *     PsMapSystemDlls @ 0x14067E8A4 (PsMapSystemDlls.c)
 *     PspSetupUserProcessAddressSpace @ 0x14067FB08 (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x14067FD40 (PspPrepareSystemDllInitBlock.c)
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 *     PsThawProcess @ 0x1406A10B8 (PsThawProcess.c)
 *     PspWow64InitThread @ 0x1406C7EC0 (PspWow64InitThread.c)
 *     DbgkSendSystemDllMessages @ 0x1408473EC (DbgkSendSystemDllMessages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsWow64GetProcessNtdllType(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 1064);
  if ( result )
    return *(unsigned int *)(result + 12);
  return result;
}
