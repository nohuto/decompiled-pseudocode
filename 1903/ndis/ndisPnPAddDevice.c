/*
 * XREFs of ndisPnPAddDevice @ 0x1C002D994
 * Callers:
 *     ?ndisWdmPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C003F650 (-ndisWdmPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     NdisWdfPnPAddDevice @ 0x1C009EE80 (NdisWdfPnPAddDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C0023C1C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??1NDIS_MINIPORT_CREATION_CONFIG@@QEAA@XZ @ 0x1C003E39C (--1NDIS_MINIPORT_CREATION_CONFIG@@QEAA@XZ.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C003EE34 (WPP_RECORDER_SF__guid_.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     McTemplateK0z @ 0x1C009D050 (McTemplateK0z.c)
 *     ndisIfReadInterfaceAddDeviceParameters @ 0x1C01070B8 (ndisIfReadInterfaceAddDeviceParameters.c)
 *     ?ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C01072CC (-ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$defaul.c)
 *     ?ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z @ 0x1C0107574 (-ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z.c)
 *     ?ndisCheckIfDeviceNeedsUpdates@@YAJAEAVKRegKey@@AEA_N@Z @ 0x1C01076C0 (-ndisCheckIfDeviceNeedsUpdates@@YAJAEAVKRegKey@@AEA_N@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z @ 0x1C0107D40 (-QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z @ 0x1C01087AC (-QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z.c)
 *     ?ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C0108B88 (-ndisCheckIfDeviceNeedsInstallation@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C0108C3C (-ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0108D28 (-QueryValueString@KRegKey@@QEAAJPEB_WAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@R.c)
 *     ndisMiniBlockFromDriverObject @ 0x1C010B7C4 (ndisMiniBlockFromDriverObject.c)
 *     ?ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z @ 0x1C01179E8 (-ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z.c)
 *     ?ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z @ 0x1C011840C (-ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z.c)
 *     ndisAddDevice @ 0x1C012E628 (ndisAddDevice.c)
 */

