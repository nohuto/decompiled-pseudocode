/*
 * XREFs of MiGetCurrentMultiplexedVm @ 0x1400EF564
 * Callers:
 *     MmGetWorkingSetLeafSize @ 0x1400F0E38 (MmGetWorkingSetLeafSize.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140130B04 (MmQuerySystemWorkingSetInformation.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14013C164 (MmAdjustWorkingSetSizeEx.c)
 * Callees:
 *     <none>
 */

__int64 MiGetCurrentMultiplexedVm()
{
  __int64 v0; // rax

  v0 = *(_QWORD *)(qword_14043B808
                 + 8LL * *((unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].SecureState.Flags + 3));
  if ( *(_BYTE *)(v0 + 7132) )
    return v0 + 7424;
  else
    return 0LL;
}
