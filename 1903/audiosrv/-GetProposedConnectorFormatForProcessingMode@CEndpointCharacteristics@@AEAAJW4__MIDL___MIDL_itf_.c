/*
 * XREFs of ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000E1B0
 * Callers:
 *     ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180008414 (-GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioeng.c)
 *     ?GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z @ 0x18000B340 (-GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180032A80 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_53c21122ac2ea0b62ae7643ed09637d7___ @ 0x1801138C4 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_53c21122ac2ea0b62ae7643ed09637d7.c)
 *     ?IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x18011E76C (-IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18003190C (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18006B903 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  void *v7; // rsi
  GUID fmtid; // xmm0
  HRESULT v9; // ebx
  void *v10; // rcx
  char *v12; // rdi
  struct tWAVEFORMATEX *v13; // rbx
  __int128 v14; // [rsp+30h] [rbp-A9h] BYREF
  void *v15; // [rsp+50h] [rbp-89h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-81h] BYREF
  __int64 v17; // [rsp+60h] [rbp-79h] BYREF
  __int64 v18; // [rsp+68h] [rbp-71h] BYREF
  __int64 v19; // [rsp+70h] [rbp-69h]
  __int64 v20; // [rsp+78h] [rbp-61h] BYREF
  LPVOID ppv; // [rsp+80h] [rbp-59h] BYREF
  PROPVARIANT pvar; // [rsp+88h] [rbp-51h] BYREF
  __int64 v23; // [rsp+90h] [rbp-49h]
  __int64 v24; // [rsp+98h] [rbp-41h]
  PROPVARIANT v25; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-31h]
  __int64 v27; // [rsp+B0h] [rbp-29h]
  __int64 v28; // [rsp+B8h] [rbp-21h]
  GUID v29; // [rsp+C0h] [rbp-19h] BYREF
  DWORD pid; // [rsp+D0h] [rbp-9h]
  __int128 v31; // [rsp+D8h] [rbp-1h] BYREF
  int v32; // [rsp+E8h] [rbp+Fh]

  v28 = -2LL;
  v7 = 0LL;
  v15 = 0LL;
  ppv = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  pv = 0LL;
  pvar = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( (a2 & 0xFFFFFFFD) != 0 )
  {
    if ( a2 == eOffloadConnector )
    {
      *(_QWORD *)&v14 = 0x4C7D1B2C233164C8LL;
      *((_QWORD *)&v14 + 1) = 0x67257A6871B668BCLL;
      v31 = v14;
      fmtid = PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId.fmtid;
      pid = PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId.pid;
    }
    else
    {
      if ( a2 != eKeywordDetectorConnector )
      {
        v9 = -2147024809;
        goto LABEL_11;
      }
      *(_QWORD *)&v14 = 0x4C7D1B2C233164C8LL;
      *((_QWORD *)&v14 + 1) = 0x67257A6871B668BCLL;
      v31 = v14;
      fmtid = PKEY_Endpoint_KeywordDetector_ConnectorId.fmtid;
      pid = PKEY_Endpoint_KeywordDetector_ConnectorId.pid;
    }
  }
  else
  {
    *(_QWORD *)&v14 = 0x4C7D1B2C233164C8LL;
    *((_QWORD *)&v14 + 1) = 0x67257A6871B668BCLL;
    *(_QWORD *)&v29.Data1 = 0x41B43EBB9A82A7DBLL;
    *(_QWORD *)v29.Data4 = 0xFC181731B718BA83uLL;
    v31 = v14;
    fmtid = v29;
    pid = 1;
  }
  v32 = 1;
  v29 = fmtid;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
         *((_QWORD *)this + 5),
         &v31,
         &pvar);
  if ( v9 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, GUID *, PROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
           *((_QWORD *)this + 5),
           &v29,
           &v25);
    if ( v9 >= 0 )
    {
      v9 = CoCreateInstance(&CLSID_MMDeviceEnumerator, 0LL, 0x17u, &GUID_a95664d2_9614_4f35_a746_de8db63617e6, &ppv);
      if ( v9 >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, v23, &v20);
        if ( v9 >= 0 )
        {
          v9 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v20 + 24LL))(
                 v20,
                 &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                 23LL);
          if ( v9 >= 0 )
          {
            v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v19 + 56LL))(
                   v19,
                   (unsigned int)v26,
                   &v18);
            if ( v9 >= 0 )
            {
              v9 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v18 + 104LL))(
                     v18,
                     23LL,
                     &GUID_e792f5ac_33a8_4f03_9840_cbee917b8f81,
                     &v17);
              if ( v9 >= 0 )
              {
                v14 = (__int128)*a3;
                v9 = (*(__int64 (__fastcall **)(__int64, __int128 *, LPVOID *))(*(_QWORD *)v17 + 24LL))(v17, &v14, &pv);
                if ( v9 >= 0 )
                {
                  v12 = (char *)pv;
                  v9 = CTCoAllocPolicy::Alloc(v10, 1u, *((unsigned __int16 *)pv + 40) + 18LL, &v15);
                  if ( v9 < 0 )
                  {
                    v7 = v15;
                  }
                  else
                  {
                    v13 = (struct tWAVEFORMATEX *)v15;
                    memcpy_0(v15, v12 + 64, *((unsigned __int16 *)v12 + 40) + 18LL);
                    *a4 = v13;
                    v7 = 0LL;
                    v9 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_11:
  PropVariantClear(&pvar);
  PropVariantClear(&v25);
  CoTaskMemFree(v7);
  CoTaskMemFree(pv);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v9;
}
