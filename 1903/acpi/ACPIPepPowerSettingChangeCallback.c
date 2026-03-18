/*
 * XREFs of ACPIPepPowerSettingChangeCallback @ 0x1C00B0BC0
 * Callers:
 *     <none>
 * Callees:
 *     ACPISetDeviceWorker @ 0x1C00096A8 (ACPISetDeviceWorker.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 */

__int64 __fastcall ACPIPepPowerSettingChangeCallback(
        LPCGUID SettingGuid,
        _DWORD *Value,
        ULONG ValueLength,
        char *Context)
{
  struct _FAST_MUTEX *v4; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  char v13; // al
  __int64 InputBuffer; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+38h] [rbp-30h]

  v4 = (struct _FAST_MUTEX *)(Context + 184);
  InputBuffer = 0LL;
  v16 = 0LL;
  ExAcquireFastMutex((PFAST_MUTEX)(Context + 184));
  v9 = *(_QWORD *)&SettingGuid->Data1;
  v10 = *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1 - *(_QWORD *)&SettingGuid->Data1;
  if ( *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1 == *(_QWORD *)&SettingGuid->Data1 )
    v10 = *(_QWORD *)GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data4 - *(_QWORD *)SettingGuid->Data4;
  if ( !v10 && ValueLength == 4 && Value )
  {
    Context[245] = *Value != 0;
  }
  else
  {
    v11 = *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 - v9;
    if ( *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 == v9 )
      v11 = *(_QWORD *)GUID_CONSOLE_DISPLAY_STATE.Data4 - *(_QWORD *)SettingGuid->Data4;
    if ( !v11 && ValueLength == 4 && Value )
    {
      *((_DWORD *)Context + 62) = *Value;
    }
    else
    {
      v12 = *(_QWORD *)&GUID_GLOBAL_USER_PRESENCE.Data1 - v9;
      if ( *(_QWORD *)&GUID_GLOBAL_USER_PRESENCE.Data1 == v9 )
        v12 = *(_QWORD *)GUID_GLOBAL_USER_PRESENCE.Data4 - *(_QWORD *)SettingGuid->Data4;
      if ( !v12 && ValueLength == 4 && Value )
        *((_DWORD *)Context + 63) = *Value;
    }
    if ( *((_DWORD *)Context + 62) || (v13 = 1, *((_DWORD *)Context + 63) != 2) )
      v13 = 0;
    Context[243] = v13;
  }
  if ( !Context[247] && (Context[243] != Context[244] || Context[245] != Context[246]) )
  {
    LODWORD(v16) = 0;
    Context[247] = 1;
    LODWORD(InputBuffer) = 40;
    BYTE4(v16) = 1;
    ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0x10u, 0LL, 0);
    ACPISetDeviceWorker((__int64)Context, 0);
  }
  ExReleaseFastMutex(v4);
  return 0LL;
}
