/*
 * XREFs of ?TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18010D3C8
 * Callers:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x180005440 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     AudioServerGetMixFormat @ 0x18000BC00 (AudioServerGetMixFormat.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800B4814 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800CF24C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800D6640 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18010C51C (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x18010C694 (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 *     ?Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ @ 0x18010C6D0 (-Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ.c)
 *     ?GetProcessingModeSpecificOverridingMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x18012F0AC (-GetProcessingModeSpecificOverridingMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::TryGetOverridingMixFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  int ProcessingModeSpecificOverridingMixFormatKey; // eax
  unsigned int v10; // ebx
  BYTE *pData; // rbx
  int v12; // eax
  __int64 v14; // r8
  const char *v15; // r9
  int v16; // eax
  int v17; // eax
  char *v18; // [rsp+30h] [rbp-41h]
  struct tagPROPVARIANT pvar; // [rsp+48h] [rbp-29h] BYREF
  __int64 v20; // [rsp+60h] [rbp-11h]
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+68h] [rbp-9h]
  struct _GUID v22; // [rsp+78h] [rbp+7h] BYREF
  struct _tagpropertykey v23; // [rsp+88h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v20 = -2LL;
  *a4 = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8544);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8544));
  v21 = v8;
  v22 = *a3;
  ProcessingModeSpecificOverridingMixFormatKey = GetProcessingModeSpecificOverridingMixFormatKey(
                                                   &v22,
                                                   a2 == eKeywordDetectorConnector,
                                                   &v23);
  v10 = ProcessingModeSpecificOverridingMixFormatKey;
  if ( ProcessingModeSpecificOverridingMixFormatKey < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      6576LL,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)ProcessingModeSpecificOverridingMixFormatKey);
    goto LABEL_7;
  }
  pData = 0LL;
  memset(&pvar, 0, sizeof(pvar));
  v12 = (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, struct tagPROPVARIANT *))(**((_QWORD **)this + 5)
                                                                                             + 40LL))(
          *((_QWORD *)this + 5),
          &v23,
          &pvar);
  if ( v12 >= 0 )
  {
    if ( pvar.vt )
    {
      if ( pvar.vt == 65 )
      {
        if ( IsValidWfxBlob(&pvar) )
          pData = pvar.bstrblobVal.pData;
        else
          wil::details::in1diag3::Log_Win32(retaddr, 6594LL, v14, v15);
        if ( pData )
        {
          v16 = ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)pData);
          if ( v16 )
          {
            LODWORD(v18) = v16;
            v10 = -2004287480;
            wil::details::in1diag3::Return_HrMsg(
              retaddr,
              (void *)0x19D9,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)0x88890008LL,
              (int)"ValidateUncompressedWaveFormatEx returned 0x%08x",
              v18);
            goto LABEL_6;
          }
          v17 = CloneWaveFormat((const struct tWAVEFORMATEX *)pData, a4);
          v10 = v17;
          if ( v17 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              6619LL,
              (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)(unsigned int)v17);
            goto LABEL_6;
          }
        }
      }
      else
      {
        LODWORD(v18) = pvar.vt;
        wil::details::in1diag3::Log_Win32Msg(
          retaddr,
          (void *)0x19CF,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)0xD,
          (unsigned int)"unexpected vartype %d (0x%x)",
          v18,
          pvar.vt);
      }
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x19B5,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v12);
  }
  v10 = 0;
LABEL_6:
  PropVariantClear((PROPVARIANT *)&pvar);
LABEL_7:
  if ( v8 )
    LeaveCriticalSection(v8);
  return v10;
}
