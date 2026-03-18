/*
 * XREFs of MiGetCurrentMultiplexedVm @ 0x1400D9FBC
 * Callers:
 *     MmQuerySystemWorkingSetInformation @ 0x1400D9D04 (MmQuerySystemWorkingSetInformation.c)
 *     MmGetWorkingSetLeafSize @ 0x1400D9F38 (MmGetWorkingSetLeafSize.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14012DF0C (MmAdjustWorkingSetSizeEx.c)
 * Callees:
 *     <none>
 */

__int64 MiGetCurrentMultiplexedVm()
{
  __int64 v0; // rax

  v0 = *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].Spare2[69]);
  if ( *(_BYTE *)(v0 + 7900) )
    return v0 + 0x2000;
  else
    return 0LL;
}
