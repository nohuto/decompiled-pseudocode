/*
 * XREFs of Create_SpatialAudioDeviceStateReader @ 0x1800539CC
 * Callers:
 *     ?MakeActive@CSpatialProperties@@QEAAJPEBG_NPEAUIPropertyStore@@@Z @ 0x180052FB0 (-MakeActive@CSpatialProperties@@QEAAJPEBG_NPEAUIPropertyStore@@@Z.c)
 *     ?RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180053218 (-RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x180053A7C (--$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 *     ?InternalRelease@?$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ @ 0x18005EC00 (-InternalRelease@-$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Create_SpatialAudioDeviceStateReader(__int64 a1, __int64 a2, _QWORD *a3, const GUID *a4)
{
  const GUID *v5; // r8
  const GUID *v6; // r9
  unsigned int v7; // ebx
  __int64 v9; // [rsp+30h] [rbp-39h] BYREF
  __int64 v10; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v11[2]; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  const char *v13; // [rsp+70h] [rbp+7h]
  int v14; // [rsp+78h] [rbp+Fh]
  int v15; // [rsp+7Ch] [rbp+13h]
  __int64 *v16; // [rsp+80h] [rbp+17h]
  int v17; // [rsp+88h] [rbp+1Fh]
  int v18; // [rsp+8Ch] [rbp+23h]
  __int64 *v19; // [rsp+90h] [rbp+27h]
  int v20; // [rsp+98h] [rbp+2Fh]
  int v21; // [rsp+9Ch] [rbp+33h]

  v11[0] = 0LL;
  v9 = a1;
  v10 = a2;
  if ( a3 )
  {
    *a3 = 0LL;
    Microsoft::WRL::ComPtr<SpatialAudioDeviceStateReader>::InternalRelease(v11);
    LODWORD(v9) = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDeviceStateReader,SpatialAudioDeviceStateReader,unsigned short const * &,IPropertyStore * &>(
                    v11,
                    &v9,
                    &v10);
    v7 = v9;
    if ( (int)v9 < 0 )
    {
      if ( (unsigned int)dword_1801B1488 > 2 )
      {
        v15 = 0;
        v18 = 0;
        v21 = 0;
        v13 = "Create_SpatialAudioDeviceStateReader";
        v16 = &v10;
        v17 = 4;
        v20 = 4;
        v14 = 37;
        LODWORD(v10) = 53;
        v19 = &v9;
        TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v5, v6, 5u, &pData);
      }
    }
    else
    {
      v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))(v11[0] + 568LL))(
             v11[0] + 568LL,
             &GUID_10002311_cdcb_40d4_9791_eb7aa089009e,
             a3);
    }
  }
  else
  {
    v7 = -2147024809;
    if ( (unsigned int)dword_1801B1488 > 2 )
    {
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v13 = "Create_SpatialAudioDeviceStateReader";
      v16 = &v9;
      v17 = 4;
      v20 = 4;
      v14 = 37;
      LODWORD(v9) = 48;
      LODWORD(v10) = -2147024809;
      v19 = &v10;
      TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_1801779E8, 0LL, a4, 5u, &pData);
    }
  }
  Microsoft::WRL::ComPtr<SpatialAudioDeviceStateReader>::InternalRelease(v11);
  return v7;
}
