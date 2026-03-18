/*
 * XREFs of Controller_LPEEnterExitCallback @ 0x1C000F430
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C0002D84 (WPP_RECORDER_SF_i.c)
 *     Controller_AcquireWdfPowerReferenceForDebugger @ 0x1C000D520 (Controller_AcquireWdfPowerReferenceForDebugger.c)
 *     Controller_InUseByDebugger @ 0x1C000EB20 (Controller_InUseByDebugger.c)
 *     Controller_ReleaseWdfPowerReferenceForDebugger @ 0x1C000FEDC (Controller_ReleaseWdfPowerReferenceForDebugger.c)
 */

__int64 __fastcall Controller_LPEEnterExitCallback(
        LPCGUID SettingGuid,
        _DWORD *Value,
        ULONG ValueLength,
        _QWORD *Context)
{
  unsigned int v4; // edi

  v4 = 0;
  if ( Value && ValueLength == 4 )
  {
    if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1
      && *(_QWORD *)SettingGuid->Data4 == *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 )
    {
      if ( *Value )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_i(Context[9], 4u, 4u, 0x102u, (__int64)&::Context.Logger + 4, *Context);
        if ( Controller_InUseByDebugger(Context) )
          Controller_ReleaseWdfPowerReferenceForDebugger(Context);
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_i(Context[9], 4u, 4u, 0x101u, (__int64)&::Context.Logger + 4, *Context);
        if ( Controller_InUseByDebugger(Context) )
          Controller_AcquireWdfPowerReferenceForDebugger(Context);
      }
    }
    else
    {
      v4 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_i(Context[9], 2u, 4u, 0x100u, (__int64)&::Context.Logger + 4, *Context);
    }
  }
  else
  {
    v4 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_i(Context[9], 2u, 4u, 0xFFu, (__int64)&::Context.Logger + 4, *Context);
  }
  return v4;
}
