/*
 * XREFs of PsWow64GetProcessNtdllType @ 0x1406783F4
 * Callers:
 *     DbgkCreateThread @ 0x1405F7028 (DbgkCreateThread.c)
 *     PspAllocateProcess @ 0x14064BCB8 (PspAllocateProcess.c)
 *     PsMapSystemDlls @ 0x140677B70 (PsMapSystemDlls.c)
 *     PspSetupUserProcessAddressSpace @ 0x140677F6C (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x1406781A4 (PspPrepareSystemDllInitBlock.c)
 *     PsThawProcess @ 0x14067E304 (PsThawProcess.c)
 *     PspWow64InitThread @ 0x1406A7F5C (PspWow64InitThread.c)
 *     DbgkSendSystemDllMessages @ 0x14080E48C (DbgkSendSystemDllMessages.c)
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
