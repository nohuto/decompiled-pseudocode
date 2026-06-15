/*
 * XREFs of ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x1800D9544
 * Callers:
 *     AudioServerIsFormatSupported @ 0x1800043B0 (AudioServerIsFormatSupported.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180021910 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x1800066C8 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800CF24C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?FormatHasSpecifiedSubtype@@YAHPEBUtWAVEFORMATEX@@PEBU_GUID@@@Z @ 0x1800D94D0 (-FormatHasSpecifiedSubtype@@YAHPEBUtWAVEFORMATEX@@PEBU_GUID@@@Z.c)
 *     ?SetFormatSubType@@YAHPEAUtWAVEFORMATEX@@PEBU_GUID@@@Z @ 0x1800DAEF8 (-SetFormatSubType@@YAHPEAUtWAVEFORMATEX@@PEBU_GUID@@@Z.c)
 *     ?SpdifSampleRateFlag@@YAKK@Z @ 0x1800DB478 (-SpdifSampleRateFlag@@YAKK@Z.c)
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
  unsigned int v11; // r14d
  unsigned __int64 v12; // rax
  int v13; // eax
  int v14; // r8d
  WORD wBitsPerSample; // cx
  int v16; // eax
  unsigned int v17; // r11d
  int v18; // r11d
  unsigned int v20; // esi
  GUID *v21; // rdx
  unsigned int v22; // r10d
  __int64 *v23; // [rsp+20h] [rbp-60h]
  __int64 v24; // [rsp+40h] [rbp-40h] BYREF
  __int64 v25; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-30h] BYREF
  PROPVARIANT pvar; // [rsp+60h] [rbp-20h] BYREF
  __int64 v28; // [rsp+68h] [rbp-18h]
  _DWORD *v29; // [rsp+70h] [rbp-10h]
  struct KSDATAFORMAT_WAVEFORMATEX *v30; // [rsp+B0h] [rbp+30h] BYREF

  v26[1] = -2LL;
  v8 = 0LL;
  v30 = 0LL;
  v25 = 0LL;
  v26[0] = 0LL;
  v24 = 0LL;
  pvar = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v9 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(a1, 0LL, &v24);
  if ( v9 < 0 )
    goto LABEL_24;
  v9 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v24 + 40LL))(
         v24,
         &PKEY_Endpoint_SPDIFFormatSupport,
         &pvar);
  if ( v9 < 0 )
    goto LABEL_24;
  if ( (_WORD)pvar != 65 || (unsigned int)v28 < 0x1C )
    goto LABEL_23;
  v10 = v29;
  v11 = v29[2];
  v12 = 16LL * v11;
  if ( v12 > 0xFFFFFFFF || (v13 = v12 + 12, 16 * v11 >= 0xFFFFFFF4) || (_DWORD)v28 != v13 )
  {
    v9 = -2004287467;
    goto LABEL_24;
  }
  if ( (SpdifSampleRateFlag(a2->nSamplesPerSec) & *v10) == 0 )
    goto LABEL_23;
  wBitsPerSample = a2->wBitsPerSample;
  v16 = 8;
  switch ( wBitsPerSample )
  {
    case 8u:
      v16 = 1;
      break;
    case 0x10u:
      v16 = 2;
      break;
    case 0x18u:
      v16 = 4;
      break;
    default:
      if ( wBitsPerSample != 32 )
        v16 = v14;
      break;
  }
  if ( (v16 & v10[1]) == 0 )
    goto LABEL_23;
  v17 = v14;
  if ( !v11 )
    goto LABEL_23;
  while ( !(unsigned int)FormatHasSpecifiedSubtype(a2, (const struct _GUID *)&v10[4 * v17 + 3]) )
  {
    v17 = v18 + 1;
    if ( v17 >= v11 )
      goto LABEL_23;
  }
  v9 = CreateKSFormatFromWFXFormat(a2, &v30);
  if ( v9 < 0
    || (v23 = &v25,
        v9 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a1->lpVtbl->Activate)(
               a1,
               &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
               23LL),
        v9 < 0) )
  {
    v8 = v30;
    goto LABEL_24;
  }
  v20 = 0;
  v8 = v30;
  if ( !g_cCompressedPassThruFormats )
  {
LABEL_23:
    v9 = -2004287480;
    goto LABEL_24;
  }
  while ( 1 )
  {
    v21 = &g_rgCompressedPassThruFormats + v20;
    v8->DataFormat.SubFormat = *v21;
    if ( (unsigned int)SetFormatSubType(&v8->WaveFormatEx, v21) )
      break;
LABEL_41:
    if ( ++v20 >= v22 )
      goto LABEL_23;
  }
  LODWORD(v23) = a4;
  v9 = (*(__int64 (__fastcall **)(__int64, struct KSDATAFORMAT_WAVEFORMATEX *, _QWORD, _QWORD, __int64 *, _QWORD *))(*(_QWORD *)v25 + 80LL))(
         v25,
         v8,
         v8->DataFormat.FormatSize,
         0LL,
         v23,
         v26);
  if ( v9 )
  {
    v22 = g_cCompressedPassThruFormats;
    goto LABEL_41;
  }
  if ( a3 )
    v9 = CloneWaveFormat(&v8->WaveFormatEx, a3);
LABEL_24:
  PropVariantClear(&pvar);
  if ( v8 )
    CoTaskMemFree(v8);
  if ( v9 < 0 )
    AudSrvTraceLoggingErrorHelper("GetAcceptableSPDIFTypeForDevice", 5516, v9);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v26[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v26[0] + 16LL))(v26[0]);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  return (unsigned int)v9;
}
