/*
 * XREFs of ?PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEBU_tagpropertykey@@PEBU_AEC_POLICY_RESULTS@@@Z @ 0x18004C0C0
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x18004BCEC (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     _lambda_bf1bae6b7e2166dc9e61c759e3ea5164_::operator() @ 0x180108154 (_lambda_bf1bae6b7e2166dc9e61c759e3ea5164_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180109250 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::PersistAECPolicy(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        const struct _tagpropertykey *a3,
        const struct _AEC_POLICY_RESULTS *a4)
{
  __int64 v6; // rcx
  int v9; // ebx
  char v10; // di
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // esi
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h]
  __int16 v17; // [rsp+38h] [rbp-30h] BYREF
  int v18; // [rsp+40h] [rbp-28h]
  const struct _AEC_POLICY_RESULTS *v19; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  pvar[0] = 0LL;
  pvar[1] = 0LL;
  v6 = *((_QWORD *)this + 5);
  v16 = 0LL;
  (*(void (__fastcall **)(__int64, const struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v6 + 40LL))(v6, a3, pvar);
  v9 = 0;
  if ( LOWORD(pvar[0]) != 65 || (v10 = 0, *((_DWORD *)a4 + 15) != *(_DWORD *)(v16 + 60)) )
    v10 = 1;
  PropVariantClear(pvar);
  v11 = *((_QWORD *)this + 5);
  v17 = 65;
  v18 = 68;
  v19 = a4;
  v12 = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, __int16 *))(*(_QWORD *)v11 + 48LL))(
          v11,
          a3,
          &v17);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F9,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v12,
      (int)pvar[0]);
    return v13;
  }
  else
  {
    if ( v10 )
    {
      LOBYTE(v9) = a2 == eKeywordDetectorConnector;
      CEndpointCharacteristics::ClearMixFormatCache(this, (unsigned int)(v9 + 1));
    }
    return 0LL;
  }
}
