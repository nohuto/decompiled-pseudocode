/*
 * XREFs of ResetPointerDevices @ 0x1C01087BC
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00D513C (xxxSwitchDesktop.c)
 *     EditionDeactivateMitInput @ 0x1C01085C0 (EditionDeactivateMitInput.c)
 *     ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x1C01086E4 (-PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS ResetPointerDevices()
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  result = CHidInput::GetKernelHandleToRimObj(gpHidInput, &Handle);
  if ( result >= 0 )
  {
    RIMResetPointerDevices(Handle);
    return ZwClose(Handle);
  }
  return result;
}
