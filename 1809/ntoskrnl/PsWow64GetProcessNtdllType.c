/*
 * XREFs of PsWow64GetProcessNtdllType @ 0x1406795B4
 * Callers:
 *     DbgkCreateThread @ 0x1405F8028 (DbgkCreateThread.c)
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 *     PsMapSystemDlls @ 0x140678D30 (PsMapSystemDlls.c)
 *     PspSetupUserProcessAddressSpace @ 0x14067912C (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x140679364 (PspPrepareSystemDllInitBlock.c)
 *     PsThawProcess @ 0x14067F4C4 (PsThawProcess.c)
 *     PspWow64InitThread @ 0x1406A91FC (PspWow64InitThread.c)
 *     DbgkSendSystemDllMessages @ 0x14080F68C (DbgkSendSystemDllMessages.c)
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
