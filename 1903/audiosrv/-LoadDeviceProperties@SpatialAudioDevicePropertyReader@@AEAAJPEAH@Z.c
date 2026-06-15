/*
 * XREFs of ?LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z @ 0x180031CD0
 * Callers:
 *     ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x18001CF20 (-ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180043864 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     Create_SpatialAudioEncoderProperties @ 0x180135754 (Create_SpatialAudioEncoderProperties.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialAudioDevicePropertyReader::LoadDeviceProperties(
        SpatialAudioDevicePropertyReader *this,
        int *a2)
{
  int v4; // ebx
  const GUID *v5; // r8
  const GUID *v6; // r9
  _OWORD *v8; // rax
  __int64 v9; // rdx
  const GUID *v10; // r8
  const GUID *v11; // r9
  const GUID *v12; // r8
  const GUID *v13; // r9
  int v14; // [rsp+38h] [rbp-49h] BYREF
  int v15; // [rsp+3Ch] [rbp-45h] BYREF
  __int64 v16; // [rsp+40h] [rbp-41h] BYREF
  PROPVARIANT pvar; // [rsp+48h] [rbp-39h] BYREF
  __int64 v18; // [rsp+50h] [rbp-31h]
  _OWORD *v19; // [rsp+58h] [rbp-29h]
  __int64 v20; // [rsp+60h] [rbp-21h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-19h] BYREF
  const char *v22; // [rsp+88h] [rbp+7h]
  __int64 v23; // [rsp+90h] [rbp+Fh]
  int *v24; // [rsp+98h] [rbp+17h]
  __int64 v25; // [rsp+A0h] [rbp+1Fh]
  int *v26; // [rsp+A8h] [rbp+27h]
  __int64 v27; // [rsp+B0h] [rbp+2Fh]

  v20 = -2LL;
  pvar = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 51) + 40LL))(
         *((_QWORD *)this + 51),
         &PKEY_SpatialAudio_Metadata_DeviceProperties,
         &pvar);
  v15 = v4;
  if ( v4 < 0 )
  {
    if ( (unsigned int)dword_1801B63C0 > 2 )
    {
      v22 = "SpatialAudioDevicePropertyReader::LoadDeviceProperties";
      v23 = 55LL;
      v14 = 317;
      v24 = &v14;
      v25 = 4LL;
      v26 = &v15;
      v27 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CC9B, v5, v6, 5u, &pData);
    }
  }
  else
  {
    if ( (_DWORD)v18 == 146 && (_WORD)pvar == 65 )
    {
      v8 = v19;
      *(_OWORD *)((char *)this + 104) = *v19;
      *(_OWORD *)((char *)this + 120) = v8[1];
      *(_OWORD *)((char *)this + 136) = v8[2];
      *(_OWORD *)((char *)this + 152) = v8[3];
      *(_OWORD *)((char *)this + 168) = v8[4];
      *(_OWORD *)((char *)this + 184) = v8[5];
      *(_OWORD *)((char *)this + 200) = v8[6];
      *(_OWORD *)((char *)this + 216) = v8[7];
      *(_OWORD *)((char *)this + 232) = v8[8];
      *((_WORD *)this + 124) = *((_WORD *)v8 + 72);
      if ( *((_DWORD *)this + 26) == 1509949441 )
      {
        *a2 = 0;
        v4 = 0;
      }
    }
    if ( !*a2 )
    {
      v16 = 0LL;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v16);
      v4 = Create_SpatialAudioEncoderProperties((char *)this + 108, v9, &v16);
      v14 = v4;
      if ( v4 >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v16 + 32LL))(v16, (char *)this + 250);
        v14 = v4;
        if ( v4 < 0 && (unsigned int)dword_1801B63C0 > 2 )
        {
          v22 = "SpatialAudioDevicePropertyReader::LoadDeviceProperties";
          v23 = 55LL;
          v15 = 339;
          v24 = &v15;
          v25 = 4LL;
          v26 = &v14;
          v27 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CC9B, v12, v13, 5u, &pData);
        }
      }
      else if ( (unsigned int)dword_1801B63C0 > 2 )
      {
        v22 = "SpatialAudioDevicePropertyReader::LoadDeviceProperties";
        v23 = 55LL;
        v15 = 336;
        v24 = &v15;
        v25 = 4LL;
        v26 = &v14;
        v27 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CC9B, v10, v11, 5u, &pData);
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v16);
    }
  }
  PropVariantClear(&pvar);
  return (unsigned int)v4;
}
