/*
 * XREFs of Create_SpatialAudioDevicePropertyWriter @ 0x180050F10
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180050FB8 (-RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     MigrateSpatialProperties @ 0x1800514D4 (MigrateSpatialProperties.c)
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D84 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x180050D44 (--$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Detail.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Create_SpatialAudioDevicePropertyWriter(
        const unsigned __int16 *a1,
        struct IPropertyStore *a2,
        _QWORD *a3,
        const GUID *a4)
{
  const GUID *v5; // r8
  const GUID *v6; // r9
  unsigned int v7; // ebx
  const unsigned __int16 *v9; // [rsp+30h] [rbp-39h] BYREF
  struct IPropertyStore *v10; // [rsp+38h] [rbp-31h] BYREF
  __int64 v11[2]; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  const char *v13; // [rsp+70h] [rbp+7h]
  int v14; // [rsp+78h] [rbp+Fh]
  int v15; // [rsp+7Ch] [rbp+13h]
  struct IPropertyStore **v16; // [rsp+80h] [rbp+17h]
  int v17; // [rsp+88h] [rbp+1Fh]
  int v18; // [rsp+8Ch] [rbp+23h]
  struct IPropertyStore **v19; // [rsp+90h] [rbp+27h]
  int v20; // [rsp+98h] [rbp+2Fh]
  int v21; // [rsp+9Ch] [rbp+33h]

  v11[0] = 0LL;
  v9 = a1;
  v10 = a2;
  if ( a3 )
  {
    *a3 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v11);
    LODWORD(v9) = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDevicePropertyWriter,SpatialAudioDevicePropertyWriter,unsigned short const * &,IPropertyStore * &>(
                    v11,
                    &v9,
                    &v10);
    v7 = (unsigned int)v9;
    if ( (int)v9 < 0 )
    {
      if ( (unsigned int)dword_1801B53C0 > 2 )
      {
        v15 = 0;
        v18 = 0;
        v21 = 0;
        v13 = "Create_SpatialAudioDevicePropertyWriter";
        v16 = &v10;
        v17 = 4;
        v20 = 4;
        v14 = 40;
        LODWORD(v10) = 85;
        v19 = (struct IPropertyStore **)&v9;
        TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v5, v6, 5u, &pData);
      }
    }
    else
    {
      v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v11[0])(
             v11[0],
             &GUID_7602d85e_c297_48f7_a2a4_778bd7712877,
             a3);
    }
  }
  else
  {
    v7 = -2147024809;
    if ( (unsigned int)dword_1801B53C0 > 2 )
    {
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v13 = "Create_SpatialAudioDevicePropertyWriter";
      v16 = (struct IPropertyStore **)&v9;
      v17 = 4;
      v20 = 4;
      v14 = 40;
      LODWORD(v9) = 80;
      LODWORD(v10) = -2147024809;
      v19 = &v10;
      TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BCAD, 0LL, a4, 5u, &pData);
    }
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v11);
  return v7;
}
