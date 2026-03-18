/*
 * XREFs of MiGetCurrentMultiplexedVm @ 0x1400EF4C4
 * Callers:
 *     MmGetWorkingSetLeafSize @ 0x1400F0D98 (MmGetWorkingSetLeafSize.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140130A14 (MmQuerySystemWorkingSetInformation.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14013C044 (MmAdjustWorkingSetSizeEx.c)
 * Callees:
 *     <none>
 */

__int64 MiGetCurrentMultiplexedVm()
{
  __int64 v0; // rax

  v0 = *(_QWORD *)(qword_14043A748
                 + 8LL * *((unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].SecureState.Flags + 3));
  if ( *(_BYTE *)(v0 + 7132) )
    return v0 + 7424;
  else
    return 0LL;
}
