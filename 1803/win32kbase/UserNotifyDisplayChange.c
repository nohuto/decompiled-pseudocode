/*
 * XREFs of UserNotifyDisplayChange @ 0x1C00A6D00
 * Callers:
 *     DxgkEngNotifyDisplayChange @ 0x1C00C97E0 (DxgkEngNotifyDisplayChange.c)
 * Callees:
 *     ReferenceDwmApiPort @ 0x1C005C820 (ReferenceDwmApiPort.c)
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
