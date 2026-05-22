/*
 * XREFs of ?FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180071F94
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18007165C (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180071C64 (-FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@.c)
 *     ?GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAUHSTRING__@@@Z @ 0x180076B94 (-GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAU.c)
 */

__int64 __fastcall PnpDeviceWatcher::FindDeviceListEntryByInterfacePath(
        PnpDeviceWatcher *this,
        HSTRING string2,
        char a3,
        struct PnpDeviceWatcher::DeviceListEntry **a4)
{
  char *v4; // r14
  char *i; // rbx
  HSTRING v10; // rcx
  bool v11; // zf
  int DeviceStringProperty; // eax
  HSTRING v14; // rcx
  unsigned int DeviceListEntryByInstanceId; // ebx
  HSTRING string[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HSTRING result; // [rsp+50h] [rbp+8h] BYREF

  v4 = (char *)this + 56;
  for ( i = (char *)*((_QWORD *)this + 7); i != v4; i = *(char **)i )
  {
    v10 = *(HSTRING *)(*((_QWORD *)i + 2) + 32LL);
    if ( v10 )
    {
      if ( !string2 || WindowsCompareStringOrdinal(v10, string2, (INT32 *)&result) < 0 )
        continue;
      v11 = (_DWORD)result == 0;
    }
    else
    {
      v11 = string2 == 0LL;
    }
    if ( v11 )
    {
      *a4 = (struct PnpDeviceWatcher::DeviceListEntry *)i;
      return 0LL;
    }
  }
  *a4 = 0LL;
  WindowsDeleteString(0LL);
  result = string2;
  DeviceStringProperty = PnpApiWrapper::Details::GetDeviceStringProperty(
                           (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceInterfaceProperty,
                           (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&result,
                           (void *)&DEVPKEY_Device_InstanceId,
                           (const struct _DEVPROPKEY *)string,
                           0LL);
  v14 = string[0];
  DeviceListEntryByInstanceId = DeviceStringProperty;
  if ( string[0] )
  {
    if ( DeviceStringProperty >= 0 )
    {
      DeviceListEntryByInstanceId = PnpDeviceWatcher::FindDeviceListEntryByInstanceId(this, string[0], a3, a4);
LABEL_16:
      v14 = string[0];
    }
  }
  else if ( DeviceStringProperty >= 0 )
  {
    DeviceListEntryByInstanceId = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2EB,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
      (const char *)0x80004005LL);
    goto LABEL_16;
  }
  WindowsDeleteString(v14);
  return DeviceListEntryByInstanceId;
}
