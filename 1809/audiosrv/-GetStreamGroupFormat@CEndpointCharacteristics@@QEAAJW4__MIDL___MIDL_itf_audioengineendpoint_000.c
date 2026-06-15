/*
 * XREFs of ?GetStreamGroupFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000F900
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180021910 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800CF24C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800D6640 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18010C51C (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::GetStreamGroupFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  unsigned int i; // edx
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  unsigned int v13; // ebx
  BYTE *pData; // rbx
  int v16; // eax
  struct tagPROPVARIANT pvar; // [rsp+20h] [rbp-78h] BYREF
  __int128 v18; // [rsp+40h] [rbp-58h]
  __int64 v19; // [rsp+50h] [rbp-48h]
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+58h] [rbp-40h]
  __int128 v21; // [rsp+60h] [rbp-38h] BYREF
  unsigned int v22; // [rsp+70h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v19 = -2LL;
  *a4 = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8544);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8544));
  v20 = v8;
  v18 = (__int128)*a3;
  for ( i = 0; i < 8; ++i )
  {
    v10 = qword_1801B2590[2 * i] - v18;
    if ( !v10 )
      v10 = qword_1801B2590[2 * i + 1] - *((_QWORD *)&v18 + 1);
    if ( !v10 )
    {
      v21 = PKEY_AudioEngine_SignalProcessingMode_Specific_StreamGroupFormat;
      v11 = 2;
      if ( a2 == eKeywordDetectorConnector )
        v11 = 602;
      v22 = i + v11;
      memset(&pvar, 0, sizeof(pvar));
      *(_QWORD *)&v18 = &pvar;
      BYTE8(v18) = 1;
      v12 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, struct tagPROPVARIANT *, _QWORD *))(**((_QWORD **)this + 5)
                                                                                             + 40LL))(
              *((_QWORD *)this + 5),
              &v21,
              &pvar,
              qword_1801B2590);
      v13 = v12;
      if ( v12 >= 0 )
      {
        if ( pvar.vt == 65 && (unsigned int)IsValidWfxBlob(&pvar) )
        {
          pData = pvar.bstrblobVal.pData;
          if ( (unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) )
          {
            v13 = -2004287480;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1A3D,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)0x88890008LL,
              *(int *)&pvar.vt);
            goto LABEL_11;
          }
          v16 = CloneWaveFormat((const struct tWAVEFORMATEX *)pData, a4);
          v13 = v16;
          if ( v16 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1A3F,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)(unsigned int)v16,
              *(int *)&pvar.vt);
            goto LABEL_11;
          }
        }
        if ( *a4 )
          v13 = 0;
        else
          v13 = -2147023728;
        goto LABEL_11;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A39,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v12,
        *(int *)&pvar.vt);
LABEL_11:
      PropVariantClear((PROPVARIANT *)&pvar);
      goto LABEL_12;
    }
  }
  v13 = -2147023728;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1A32,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)0x80070490LL,
    *(int *)&pvar.vt);
LABEL_12:
  if ( v8 )
    LeaveCriticalSection(v8);
  return v13;
}
