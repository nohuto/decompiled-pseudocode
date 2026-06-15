/*
 * XREFs of Create_SpatialAudioMetadataDictionaryFromData @ 0x1801376BC
 * Callers:
 *     ?CreateMetadataDictionary@SpatialAudioDevicePropertyReader@@UEAAJAEBU_GUID@@PEAPEAUISpatialAudioMetadataDictionaryData@@@Z @ 0x18012FF40 (-CreateMetadataDictionary@SpatialAudioDevicePropertyReader@@UEAAJAEBU_GUID@@PEAPEAUISpatialAudio.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180043864 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VSpatialAudioMetadataDictionary@@V1@W4DictionaryLoadKind@@AEBU_GUID@@AEAG$$TAEAPEAEAEAI@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioMetadataDictionary@@$$QEAW4DictionaryLoadKind@@AEBU_GUID@@AEAG$$QEA$$TAEAPEAEAEAI@Z @ 0x18013635C (--$MakeAndInitialize@VSpatialAudioMetadataDictionary@@V1@W4DictionaryLoadKind@@AEBU_GUID@@AEAG$$.c)
 */

__int64 __fastcall Create_SpatialAudioMetadataDictionaryFromData(__int64 a1, __int64 a2, const GUID *a3, _QWORD *a4)
{
  unsigned int v5; // ebx
  const GUID *v6; // r8
  const GUID *v7; // r9
  unsigned int v9; // [rsp+40h] [rbp-39h] BYREF
  __int64 v10; // [rsp+48h] [rbp-31h] BYREF
  SpatialAudioMetadataDictionary *v11[2]; // [rsp+50h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-19h] BYREF
  const char *v13; // [rsp+80h] [rbp+7h]
  int v14; // [rsp+88h] [rbp+Fh]
  int v15; // [rsp+8Ch] [rbp+13h]
  unsigned int *v16; // [rsp+90h] [rbp+17h]
  int v17; // [rsp+98h] [rbp+1Fh]
  int v18; // [rsp+9Ch] [rbp+23h]
  unsigned int *v19; // [rsp+A0h] [rbp+27h]
  int v20; // [rsp+A8h] [rbp+2Fh]
  int v21; // [rsp+ACh] [rbp+33h]

  v11[0] = 0LL;
  v10 = a2;
  if ( a4 )
  {
    *a4 = 0LL;
    v11[1] = 0LL;
    v9 = 1;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v11);
    LODWORD(v10) = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioMetadataDictionary,SpatialAudioMetadataDictionary,enum DictionaryLoadKind,_GUID const &,unsigned short &,std::nullptr_t,unsigned char * &,unsigned int &>(
                     v11,
                     &v9,
                     (__int64)&GUID_00000000_0000_0000_0000_000000000000);
    v5 = v10;
    if ( (int)v10 >= 0 )
    {
      v5 = (**(__int64 (__fastcall ***)(SpatialAudioMetadataDictionary *, GUID *, _QWORD *))v11[0])(
             v11[0],
             &GUID_7175fd87_aec9_42ed_ad43_364817a8ed7a,
             a4);
    }
    else if ( (unsigned int)dword_1801B63C0 > 2 )
    {
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v13 = "Create_SpatialAudioMetadataDictionaryFromData";
      v16 = &v9;
      v17 = 4;
      v20 = 4;
      v14 = 46;
      v9 = 118;
      v19 = (unsigned int *)&v10;
      TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CC9B, v6, v7, 5u, &pData);
    }
  }
  else
  {
    v5 = -2147024809;
    if ( (unsigned int)dword_1801B63C0 > 2 )
    {
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v13 = "Create_SpatialAudioMetadataDictionaryFromData";
      v16 = (unsigned int *)&v10;
      v17 = 4;
      v20 = 4;
      v14 = 46;
      LODWORD(v10) = 113;
      v9 = -2147024809;
      v19 = &v9;
      TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CCCD, a3, 0LL, 5u, &pData);
    }
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v11);
  return v5;
}
