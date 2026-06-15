/*
 * XREFs of ?SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800D5ADC
 * Callers:
 *     ?SetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@@Z @ 0x1800D5BA0 (-SetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@@Z.c)
 *     ?SetShareMode@CPolicyConfig@@UEAAJPEBGW4_DeviceShareMode@@@Z @ 0x1800D5D40 (-SetShareMode@CPolicyConfig@@UEAAJPEBGW4_DeviceShareMode@@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?TryGetDevicePropertyStore@@YAJPEAUIMMDevice@@HKPEAPEAUIPropertyStore@@@Z @ 0x1800D613C (-TryGetDevicePropertyStore@@YAJPEAUIMMDevice@@HKPEAPEAUIPropertyStore@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::SetPropertyStoreProperty(
        struct IMMDevice *a1,
        int a2,
        const struct _tagpropertykey *a3,
        const struct tagPROPVARIANT *a4)
{
  int DevicePropertyStore; // ebx
  struct IPropertyStore *v7; // rcx
  struct IPropertyStore *v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v9[1] = (struct IPropertyStore *)-2LL;
  v9[0] = 0LL;
  DevicePropertyStore = TryGetDevicePropertyStore(a1, a2, 1u, v9);
  if ( DevicePropertyStore < 0
    || ((v7 = v9[0]) == 0LL
      ? (struct IPropertyStore *)(DevicePropertyStore = -2147024894)
      : (DevicePropertyStore = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, const struct tagPROPVARIANT *))v9[0]->lpVtbl->SetValue)(
                                 v9[0],
                                 a3,
                                 a4),
         v7 = v9[0]),
        DevicePropertyStore < 0) )
  {
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetPropertyStoreProperty", 4945, DevicePropertyStore);
    v7 = v9[0];
  }
  if ( v7 )
    ((void (__fastcall *)(struct IPropertyStore *))v7->lpVtbl->Release)(v7);
  return (unsigned int)DevicePropertyStore;
}
