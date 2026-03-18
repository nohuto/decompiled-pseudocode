/*
 * XREFs of UserNotifyDisplayChange @ 0x1C0063250
 * Callers:
 *     DrvEnableMDEV @ 0x1C0040C0C (DrvEnableMDEV.c)
 *     DxgkEngNotifyDisplayChange @ 0x1C012DD70 (DxgkEngNotifyDisplayChange.c)
 * Callees:
 *     ReferenceDwmApiPort @ 0x1C003EA50 (ReferenceDwmApiPort.c)
 */

__int64 UserNotifyDisplayChange()
{
  PVOID v0; // rax
  int CurrentProcessSessionId; // [rsp+50h] [rbp+8h] BYREF

  if ( (int)IsDwmAsyncNotifyDisplayModeChangeSupported() >= 0 )
  {
    v0 = ReferenceDwmApiPort();
    DwmAsyncNotifyDisplayModeChange(v0);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  return ZwUpdateWnfStateData(&WNF_DX_DISPLAY_CONFIG_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &CurrentProcessSessionId, 0, 0);
}
