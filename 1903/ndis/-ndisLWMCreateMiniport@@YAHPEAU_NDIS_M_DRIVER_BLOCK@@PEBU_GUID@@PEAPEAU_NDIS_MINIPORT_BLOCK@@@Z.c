/*
 * XREFs of ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0117D04
 * Callers:
 *     NdisLWMInitializeNetworkInterface @ 0x1C009D6C0 (NdisLWMInitializeNetworkInterface.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C0023C1C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??1NDIS_MINIPORT_CREATION_CONFIG@@QEAA@XZ @ 0x1C003E39C (--1NDIS_MINIPORT_CREATION_CONFIG@@QEAA@XZ.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C003EE34 (WPP_RECORDER_SF__guid_.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C003F500 (NdisConvertNtStatusToNdisStatus.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_q_guid_d @ 0x1C007F344 (WPP_RECORDER_SF_q_guid_d.c)
 *     WPP_RECORDER_SF_q_guid_ @ 0x1C009F308 (WPP_RECORDER_SF_q_guid_.c)
 *     ndisIfReadInterfaceAddDeviceParameters @ 0x1C01070B8 (ndisIfReadInterfaceAddDeviceParameters.c)
 *     ndisLWMOpenConfigurationKey @ 0x1C01186B0 (ndisLWMOpenConfigurationKey.c)
 *     ndisAddDevice @ 0x1C012E628 (ndisAddDevice.c)
 */

__int64 __fastcall ndisLWMCreateMiniport(
        struct _NDIS_M_DRIVER_BLOCK *a1,
        const struct _GUID *a2,
        struct _NDIS_MINIPORT_BLOCK **a3,
        int a4)
{
  struct _GUID v7; // xmm0
  int InterfaceAddDeviceParameters; // eax
  int v9; // edx
  unsigned int v10; // edi
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // edx
  HANDLE Handle[2]; // [rsp+40h] [rbp-69h] BYREF
  struct _GUID v17; // [rsp+50h] [rbp-59h] BYREF
  __int64 v18; // [rsp+60h] [rbp-49h]
  void *v19[2]; // [rsp+68h] [rbp-41h] BYREF
  char v20; // [rsp+78h] [rbp-31h]
  __int16 v21; // [rsp+79h] [rbp-30h]
  char v22; // [rsp+7Bh] [rbp-2Eh]
  int v23; // [rsp+7Ch] [rbp-2Dh]
  __int128 v24; // [rsp+80h] [rbp-29h]
  __int64 v25; // [rsp+90h] [rbp-19h]
  __int16 v26; // [rsp+98h] [rbp-11h]
  char v27; // [rsp+9Ah] [rbp-Fh]
  int v28; // [rsp+9Bh] [rbp-Eh]
  char v29; // [rsp+9Fh] [rbp-Ah]
  __int64 v30; // [rsp+A0h] [rbp-9h]
  __int16 v31; // [rsp+A8h] [rbp-1h]
  int v32; // [rsp+AAh] [rbp+1h]
  __int16 v33; // [rsp+AEh] [rbp+5h]
  struct _NDIS_M_DRIVER_BLOCK *v34; // [rsp+B0h] [rbp+7h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q_guid_(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)a2, (_DWORD)a3, a4);
  *a3 = 0LL;
  v18 = 0LL;
  v24 = 0LL;
  v7 = *a2;
  v19[0] = 0LL;
  v19[1] = 0LL;
  v17 = v7;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v25 = 0LL;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0LL;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0LL;
  InterfaceAddDeviceParameters = ndisIfReadInterfaceAddDeviceParameters(&v17.Data1, 0LL);
  v10 = NdisConvertNtStatusToNdisStatus(InterfaceAddDeviceParameters);
  if ( v10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        1,
        138,
        (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
        (__int64)a2);
    }
  }
  else if ( HIBYTE(v31) )
  {
    Handle[0] = 0LL;
    v12 = ndisLWMOpenConfigurationKey((__int64)a2, (KRegKey *)Handle);
    v10 = NdisConvertNtStatusToNdisStatus(v12);
    if ( v10 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF__guid_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v13,
          1,
          140,
          (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
          (__int64)a2);
      }
      if ( Handle[0] )
        ZwClose(Handle[0]);
    }
    else
    {
      v34 = a1;
      wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        v19,
        Handle[0]);
      v14 = ndisAddDevice(&v17);
      v10 = NdisConvertNtStatusToNdisStatus(v14);
      if ( v10 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 2;
        WPP_RECORDER_SF__guid_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v15,
          1,
          141,
          (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
          (__int64)a2);
      }
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        1,
        139,
        (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
        (__int64)a2);
    }
    v10 = -1073741811;
  }
  NDIS_MINIPORT_CREATION_CONFIG::~NDIS_MINIPORT_CREATION_CONFIG((NDIS_MINIPORT_CREATION_CONFIG *)&v17);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q_guid_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x8Eu,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)a1,
      (__int64)a2,
      v10);
  return v10;
}
