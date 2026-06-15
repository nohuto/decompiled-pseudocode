/*
 * XREFs of ?MakeActive@CSpatialProperties@@QEAAJPEBG_NPEAUIPropertyStore@@@Z @ 0x180052FB0
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x18004B7E0 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800506B8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     Create_SpatialAudioConfigureDevice @ 0x1800530C8 (Create_SpatialAudioConfigureDevice.c)
 *     Create_SpatialAudioDeviceStateWriter @ 0x180053598 (Create_SpatialAudioDeviceStateWriter.c)
 *     Create_SpatialAudioDeviceStateReader @ 0x1800539CC (Create_SpatialAudioDeviceStateReader.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x180053D14 (Create_SpatialAudioDevicePropertyReader.c)
 *     MigrateSpatialProperties @ 0x180053E64 (MigrateSpatialProperties.c)
 *     DoesPlatformSupportSpatialAudio @ 0x180053F64 (DoesPlatformSupportSpatialAudio.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 */

__int64 __fastcall CSpatialProperties::MakeActive(
        struct IUnknown **this,
        const unsigned __int16 *a2,
        char a3,
        struct IPropertyStore *a4)
{
  _QWORD *v8; // r15
  _QWORD *v9; // r14
  int SpatialAudioConfigureDevice; // ebx
  LPCGUID v12; // r8
  LPCGUID v13; // r9
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
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180177976, v12, v13, 3u, &pData);
  }
  MigrateSpatialProperties(a4, a2);
  SpatialAudioConfigureDevice = Create_SpatialAudioConfigureDevice(a2, a4, v8);
  if ( SpatialAudioConfigureDevice < 0 )
    goto LABEL_16;
  SpatialAudioConfigureDevice = Create_SpatialAudioDevicePropertyReader(a2, a4, v9);
  if ( SpatialAudioConfigureDevice < 0 )
    goto LABEL_16;
  SpatialAudioConfigureDevice = Create_SpatialAudioDeviceStateReader(a2, a4, this + 7);
  if ( SpatialAudioConfigureDevice < 0 )
    goto LABEL_16;
  SpatialAudioConfigureDevice = Create_SpatialAudioDeviceStateWriter(a2, a4, this + 8);
  if ( SpatialAudioConfigureDevice < 0 )
    goto LABEL_16;
  *((_BYTE *)this + 74) = a3;
  if ( !*v8 || !*v9 )
    SpatialAudioConfigureDevice = -2147418113;
  if ( SpatialAudioConfigureDevice < 0 )
    goto LABEL_16;
  return (unsigned int)SpatialAudioConfigureDevice;
}
