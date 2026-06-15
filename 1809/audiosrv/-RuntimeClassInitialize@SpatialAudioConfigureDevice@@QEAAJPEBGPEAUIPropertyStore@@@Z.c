/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180053218
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioConfigureDevice@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioConfigureDevice@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x180053170 (--$MakeAndInitialize@VSpatialAudioConfigureDevice@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     Create_SpatialAudioDevicePropertyWriter @ 0x1800532BC (Create_SpatialAudioDevicePropertyWriter.c)
 *     Create_SpatialAudioDeviceStateReader @ 0x1800539CC (Create_SpatialAudioDeviceStateReader.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioConfigureDevice::RuntimeClassInitialize(
        SpatialAudioConfigureDevice *this,
        const unsigned __int16 *a2,
        struct IPropertyStore *a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  unsigned int v10; // ebx
  __int64 v11; // rcx
  const GUID *v12; // r8
  const GUID *v13; // r9
  int SpatialAudioDeviceStateReader; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v16[3]; // [rsp+34h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  const char *v18; // [rsp+60h] [rbp-9h]
  int v19; // [rsp+68h] [rbp-1h]
  int v20; // [rsp+6Ch] [rbp+3h]
  int *v21; // [rsp+70h] [rbp+7h]
  int v22; // [rsp+78h] [rbp+Fh]
  int v23; // [rsp+7Ch] [rbp+13h]
  int *p_SpatialAudioDeviceStateReader; // [rsp+80h] [rbp+17h]
  int v25; // [rsp+88h] [rbp+1Fh]
  int v26; // [rsp+8Ch] [rbp+23h]

  v3 = (_QWORD *)((char *)this + 88);
  v5 = *((_QWORD *)this + 11);
  if ( v5 )
  {
    *v3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v16[0] = Create_SpatialAudioDevicePropertyWriter(a2, a3, v3);
  v10 = v16[0];
  if ( v16[0] < 0 )
  {
    if ( (unsigned int)dword_1801B1488 > 2 )
    {
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v18 = "SpatialAudioConfigureDevice::RuntimeClassInitialize";
      v21 = &SpatialAudioDeviceStateReader;
      v22 = 4;
      v25 = 4;
      v19 = 52;
      SpatialAudioDeviceStateReader = 96;
      p_SpatialAudioDeviceStateReader = v16;
      TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v8, v9, 5u, &pData);
    }
  }
  else
  {
    v11 = *((_QWORD *)this + 12);
    if ( v11 )
    {
      *((_QWORD *)this + 12) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    SpatialAudioDeviceStateReader = Create_SpatialAudioDeviceStateReader(a2, a3, (char *)this + 96);
    v10 = SpatialAudioDeviceStateReader;
    if ( SpatialAudioDeviceStateReader < 0 && (unsigned int)dword_1801B1488 > 2 )
    {
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v18 = "SpatialAudioConfigureDevice::RuntimeClassInitialize";
      v21 = v16;
      v22 = 4;
      v25 = 4;
      v19 = 52;
      v16[0] = 99;
      p_SpatialAudioDeviceStateReader = &SpatialAudioDeviceStateReader;
      TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v12, v13, 5u, &pData);
    }
  }
  return v10;
}
