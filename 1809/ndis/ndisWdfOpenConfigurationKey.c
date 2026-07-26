/*
 * XREFs of ndisWdfOpenConfigurationKey @ 0x1C00EAAB0
 * Callers:
 *     NdisOpenConfiguration @ 0x1C00C6DD0 (NdisOpenConfiguration.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C001E47C (-RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qSd @ 0x1C005162C (WPP_SF_qSd.c)
 *     WPP_SF_q_guid_d @ 0x1C00516B4 (WPP_SF_q_guid_d.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1C00C6F40 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C00C74C4 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C00C8908 (ndisIfOpenInterfaceRegistryKey.c)
 */

__int64 __fastcall ndisWdfOpenConfigurationKey(__int64 a1, _QWORD *a2)
{
  unsigned int *v2; // r12
  unsigned int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  _DEVICE_OBJECT *v8; // rcx
  NTSTATUS v9; // eax
  unsigned __int16 v10; // cx
  HANDLE v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-E0h]
  HANDLE DeviceRegKey; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v19; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v20; // [rsp+88h] [rbp-78h] BYREF
  wchar_t Dest[56]; // [rsp+90h] [rbp-70h] BYREF

  v20 = 0LL;
  v2 = (unsigned int *)(a1 + 4040);
  v5 = ndisIfOpenInterfaceRegistryKey((unsigned int *)(a1 + 4040), (KRegKey *)&v20, 1u, 1);
  v6 = v5;
  if ( v5 )
  {
    if ( (unsigned __int8)byte_1C00A0257 >= 2u )
      WPP_SF_q_guid_d(0xAu, &WPP_9d4cd70f7fc237db66c5630c937009d5_Traceguids, a1, (__int64)v2, v5);
    goto LABEL_29;
  }
  Handle = &v20;
  v7 = NetSetupPropertyBag::ReadUint32((void ***)&Handle, (const struct _NETSETUPPROPKEY *)&unk_1C008E748, &v19);
  v6 = v7;
  if ( v7 )
  {
    if ( (unsigned __int8)byte_1C00A0257 >= 2u )
      WPP_SF_qD(0xBu, &WPP_9d4cd70f7fc237db66c5630c937009d5_Traceguids, a1, v7);
    goto LABEL_29;
  }
  v8 = *(_DEVICE_OBJECT **)(a1 + 3864);
  DeviceRegKey = 0LL;
  v9 = IoOpenDeviceRegistryKey(v8, 2u, 0xC2000000, &DeviceRegKey);
  v6 = v9;
  if ( v9 )
  {
    if ( (unsigned __int8)byte_1C00A0257 < 2u )
      goto LABEL_27;
    v10 = 12;
LABEL_19:
    WPP_SF_qD(v10, &WPP_9d4cd70f7fc237db66c5630c937009d5_Traceguids, a1, v9);
    goto LABEL_27;
  }
  if ( v19 )
  {
    if ( (unsigned __int8)byte_1C00A0257 >= 4u )
      WPP_SF_qD(0xEu, &WPP_9d4cd70f7fc237db66c5630c937009d5_Traceguids, a1, v19);
    v9 = RtlStringCbPrintfW(
           Dest,
           0x70uLL,
           L"NetworkInterface\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
           *v2,
           *((unsigned __int16 *)v2 + 2),
           *((unsigned __int16 *)v2 + 3),
           *((unsigned __int8 *)v2 + 8),
           *((unsigned __int8 *)v2 + 9),
           *((unsigned __int8 *)v2 + 10),
           *((unsigned __int8 *)v2 + 11),
           *((unsigned __int8 *)v2 + 12),
           *((unsigned __int8 *)v2 + 13),
           *((unsigned __int8 *)v2 + 14),
           *((unsigned __int8 *)v2 + 15));
    v6 = v9;
    if ( v9 )
    {
      if ( (unsigned __int8)byte_1C00A0257 < 2u )
        goto LABEL_27;
      v10 = 15;
      goto LABEL_19;
    }
    Handle = 0LL;
    v12 = KRegKey::Open((KRegKey *)&Handle, 0xC2000000, Dest, DeviceRegKey);
    v6 = v12;
    if ( v12 )
    {
      if ( (unsigned __int8)byte_1C00A0257 >= 2u )
      {
        LODWORD(v16) = v12;
        WPP_SF_qSd(v14, v13, a1, Dest, v16);
      }
      if ( Handle )
        ZwClose(Handle);
      goto LABEL_27;
    }
    v11 = Handle;
  }
  else
  {
    if ( (unsigned __int8)byte_1C00A0257 >= 4u )
      WPP_SF_q(v19 + 13, &WPP_9d4cd70f7fc237db66c5630c937009d5_Traceguids, a1);
    v11 = DeviceRegKey;
    DeviceRegKey = 0LL;
  }
  *a2 = v11;
  v6 = 0;
LABEL_27:
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
LABEL_29:
  if ( v20 )
    ZwClose(v20);
  return v6;
}
