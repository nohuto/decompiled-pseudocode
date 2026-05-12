/*
 * XREFs of RaidInitializeAdapter @ 0x1C006DD44
 * Callers:
 *     RaDriverAddDevice @ 0x1C001A5F0 (RaDriverAddDevice.c)
 * Callees:
 *     _TlgWrite @ 0x1C000E558 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000E600 (_TlgKeywordOn.c)
 *     RaidDriverGetName @ 0x1C0017EBC (RaidDriverGetName.c)
 *     StorpInitializeAdapterTelemetry @ 0x1C001A0DC (StorpInitializeAdapterTelemetry.c)
 *     RaidQueryAcpiDsdStorageD3Property @ 0x1C001A168 (RaidQueryAcpiDsdStorageD3Property.c)
 *     RaidAllocateDeviceProperty @ 0x1C001A33C (RaidAllocateDeviceProperty.c)
 *     PortGetLinkTimeoutValue @ 0x1C001A3FC (PortGetLinkTimeoutValue.c)
 *     RaGetBusInterface @ 0x1C001A474 (RaGetBusInterface.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     memset @ 0x1C0024DC0 (memset.c)
 *     McTemplateK0qzzqxtqqt @ 0x1C0033A70 (McTemplateK0qzzqxtqqt.c)
 *     PortRegistryWriteDeviceKey @ 0x1C006B9F8 (PortRegistryWriteDeviceKey.c)
 *     PortRegistryReadDeviceKey @ 0x1C006BEC4 (PortRegistryReadDeviceKey.c)
 *     PortGetBusyRetryCountValue @ 0x1C006D7F8 (PortGetBusyRetryCountValue.c)
 *     PortGetBusyPauseTimeValue @ 0x1C006D910 (PortGetBusyPauseTimeValue.c)
 *     PortGetIoLatencyCapValue @ 0x1C006DA28 (PortGetIoLatencyCapValue.c)
 *     PortGetIoTimeoutValue @ 0x1C006DB04 (PortGetIoTimeoutValue.c)
 *     PortReadStorageBusType @ 0x1C006DC24 (PortReadStorageBusType.c)
 *     PortGetRegistrySettings @ 0x1C006E5C0 (PortGetRegistrySettings.c)
 *     PortGetDriverParameters @ 0x1C006E638 (PortGetDriverParameters.c)
 *     RiAllocateMiniportDeviceExtension @ 0x1C006E6B0 (RiAllocateMiniportDeviceExtension.c)
 */

__int64 __fastcall RaidInitializeAdapter(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PDEVICE_OBJECT DeviceObject,
        __int128 *a6,
        unsigned int a7)
{
  __int64 v8; // rsi
  __int128 v9; // xmm0
  int BusInterface; // r8d
  _QWORD **v11; // r9
  _QWORD *i; // rdx
  _QWORD *v13; // rcx
  int v14; // eax
  __int64 result; // rax
  __int64 v16; // rcx
  int *v17; // r12
  struct _UNICODE_STRING *v18; // rcx
  __int64 *v19; // r15
  struct _UNICODE_STRING *v20; // rcx
  struct _UNICODE_STRING *v21; // rcx
  struct _UNICODE_STRING *v22; // rcx
  int v23; // eax
  unsigned int v24; // ecx
  char v25; // al
  char v26; // al
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // eax
  char v30; // al
  __int64 v31; // rdx
  __int64 v32; // r8
  int v33; // esi
  const struct _TlgProvider_t *v34; // rcx
  const struct _TlgProvider_t *v35; // rcx
  const GUID *v36; // r8
  const GUID *v37; // r9
  char v38; // al
  char v39; // al
  char v40; // al
  char v41; // al
  char v42; // al
  char v43; // al
  int v44; // eax
  int v45; // [rsp+50h] [rbp-B0h]
  int v46; // [rsp+60h] [rbp-A0h] BYREF
  UUID *p_Uuid; // [rsp+68h] [rbp-98h] BYREF
  char v48; // [rsp+70h] [rbp-90h] BYREF
  char v49; // [rsp+71h] [rbp-8Fh] BYREF
  int v50; // [rsp+74h] [rbp-8Ch] BYREF
  struct _UNICODE_STRING v51; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v52; // [rsp+88h] [rbp-78h] BYREF
  int v53; // [rsp+8Ch] [rbp-74h] BYREF
  int v54; // [rsp+90h] [rbp-70h] BYREF
  int v55; // [rsp+94h] [rbp-6Ch] BYREF
  int v56; // [rsp+98h] [rbp-68h] BYREF
  int v57; // [rsp+9Ch] [rbp-64h] BYREF
  int v58; // [rsp+A0h] [rbp-60h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  int v60; // [rsp+B8h] [rbp-48h] BYREF
  int v61; // [rsp+BCh] [rbp-44h] BYREF
  __int64 v62; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v63; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v64; // [rsp+D0h] [rbp-30h]
  UUID Uuid; // [rsp+D8h] [rbp-28h] BYREF
  EVENT_DATA_DESCRIPTOR pData[21]; // [rsp+F0h] [rbp-10h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v51.Length = 0LL;
  v8 = a1 + 296;
  v51.Buffer = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  *(_QWORD *)(a1 + 16) = a3;
  v50 = -1;
  v62 = a3;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 32) = DeviceObject;
  *(_QWORD *)(a1 + 24) = a4;
  v9 = *a6;
  *(_QWORD *)&Uuid.Data1 = 0LL;
  *(_QWORD *)Uuid.Data4 = 0LL;
  *(_OWORD *)(a1 + 40) = v9;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  *(_DWORD *)(a1 + 2072) = a7;
  *(_DWORD *)(a1 + 2156) = 1;
  *(_BYTE *)(a1 + 4973) = 1;
  *(_DWORD *)(a1 + 5392) = 0;
  *(_QWORD *)(a1 + 296) = a1;
  BusInterface = RaGetBusInterface(DeviceObject);
  if ( BusInterface == -1 )
    BusInterface = 0;
  if ( !BusInterface )
    *(_BYTE *)(a1 + 104) |= 8u;
  v11 = (_QWORD **)(*(_QWORD *)(a1 + 16) + 96LL);
  for ( i = *v11; i != v11; i = (_QWORD *)*i )
  {
    v13 = i - 26;
    if ( (*(_DWORD *)(i - 3) & 0x800) != 0 )
    {
      *((_DWORD *)v13 + 1) = BusInterface;
      goto LABEL_9;
    }
    if ( *((_DWORD *)v13 + 1) == BusInterface )
      goto LABEL_9;
  }
  v13 = 0LL;
