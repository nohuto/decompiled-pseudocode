/*
 * XREFs of LogDriverInfoStream @ 0x1C00627EC
 * Callers:
 *     ?PnpEventStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007E370 (-PnpEventStarted@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A3B0 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1C0043680 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00436AC (_TlgWrite.c)
 *     ??1FxAutoString@@QEAA@XZ @ 0x1C0047D6C (--1FxAutoString@@QEAA@XZ.c)
 *     _TlgCreateSz @ 0x1C004D220 (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x1C004D258 (_TlgCreateWsz.c)
 *     FxGetDevicePropertyString @ 0x1C00620A4 (FxGetDevicePropertyString.c)
 *     GetDriverInfo @ 0x1C0062258 (GetDriverInfo.c)
 *     GetFirstHardwareId @ 0x1C0062494 (GetFirstHardwareId.c)
 *     RegistryWriteCurrentTime @ 0x1C0063058 (RegistryWriteCurrentTime.c)
 */

void __fastcall LogDriverInfoStream(_FX_DRIVER_GLOBALS *DriverGlobals, FxDevice *Fdo)
{
  wchar_t *Buffer; // rdi
  wchar_t *v3; // rsi
  wchar_t *v4; // r14
  const _GUID *v7; // r8
  const _GUID *v8; // r9
  char v9; // [rsp+30h] [rbp-D0h] BYREF
  bool v10; // [rsp+31h] [rbp-CFh] BYREF
  bool v11; // [rsp+32h] [rbp-CEh] BYREF
  bool v12; // [rsp+33h] [rbp-CDh] BYREF
  bool v13; // [rsp+34h] [rbp-CCh] BYREF
  bool v14; // [rsp+35h] [rbp-CBh] BYREF
  bool v15; // [rsp+36h] [rbp-CAh] BYREF
  bool v16; // [rsp+37h] [rbp-C9h] BYREF
  bool v17; // [rsp+38h] [rbp-C8h] BYREF
  bool v18; // [rsp+39h] [rbp-C7h] BYREF
  bool v19; // [rsp+3Ah] [rbp-C6h] BYREF
  bool v20; // [rsp+3Bh] [rbp-C5h] BYREF
  bool v21; // [rsp+3Ch] [rbp-C4h] BYREF
  bool v22; // [rsp+3Dh] [rbp-C3h] BYREF
  bool v23; // [rsp+3Eh] [rbp-C2h] BYREF
  char v24; // [rsp+3Fh] [rbp-C1h] BYREF
  bool v25; // [rsp+40h] [rbp-C0h] BYREF
  bool v26; // [rsp+41h] [rbp-BFh] BYREF
  bool v27; // [rsp+42h] [rbp-BEh] BYREF
  bool v28; // [rsp+43h] [rbp-BDh] BYREF
  bool v29; // [rsp+44h] [rbp-BCh] BYREF
  bool v30; // [rsp+45h] [rbp-BBh] BYREF
  bool v31; // [rsp+46h] [rbp-BAh] BYREF
  char v32; // [rsp+47h] [rbp-B9h] BYREF
  FxTelemetryDriverInfo driverInfo; // [rsp+48h] [rbp-B8h] BYREF
  FxAutoString hardwareIDs; // [rsp+50h] [rbp-B0h] BYREF
  FxAutoString manufacturer; // [rsp+60h] [rbp-A0h] BYREF
  FxAutoString busEnum; // [rsp+70h] [rbp-90h] BYREF
  FxAutoString setupClass; // [rsp+80h] [rbp-80h] BYREF
  _EVENT_DATA_DESCRIPTOR _TlgData[32]; // [rsp+90h] [rbp-70h] BYREF

  Buffer = 0LL;
  *(_QWORD *)&hardwareIDs.m_UnicodeString.Length = 0LL;
  v3 = 0LL;
  hardwareIDs.m_UnicodeString.Buffer = 0LL;
  v4 = 0LL;
  *(_QWORD *)&setupClass.m_UnicodeString.Length = 0LL;
  setupClass.m_UnicodeString.Buffer = 0LL;
  driverInfo.Dword = 0;
  *(_QWORD *)&busEnum.m_UnicodeString.Length = 0LL;
  busEnum.m_UnicodeString.Buffer = 0LL;
  *(_QWORD *)&manufacturer.m_UnicodeString.Length = 0LL;
  manufacturer.m_UnicodeString.Buffer = 0LL;
  GetDriverInfo(DriverGlobals, Fdo, &driverInfo);
  if ( Fdo )
  {
    FxGetDevicePropertyString(Fdo, 5, &setupClass.m_UnicodeString);
    FxGetDevicePropertyString(Fdo, 15, &busEnum.m_UnicodeString);
    FxGetDevicePropertyString(Fdo, 1, &hardwareIDs.m_UnicodeString);
    GetFirstHardwareId(&hardwareIDs.m_UnicodeString);
    FxGetDevicePropertyString(Fdo, 8, &manufacturer.m_UnicodeString);
    Buffer = setupClass.m_UnicodeString.Buffer;
    v3 = busEnum.m_UnicodeString.Buffer;
    v4 = manufacturer.m_UnicodeString.Buffer;
  }
  if ( Tlgg_TelemetryProviderProv.LevelPlus1 > 5 && TlgKeywordOn(&Tlgg_TelemetryProviderProv, 0x200000000000uLL) )
  {
    _TlgData[2].Ptr = (unsigned __int64)DriverGlobals->TelemetryContext;
    *(_QWORD *)&_TlgData[2].Size = 16LL;
    TlgCreateSz(&_TlgData[3], DriverGlobals->Public.DriverName);
    *(_QWORD *)&_TlgData[4].Size = 1LL;
    v9 = *(_BYTE *)&driverInfo.bitmap & 1;
    _TlgData[4].Ptr = (unsigned __int64)&v9;
    *(_QWORD *)&_TlgData[5].Size = 1LL;
    v10 = (*(_BYTE *)&driverInfo.bitmap & 2) != 0;
    _TlgData[5].Ptr = (unsigned __int64)&v10;
    *(_QWORD *)&_TlgData[6].Size = 1LL;
    v11 = (*(_BYTE *)&driverInfo.bitmap & 4) != 0;
    _TlgData[6].Ptr = (unsigned __int64)&v11;
    *(_QWORD *)&_TlgData[7].Size = 1LL;
    v12 = (*(_BYTE *)&driverInfo.bitmap & 8) != 0;
    _TlgData[7].Ptr = (unsigned __int64)&v12;
    *(_QWORD *)&_TlgData[8].Size = 1LL;
    v13 = (*(_BYTE *)&driverInfo.bitmap & 0x10) != 0;
    _TlgData[8].Ptr = (unsigned __int64)&v13;
    *(_QWORD *)&_TlgData[9].Size = 1LL;
    v14 = (*(_BYTE *)&driverInfo.bitmap & 0x20) != 0;
    _TlgData[9].Ptr = (unsigned __int64)&v14;
    *(_QWORD *)&_TlgData[10].Size = 1LL;
    v15 = (*(_BYTE *)&driverInfo.bitmap & 0x40) != 0;
    _TlgData[10].Ptr = (unsigned __int64)&v15;
    *(_QWORD *)&_TlgData[11].Size = 1LL;
    v16 = (*(_BYTE *)&driverInfo.bitmap & 0x80) != 0;
    _TlgData[11].Ptr = (unsigned __int64)&v16;
    *(_QWORD *)&_TlgData[12].Size = 1LL;
    v17 = (*(_WORD *)&driverInfo.bitmap & 0x200) != 0;
    _TlgData[12].Ptr = (unsigned __int64)&v17;
    *(_QWORD *)&_TlgData[13].Size = 1LL;
    v18 = (*(_WORD *)&driverInfo.bitmap & 0x400) != 0;
    _TlgData[13].Ptr = (unsigned __int64)&v18;
    v19 = (*(_WORD *)&driverInfo.bitmap & 0x800) != 0;
    _TlgData[14].Ptr = (unsigned __int64)&v19;
    *(_QWORD *)&_TlgData[14].Size = 1LL;
    v20 = (*(_WORD *)&driverInfo.bitmap & 0x1000) != 0;
    _TlgData[15].Ptr = (unsigned __int64)&v20;
    *(_QWORD *)&_TlgData[15].Size = 1LL;
    v21 = (*(_WORD *)&driverInfo.bitmap & 0x2000) != 0;
    _TlgData[16].Ptr = (unsigned __int64)&v21;
    *(_QWORD *)&_TlgData[16].Size = 1LL;
    v22 = (*(_WORD *)&driverInfo.bitmap & 0x4000) != 0;
    _TlgData[17].Ptr = (unsigned __int64)&v22;
    *(_QWORD *)&_TlgData[17].Size = 1LL;
    v23 = (*(_WORD *)&driverInfo.bitmap & 0x8000) != 0;
    _TlgData[18].Ptr = (unsigned __int64)&v23;
    *(_QWORD *)&_TlgData[18].Size = 1LL;
    v24 = BYTE2(driverInfo.Dword) & 1;
    _TlgData[19].Ptr = (unsigned __int64)&v24;
    *(_QWORD *)&_TlgData[19].Size = 1LL;
    v25 = (driverInfo.Dword & 0x20000) != 0;
    _TlgData[20].Ptr = (unsigned __int64)&v25;
    *(_QWORD *)&_TlgData[20].Size = 1LL;
    v26 = (driverInfo.Dword & 0x40000) != 0;
    _TlgData[21].Ptr = (unsigned __int64)&v26;
    *(_QWORD *)&_TlgData[21].Size = 1LL;
    v27 = (driverInfo.Dword & 0x80000) != 0;
    _TlgData[22].Ptr = (unsigned __int64)&v27;
    *(_QWORD *)&_TlgData[22].Size = 1LL;
    v28 = (driverInfo.Dword & 0x100000) != 0;
    _TlgData[23].Ptr = (unsigned __int64)&v28;
    *(_QWORD *)&_TlgData[23].Size = 1LL;
    v29 = (driverInfo.Dword & 0x200000) != 0;
    _TlgData[24].Ptr = (unsigned __int64)&v29;
    *(_QWORD *)&_TlgData[24].Size = 1LL;
    v30 = (driverInfo.Dword & 0x400000) != 0;
    _TlgData[25].Ptr = (unsigned __int64)&v30;
    *(_QWORD *)&_TlgData[25].Size = 1LL;
    v31 = (driverInfo.Dword & 0x800000) != 0;
    v32 = *((_BYTE *)&driverInfo.bitmap + 1) & 1;
    _TlgData[26].Ptr = (unsigned __int64)&v31;
    *(_QWORD *)&_TlgData[26].Size = 1LL;
    _TlgData[27].Ptr = (unsigned __int64)&v32;
    *(_QWORD *)&_TlgData[27].Size = 1LL;
    TlgCreateWsz(&_TlgData[28], Buffer);
    TlgCreateWsz(&_TlgData[29], v3);
    TlgCreateWsz(&_TlgData[30], hardwareIDs.m_UnicodeString.Buffer);
    TlgCreateWsz(&_TlgData[31], v4);
    TlgWrite(&Tlgg_TelemetryProviderProv, (char *)&TlgEvent_2._TlgChannel, v7, v8, 0x20u, _TlgData);
  }
  RegistryWriteCurrentTime(DriverGlobals);
  FxAutoString::~FxAutoString(&manufacturer);
  FxAutoString::~FxAutoString(&busEnum);
  FxAutoString::~FxAutoString(&setupClass);
  FxAutoString::~FxAutoString(&hardwareIDs);
}
