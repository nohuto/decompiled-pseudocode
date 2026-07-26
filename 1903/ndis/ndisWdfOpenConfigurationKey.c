/*
 * XREFs of ndisWdfOpenConfigurationKey @ 0x1C0116278
 * Callers:
 *     NdisOpenConfiguration @ 0x1C002B170 (NdisOpenConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C002F0E4 (-RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_qSd @ 0x1C007F1E8 (WPP_RECORDER_SF_qSd.c)
 *     WPP_RECORDER_SF_q_guid_d @ 0x1C007F344 (WPP_RECORDER_SF_q_guid_d.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C0100B80 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1C0100DC0 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C010B380 (ndisIfOpenInterfaceRegistryKey.c)
 */

__int64 __fastcall ndisWdfOpenConfigurationKey(__int64 a1, HANDLE *a2)
{
  __int64 v2; // r14
  int v5; // eax
  unsigned int v6; // ebx
  unsigned int Uint32; // eax
  int v8; // edx
  _DEVICE_OBJECT *v9; // rcx
  NTSTATUS v10; // eax
  int v11; // edx
  int v12; // r9d
  HANDLE v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _GUID *v18; // [rsp+20h] [rbp-E0h]
  int v19; // [rsp+20h] [rbp-E0h]
  char v20[8]; // [rsp+28h] [rbp-D8h]
  char v21[8]; // [rsp+30h] [rbp-D0h]
  HANDLE DeviceRegKey; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  char v24[4]; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v25; // [rsp+88h] [rbp-78h] BYREF
  HANDLE *v26; // [rsp+90h] [rbp-70h]
  wchar_t Dest[56]; // [rsp+A0h] [rbp-60h] BYREF

  v25 = 0LL;
  v2 = a1 + 4008;
  v26 = a2;
  v5 = ndisIfOpenInterfaceRegistryKey((unsigned int *)(a1 + 4008), (KRegKey *)&v25, 1u, 1);
  v6 = v5;
  if ( v5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q_guid_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        8u,
        0xAu,
        (struct _GUID *)&WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids,
        a1,
        v2,
        v5);
    goto LABEL_29;
  }
  Handle = &v25;
  Uint32 = NetSetupPropertyBag::ReadUint32(
             (void ***)&Handle,
             (const struct _NETSETUPPROPKEY *)&unk_1C00D3738,
             (unsigned int *)v24);
  v6 = Uint32;
  if ( Uint32 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        8,
        11,
        (struct _GUID *)&WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids,
        a1,
        Uint32);
    }
    goto LABEL_29;
  }
  v9 = *(_DEVICE_OBJECT **)(a1 + 3832);
  DeviceRegKey = 0LL;
  v10 = IoOpenDeviceRegistryKey(v9, 2u, 0xC2000000, &DeviceRegKey);
  v6 = v10;
  if ( v10 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_27;
    v12 = 12;
LABEL_19:
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      8,
      v12,
      (struct _GUID *)&WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids,
      a1,
      v10);
    goto LABEL_27;
  }
  if ( *(_DWORD *)v24 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v11,
        8,
        14,
        (struct _GUID *)&WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids,
        a1,
        v24[0]);
    }
    *(_DWORD *)v21 = *(unsigned __int8 *)(v2 + 8);
    *(_DWORD *)v20 = *(unsigned __int16 *)(v2 + 6);
    LODWORD(v18) = *(unsigned __int16 *)(v2 + 4);
    v10 = RtlStringCbPrintfW(
            Dest,
            0x70uLL,
            L"NetworkInterface\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
            *(unsigned int *)(a1 + 4008),
            v18,
            *(_QWORD *)v20,
            *(_QWORD *)v21,
            *(unsigned __int8 *)(v2 + 9),
            *(unsigned __int8 *)(v2 + 10),
            *(unsigned __int8 *)(v2 + 11),
            *(unsigned __int8 *)(v2 + 12),
            *(unsigned __int8 *)(v2 + 13),
            *(unsigned __int8 *)(v2 + 14),
            *(unsigned __int8 *)(v2 + 15));
    v6 = v10;
    if ( v10 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_27;
      v12 = 15;
      goto LABEL_19;
    }
    Handle = 0LL;
    v6 = KRegKey::Open((KRegKey *)&Handle, 0xC2000000, Dest, DeviceRegKey);
    if ( v6 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qSd(*((_QWORD *)WPP_GLOBAL_Control + 8), v14, v15, v16, v19);
      if ( Handle )
        ZwClose(Handle);
      goto LABEL_27;
    }
    *v26 = Handle;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v11,
        *(_DWORD *)v24 + 8,
        *(_DWORD *)v24 + 13,
        (struct _GUID *)&WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids,
        a1);
    }
    v13 = DeviceRegKey;
    DeviceRegKey = 0LL;
    *a2 = v13;
  }
  v6 = 0;
LABEL_27:
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
LABEL_29:
  if ( v25 )
    ZwClose(v25);
  return v6;
}
