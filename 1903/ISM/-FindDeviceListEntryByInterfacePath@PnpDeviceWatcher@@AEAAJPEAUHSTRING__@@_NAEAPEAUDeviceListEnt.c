/*
 * XREFs of ?FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x1800AC778
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x180016BA0 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x1800168E0 (-FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@.c)
 *     ?GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAUHSTRING__@@@Z @ 0x180017900 (-GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAU.c)
 *     _anonymous_namespace_::WindowsSafeIsEqualString @ 0x1800ACE84 (_anonymous_namespace_--WindowsSafeIsEqualString.c)
 */

__int64 __fastcall PnpDeviceWatcher::FindDeviceListEntryByInterfacePath(
        PnpDeviceWatcher *this,
        HSTRING *a2,
        char a3,
        struct PnpDeviceWatcher::DeviceListEntry **a4)
{
  char *v4; // rsi
  char *i; // rbx
  int DeviceStringProperty; // eax
  HSTRING v12; // rcx
  unsigned int DeviceListEntryByInstanceId; // ebx
  HSTRING *v14; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HSTRING string; // [rsp+50h] [rbp+8h] BYREF

  v4 = (char *)this + 56;
  for ( i = (char *)*((_QWORD *)this + 7); i != v4; i = *(char **)i )
  {
    if ( (unsigned __int8)anonymous_namespace_::WindowsSafeIsEqualString(*(_QWORD *)(*((_QWORD *)i + 2) + 32LL), a2) )
    {
      *a4 = (struct PnpDeviceWatcher::DeviceListEntry *)i;
      return 0LL;
    }
  }
  *a4 = 0LL;
  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  v14 = a2;
  DeviceStringProperty = PnpApiWrapper::Details::GetDeviceStringProperty(
                           (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceInterfaceProperty,
                           (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&v14,
                           (void *)&DEVPKEY_Device_InstanceId,
                           &string);
  v12 = string;
  DeviceListEntryByInstanceId = DeviceStringProperty;
  if ( string )
  {
    if ( DeviceStringProperty >= 0 )
    {
      DeviceListEntryByInstanceId = PnpDeviceWatcher::FindDeviceListEntryByInstanceId(this, string, a3, a4);
      goto LABEL_11;
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
LABEL_11:
    v12 = string;
  }
  WindowsDeleteString(v12);
  return DeviceListEntryByInstanceId;
}
