/*
 * XREFs of ?MakeActive@CSpatialProperties@@QEAAJPEBG_NPEAUIPropertyStore@@@Z @ 0x1800511D4
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x180052044 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 * Callees:
 *     Create_SpatialAudioDevicePropertyReader @ 0x180008D40 (Create_SpatialAudioDevicePropertyReader.c)
 *     Create_SpatialAudioDeviceStateReader @ 0x18000CBC0 (Create_SpatialAudioDeviceStateReader.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     Create_SpatialAudioDeviceStateWriter @ 0x180050A90 (Create_SpatialAudioDeviceStateWriter.c)
 *     Create_SpatialAudioConfigureDevice @ 0x18005112C (Create_SpatialAudioConfigureDevice.c)
 *     MigrateSpatialProperties @ 0x1800514D4 (MigrateSpatialProperties.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180054D20 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     DoesPlatformSupportSpatialAudio @ 0x1800635D8 (DoesPlatformSupportSpatialAudio.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 */

__int64 __fastcall CSpatialProperties::MakeActive(
        struct IUnknown **this,
        WCHAR *a2,
        char a3,
        struct IPropertyStore *a4)
{
  _QWORD *v8; // r15
  _QWORD *v9; // r14
  const GUID *v10; // r9
  int SpatialAudioConfigureDevice; // ebx
  const GUID *v12; // r9
  const GUID *v13; // r9
  const GUID *v14; // r9
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-58h] BYREF

  if ( !a2 || !a4 )
  {
    SpatialAudioConfigureDevice = -2147024809;
LABEL_16:
    if ( this[5] )
      ATL::AtlComPtrAssign(this + 5, 0LL);
    if ( this[6] )
      ATL::AtlComPtrAssign(this + 6, 0LL);
    return (unsigned int)SpatialAudioConfigureDevice;
  }
  v8 = this + 5;
  if ( this[5] || (v9 = this + 6, this[6]) )
  {
    SpatialAudioConfigureDevice = -2147418113;
    goto LABEL_16;
  }
  if ( !(unsigned __int8)DoesPlatformSupportSpatialAudio() && (unsigned int)hProvider > 4 )
  {
    TlgCreateWsz(&pDesc, a2);
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017BC09, v16, v17, 3u, &pData);
  }
  MigrateSpatialProperties(a4, a2);
  SpatialAudioConfigureDevice = Create_SpatialAudioConfigureDevice(a2, a4, v8, v10);
  if ( SpatialAudioConfigureDevice < 0 )
    goto LABEL_16;
  SpatialAudioConfigureDevice = Create_SpatialAudioDevicePropertyReader((__int64)a2, (__int64)a4, v9, v12);
  if ( SpatialAudioConfigureDevice < 0 )
    goto LABEL_16;
  SpatialAudioConfigureDevice = Create_SpatialAudioDeviceStateReader(a2, a4, this + 7, v13);
  if ( SpatialAudioConfigureDevice < 0 )
    goto LABEL_16;
  SpatialAudioConfigureDevice = Create_SpatialAudioDeviceStateWriter(a2, a4, this + 8, v14);
  if ( SpatialAudioConfigureDevice < 0 )
    goto LABEL_16;
  *((_BYTE *)this + 74) = a3;
  if ( !*v8 || !*v9 )
    SpatialAudioConfigureDevice = -2147418113;
  if ( SpatialAudioConfigureDevice < 0 )
    goto LABEL_16;
  return (unsigned int)SpatialAudioConfigureDevice;
}
