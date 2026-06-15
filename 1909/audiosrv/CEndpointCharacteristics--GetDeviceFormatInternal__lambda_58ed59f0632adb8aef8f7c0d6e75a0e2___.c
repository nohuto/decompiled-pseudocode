/*
 * XREFs of CEndpointCharacteristics::GetDeviceFormatInternal__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2___ @ 0x1801148A4
 * Callers:
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_53c21122ac2ea0b62ae7643ed09637d7___ @ 0x1801133C4 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_53c21122ac2ea0b62ae7643ed09637d7.c)
 * Callees:
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18000385C (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18000508C (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800058A0 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18001B6B0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E4E0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2___ @ 0x18011475C (CEndpointCharacteristics--GetDefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2___.c)
 *     _lambda_53c21122ac2ea0b62ae7643ed09637d7_::operator() @ 0x180115434 (_lambda_53c21122ac2ea0b62ae7643ed09637d7_--operator().c)
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x1801198A4 (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 *     ?Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ @ 0x1801198E0 (-Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::GetDeviceFormatInternal__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2___(
        CEndpointCharacteristics *a1,
        char a2,
        unsigned __int8 a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        __int64 a5,
        struct tWAVEFORMATEX **a6)
{
  int DefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2; // ebx
  void *v10; // rcx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  const PROPERTYKEY *v13; // rax
  int v14; // eax
  unsigned int v15; // r8d
  const char *v16; // r9
  BYTE *pData; // rbx
  struct tWAVEFORMATEX *v18; // rcx
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  struct tWAVEFORMATEX *v21; // rcx
  int updated; // eax
  struct tWAVEFORMATEX *v23; // rsi
  int v24; // eax
  struct tWAVEFORMATEX *v25; // rcx
  unsigned int v27; // [rsp+28h] [rbp-B9h]
  char *v28; // [rsp+30h] [rbp-B1h]
  __int64 v29; // [rsp+48h] [rbp-99h] BYREF
  struct tWAVEFORMATEX *v30; // [rsp+50h] [rbp-91h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+58h] [rbp-89h] BYREF
  struct tWAVEFORMATEX **v32; // [rsp+70h] [rbp-71h]
  struct tWAVEFORMATEX *v33; // [rsp+78h] [rbp-69h] BYREF
  char v34; // [rsp+80h] [rbp-61h]
  int v35[4]; // [rsp+88h] [rbp-59h] BYREF
  __int128 v36; // [rsp+98h] [rbp-49h]
  __int128 v37; // [rsp+A8h] [rbp-39h]
  __int128 v38; // [rsp+B8h] [rbp-29h]
  __int64 v39; // [rsp+C8h] [rbp-19h]
  __int64 v40; // [rsp+D8h] [rbp-9h]
  GUID fmtid; // [rsp+E0h] [rbp-1h] BYREF
  DWORD pid; // [rsp+F0h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+4Fh]

  v40 = -2LL;
  *a6 = 0LL;
  v30 = 0LL;
  if ( !a2 )
  {
    v13 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
    if ( a4 != eKeywordDetectorConnector )
      v13 = &PKEY_AudioEngine_DeviceFormat;
    fmtid = v13->fmtid;
    pid = v13->pid;
    memset(&pvar, 0, sizeof(pvar));
    v14 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, struct tagPROPVARIANT *))(**((_QWORD **)a1 + 5) + 40LL))(
            *((_QWORD **)a1 + 5),
            &fmtid,
            &pvar);
    if ( v14 >= 0 )
    {
      if ( pvar.vt )
      {
        if ( pvar.vt == 65 )
        {
          if ( IsValidWfxBlob(&pvar) )
          {
            pData = pvar.bstrblobVal.pData;
            LOBYTE(v29) = 0;
            lambda_53c21122ac2ea0b62ae7643ed09637d7_::operator()(a5, pvar.bstrblobVal.pData, &v29);
            if ( (_BYTE)v29 )
            {
              v32 = &v30;
              v33 = 0LL;
              v34 = 1;
              DefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2 = CloneWaveFormat(
                                                                         (const struct tWAVEFORMATEX *)pData,
                                                                         &v33);
              if ( v34 )
              {
                v18 = *v32;
                *v32 = v33;
                if ( v18 )
                  CoTaskMemFree(v18);
              }
              if ( DefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2 < 0 )
              {
                v19 = (unsigned int)DefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2;
                v20 = 6379LL;
LABEL_30:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v20,
                  (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                  (const char *)v19);
                PropVariantClear((PROPVARIANT *)&pvar);
LABEL_35:
                v25 = v30;
                goto LABEL_37;
              }
            }
          }
          else
          {
            wil::details::in1diag3::Log_Win32(retaddr, (void *)0x18F0, v15, v16, v27);
          }
        }
        else
        {
          LODWORD(v28) = pvar.vt;
          wil::details::in1diag3::Log_Win32Msg(
            retaddr,
            (void *)0x18FC,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0xD,
            (unsigned int)"Unexpected vartype %d (0x%08x)",
            v28,
            pvar.vt);
        }
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x18DF,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v14);
    }
    if ( !v30 )
    {
      v32 = &v30;
      v33 = 0LL;
      v34 = 1;
      *(_OWORD *)v35 = *(_OWORD *)a5;
      v36 = *(_OWORD *)(a5 + 16);
      v37 = *(_OWORD *)(a5 + 32);
      v38 = *(_OWORD *)(a5 + 48);
      v39 = *(_QWORD *)(a5 + 64);
      DefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2 = CEndpointCharacteristics::GetDefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2___(
                                                                 a1,
                                                                 a3,
                                                                 a4,
                                                                 (__int64)v35,
                                                                 &v33);
      if ( v34 )
      {
        v21 = *v32;
        *v32 = v33;
        if ( v21 )
          CoTaskMemFree(v21);
      }
      if ( DefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2 < 0 )
      {
        v19 = (unsigned int)DefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2;
        v20 = 6403LL;
        goto LABEL_30;
      }
      updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty((LPCWSTR *)a1, a3, a4, v30);
      DefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2 = updated;
      if ( updated < 0 )
      {
        v19 = (unsigned int)updated;
        v20 = 6406LL;
        goto LABEL_30;
      }
    }
    PropVariantClear((PROPVARIANT *)&pvar);
    goto LABEL_32;
  }
  *(_QWORD *)&pvar.vt = &v30;
  pvar.hVal.QuadPart = 0LL;
  *((_BYTE *)&pvar.decVal + 16) = 1;
  *(_OWORD *)v35 = *(_OWORD *)a5;
  v36 = *(_OWORD *)(a5 + 16);
  v37 = *(_OWORD *)(a5 + 32);
  v38 = *(_OWORD *)(a5 + 48);
  v39 = *(_QWORD *)(a5 + 64);
  DefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2 = CEndpointCharacteristics::GetDefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2___(
                                                             a1,
                                                             a3,
                                                             a4,
                                                             (__int64)v35,
                                                             (struct tWAVEFORMATEX **)&pvar.hVal.QuadPart);
  if ( *((_BYTE *)&pvar.decVal + 16) )
  {
    v10 = **(void ***)&pvar.vt;
    **(_QWORD **)&pvar.vt = pvar.hVal.QuadPart;
    if ( v10 )
      CoTaskMemFree(v10);
  }
  if ( DefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2 < 0 )
  {
    v11 = (unsigned int)DefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2;
    v12 = 6358LL;
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v11);
    goto LABEL_35;
  }
LABEL_32:
  v23 = v30;
  v24 = ValidateWaveFormatEx(v30);
  DefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2 = v24;
  if ( v24 < 0 )
  {
    v11 = (unsigned int)v24;
    v12 = 6411LL;
    goto LABEL_34;
  }
  v25 = 0LL;
  *a6 = v23;
  DefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2 = 0;
LABEL_37:
  v30 = 0LL;
  if ( v25 )
    CoTaskMemFree(v25);
  return (unsigned int)DefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2;
}
