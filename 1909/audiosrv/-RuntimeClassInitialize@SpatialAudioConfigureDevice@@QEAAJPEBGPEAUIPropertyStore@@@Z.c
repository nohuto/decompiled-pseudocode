/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180050FB8
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioConfigureDevice@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioConfigureDevice@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18005105C (--$MakeAndInitialize@VSpatialAudioConfigureDevice@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL.c)
 * Callees:
 *     Create_SpatialAudioDeviceStateReader @ 0x18000CBC0 (Create_SpatialAudioDeviceStateReader.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     Create_SpatialAudioDevicePropertyWriter @ 0x180050F10 (Create_SpatialAudioDevicePropertyWriter.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioConfigureDevice::RuntimeClassInitialize(
        SpatialAudioConfigureDevice *this,
        unsigned __int16 *a2,
        struct IPropertyStore *a3,
        const GUID *a4)
{
  _QWORD *v4; // rbx
  __int64 v6; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  unsigned int v11; // ebx
  __int64 v12; // rcx
  const GUID *v13; // r8
  const GUID *v14; // r9
  int SpatialAudioDeviceStateReader; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v17[3]; // [rsp+34h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  const char *v19; // [rsp+60h] [rbp-9h]
  int v20; // [rsp+68h] [rbp-1h]
  int v21; // [rsp+6Ch] [rbp+3h]
  int *v22; // [rsp+70h] [rbp+7h]
  int v23; // [rsp+78h] [rbp+Fh]
  int v24; // [rsp+7Ch] [rbp+13h]
  int *p_SpatialAudioDeviceStateReader; // [rsp+80h] [rbp+17h]
  int v26; // [rsp+88h] [rbp+1Fh]
  int v27; // [rsp+8Ch] [rbp+23h]

  v4 = (_QWORD *)((char *)this + 88);
  v6 = *((_QWORD *)this + 11);
  if ( v6 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v17[0] = Create_SpatialAudioDevicePropertyWriter(a2, a3, v4, a4);
  v11 = v17[0];
  if ( v17[0] < 0 )
  {
    if ( (unsigned int)dword_1801B53C0 > 2 )
    {
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v19 = "SpatialAudioConfigureDevice::RuntimeClassInitialize";
      v22 = &SpatialAudioDeviceStateReader;
      v23 = 4;
      v26 = 4;
      v20 = 52;
      SpatialAudioDeviceStateReader = 96;
      p_SpatialAudioDeviceStateReader = v17;
      TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v9, v10, 5u, &pData);
    }
  }
  else
  {
    v12 = *((_QWORD *)this + 12);
    if ( v12 )
    {
      *((_QWORD *)this + 12) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    SpatialAudioDeviceStateReader = Create_SpatialAudioDeviceStateReader(a2, a3, (_QWORD *)this + 12, v10);
    v11 = SpatialAudioDeviceStateReader;
    if ( SpatialAudioDeviceStateReader < 0 && (unsigned int)dword_1801B53C0 > 2 )
    {
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v19 = "SpatialAudioConfigureDevice::RuntimeClassInitialize";
      v22 = v17;
      v23 = 4;
      v26 = 4;
      v20 = 52;
      v17[0] = 99;
      p_SpatialAudioDeviceStateReader = &SpatialAudioDeviceStateReader;
      TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v13, v14, 5u, &pData);
    }
  }
  return v11;
}
