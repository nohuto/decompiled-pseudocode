/*
 * XREFs of WdipSemSqmEnabled @ 0x1408EE9E4
 * Callers:
 *     WdipSemLogInflightLimitExceededInformation @ 0x1408EDCC0 (WdipSemLogInflightLimitExceededInformation.c)
 *     WdipSemLogTimeoutInformation @ 0x1408EE2C0 (WdipSemLogTimeoutInformation.c)
 * Callees:
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 */

bool WdipSemSqmEnabled()
{
  REGHANDLE v0; // rdi
  char v1; // bl

  v0 = WdipSemRegHandle;
  v1 = 0;
  if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SQM_INCREMENT_DWORD) )
    return EtwEventEnabled(v0, &WDI_SEM_EVENT_SQM_ADD_TO_STREAM) != 0;
  return v1;
}
