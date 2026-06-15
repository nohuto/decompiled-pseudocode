/*
 * XREFs of CEndpointCharacteristics::GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe4847539b299dd7___ @ 0x180107034
 * Callers:
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_bc829bb10b63470994cc211668497c87___ @ 0x180105B54 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_bc829bb10b63470994cc211668497c87.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800352F0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800CF24C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7___ @ 0x180106EEC (CEndpointCharacteristics--GetDefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7___.c)
 *     _lambda_bc829bb10b63470994cc211668497c87_::operator() @ 0x180107FF8 (_lambda_bc829bb10b63470994cc211668497c87_--operator().c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18010C51C (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x18010C694 (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 *     ?Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ @ 0x18010C6D0 (-Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18010DC04 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::GetDeviceFormatInternal__lambda_2bd14234de5ddbaffe4847539b299dd7___(
        CEndpointCharacteristics *a1,
        char a2,
        bool a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        __int64 a5,
        struct tWAVEFORMATEX **a6)
{
  bool v7; // r14
  struct tWAVEFORMATEX **v9; // r15
  int DefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7; // ebx
  LARGE_INTEGER hVal; // rsi
  LARGE_INTEGER *v12; // r14
  void *v13; // rcx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  const PROPERTYKEY *v16; // rax
  int v17; // eax
  unsigned int v18; // r8d
  const char *v19; // r9
  BYTE *pData; // rbx
  struct tWAVEFORMATEX **v21; // r14
  struct tWAVEFORMATEX *v22; // rcx
  struct tWAVEFORMATEX *v23; // r15
  unsigned __int64 v24; // r9
  __int64 v25; // rdx
  struct tWAVEFORMATEX *v26; // rsi
  struct tWAVEFORMATEX **v27; // r14
  struct tWAVEFORMATEX *v28; // rcx
  int updated; // eax
  struct tWAVEFORMATEX *v30; // rsi
  int v31; // eax
  struct tWAVEFORMATEX *v32; // rcx
  unsigned int v34; // [rsp+28h] [rbp-E0h]
  char *v35; // [rsp+30h] [rbp-D8h]
  bool v36; // [rsp+48h] [rbp-C0h]
  char v37; // [rsp+49h] [rbp-BFh] BYREF
  struct tWAVEFORMATEX *v38; // [rsp+50h] [rbp-B8h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+58h] [rbp-B0h] BYREF
  struct tWAVEFORMATEX **v40; // [rsp+70h] [rbp-98h]
  struct tWAVEFORMATEX *v41; // [rsp+78h] [rbp-90h] BYREF
  char v42; // [rsp+80h] [rbp-88h]
  struct tWAVEFORMATEX **v43; // [rsp+88h] [rbp-80h]
  int v44[4]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v45; // [rsp+A8h] [rbp-60h]
  __int128 v46; // [rsp+B8h] [rbp-50h]
  __int128 v47; // [rsp+C8h] [rbp-40h]
  __int64 v48; // [rsp+D8h] [rbp-30h]
  __int64 v49; // [rsp+E8h] [rbp-20h]
  GUID fmtid; // [rsp+F0h] [rbp-18h] BYREF
  DWORD pid; // [rsp+100h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+38h]

  v49 = -2LL;
  v7 = a3;
  v36 = a3;
  v9 = a6;
  v43 = a6;
  *a6 = 0LL;
  v38 = 0LL;
  if ( !a2 )
  {
    v16 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
    if ( a4 != eKeywordDetectorConnector )
      v16 = &PKEY_AudioEngine_DeviceFormat;
    fmtid = v16->fmtid;
    pid = v16->pid;
    memset(&pvar, 0, sizeof(pvar));
    v17 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, struct tagPROPVARIANT *))(**((_QWORD **)a1 + 5) + 40LL))(
            *((_QWORD **)a1 + 5),
            &fmtid,
            &pvar);
    if ( v17 >= 0 )
    {
      if ( pvar.vt )
      {
        if ( pvar.vt == 65 )
        {
          if ( (unsigned int)IsValidWfxBlob(&pvar) )
          {
            pData = pvar.bstrblobVal.pData;
            v37 = 0;
            lambda_bc829bb10b63470994cc211668497c87_::operator()(a5, pvar.bstrblobVal.pData, &v37);
            if ( v37 )
            {
              v40 = &v38;
              v41 = 0LL;
              v42 = 1;
              DefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7 = CloneWaveFormat(
                                                                         (const struct tWAVEFORMATEX *)pData,
                                                                         &v41);
              if ( v42 )
              {
                v21 = v40;
                v22 = *v40;
                v23 = v41;
                if ( v41 != *v40 )
                {
                  if ( v22 )
                    CoTaskMemFree(v22);
                  *v21 = v23;
                }
                v9 = v43;
                v7 = v36;
              }
              if ( DefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7 < 0 )
              {
                v24 = (unsigned int)DefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7;
                v25 = 6256LL;
LABEL_38:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  v25,
                  (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                  (const char *)v24);
                PropVariantClear((PROPVARIANT *)&pvar);
LABEL_43:
                v32 = v38;
                goto LABEL_45;
              }
            }
          }
          else
          {
            wil::details::in1diag3::Log_Win32(retaddr, (void *)0x1875, v18, v19, v34);
          }
        }
        else
        {
          LODWORD(v35) = pvar.vt;
          wil::details::in1diag3::Log_Win32Msg(
            retaddr,
            (void *)0x1881,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0xD,
            (unsigned int)"Unexpected vartype %d (0x%08x)",
            v35,
            pvar.vt);
        }
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1864,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v17);
    }
    if ( !v38 )
    {
      v40 = &v38;
      v41 = 0LL;
      v42 = 1;
      *(_OWORD *)v44 = *(_OWORD *)a5;
      v45 = *(_OWORD *)(a5 + 16);
      v46 = *(_OWORD *)(a5 + 32);
      v47 = *(_OWORD *)(a5 + 48);
      v48 = *(_QWORD *)(a5 + 64);
      DefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7 = CEndpointCharacteristics::GetDefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7___(
                                                                 a1,
                                                                 v7,
                                                                 a4,
                                                                 (__int64)v44,
                                                                 &v41);
      if ( v42 )
      {
        v26 = v41;
        v27 = v40;
        v28 = *v40;
        if ( v41 != *v40 )
        {
          if ( v28 )
            CoTaskMemFree(v28);
          *v27 = v26;
        }
        v7 = v36;
      }
      if ( DefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7 < 0 )
      {
        v24 = (unsigned int)DefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7;
        v25 = 6280LL;
        goto LABEL_38;
      }
      updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(a1, v7, a4, v38);
      DefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7 = updated;
      if ( updated < 0 )
      {
        v24 = (unsigned int)updated;
        v25 = 6283LL;
        goto LABEL_38;
      }
    }
    PropVariantClear((PROPVARIANT *)&pvar);
    goto LABEL_40;
  }
  *(_QWORD *)&pvar.vt = &v38;
  pvar.hVal.QuadPart = 0LL;
  *((_BYTE *)&pvar.decVal + 16) = 1;
  *(_OWORD *)v44 = *(_OWORD *)a5;
  v45 = *(_OWORD *)(a5 + 16);
  v46 = *(_OWORD *)(a5 + 32);
  v47 = *(_OWORD *)(a5 + 48);
  v48 = *(_QWORD *)(a5 + 64);
  DefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7 = CEndpointCharacteristics::GetDefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7___(
                                                             a1,
                                                             a3,
                                                             a4,
                                                             (__int64)v44,
                                                             (struct tWAVEFORMATEX **)&pvar.hVal.QuadPart);
  if ( *((_BYTE *)&pvar.decVal + 16) )
  {
    hVal = pvar.hVal;
    v12 = *(LARGE_INTEGER **)&pvar.vt;
    v13 = **(void ***)&pvar.vt;
    if ( pvar.hVal.QuadPart != **(_QWORD **)&pvar.vt )
    {
      if ( v13 )
        CoTaskMemFree(v13);
      *v12 = hVal;
    }
  }
  if ( DefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7 < 0 )
  {
    v14 = (unsigned int)DefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7;
    v15 = 6235LL;
LABEL_42:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v15,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v14);
    goto LABEL_43;
  }
LABEL_40:
  v30 = v38;
  v31 = ValidateWaveFormatEx(v38);
  DefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7 = v31;
  if ( v31 < 0 )
  {
    v14 = (unsigned int)v31;
    v15 = 6288LL;
    goto LABEL_42;
  }
  v32 = 0LL;
  v38 = 0LL;
  *v9 = v30;
  DefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7 = 0;
LABEL_45:
  if ( v32 )
    CoTaskMemFree(v32);
  return (unsigned int)DefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7;
}
