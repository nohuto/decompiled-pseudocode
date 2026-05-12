/*
 * XREFs of RaidInitializeAdapter @ 0x1C006C958
 * Callers:
 *     RaDriverAddDevice @ 0x1C001C030 (RaDriverAddDevice.c)
 * Callees:
 *     _TlgWrite @ 0x1C0011BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0011C70 (_TlgKeywordOn.c)
 *     RaidDriverGetName @ 0x1C001523C (RaidDriverGetName.c)
 *     RaGetBusInterface @ 0x1C001C3B8 (RaGetBusInterface.c)
 *     StorpInitializeAdapterTelemetry @ 0x1C001C4C0 (StorpInitializeAdapterTelemetry.c)
 *     RaidAllocateDeviceProperty @ 0x1C001C54C (RaidAllocateDeviceProperty.c)
 *     PortGetLinkTimeoutValue @ 0x1C001C6C0 (PortGetLinkTimeoutValue.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 *     PortRegistryReadDeviceKey @ 0x1C006B868 (PortRegistryReadDeviceKey.c)
 *     PortRegistryWriteDeviceKey @ 0x1C006BBB4 (PortRegistryWriteDeviceKey.c)
 *     RiAllocateMiniportDeviceExtension @ 0x1C006C608 (RiAllocateMiniportDeviceExtension.c)
 *     PortGetIoTimeoutValue @ 0x1C006C690 (PortGetIoTimeoutValue.c)
 *     PortGetIoLatencyCapValue @ 0x1C006C798 (PortGetIoLatencyCapValue.c)
 *     PortGetBusyPauseTimeValue @ 0x1C006C858 (PortGetBusyPauseTimeValue.c)
 *     PortReadStorageBusType @ 0x1C006D178 (PortReadStorageBusType.c)
 *     PortGetDriverParameters @ 0x1C006D28C (PortGetDriverParameters.c)
 *     PortGetRegistrySettings @ 0x1C006D304 (PortGetRegistrySettings.c)
 *     PortGetBusyRetryCountValue @ 0x1C006E4C4 (PortGetBusyRetryCountValue.c)
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
  __int64 v7; // rsi
  int v9; // r13d
  __int128 v10; // xmm0
  int BusInterface; // r8d
  _QWORD **v12; // r9
  _QWORD *i; // rdx
  _QWORD *v14; // rcx
  int v15; // eax
  __int64 result; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  _DWORD *v19; // r14
  __int64 v20; // rcx
  __int64 *v21; // rsi
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // ecx
  char v25; // al
  char v26; // al
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // eax
  const struct _TlgProvider_t *v30; // rcx
  const struct _TlgProvider_t *v31; // rcx
  const GUID *v32; // r8
  const GUID *v33; // r9
  char v34; // al
  char v35; // al
  char v36; // al
  char v37; // al
  char v38; // al
  char v39; // al
  int v40; // eax
  int v41; // [rsp+30h] [rbp-D0h] BYREF
  UUID *p_Uuid; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING v43; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v44; // [rsp+50h] [rbp-B0h] BYREF
  int v45; // [rsp+54h] [rbp-ACh] BYREF
  int v46; // [rsp+58h] [rbp-A8h] BYREF
  int v47; // [rsp+5Ch] [rbp-A4h] BYREF
  int v48; // [rsp+60h] [rbp-A0h] BYREF
  int v49; // [rsp+64h] [rbp-9Ch] BYREF
  int v50; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  int v52; // [rsp+80h] [rbp-80h] BYREF
  ULONG Seed; // [rsp+84h] [rbp-7Ch] BYREF
  int v54; // [rsp+88h] [rbp-78h] BYREF
  int v55; // [rsp+8Ch] [rbp-74h] BYREF
  int v56; // [rsp+90h] [rbp-70h] BYREF
  __int64 v57; // [rsp+98h] [rbp-68h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v59[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v60; // [rsp+B0h] [rbp-50h]
  _OWORD v61[21]; // [rsp+C0h] [rbp-40h] BYREF
  UUID Uuid; // [rsp+210h] [rbp+110h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+220h] [rbp+120h] BYREF
  const GUID *v64; // [rsp+240h] [rbp+140h]
  __int64 v65; // [rsp+248h] [rbp+148h]
  int *v66; // [rsp+250h] [rbp+150h]
  __int64 v67; // [rsp+258h] [rbp+158h]
  int *v68; // [rsp+260h] [rbp+160h]
  __int64 v69; // [rsp+268h] [rbp+168h]
  __int64 *v70; // [rsp+270h] [rbp+170h]
  __int64 v71; // [rsp+278h] [rbp+178h]
  int *v72; // [rsp+280h] [rbp+180h]
  __int64 v73; // [rsp+288h] [rbp+188h]
  __int64 *v74; // [rsp+290h] [rbp+190h]
  __int64 v75; // [rsp+298h] [rbp+198h]

  v7 = a1 + 312;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 32) = DeviceObject;
  v9 = a2;
  *(_QWORD *)(a1 + 24) = a4;
  v57 = a3;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v10 = *a6;
  *(_DWORD *)(a1 + 2136) = a7;
  *(_DWORD *)(a1 + 2220) = 1;
  *(_OWORD *)(a1 + 40) = v10;
  *(_BYTE *)(a1 + 5053) = 1;
  *(_DWORD *)(a1 + 5528) = 0;
  *(_QWORD *)(a1 + 312) = a1;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  BusInterface = RaGetBusInterface(DeviceObject);
  if ( BusInterface == -1 )
    BusInterface = 0;
  if ( !BusInterface )
    *(_BYTE *)(a1 + 104) |= 8u;
  v12 = (_QWORD **)(*(_QWORD *)(a1 + 16) + 96LL);
  for ( i = *v12; i != v12; i = (_QWORD *)*i )
  {
    v14 = i - 26;
    if ( (*(_DWORD *)(i - 3) & 0x800) != 0 )
    {
      *((_DWORD *)v14 + 1) = BusInterface;
      goto LABEL_9;
    }
    if ( *((_DWORD *)v14 + 1) == BusInterface )
      goto LABEL_9;
  }
  v14 = 0LL;
LABEL_9:
  *(_QWORD *)(a1 + 544) = v14;
  if ( !v14 )
    return 3221225486LL;
  v15 = *((_DWORD *)v14 + 1);
  *(_BYTE *)(a1 + 110) |= 2u;
  *(_DWORD *)(a1 + 328) = v15;
  result = RiAllocateMiniportDeviceExtension(v7);
  if ( (int)result >= 0 )
  {
    PortGetDriverParameters(*(_QWORD *)(a1 + 16) + 40LL, a7, a1 + 2144);
    v17 = *(_QWORD *)(a1 + 16) + 40LL;
    *(_DWORD *)(a1 + 2216) = 30;
    PortGetLinkTimeoutValue(v17, a7);
    v18 = *(_QWORD *)(a1 + 16);
    v19 = (_DWORD *)(a1 + 4268);
    *(_DWORD *)(a1 + 4268) = 0;
    PortGetIoTimeoutValue(v18 + 40, (_DWORD *)(a1 + 4268));
    v20 = *(_QWORD *)(a1 + 16);
    v21 = (__int64 *)(a1 + 5064);
    *(_QWORD *)(a1 + 5064) = 0LL;
    PortGetIoLatencyCapValue(v20 + 40, (_DWORD *)(a1 + 5064));
    if ( *(_QWORD *)(a1 + 5064) )
      *v21 = 10000LL * *(_QWORD *)(a1 + 5064);
    *(_DWORD *)(a1 + 5828) = 0;
    PortGetBusyRetryCountValue(*(_QWORD *)(a1 + 16) + 40LL);
    v22 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 5832) = 0;
    PortGetBusyPauseTimeValue(v22 + 40, (_DWORD *)(a1 + 5832));
    RtlInitUnicodeString(&DestinationString, L"StorPort");
    RtlInitUnicodeString(&v43, L"TotalSenseDataBytes");
    p_Uuid = (UUID *)&v44;
    v41 = 4;
    v23 = PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v43, 4, (__int64)&p_Uuid, &v41);
    v24 = v44;
    if ( v23 < 0 )
      v24 = 256;
    v44 = v24;
    if ( v24 <= 0x12 )
    {
      *(_BYTE *)(a1 + 5052) = 18;
    }
    else
    {
      v25 = v24;
      if ( v24 >= 0xFF )
        v25 = -1;
      *(_BYTE *)(a1 + 5052) = v25;
    }
    RtlInitUnicodeString(&v43, L"EnableIdlePowerManagement");
    *(_BYTE *)(a1 + 104) &= ~0x20u;
    p_Uuid = (UUID *)&v45;
    v41 = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v43, 4, (__int64)&p_Uuid, &v41) >= 0 )
    {
      v34 = *(_BYTE *)(a1 + 104);
      if ( v45 )
        v35 = v34 | 0x20;
      else
        v35 = v34 & 0xDF;
      *(_BYTE *)(a1 + 104) = v35;
    }
    RtlInitUnicodeString(&v43, L"DisableRuntimePowerManagement");
    *(_BYTE *)(a1 + 108) &= ~0x10u;
    p_Uuid = (UUID *)&v46;
    v41 = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v43, 4, (__int64)&p_Uuid, &v41) >= 0 )
    {
      v36 = *(_BYTE *)(a1 + 108);
      if ( v46 )
        v37 = v36 | 0x10;
      else
        v37 = v36 & 0xEF;
      *(_BYTE *)(a1 + 108) = v37;
    }
    RtlInitUnicodeString(&v43, L"DisableD3Cold");
    v26 = *(_BYTE *)(a1 + 108) & 0xF3 | 4;
    v41 = 4;
    *(_BYTE *)(a1 + 108) = v26;
    p_Uuid = (UUID *)&v47;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v43, 4, (__int64)&p_Uuid, &v41) >= 0 )
    {
      v38 = *(_BYTE *)(a1 + 108);
      if ( v47 )
        v39 = v38 & 0xFB;
      else
        v39 = v38 | 4;
      *(_BYTE *)(a1 + 108) = v39;
    }
    RtlInitUnicodeString(&v43, L"IdleTimeoutInMS");
    *(_DWORD *)(a1 + 5168) = 60000;
    v41 = 4;
    p_Uuid = (UUID *)&v48;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v43, 4, (__int64)&p_Uuid, &v41) >= 0 )
    {
      v40 = v48;
      *(_BYTE *)(a1 + 108) |= 0x40u;
      *(_DWORD *)(a1 + 5168) = v40;
    }
    RtlInitUnicodeString(&v43, L"UseDMAv3");
    *(_BYTE *)(a1 + 109) &= ~2u;
    p_Uuid = (UUID *)&v49;
    v41 = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v43, 4, (__int64)&p_Uuid, &v41) >= 0 )
      *(_BYTE *)(a1 + 109) = (v49 != 0 ? 2 : 0) | *(_BYTE *)(a1 + 109) & 0xFD;
    RtlInitUnicodeString(&v43, L"PowerSrbTimeout");
    *(_DWORD *)(a1 + 5760) = *v19;
    p_Uuid = (UUID *)&v50;
    v41 = 4;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v43, 4, (__int64)&p_Uuid, &v41) >= 0
      && v50 )
    {
      *(_DWORD *)(a1 + 5760) = v50;
    }
    if ( *(_DWORD *)(a1 + 5760) > 0x6Eu )
      *(_DWORD *)(a1 + 5760) = 110;
    *(_BYTE *)(a1 + 108) &= ~0x80u;
    *(_BYTE *)(a1 + 109) |= 0x10u;
    *(_QWORD *)(a1 + 5160) = 0LL;
    memset(v61, 0, 0x148uLL);
    v27 = *(_QWORD *)(a1 + 16);
    HIDWORD(v61[2]) = 0;
    LODWORD(v61[0]) = 255;
    LODWORD(v61[2]) = -1;
    v61[1] = _mm_load_si128((const __m128i *)&_xmm);
    PortGetRegistrySettings(v27 + 40, a7, v61);
    *(_QWORD *)(a1 + 4432) = *((_QWORD *)&v61[1] + 1);
    *(_QWORD *)(a1 + 4440) = *(_QWORD *)&v61[1];
    *(_DWORD *)(a1 + 4416) = v61[2];
    *(_DWORD *)(a1 + 4424) = HIDWORD(v61[2]);
    *(_QWORD *)(a1 + 4464) = 0xFFFFFFFFLL;
    *(_QWORD *)(a1 + 4448) = 0LL;
    *(_QWORD *)(a1 + 4456) = 0LL;
    *(_DWORD *)(a1 + 4420) = 6;
    if ( (unsigned __int8)PortReadStorageBusType(*(_QWORD *)(a1 + 16) + 40LL, &v52) )
      *(_DWORD *)(a1 + 4420) = v52;
    RaidDriverGetName(v57, (__int64)v59);
    *(_QWORD *)(a1 + 4864) = v60;
    RaidAllocateDeviceProperty(DeviceObject, v28, (_QWORD *)(a1 + 4872));
    Seed = MEMORY[0xFFFFF78000000320] ^ v9 ^ MEMORY[0xFFFFF78000000324] ^ (unsigned int)KeGetCurrentThread();
    *(_DWORD *)(a1 + 4880) = RtlRandomEx(&Seed);
    *(_DWORD *)(a1 + 5120) = -1;
    v29 = RaidLogListSize;
    *(_DWORD *)(a1 + 5124) = RaidLogListSize;
    *(_QWORD *)(a1 + 5128) = (a1 + 5888) & -(__int64)(v29 != 0);
    *(_QWORD *)&Uuid.Data1 = 0LL;
    *(_QWORD *)Uuid.Data4 = 0LL;
    RtlInitUnicodeString(&v43, L"AdapterGuid");
    p_Uuid = &Uuid;
    v41 = 16;
    if ( (int)PortRegistryReadDeviceKey(DeviceObject, (int)&DestinationString, (int)&v43, 3, (__int64)&p_Uuid, &v41) < 0
      && ExUuidCreate(&Uuid) >= 0 )
    {
      PortRegistryWriteDeviceKey(DeviceObject, (__int64)&DestinationString, (__int64)&v43, 3u, (__int64)p_Uuid, 16);
    }
    *(UUID *)(a1 + 5256) = Uuid;
    StorpInitializeAdapterTelemetry(a1);
    if ( (unsigned int)dword_1C0061058 > 5 )
    {
      if ( TlgKeywordOn(v30, 0x400000000000uLL) )
      {
        v54 = *(_DWORD *)(a1 + 2216);
        v55 = *v19;
        v58 = *v21;
        v56 = *(unsigned __int8 *)(a1 + 5052);
        LODWORD(v57) = *(_DWORD *)(a1 + 5168);
        v66 = &v54;
        v68 = &v55;
        v70 = &v58;
        v72 = &v56;
        v74 = &v57;
        v64 = v33;
        v65 = 16LL;
        v67 = 4LL;
        v69 = 4LL;
        v71 = 8LL;
        v73 = 4LL;
        v75 = 4LL;
        TlgWrite(v31, &unk_1C0056F84, v32, v33, 8u, &pData);
      }
    }
    KeInitializeDpc(
      (PRKDPC)(*(_QWORD *)(a1 + 8) + 200LL),
      (PKDEFERRED_ROUTINE)RaidpAdapterDpcRoutine,
      *(PVOID *)(a1 + 8));
    *(_DWORD *)(a1 + 120) &= ~1u;
    result = 0LL;
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  return result;
}
