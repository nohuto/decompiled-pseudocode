/*
 * XREFs of PsWow64GetProcessNtdllType @ 0x140678414
 * Callers:
 *     DbgkCreateThread @ 0x1405F7028 (DbgkCreateThread.c)
 *     PspAllocateProcess @ 0x14064BCD8 (PspAllocateProcess.c)
 *     PsMapSystemDlls @ 0x140677B90 (PsMapSystemDlls.c)
 *     PspSetupUserProcessAddressSpace @ 0x140677F8C (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x1406781C4 (PspPrepareSystemDllInitBlock.c)
 *     PsThawProcess @ 0x14067E324 (PsThawProcess.c)
 *     PspWow64InitThread @ 0x1406A7F7C (PspWow64InitThread.c)
 *     DbgkSendSystemDllMessages @ 0x14080E4AC (DbgkSendSystemDllMessages.c)
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
