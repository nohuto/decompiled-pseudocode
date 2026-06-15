/*
 * XREFs of Create_SpatialAudioEncoderProperties @ 0x180135754
 * Callers:
 *     ?LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z @ 0x180031CD0 (-LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z.c)
 *     ?ConfigureForSpatialAudioEncoderSettings@SpatialAudioConfigureDevice@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x180044300 (-ConfigureForSpatialAudioEncoderSettings@SpatialAudioConfigureDevice@@UEAAJPEAUSpatialAudioSetti.c)
 *     ?ConfigureForSpatialAudioEncoder@SpatialAudioConfigureDevice@@UEAAJAEBU_GUID@@@Z @ 0x180133730 (-ConfigureForSpatialAudioEncoder@SpatialAudioConfigureDevice@@UEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180043864 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VSpatialAudioEncoderProperties@@V1@AEBU_GUID@@AEAH@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioEncoderProperties@@AEBU_GUID@@AEAH@Z @ 0x180134178 (--$MakeAndInitialize@VSpatialAudioEncoderProperties@@V1@AEBU_GUID@@AEAH@Details@WRL@Microsoft@@Y.c)
 */

__int64 __fastcall Create_SpatialAudioEncoderProperties(const struct _GUID *a1, __int64 a2, _QWORD *a3, const GUID *a4)
{
  unsigned int v6; // ebx
  const GUID *v7; // r8
  const GUID *v8; // r9
  int v10; // [rsp+30h] [rbp-29h] BYREF
  int v11; // [rsp+34h] [rbp-25h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, GUID *, _QWORD *); // [rsp+38h] [rbp-21h] BYREF
  int v13[4]; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  const char *v15; // [rsp+70h] [rbp+17h]
  int v16; // [rsp+78h] [rbp+1Fh]
  int v17; // [rsp+7Ch] [rbp+23h]
  int *v18; // [rsp+80h] [rbp+27h]
  int v19; // [rsp+88h] [rbp+2Fh]
  int v20; // [rsp+8Ch] [rbp+33h]
  int *v21; // [rsp+90h] [rbp+37h]
  int v22; // [rsp+98h] [rbp+3Fh]
  int v23; // [rsp+9Ch] [rbp+43h]

  v13[0] = 0;
  v12 = 0LL;
  if ( a3 )
  {
    *a3 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v12);
    v10 = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioEncoderProperties,SpatialAudioEncoderProperties,_GUID const &,int &>(
            (__int64 *)&v12,
            a1,
            v13);
    v6 = v10;
    if ( v10 >= 0 )
    {
      v6 = (**v12)(v12, &GUID_b090ccfb_2d8c_416b_bfef_598bca3c91a9, a3);
    }
    else if ( (unsigned int)dword_1801B63C0 > 2 )
    {
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v15 = "Create_SpatialAudioEncoderProperties";
      v18 = &v11;
      v19 = 4;
      v22 = 4;
      v16 = 37;
      v11 = 122;
      v21 = &v10;
      TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CC9B, v7, v8, 5u, &pData);
    }
  }
  else
  {
    v6 = -2147024809;
    if ( (unsigned int)dword_1801B63C0 > 2 )
    {
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v15 = "Create_SpatialAudioEncoderProperties";
      v18 = &v10;
      v19 = 4;
      v22 = 4;
      v16 = 37;
      v10 = 117;
      v11 = -2147024809;
      v21 = &v11;
      TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CCCD, 0LL, a4, 5u, &pData);
    }
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v12);
  return v6;
}
