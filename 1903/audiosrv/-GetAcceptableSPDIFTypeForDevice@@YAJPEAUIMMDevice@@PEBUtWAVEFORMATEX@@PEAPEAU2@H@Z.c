/*
 * XREFs of ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x1800E4C20
 * Callers:
 *     AudioServerIsFormatSupported @ 0x18000EA00 (AudioServerIsFormatSupported.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180032A80 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180005874 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180046510 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?FormatHasSpecifiedSubtype@@YAHPEBUtWAVEFORMATEX@@PEBU_GUID@@@Z @ 0x1800E4BAC (-FormatHasSpecifiedSubtype@@YAHPEBUtWAVEFORMATEX@@PEBU_GUID@@@Z.c)
 *     ?SetFormatSubType@@YAHPEAUtWAVEFORMATEX@@PEBU_GUID@@@Z @ 0x1800E6608 (-SetFormatSubType@@YAHPEAUtWAVEFORMATEX@@PEBU_GUID@@@Z.c)
 *     ?SpdifSampleRateFlag@@YAKK@Z @ 0x1800E6B88 (-SpdifSampleRateFlag@@YAKK@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetAcceptableSPDIFTypeForDevice(
        struct IMMDevice *a1,
        const struct tWAVEFORMATEX *a2,
        struct tWAVEFORMATEX **a3,
        int a4)
{
  struct KSDATAFORMAT_WAVEFORMATEX *v8; // rdi
  int v9; // ebx
  _DWORD *v10; // rbx
  unsigned int v11; // esi
  unsigned __int64 v12; // rax
  int v13; // r8d
  WORD wBitsPerSample; // cx
  int v15; // eax
  unsigned int v16; // r11d
  int v17; // r11d
  unsigned int v18; // esi
  GUID *v19; // rdx
  unsigned int v20; // r10d
  __int64 *v22; // [rsp+20h] [rbp-60h]
  __int64 v23; // [rsp+40h] [rbp-40h] BYREF
  __int64 v24; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v25[2]; // [rsp+50h] [rbp-30h] BYREF
  PROPVARIANT pvar; // [rsp+60h] [rbp-20h] BYREF
  __int64 v27; // [rsp+68h] [rbp-18h]
  _DWORD *v28; // [rsp+70h] [rbp-10h]
  struct KSDATAFORMAT_WAVEFORMATEX *v29; // [rsp+B0h] [rbp+30h] BYREF

  v25[1] = -2LL;
  v8 = 0LL;
  v29 = 0LL;
  v24 = 0LL;
  v25[0] = 0LL;
  v23 = 0LL;
  pvar = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v9 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(a1, 0LL, &v23);
  if ( v9 < 0 )
    goto LABEL_35;
  v9 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v23 + 40LL))(
         v23,
         &PKEY_Endpoint_SPDIFFormatSupport,
         &pvar);
  if ( v9 < 0 )
    goto LABEL_35;
  if ( (_WORD)pvar != 65 || (unsigned int)v27 < 0x1C )
    goto LABEL_4;
  v10 = v28;
  v11 = v28[2];
  v12 = 16LL * v11;
  if ( v12 > 0xFFFFFFFF || (_DWORD)v27 != (_DWORD)v12 + 12 )
  {
    v9 = -2004287467;
    goto LABEL_35;
  }
  if ( (SpdifSampleRateFlag(a2->nSamplesPerSec) & *v10) == 0 )
    goto LABEL_4;
  wBitsPerSample = a2->wBitsPerSample;
  v15 = 8;
  switch ( wBitsPerSample )
  {
    case 8u:
      v15 = 1;
      break;
    case 0x10u:
      v15 = 2;
      break;
    case 0x18u:
      v15 = 4;
      break;
    default:
      if ( wBitsPerSample != 32 )
        v15 = v13;
      break;
  }
  if ( (v15 & v10[1]) == 0 )
    goto LABEL_4;
  v16 = v13;
  if ( !v11 )
    goto LABEL_4;
  while ( !(unsigned int)FormatHasSpecifiedSubtype(a2, (const struct _GUID *)&v10[4 * v16 + 3]) )
  {
    v16 = v17 + 1;
    if ( v16 >= v11 )
      goto LABEL_4;
  }
  v9 = CreateKSFormatFromWFXFormat(a2, &v29);
  if ( v9 < 0
    || (v22 = &v24,
        v9 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a1->lpVtbl->Activate)(
               a1,
               &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
               23LL),
        v9 < 0) )
  {
    v8 = v29;
    goto LABEL_35;
  }
  v18 = 0;
  v8 = v29;
  if ( !g_cCompressedPassThruFormats )
  {
LABEL_4:
    v9 = -2004287480;
    goto LABEL_35;
  }
  while ( 1 )
  {
    v19 = &g_rgCompressedPassThruFormats + v18;
    v8->DataFormat.SubFormat = *v19;
    if ( (unsigned int)SetFormatSubType(&v8->WaveFormatEx, v19) )
      break;
LABEL_29:
    if ( ++v18 >= v20 )
      goto LABEL_4;
  }
  LODWORD(v22) = a4;
  v9 = (*(__int64 (__fastcall **)(__int64, struct KSDATAFORMAT_WAVEFORMATEX *, _QWORD, _QWORD, __int64 *, _QWORD *))(*(_QWORD *)v24 + 80LL))(
         v24,
         v8,
         v8->DataFormat.FormatSize,
         0LL,
         v22,
         v25);
  if ( v9 )
  {
    v20 = g_cCompressedPassThruFormats;
    goto LABEL_29;
  }
  if ( a3 )
    v9 = CloneWaveFormat(&v8->WaveFormatEx, a3);
LABEL_35:
  PropVariantClear(&pvar);
  if ( v8 )
    CoTaskMemFree(v8);
  if ( v9 < 0 )
    AudSrvTraceLoggingErrorHelper("GetAcceptableSPDIFTypeForDevice", 5477, v9);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v25[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v25[0] + 16LL))(v25[0]);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  return (unsigned int)v9;
}