__int64 __fastcall ndisPnPAddDevice(struct _DRIVER_OBJECT *a1, _DEVICE_OBJECT *a2, __int64 a3)
{
  _DEVICE_OBJECT *v4; // r14
  int v6; // edx
  NTSTATUS updated; // edi
  UNICODE_STRING *v8; // rbx
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // r8
  HANDLE v13; // rcx
  int v14; // edx
  int ValueBoolean; // eax
  unsigned __int8 v16; // cl
  char CheckStamp; // [rsp+30h] [rbp-99h]
  bool v18; // [rsp+40h] [rbp-89h] BYREF
  bool v19; // [rsp+41h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-81h] BYREF
  PCUNICODE_STRING GuidString; // [rsp+50h] [rbp-79h] BYREF
  HANDLE DeviceRegKey; // [rsp+58h] [rbp-71h] BYREF
  GUID Guid; // [rsp+60h] [rbp-69h] BYREF
  union _NET_LUID_LH v24; // [rsp+70h] [rbp-59h] BYREF
  void *v25; // [rsp+78h] [rbp-51h] BYREF
  _DEVICE_OBJECT *v26; // [rsp+80h] [rbp-49h]
  char v27; // [rsp+88h] [rbp-41h]
  int v28; // [rsp+8Ch] [rbp-3Dh]
  __int128 v29; // [rsp+90h] [rbp-39h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-29h]
  int v31; // [rsp+A8h] [rbp-21h]
  __int64 v32; // [rsp+B0h] [rbp-19h]
  unsigned __int8 v33[8]; // [rsp+B8h] [rbp-11h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-9h]

  DeviceRegKey = 0LL;
  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    CheckStamp = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      61,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)a1,
      CheckStamp);
  }
  updated = IoOpenDeviceRegistryKey(v4, 2u, 0xC2000000, &DeviceRegKey);
  if ( updated < 0 )
    goto LABEL_21;
  Handle = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &Handle,
    DeviceRegKey);
  v18 = 0;
  v19 = 0;
  GuidString = 0LL;
  updated = ndisCheckIfDeviceNeedsInstallation(&Handle, &GuidString, &v18);
  if ( updated < 0 )
    goto LABEL_24;
  if ( !v18 )
  {
    updated = ndisCheckIfDeviceNeedsPseudoMigration((KRegKey *)&Handle);
    if ( updated < 0 )
      goto LABEL_24;
    if ( !v18 )
    {
      updated = ndisCheckIfDeviceNeedsFullMigration(&Handle, &GuidString, &v18);
      if ( updated < 0 )
        goto LABEL_24;
      if ( !v18 )
      {
        updated = ndisCheckIfDeviceNeedsUpdates((struct KRegKey *)&Handle, &v18);
        if ( updated < 0 )
          goto LABEL_24;
        if ( !v18 )
          goto LABEL_12;
      }
    }
  }
  ZwUpdateWnfStateData(&WNF_NDIS_ADAPTER_ARRIVAL, 0LL, 0, 0LL, 0LL, 0, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v14,
      13,
      62,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids);
  }
  updated = ndisCheckAlwaysStartFlag((struct KRegKey *)&Handle, &v19);
  if ( updated < 0 )
  {
LABEL_24:
    if ( GuidString )
      ExFreePoolWithTag((PVOID)GuidString, 0x7274534Bu);
    v13 = Handle;
    if ( !Handle )
      goto LABEL_21;
    goto LABEL_27;
  }
  if ( v19 )
  {
LABEL_12:
    v8 = (UNICODE_STRING *)GuidString;
    v25 = 0LL;
    v24.Value = 0LL;
    v26 = 0LL;
    v27 = 0;
    v28 = 0;
    v29 = 0LL;
    v30 = 0LL;
    v31 = 0;
    *(_WORD *)v33 = 0;
    v34 = 0LL;
    v32 = a3;
    updated = RtlGUIDFromString(GuidString, &Guid);
    if ( updated >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF__guid_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v9,
          13,
          63,
          (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
          (__int64)&Guid);
      }
      if ( !a3 )
        goto LABEL_48;
      ValueBoolean = KRegKey::QueryValueBoolean((KRegKey *)&Handle, L"HardwareLoopback", v33, FailIfNotFound);
      v16 = v33[0];
      if ( ValueBoolean < 0 )
        v16 = 0;
      v33[0] = v16;
      updated = ndisWdfUpdateAddDeviceParameters(
                  (struct KRegKey *)&Handle,
                  (struct NDIS_MINIPORT_CREATION_CONFIG *)&Guid);
      if ( updated >= 0 )
      {
LABEL_48:
        if ( !(unsigned int)ndisIfReadInterfaceAddDeviceParameters(&Guid, v4) )
        {
          LODWORD(GuidString) = 0;
          KRegKey::QueryValueUlong((KRegKey *)&Handle, L"IMMiniport", (unsigned int *)&GuidString);
          KRegKey::QueryValueString(&Handle, L"ComponentID", &v29);
          ndisTemporarilyScribbleNetLuidIndex((struct KRegKey *)&Handle, &v24);
          if ( Microsoft_Windows_NDISEnableBits < 0 )
            McTemplateK0z(v10, &AddPnPDevice, v11, *(_QWORD *)(*((_QWORD *)&v29 + 1) + 8LL));
          v34 = ndisMiniBlockFromDriverObject(a1);
          v26 = v4;
          wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
            &v25,
            Handle);
          updated = ndisAddDevice(&Guid);
          NDIS_MINIPORT_CREATION_CONFIG::~NDIS_MINIPORT_CREATION_CONFIG((NDIS_MINIPORT_CREATION_CONFIG *)&Guid);
          if ( v8 )
            ExFreePoolWithTag(v8, 0x7274534Bu);
          goto LABEL_21;
        }
        updated = -1073741823;
      }
    }
    NDIS_MINIPORT_CREATION_CONFIG::~NDIS_MINIPORT_CREATION_CONFIG((NDIS_MINIPORT_CREATION_CONFIG *)&Guid);
    if ( v8 )
      ExFreePoolWithTag(v8, 0x7274534Bu);
    v13 = Handle;
    if ( !Handle )
      goto LABEL_21;
LABEL_27:
    ZwClose(v13);
LABEL_21:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        13,
        64,
        (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
        (char)v4,
        updated);
    }
    return (unsigned int)updated;
  }
  if ( GuidString )
    ExFreePoolWithTag((PVOID)GuidString, 0x7274534Bu);
  if ( Handle )
    ZwClose(Handle);
  return 3221226645LL;
}
