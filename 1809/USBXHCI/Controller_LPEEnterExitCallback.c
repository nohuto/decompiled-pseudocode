/*
 * XREFs of Controller_LPEEnterExitCallback @ 0x1C000CF80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C00028DC (WPP_RECORDER_SF_i.c)
 *     Controller_AcquireWdfPowerReferenceForDebugger @ 0x1C000B2E0 (Controller_AcquireWdfPowerReferenceForDebugger.c)
 *     Controller_InUseByDebugger @ 0x1C000C740 (Controller_InUseByDebugger.c)
 *     Controller_ReleaseWdfPowerReferenceForDebugger @ 0x1C000D880 (Controller_ReleaseWdfPowerReferenceForDebugger.c)
 */

__int64 __fastcall Controller_LPEEnterExitCallback(
        LPCGUID SettingGuid,
        _DWORD *Value,
        ULONG ValueLength,
        _QWORD *Context)
{
  unsigned int v4; // edi
  __int64 v6; // rax
  __int64 v7; // rcx

  v4 = 0;
  if ( Value && ValueLength == 4 )
  {
    v6 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
    if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
      v6 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
    if ( v6 )
    {
      v4 = -1073741811;
      WPP_RECORDER_SF_i(Context[9], 2u, 4u, 0xFDu, (__int64)&::Context.Logger + 4, *Context);
    }
    else
    {
      v7 = Context[9];
      if ( *Value )
      {
        WPP_RECORDER_SF_i(v7, 4u, 4u, 0xFFu, (__int64)&::Context.Logger + 4, *Context);
        if ( Controller_InUseByDebugger(Context) )
          Controller_ReleaseWdfPowerReferenceForDebugger(Context);
      }
      else
      {
        WPP_RECORDER_SF_i(v7, 4u, 4u, 0xFEu, (__int64)&::Context.Logger + 4, *Context);
        if ( Controller_InUseByDebugger(Context) )
          Controller_AcquireWdfPowerReferenceForDebugger(Context);
      }
    }
  }
  else
  {
    v4 = -1073741811;
    WPP_RECORDER_SF_i(Context[9], 2u, 4u, 0xFCu, (__int64)&::Context.Logger + 4, *Context);
  }
  return v4;
}
