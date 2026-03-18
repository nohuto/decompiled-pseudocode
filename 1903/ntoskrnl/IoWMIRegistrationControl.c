/*
 * XREFs of IoWMIRegistrationControl @ 0x140714870
 * Callers:
 *     PpmEnableWmiInterface @ 0x14077E190 (PpmEnableWmiInterface.c)
 *     ViDdiDriverEntry @ 0x140966040 (ViDdiDriverEntry.c)
 *     WheaInitialize @ 0x140A02E24 (WheaInitialize.c)
 *     WmipDriverEntry @ 0x140A18760 (WmipDriverEntry.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x140099D28 (WmipUnreferenceRegEntry.c)
 *     WmipFindRegEntryByDevice @ 0x1401583A8 (WmipFindRegEntryByDevice.c)
 *     WmipEnterSMCritSection @ 0x14032BB58 (WmipEnterSMCritSection.c)
 *     WmipLeaveSMCritSection @ 0x14032BB84 (WmipLeaveSMCritSection.c)
 *     WmipUpdateRegistration @ 0x140714948 (WmipUpdateRegistration.c)
 *     WmipDeregisterDevice @ 0x140732468 (WmipDeregisterDevice.c)
 *     WmipRegisterDevice @ 0x140736804 (WmipRegisterDevice.c)
 *     WmipSetTraceNotify @ 0x140739CC0 (WmipSetTraceNotify.c)
 */

NTSTATUS __stdcall IoWMIRegistrationControl(PDEVICE_OBJECT DeviceObject, ULONG Action)
{
  char v2; // r14
  ULONG v4; // eax
  ULONG v5; // eax
  NTSTATUS v6; // ebx
  ULONG v8; // eax
  ULONG v10; // eax
  ULONG v11; // eax
  __int64 RegEntryByDevice; // rbx

  v2 = 0;
  if ( WmipServiceDeviceObject )
  {
    v4 = Action & 0x7FFFFFFF;
    if ( (Action & 0x80000000) == 0 )
      v4 = Action;
    if ( (v4 & 0x10000) != 0 )
    {
      v2 = 1;
      v4 &= 0xFF0EFFFF;
    }
    v5 = v4 - 1;
    if ( !v5 )
    {
      v6 = WmipRegisterDevice(DeviceObject);
      if ( v2 )
        WmipSetTraceNotify(DeviceObject);
      return v6;
    }
    v8 = v5 - 1;
    if ( !v8 )
      return WmipDeregisterDevice(DeviceObject);
    v10 = v8 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 != 1 )
          return -1073741811;
        RegEntryByDevice = WmipFindRegEntryByDevice((__int64)DeviceObject);
        if ( !RegEntryByDevice )
          return -1073741811;
        WmipEnterSMCritSection();
        _InterlockedOr((volatile signed __int32 *)(RegEntryByDevice + 48), 0x20000000u);
        WmipLeaveSMCritSection();
        WmipUnreferenceRegEntry(RegEntryByDevice);
        return 0;
      }
      return WmipUpdateRegistration(DeviceObject);
    }
    else
    {
      v6 = WmipDeregisterDevice(DeviceObject);
      if ( v6 < 0 )
        return v6;
      return WmipRegisterDevice(DeviceObject);
    }
  }
  return -1073741823;
}