LABEL_9:
  *(_QWORD *)(a1 + 528) = v13;
  if ( !v13 )
    return 3221225486LL;
  v14 = *((_DWORD *)v13 + 1);
  *(_BYTE *)(a1 + 110) |= 2u;
  *(_DWORD *)(a1 + 312) = v14;
  result = RiAllocateMiniportDeviceExtension(v8);
  if ( (int)result >= 0 )
  {
    PortGetDriverParameters(*(_QWORD *)(a1 + 16) + 40LL, a7, a1 + 2080);
    v16 = *(_QWORD *)(a1 + 16) + 40LL;
    *(_DWORD *)(a1 + 2152) = 30;
    PortGetLinkTimeoutValue(v16, a7);
    v17 = (int *)(a1 + 4204);
    v18 = (struct _UNICODE_STRING *)(*(_QWORD *)(a1 + 16) + 40LL);
    *(_DWORD *)(a1 + 4204) = 0;
    PortGetIoTimeoutValue(v18, (_DWORD *)(a1 + 4204));
    v19 = (__int64 *)(a1 + 4984);
    v20 = (struct _UNICODE_STRING *)(*(_QWORD *)(a1 + 16) + 40LL);
    *(_QWORD *)(a1 + 4984) = 0LL;
    PortGetIoLatencyCapValue(v20, (_DWORD *)(a1 + 4984));
    if ( *(_QWORD *)(a1 + 4984) )
      *v19 = 10000LL * *(_QWORD *)(a1 + 4984);
    v21 = (struct _UNICODE_STRING *)(*(_QWORD *)(a1 + 16) + 40LL);
    *(_DWORD *)(a1 + 5672) = 0;
    PortGetBusyRetryCountValue(v21, (_DWORD *)(a1 + 5672));
    v22 = (struct _UNICODE_STRING *)(*(_QWORD *)(a1 + 16) + 40LL);
    *(_DWORD *)(a1 + 5676) = 0;
    PortGetBusyPauseTimeValue(v22, (_DWORD *)(a1 + 5676));
    RtlInitUnicodeString(&DestinationString, L"StorPort");
    RtlInitUnicodeString(&v51, L"TotalSenseDataBytes");
    p_Uuid = (UUID *)&v52;
    v46 = 4;
    v23 = PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v51, 4, (__int64)&p_Uuid, &v46);
    v24 = v52;
    if ( v23 < 0 )
      v24 = 256;
    v52 = v24;
    if ( v24 <= 0x12 )
    {
      *(_BYTE *)(a1 + 4972) = 18;
    }
    else
    {
      v25 = v24;
      if ( v24 >= 0xFF )
        v25 = -1;
      *(_BYTE *)(a1 + 4972) = v25;
    }
    RtlInitUnicodeString(&v51, L"EnableIdlePowerManagement");
    *(_BYTE *)(a1 + 104) &= ~0x20u;
    p_Uuid = (UUID *)&v53;
    v46 = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v51, 4, (__int64)&p_Uuid, &v46) >= 0 )
    {
      v38 = *(_BYTE *)(a1 + 104);
      if ( v53 )
        v39 = v38 | 0x20;
      else
        v39 = v38 & 0xDF;
      *(_BYTE *)(a1 + 104) = v39;
    }
    RtlInitUnicodeString(&v51, L"DisableRuntimePowerManagement");
    *(_BYTE *)(a1 + 108) &= ~0x10u;
    p_Uuid = (UUID *)&v54;
    v46 = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v51, 4, (__int64)&p_Uuid, &v46) >= 0 )
    {
      v40 = *(_BYTE *)(a1 + 108);
      if ( v54 )
        v41 = v40 | 0x10;
      else
        v41 = v40 & 0xEF;
      *(_BYTE *)(a1 + 108) = v41;
    }
    RtlInitUnicodeString(&v51, L"DisableD3Cold");
    v26 = *(_BYTE *)(a1 + 108) & 0xF3 | 4;
    v46 = 4;
    *(_BYTE *)(a1 + 108) = v26;
    p_Uuid = (UUID *)&v55;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v51, 4, (__int64)&p_Uuid, &v46) >= 0 )
    {
      v42 = *(_BYTE *)(a1 + 108);
      if ( v55 )
        v43 = v42 & 0xFB;
      else
        v43 = v42 | 4;
      *(_BYTE *)(a1 + 108) = v43;
    }
    RtlInitUnicodeString(&v51, L"IdleTimeoutInMS");
    *(_DWORD *)(a1 + 5040) = 60000;
    v46 = 4;
    p_Uuid = (UUID *)&v56;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v51, 4, (__int64)&p_Uuid, &v46) >= 0 )
    {
      v44 = v56;
      *(_BYTE *)(a1 + 108) |= 0x40u;
      *(_DWORD *)(a1 + 5040) = v44;
    }
    RtlInitUnicodeString(&v51, L"UseDMAv3");
    *(_BYTE *)(a1 + 109) &= ~2u;
    p_Uuid = (UUID *)&v57;
    v46 = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v51, 4, (__int64)&p_Uuid, &v46) >= 0 )
      *(_BYTE *)(a1 + 109) = (v57 != 0 ? 2 : 0) | *(_BYTE *)(a1 + 109) & 0xFD;
    RtlInitUnicodeString(&v51, L"PowerSrbTimeout");
    *(_DWORD *)(a1 + 5624) = *v17;
    p_Uuid = (UUID *)&v58;
    v46 = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v51, 4, (__int64)&p_Uuid, &v46) >= 0
      && v58 )
    {
      *(_DWORD *)(a1 + 5624) = v58;
    }
    if ( *(_DWORD *)(a1 + 5624) > 0x6Eu )
      *(_DWORD *)(a1 + 5624) = 110;
    *(_BYTE *)(a1 + 108) &= ~0x80u;
    *(_BYTE *)(a1 + 109) |= 0x10u;
    *(_QWORD *)(a1 + 5032) = 0LL;
    memset(pData, 0, 0x148uLL);
    v27 = *(_QWORD *)(a1 + 16) + 40LL;
    LODWORD(pData[0].Ptr) = 255;
    pData[1] = (EVENT_DATA_DESCRIPTOR)_mm_load_si128((const __m128i *)&_xmm);
    pData[2].Reserved = 0;
    LODWORD(pData[2].Ptr) = -1;
    PortGetRegistrySettings(v27, a7, pData);
    *(_QWORD *)(a1 + 4368) = *(_QWORD *)&pData[1].Size;
    *(_QWORD *)(a1 + 4376) = pData[1].Ptr;
    *(_DWORD *)(a1 + 4352) = pData[2].Ptr;
    *(_DWORD *)(a1 + 4360) = pData[2].Reserved;
    *(_QWORD *)(a1 + 4400) = 0xFFFFFFFFLL;
    *(_QWORD *)(a1 + 4384) = 0LL;
    *(_QWORD *)(a1 + 4392) = 0LL;
    *(_DWORD *)(a1 + 4356) = 6;
    if ( PortReadStorageBusType((struct _UNICODE_STRING *)(*(_QWORD *)(a1 + 16) + 40LL)) )
      *(_DWORD *)(a1 + 4356) = v46;
    RaidDriverGetName(v62, (__int64)&v63);
    *(_QWORD *)(a1 + 4800) = v64;
    RaidAllocateDeviceProperty(DeviceObject, v28, (_QWORD *)(a1 + 4808));
    *(_DWORD *)(a1 + 4992) = -1;
    v29 = RaidLogListSize;
    *(_DWORD *)(a1 + 4996) = RaidLogListSize;
    *(_QWORD *)(a1 + 5000) = (a1 + 5760) & -(__int64)(v29 != 0);
    if ( StorageD3AllowedOnCurrentPlatform )
      StorageD3InModernStandbyEnabled = 1;
    v30 = RaidQueryAcpiDsdStorageD3Property(a1, &v50);
    v33 = v50;
    if ( v30 )
      StorageD3InModernStandbyEnabled = v50 != 0;
    if ( StorageD3RegistryState == 1 )
    {
      StorageD3InModernStandbyEnabled = 1;
    }
    else if ( !StorageD3RegistryState )
    {
      StorageD3InModernStandbyEnabled = 0;
    }
    if ( (byte_1C0062741 & 1) != 0 )
      McTemplateK0qzzqxtqqt(
        (unsigned __int8)StorageD3AllowedOnCurrentPlatform,
        v31,
        v32,
        *(_DWORD *)(a1 + 56),
        *(char **)(a1 + 4808),
        *(char **)(a1 + 4800),
        *(_DWORD *)(a1 + 312),
        *(_QWORD *)(a1 + 104),
        StorageD3AllowedOnCurrentPlatform,
        v50,
        v45,
        StorageD3InModernStandbyEnabled);
    *(_QWORD *)&Uuid.Data1 = 0LL;
    *(_QWORD *)Uuid.Data4 = 0LL;
    RtlInitUnicodeString(&v51, L"AdapterGuid");
    v46 = 16;
    p_Uuid = &Uuid;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v51, 3, (__int64)&p_Uuid, &v46) < 0
      && ExUuidCreate(&Uuid) >= 0 )
    {
      PortRegistryWriteDeviceKey(DeviceObject, &DestinationString, (__int64)&v51, 3u, (void *)p_Uuid, 0x10u);
    }
    *(UUID *)(a1 + 5128) = Uuid;
    StorpInitializeAdapterTelemetry(a1);
    if ( (unsigned int)dword_1C0062058 > 5 )
    {
      if ( TlgKeywordOn(v34, 0x400000000000uLL) )
      {
        v50 = *(_DWORD *)(a1 + 2152);
        v46 = *v17;
        v63 = *v19;
        v60 = *(unsigned __int8 *)(a1 + 4972);
        v61 = *(_DWORD *)(a1 + 5040);
        v48 = StorageD3AllowedOnCurrentPlatform;
        LODWORD(p_Uuid) = StorageD3RegistryState;
        v49 = StorageD3InModernStandbyEnabled;
        pData[3].Ptr = (unsigned __int64)&v50;
        pData[4].Ptr = (unsigned __int64)&v46;
        pData[5].Ptr = (unsigned __int64)&v63;
        pData[6].Ptr = (unsigned __int64)&v60;
        pData[7].Ptr = (unsigned __int64)&v61;
        pData[8].Ptr = (unsigned __int64)&v48;
        pData[9].Ptr = (unsigned __int64)&v62;
        pData[10].Ptr = (unsigned __int64)&p_Uuid;
        pData[11].Ptr = (unsigned __int64)&v49;
        LODWORD(v62) = v33;
        pData[2].Ptr = (unsigned __int64)v37;
        *(_QWORD *)&pData[2].Size = 16LL;
        *(_QWORD *)&pData[3].Size = 4LL;
        *(_QWORD *)&pData[4].Size = 4LL;
        *(_QWORD *)&pData[5].Size = 8LL;
        *(_QWORD *)&pData[6].Size = 4LL;
        *(_QWORD *)&pData[7].Size = 4LL;
        *(_QWORD *)&pData[8].Size = 1LL;
        *(_QWORD *)&pData[9].Size = 4LL;
        *(_QWORD *)&pData[10].Size = 4LL;
        *(_QWORD *)&pData[11].Size = 1LL;
        TlgWrite(v35, &unk_1C0056A84, v36, v37, 0xCu, pData);
      }
    }
    KeInitializeDpc(
      (PRKDPC)(*(_QWORD *)(a1 + 8) + 200LL),
      (PKDEFERRED_ROUTINE)RaidpAdapterDpcRoutine,
      *(PVOID *)(a1 + 8));
    return 0LL;
  }
  return result;
}
