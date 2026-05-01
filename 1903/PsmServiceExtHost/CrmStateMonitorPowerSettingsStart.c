/*
 * XREFs of CrmStateMonitorPowerSettingsStart @ 0x180045C34
 * Callers:
 *     CrmStateMonitorStart @ 0x180003A80 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x1800046A4 (CrmStateMonitorStateSizeGet.c)
 *     memcpy_0 @ 0x180049292 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorPowerSettingsStart(__int64 a1, const GUID *a2)
{
  unsigned int v4; // eax
  const void *v5; // rdx
  void *v6; // r9
  signed int v7; // eax
  unsigned int v8; // ebx
  HPOWERNOTIFY v9; // rcx
  _QWORD Recipient[3]; // [rsp+20h] [rbp-18h] BYREF
  HPOWERNOTIFY RegistrationHandle; // [rsp+40h] [rbp+8h] BYREF

  RegistrationHandle = 0LL;
  *(_DWORD *)(a1 + 56) = -1;
  *(_QWORD *)(a1 + 40) = a1 + 56;
  v4 = CrmStateMonitorStateSizeGet(*(_DWORD *)a1);
  memcpy_0(v6, v5, v4);
  Recipient[1] = a1;
  Recipient[0] = CrmStateMonitorPowerSettingsCallback;
  v7 = PowerSettingRegisterNotification(a2, 2u, Recipient, &RegistrationHandle);
  v8 = v7;
  if ( v7 )
  {
    v9 = RegistrationHandle;
    if ( v7 > 0 )
      v8 = (unsigned __int16)v7 | 0xC0070000;
  }
  else
  {
    v9 = 0LL;
    *(_QWORD *)(a1 + 64) = RegistrationHandle;
    RegistrationHandle = 0LL;
  }
  if ( v9 )
    PowerSettingUnregisterNotification(v9);
  return v8;
}
