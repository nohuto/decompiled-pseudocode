/*
 * XREFs of ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180035460
 * Callers:
 *     AudioServerIsFormatSupported @ 0x1800043B0 (AudioServerIsFormatSupported.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x1800067B0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     AudioServerGetMixFormat @ 0x18000BC00 (AudioServerGetMixFormat.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180020B40 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180021910 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J@Z @ 0x180034510 (-DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStrea.c)
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x1800BEBD0 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800D0428 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800D2770 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800D2AD0 (-GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     PolicyConfigGetMixFormat @ 0x1800D6D80 (PolicyConfigGetMixFormat.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800DBFB0 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800B4814 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800D375C (-RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioen.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18010C51C (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x18010C694 (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 *     ?Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ @ 0x18010C6D0 (-Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::GetMixFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        int (*a4)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001),
        struct tWAVEFORMATEX **a5)
{
  unsigned int v8; // r14d
  struct _RTL_CRITICAL_SECTION *v9; // r13
  _QWORD *v10; // r9
  __int64 v11; // rax
  unsigned int v12; // r8d
  __int64 v13; // rax
  __int128 v14; // xmm0
  int v15; // eax
  int v16; // eax
  BYTE *pData; // rbx
  int v18; // eax
  unsigned int v19; // r8d
  const char *v20; // r9
  unsigned __int16 v21; // r15
  int v22; // r10d
  int v23; // esi
  unsigned __int16 v24; // di
  __int16 v25; // r11
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int16 v31; // ax
  unsigned __int16 v32; // dx
  unsigned __int16 v33; // ax
  int v34; // ecx
  __int64 v35; // r9
  __int64 v36; // r8
  struct tWAVEFORMATEX *v37; // rax
  struct tWAVEFORMATEX *v38; // rsi
  int refreshed; // eax
  int v41; // ebx
  int v42; // eax
  int v43; // eax
  unsigned int v44; // [rsp+20h] [rbp-81h]
  char *v45; // [rsp+28h] [rbp-79h]
  struct tagPROPVARIANT pvar; // [rsp+50h] [rbp-51h] BYREF
  PROPVARIANT v47; // [rsp+68h] [rbp-39h] BYREF
  __int64 v48; // [rsp+70h] [rbp-31h]
  __int64 v49; // [rsp+78h] [rbp-29h]
  __int128 v50; // [rsp+80h] [rbp-21h]
  __int64 v51; // [rsp+90h] [rbp-11h]
  __int128 v52; // [rsp+98h] [rbp-9h] BYREF
  int v53; // [rsp+A8h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+57h]

  v51 = -2LL;
  v8 = 0;
  *a5 = 0LL;
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8544);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8544));
  if ( a2 == eOffloadConnector )
  {
    v14 = PKEY_AudioEngine_HWMixFormat;
    v16 = 8;
  }
  else
  {
    v11 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v11 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( v11 )
    {
      v50 = (__int128)*a3;
      v12 = 0;
      v10 = qword_1801B2590;
      while ( 1 )
      {
        v13 = qword_1801B2590[2 * v12] - v50;
        if ( !v13 )
          v13 = qword_1801B2590[2 * v12 + 1] - *((_QWORD *)&v50 + 1);
        if ( !v13 )
          break;
        if ( ++v12 >= 8 )
        {
          v8 = -2147023728;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1960,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0x80070490LL,
            v44);
          goto LABEL_55;
        }
      }
      v14 = PKEY_AudioEngine_SignalProcessingMode_Specific_MixFormat;
      v15 = 2;
      if ( a2 == eKeywordDetectorConnector )
        v15 = 602;
      v16 = v12 + v15;
    }
    else
    {
      v14 = PKEY_AudioEngine_MixFormat;
      v16 = 0;
    }
  }
  v52 = v14;
  v53 = v16;
  pData = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v18 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *, _QWORD *))(**((_QWORD **)this + 5) + 40LL))(
          *((_QWORD *)this + 5),
          &v52,
          &v47,
          v10);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1967,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v18);
  }
  else if ( (_WORD)v47 )
  {
    if ( (unsigned __int16)v47 == 65 )
    {
      if ( (_WORD)v47 == 65 && (unsigned int)v48 >= 0x12 && (unsigned int)v48 == *(unsigned __int16 *)(v49 + 16) + 18LL )
        pData = (BYTE *)v49;
      else
        wil::details::in1diag3::Log_Win32(retaddr, (void *)0x1974, v19, v20, v44);
    }
    else
    {
      LODWORD(v45) = (unsigned __int16)v47;
      wil::details::in1diag3::Log_Win32Msg(
        retaddr,
        (void *)0x1981,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0xD,
        (unsigned int)"unexpected vartype %d (0x%x)",
        v45);
    }
  }
  memset(&pvar, 0, sizeof(pvar));
  if ( pData )
    goto LABEL_20;
  refreshed = CPolicyConfig::RefreshDeviceFormat(this, a2);
  v41 = refreshed;
  if ( refreshed < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x198C,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)refreshed,
      v44);
LABEL_78:
    v8 = v41;
    goto LABEL_54;
  }
  v42 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, struct tagPROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
          *((_QWORD *)this + 5),
          &v52,
          &pvar);
  v41 = v42;
  if ( v42 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x198F,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v42,
      v44);
    goto LABEL_78;
  }
  if ( pvar.vt != 65 )
  {
    LODWORD(v45) = pvar.vt;
    v41 = -2147024883;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x1990,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007000DLL,
      (int)"unexpected vartype %d (0x%x)",
      v45,
      pvar.vt);
    goto LABEL_78;
  }
  if ( !(unsigned int)IsValidWfxBlob(&pvar) )
  {
    v41 = -2147024883;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1991,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007000DLL,
      v44);
    goto LABEL_78;
  }
  pData = pvar.bstrblobVal.pData;
  if ( !pvar.bstrblobVal.pData )
  {
    v43 = -2147467261;
LABEL_77:
    LODWORD(v45) = v43;
    v41 = -2004287480;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x1999,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x88890008LL,
      (int)"ValidateUncompressedWaveFormatEx returned 0x%08x",
      v45);
    goto LABEL_78;
  }
LABEL_20:
  v21 = *((_WORD *)pData + 1);
  if ( !v21 )
    goto LABEL_76;
  v22 = *((_DWORD *)pData + 1);
  if ( !v22 )
    goto LABEL_76;
  v23 = *((_DWORD *)pData + 2);
  if ( !v23 )
    goto LABEL_76;
  if ( !*((_WORD *)pData + 6) )
    goto LABEL_76;
  v24 = *((_WORD *)pData + 8);
  if ( v24 > 0x400u )
    goto LABEL_76;
  v25 = *(_WORD *)pData;
  v26 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
  v27 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
  if ( ((*(_WORD *)pData - 1) & 0xFFFD) == 0 )
  {
    if ( !v24
      && (*((_WORD *)pData + 7) & 7) == 0
      && v21 <= 2u
      && v23 == (*((unsigned __int16 *)pData + 7) * v22 * (unsigned int)v21) >> 3 )
    {
      goto LABEL_43;
    }
    goto LABEL_76;
  }
  if ( v25 == -2 )
  {
    if ( v24 < 0x16u )
      goto LABEL_76;
    v28 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pData + 3) )
      v28 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
    if ( !v28 )
      goto LABEL_34;
    v29 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
    if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pData + 3) )
      v29 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
    if ( !v29 )
    {
LABEL_34:
      v30 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
      if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pData + 3) )
        v30 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
      if ( v30 )
      {
        v31 = *((_WORD *)pData + 7);
        v32 = v31;
        if ( v31 == 32 || (v32 = *((_WORD *)pData + 7), v31 == 64) )
        {
LABEL_38:
          v33 = *((_WORD *)pData + 9);
          if ( v33 )
          {
            if ( v32 >= v33 )
            {
              v34 = v32 * v21;
              if ( v23 == (unsigned int)(v34 * v22) >> 3 && *((unsigned __int16 *)pData + 6) == v34 / 8 )
              {
                v27 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
LABEL_43:
                v26 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
                goto LABEL_44;
              }
            }
          }
        }
      }
      else
      {
        v32 = *((_WORD *)pData + 7);
        if ( ((v32 - 8) & 0xFFE7) == 0 )
          goto LABEL_38;
      }
LABEL_76:
      v43 = -2147024809;
      goto LABEL_77;
    }
  }
LABEL_44:
  if ( ((v25 - 1) & 0xFFFD) != 0 )
  {
    if ( v25 != -2 )
      goto LABEL_86;
    v35 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
    if ( !v35 )
      v35 = v26 - *((_QWORD *)pData + 4);
    if ( v35 )
    {
      v36 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
      if ( !v36 )
        v36 = v27 - *((_QWORD *)pData + 4);
      if ( v36 )
      {
LABEL_86:
        v43 = 1;
        goto LABEL_77;
      }
    }
  }
  v37 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v24 + 18LL);
  v38 = v37;
  if ( !v37 )
  {
    *a5 = 0LL;
    v41 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x199B,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007000ELL,
      v44);
    goto LABEL_78;
  }
  memcpy_0(v37, pData, v24 + 18LL);
  *a5 = v38;
LABEL_54:
  PropVariantClear((PROPVARIANT *)&pvar);
  PropVariantClear(&v47);
LABEL_55:
  if ( v9 )
    LeaveCriticalSection(v9);
  return v8;
}
