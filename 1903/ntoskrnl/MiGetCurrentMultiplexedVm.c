/*
 * XREFs of MiGetCurrentMultiplexedVm @ 0x1400F1A7C
 * Callers:
 *     MmQuerySystemWorkingSetInformation @ 0x1400F17D0 (MmQuerySystemWorkingSetInformation.c)
 *     MmGetWorkingSetLeafSize @ 0x1400F19F8 (MmGetWorkingSetLeafSize.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14012D4BC (MmAdjustWorkingSetSizeEx.c)
 * Callees:
 *     <none>
 */

__int64 MiGetCurrentMultiplexedVm()
{
  __int64 v0; // rax

  v0 = *(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].Spare2[69]);
  if ( *(_BYTE *)(v0 + 7900) )
    return v0 + 0x2000;
  else
    return 0LL;
}
