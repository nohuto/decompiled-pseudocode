/*
 * XREFs of ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180018560
 * Callers:
 *     AudioServerIsFormatSupported @ 0x18000EA00 (AudioServerIsFormatSupported.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18002E790 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180032A80 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180039340 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     AudioServerGetMixFormat @ 0x180046A60 (AudioServerGetMixFormat.c)
 *     ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J9@Z @ 0x180048810 (-DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStrea.c)
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x1800CD3C0 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800DDF4C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800DF320 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800DF690 (-GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     PolicyConfigGetMixFormat @ 0x1800E2360 (PolicyConfigGetMixFormat.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800E77E0 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?RefreshDeviceFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800015C0 (-RefreshDeviceFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180004FAC (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A220 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18006B903 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800C34B8 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x180119DA4 (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 *     ?Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ @ 0x180119DE0 (-Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::GetMixFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  unsigned int v7; // r14d
  struct _RTL_CRITICAL_SECTION *v8; // r15
  _QWORD *v9; // r9
  __int64 v10; // rax
  unsigned int v11; // r8d
  __int64 v12; // rax
  __int128 v13; // xmm0
  int v14; // eax
  int v15; // eax
  BYTE *pData; // rbx
  int v17; // eax
  unsigned int v18; // r8d
  const char *v19; // r9
  unsigned __int16 v20; // r15
  int v21; // r10d
  int v22; // esi
  unsigned __int16 v23; // r12
  unsigned __int16 v24; // di
  __int16 v25; // r11
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int16 v30; // ax
  unsigned __int16 v31; // dx
  unsigned __int16 v32; // ax
  int v33; // ecx
  __int64 v34; // r9
  __int64 v35; // r8
  struct tWAVEFORMATEX *v36; // rax
  struct tWAVEFORMATEX *v37; // rsi
  int refreshed; // eax
  int v40; // ebx
  int v41; // eax
  int v42; // eax
  unsigned int v43; // [rsp+20h] [rbp-79h]
  char *v44; // [rsp+28h] [rbp-71h]
  __int64 v45; // [rsp+30h] [rbp-69h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-59h]
  struct tagPROPVARIANT pvar; // [rsp+50h] [rbp-49h] BYREF
  PROPVARIANT v49; // [rsp+68h] [rbp-31h] BYREF
  __int64 v50; // [rsp+70h] [rbp-29h]
  __int64 v51; // [rsp+78h] [rbp-21h]
  __int128 v52; // [rsp+80h] [rbp-19h]
  __int64 v53; // [rsp+90h] [rbp-9h]
  struct _RTL_CRITICAL_SECTION *v54; // [rsp+98h] [rbp-1h]
  __int128 v55; // [rsp+A0h] [rbp+7h] BYREF
  int v56; // [rsp+B0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v53 = -2LL;
  v7 = 0;
  *a4 = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8544);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 8544);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8544));
  v54 = v8;
  if ( a2 == eOffloadConnector )
  {
    v13 = PKEY_AudioEngine_HWMixFormat;
    v15 = 8;
  }
  else
  {
    v10 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v10 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( v10 )
    {
      v52 = (__int128)*a3;
      v11 = 0;
      v9 = qword_1801B75F0;
      while ( 1 )
      {
        v12 = qword_1801B75F0[2 * v11] - v52;
        if ( !v12 )
          v12 = qword_1801B75F0[2 * v11 + 1] - *((_QWORD *)&v52 + 1);
        if ( !v12 )
          break;
        if ( ++v11 >= 9 )
        {
          v7 = -2147023728;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x19DE,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0x80070490LL);
          goto LABEL_54;
        }
      }
      v13 = PKEY_AudioEngine_SignalProcessingMode_Specific_MixFormat;
      v14 = 2;
      if ( a2 == eKeywordDetectorConnector )
        v14 = 602;
      v15 = v11 + v14;
    }
    else
    {
      v13 = PKEY_AudioEngine_MixFormat;
      v15 = 0;
    }
  }
  v55 = v13;
  v56 = v15;
  pData = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v17 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *, _QWORD *))(**((_QWORD **)this + 5) + 40LL))(
          *((_QWORD *)this + 5),
          &v55,
          &v49,
          v9);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x19E5,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v17,
      v43);
  }
  else if ( (_WORD)v49 )
  {
    if ( (unsigned __int16)v49 == 65 )
    {
      if ( (_WORD)v49 == 65 && (unsigned int)v50 >= 0x12 && (unsigned int)v50 == *(unsigned __int16 *)(v51 + 16) + 18LL )
        pData = (BYTE *)v51;
      else
        wil::details::in1diag3::Log_Win32(retaddr, (void *)0x19F2, v18, v19, v43);
    }
    else
    {
      LODWORD(v44) = (unsigned __int16)v49;
      wil::details::in1diag3::Log_Win32Msg(
        retaddr,
        (void *)0x19FF,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0xD,
        (unsigned int)"unexpected vartype %d (0x%x)",
        v44,
        (unsigned __int16)v49);
    }
  }
  memset(&pvar, 0, sizeof(pvar));
  if ( pData )
    goto LABEL_20;
  refreshed = CEndpointCharacteristics::RefreshDeviceFormat((LPCWSTR *)this, a2);
  v40 = refreshed;
  if ( refreshed < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A09,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)refreshed);
LABEL_78:
    v7 = v40;
    goto LABEL_53;
  }
  v41 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, struct tagPROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
          *((_QWORD *)this + 5),
          &v55,
          &pvar);
  v40 = v41;
  if ( v41 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A0C,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v41);
    goto LABEL_78;
  }
  if ( pvar.vt != 65 )
  {
    LODWORD(v45) = pvar.vt;
    LODWORD(v44) = pvar.vt;
    v40 = -2147024883;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x1A0D,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007000DLL,
      (int)"unexpected vartype %d (0x%x)",
      v44,
      v45);
    goto LABEL_78;
  }
  if ( !IsValidWfxBlob(&pvar) )
  {
    v40 = -2147024883;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A0E,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007000DLL);
    goto LABEL_78;
  }
  pData = pvar.bstrblobVal.pData;
  if ( !pvar.bstrblobVal.pData )
  {
    v42 = -2147467261;
LABEL_77:
    LODWORD(v44) = v42;
    v40 = -2004287480;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x1A16,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x88890008LL,
      (int)"ValidateUncompressedWaveFormatEx returned 0x%08x",
      v44);
    goto LABEL_78;
  }
LABEL_20:
  v20 = *((_WORD *)pData + 1);
  if ( !v20 )
    goto LABEL_75;
  v21 = *((_DWORD *)pData + 1);
  if ( !v21 )
    goto LABEL_75;
  v22 = *((_DWORD *)pData + 2);
  if ( !v22 )
    goto LABEL_75;
  v23 = *((_WORD *)pData + 6);
  if ( !v23 )
    goto LABEL_75;
  v24 = *((_WORD *)pData + 8);
  if ( v24 > 0x400u )
    goto LABEL_75;
  v25 = *(_WORD *)pData;
  v26 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
  if ( ((*(_WORD *)pData - 1) & 0xFFFD) == 0 )
  {
    if ( !v24
      && (*((_WORD *)pData + 7) & 7) == 0
      && v20 <= 2u
      && v22 == (*((unsigned __int16 *)pData + 7) * v21 * (unsigned int)v20) >> 3 )
    {
      goto LABEL_42;
    }
    goto LABEL_75;
  }
  if ( v25 == -2 )
  {
    if ( v24 < 0x16u )
      goto LABEL_75;
    v27 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pData + 3) )
      v27 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
    if ( !v27 )
      goto LABEL_34;
    v28 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
    if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pData + 3) )
      v28 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
    if ( !v28 )
    {
LABEL_34:
      v29 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
      if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pData + 3) )
        v29 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
      if ( v29 )
      {
        v30 = *((_WORD *)pData + 7);
        v31 = v30;
        if ( v30 != 32 )
        {
          v31 = *((_WORD *)pData + 7);
          if ( v30 != 64 )
            goto LABEL_75;
        }
      }
      else
      {
        v31 = *((_WORD *)pData + 7);
        if ( ((v31 - 8) & 0xFFE7) != 0 )
          goto LABEL_75;
      }
      v32 = *((_WORD *)pData + 9);
      if ( v32 )
      {
        if ( v31 >= v32 )
        {
          v33 = v31 * v20;
          if ( v22 == (unsigned int)(v33 * v21) >> 3 && v23 == v33 / 8 )
          {
LABEL_42:
            v26 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
            goto LABEL_43;
          }
        }
      }
LABEL_75:
      v42 = -2147024809;
LABEL_76:
      v8 = lpCriticalSection;
      goto LABEL_77;
    }
  }
LABEL_43:
  if ( ((v25 - 1) & 0xFFFD) != 0 )
  {
    if ( v25 != -2 )
      goto LABEL_86;
    v34 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
    if ( !v34 )
      v34 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
    if ( v34 )
    {
      v35 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
      if ( !v35 )
        v35 = v26 - *((_QWORD *)pData + 4);
      if ( v35 )
      {
LABEL_86:
        v42 = 1;
        goto LABEL_76;
      }
    }
  }
  v36 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v24 + 18LL);
  v37 = v36;
  if ( !v36 )
  {
    *a4 = 0LL;
    v40 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A18,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007000ELL);
    v8 = lpCriticalSection;
    goto LABEL_78;
  }
  memcpy_0(v36, pData, v24 + 18LL);
  *a4 = v37;
  v8 = lpCriticalSection;
LABEL_53:
  PropVariantClear((PROPVARIANT *)&pvar);
  PropVariantClear(&v49);
LABEL_54:
  if ( v8 )
    LeaveCriticalSection(v8);
  return v7;
}
