/*
 * XREFs of RIMIsInputSuppressed @ 0x1C014D6DC
 * Callers:
 *     ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1C014D410 (-RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z.c)
 *     RIMHandleTTMDeviceInput @ 0x1C014D638 (RIMHandleTTMDeviceInput.c)
 *     rimSignalReadComplete @ 0x1C01542AC (rimSignalReadComplete.c)
 *     rimApplyPointerDevicePolicies @ 0x1C0155808 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C006C978 (RimDeviceTypeToRimInputType.c)
 */

__int64 __fastcall RIMIsInputSuppressed(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // r8d

  v1 = *(_DWORD *)(a1 + 1304);
  v2 = 0;
  if ( v1 == 1
    || v1 == 2
    && ((unsigned int)RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48)) & gWakeOnDeviceTypes) == 0 )
  {
    return 1;
  }
  return v2;
}
