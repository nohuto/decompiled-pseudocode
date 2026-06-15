/*
 * XREFs of ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x180133814
 * Callers:
 *     ?ConfigureForSpatialAudioEncoderSettings@SpatialAudioConfigureDevice@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x1800487C0 (-ConfigureForSpatialAudioEncoderSettings@SpatialAudioConfigureDevice@@UEAAJPEAUSpatialAudioSetti.c)
 *     ?ConfigureForSpatialAudioEncoder@SpatialAudioConfigureDevice@@UEAAJAEBU_GUID@@@Z @ 0x180133310 (-ConfigureForSpatialAudioEncoder@SpatialAudioConfigureDevice@@UEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioConfigureDevice::ConfigureSpatialAudioHrtfEncoder(
        SpatialAudioConfigureDevice *this,
        struct ISpatialAudioEncoderProperties *a2)
{
  const GUID *v4; // r8
  const GUID *v5; // r9
  unsigned int v6; // ebx
  const GUID *v7; // r8
  const GUID *v8; // r9
  const GUID *v9; // r8
  const GUID *v10; // r9
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v13[3]; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v14[160]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  const char *v16; // [rsp+100h] [rbp+0h]
  int v17; // [rsp+108h] [rbp+8h]
  int v18; // [rsp+10Ch] [rbp+Ch]
  int *v19; // [rsp+110h] [rbp+10h]
  int v20; // [rsp+118h] [rbp+18h]
  int v21; // [rsp+11Ch] [rbp+1Ch]
  int *v22; // [rsp+120h] [rbp+20h]
  int v23; // [rsp+128h] [rbp+28h]
  int v24; // [rsp+12Ch] [rbp+2Ch]

  v13[0] = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 40LL))(*((_QWORD *)this + 11));
  v6 = v13[0];
  if ( v13[0] >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(struct ISpatialAudioEncoderProperties *, _BYTE *))(*(_QWORD *)a2 + 24LL))(a2, v14);
    v6 = v12;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 11) + 56LL))(*((_QWORD *)this + 11), v14);
      v6 = v12;
      if ( v12 < 0 && (unsigned int)dword_1801B53C0 > 2 )
      {
        v18 = 0;
        v21 = 0;
        v24 = 0;
        v16 = "SpatialAudioConfigureDevice::ConfigureSpatialAudioHrtfEncoder";
        v19 = v13;
        v20 = 4;
        v23 = 4;
        v17 = 62;
        v13[0] = 302;
        v22 = &v12;
        TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v9, v10, 5u, &pData);
      }
    }
    else if ( (unsigned int)dword_1801B53C0 > 2 )
    {
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v16 = "SpatialAudioConfigureDevice::ConfigureSpatialAudioHrtfEncoder";
      v19 = v13;
      v20 = 4;
      v23 = 4;
      v17 = 62;
      v13[0] = 299;
      v22 = &v12;
      TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v7, v8, 5u, &pData);
    }
  }
  else if ( (unsigned int)dword_1801B53C0 > 2 )
  {
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v16 = "SpatialAudioConfigureDevice::ConfigureSpatialAudioHrtfEncoder";
    v19 = &v12;
    v20 = 4;
    v23 = 4;
    v17 = 62;
    v12 = 296;
    v22 = v13;
    TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v4, v5, 5u, &pData);
  }
  return v6;
}
