/*
 * XREFs of ResetPointerDevices @ 0x1C00BCABC
 * Callers:
 *     EditionDeactivateMitInput @ 0x1C00BAB90 (EditionDeactivateMitInput.c)
 *     ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x1C00BACB0 (-PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z.c)
 *     xxxSwitchDesktop @ 0x1C00BFEDC (xxxSwitchDesktop.c)
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
