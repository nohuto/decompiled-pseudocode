/*
 * XREFs of PsWow64GetProcessNtdllType @ 0x140679EDC
 * Callers:
 *     DbgkCreateThread @ 0x1405E6E8C (DbgkCreateThread.c)
 *     PsMapSystemDlls @ 0x140678F2C (PsMapSystemDlls.c)
 *     PspSetupUserProcessAddressSpace @ 0x140679A54 (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x140679C8C (PspPrepareSystemDllInitBlock.c)
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 *     PsThawProcess @ 0x1406A3778 (PsThawProcess.c)
 *     PspWow64InitThread @ 0x1406C94A8 (PspWow64InitThread.c)
 *     DbgkSendSystemDllMessages @ 0x140847CE4 (DbgkSendSystemDllMessages.c)
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
