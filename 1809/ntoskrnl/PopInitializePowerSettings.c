/*
 * XREFs of PopInitializePowerSettings @ 0x1409DDBD4
 * Callers:
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
 */

void *PopInitializePowerSettings()
{
  _QWORD *v0; // rax
  __int64 v1; // rcx
  void *result; // rax

  v0 = &PopSessionSpecificLists;
  v1 = 2LL;
  do
  {
    v0[1] = v0;
    *v0 = v0;
    v0 += 2;
    --v1;
  }
  while ( v1 );
  PopSettingLock.Count = 1;
  PopPendingPowerSettingUpdateLock = 0LL;
  PopSettingLock.Owner = 0LL;
  PopSettingLock.Contention = 0;
  PopSettingLock.Event.Header.SignalState = 0;
  PopSettingLock.Event.Header.WaitListHead.Blink = &PopSettingLock.Event.Header.WaitListHead;
  PopSettingLock.Event.Header.WaitListHead.Flink = &PopSettingLock.Event.Header.WaitListHead;
  qword_1404173A8 = (__int64)&PopRegisteredPowerSettingCallbacks;
  PopRegisteredPowerSettingCallbacks = (__int64)&PopRegisteredPowerSettingCallbacks;
  qword_140417378 = (__int64)&PopPowerSettings;
  PopPowerSettings = &PopPowerSettings;
  LOWORD(PopSettingLock.Event.Header.Lock) = 1;
  PopSettingLock.Event.Header.Size = 6;
  memset(&PopPrimaryDisplayVisibleStateErratum, 0, 0x20uLL);
  result = &WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE;
  PopPrimaryDisplayVisibleStateErratum = (__int64)&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE;
  return result;
}
