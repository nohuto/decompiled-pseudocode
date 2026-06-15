/*
 * XREFs of ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x18004BCEC
 * Callers:
 *     ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x18004BC40 (-AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800161C0 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033B14 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     _lambda_e86e403555f745251996716a8cfcb9a8_::operator() @ 0x18004B348 (_lambda_e86e403555f745251996716a8cfcb9a8_--operator().c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004C07C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEBU_tagpropertykey@@PEBU_AEC_POLICY_RESULTS@@@Z @ 0x18004C0C0 (-PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?LogAecEffectPolicyInsertion@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004C1A4 (-LogAecEffectPolicyInsertion@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioe.c)
 *     ?GetAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x18004C248 (-GetAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSy.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18004DF8C (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18004EC60 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     std::_Global_new_std::_Func_impl_no_alloc__lambda_bf1bae6b7e2166dc9e61c759e3ea5164__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64___lambda_bf1bae6b7e2166dc9e61c759e3ea5164___ @ 0x180107420 (std--_Global_new_std--_Func_impl_no_alloc__lambda_bf1bae6b7e2166dc9e61c759e3ea5164__long_SystemE.c)
 *     _lambda_8ad65360e5e34d857e07ad4180363f05_::operator() @ 0x180107E0C (_lambda_8ad65360e5e34d857e07ad4180363f05_--operator().c)
 *     ?RemoveAt@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z @ 0x18010CBDC (-RemoveAt@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::AugmentOEMSpeechProcessingSupport(
        CEndpointCharacteristics *this,
        __int32 a2,
        struct _GUID *a3)
{
  __int64 v4; // r15
  __int64 v6; // rcx
  BOOL v7; // eax
  struct _tagpropertykey *v8; // rcx
  unsigned int Data1; // r13d
  struct IPropertyStore *v10; // rdx
  int AECInsertionPolicy; // ebx
  int v12; // ebx
  GUID *v13; // rax
  __int64 v14; // r14
  int v15; // r13d
  __int64 v16; // rdx
  __int64 v17; // rbx
  int v18; // eax
  __int64 v20; // rdx
  int OverridingChain; // r14d
  __int64 v22; // rdx
  __int64 v23; // rdx
  BOOL IsConnectorModeSupported; // ebx
  int v25; // eax
  unsigned int v26; // eax
  int v27; // [rsp+28h] [rbp-E0h]
  unsigned __int16 *v28; // [rsp+48h] [rbp-C0h] BYREF
  struct _GUID v29; // [rsp+58h] [rbp-B0h] BYREF
  int v30; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v31[56]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v32; // [rsp+A8h] [rbp-60h]
  __int64 v33; // [rsp+B0h] [rbp-58h]
  _BYTE v34[96]; // [rsp+B8h] [rbp-50h]
  struct _GUID v35; // [rsp+118h] [rbp+10h]
  _BYTE v36[72]; // [rsp+128h] [rbp+20h]
  _OWORD v37[11]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v38; // [rsp+228h] [rbp+120h]
  struct _GUID v39; // [rsp+238h] [rbp+130h] BYREF
  struct _tagpropertykey v40; // [rsp+248h] [rbp+140h] BYREF
  __m256i v41; // [rsp+260h] [rbp+158h] BYREF
  __m256i v42; // [rsp+280h] [rbp+178h] BYREF
  _OWORD v43[2]; // [rsp+2A8h] [rbp+1A0h] BYREF
  __m256i v44; // [rsp+2C8h] [rbp+1C0h]
  int v45; // [rsp+2E8h] [rbp+1E0h]
  wil::details::in1diag3 *retaddr; // [rsp+340h] [rbp+238h]

  v33 = -2LL;
  v4 = a2;
  if ( *((_DWORD *)this + 39) != 1 )
    return 0LL;
  if ( a2 == 3 )
  {
    v8 = (struct _tagpropertykey *)&PKEY_KeywordSpeechAecPolicyResults;
  }
  else
  {
    v6 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data1 )
      v6 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data4;
    v7 = v6 == 0;
    v8 = (struct _tagpropertykey *)&PKEY_SpeechAecPolicyResults;
    if ( !v7 )
      v8 = (struct _tagpropertykey *)&PKEY_CommunicationsAecPolicyResults;
  }
  v40 = *v8;
  v42.m256i_i64[0] = (__int64)this;
  v42.m256i_i32[2] = a2;
  *(struct _GUID *)((char *)&v42.m256i_u64[1] + 4) = *a3;
  v41.m256i_i32[0] = a2;
  *(_OWORD *)((char *)v41.m256i_i64 + 4) = *(_OWORD *)((char *)&v42.m256i_u64[1] + 4);
  v41.m256i_i64[3] = (__int64)this;
  memset_0(v43, 255, 0x44uLL);
  LODWORD(v43[0]) = 5;
  v39 = *a3;
  Data1 = 96 * v4 + (_DWORD)this + 616;
  *(_QWORD *)&v29.Data1 = (char *)this + 96 * v4 + 616;
  AECInsertionPolicy = EffectPolicy::GetAECInsertionPolicy(
                         this,
                         v10,
                         *(struct SystemEffectDescriptor **)&v29.Data1,
                         &v39,
                         (enum INBOX_AEC_INSERTION_POLICY *)&v30,
                         (struct _AEC_POLICY_RESULTS *)v43);
  if ( AECInsertionPolicy < 0 )
  {
    v20 = 1871LL;
    goto LABEL_27;
  }
  v12 = v30;
  if ( !v30 )
    goto LABEL_18;
  if ( v30 == 2 )
  {
    v13 = &GUID_7ecead6d_6452_4ded_b567_7bb9947d7669;
    if ( (_DWORD)v4 != 3 )
      v13 = &GUID_73fb9979_623f_41a6_bf1c_ba817c519c4f;
  }
  else
  {
    v13 = &GUID_f82eff51_99fa_4393_a31d_6d5d9f3972c3;
  }
  v39 = *v13;
  if ( !*((_DWORD *)this + v4 + 12) )
  {
    OverridingChain = lambda_8ad65360e5e34d857e07ad4180363f05_::operator()(&v41);
    if ( OverridingChain >= 0 )
    {
      v32 = 0LL;
      v29 = *a3;
      OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                          96 * (int)v4 + (int)this + 616,
                          (unsigned int)&v29,
                          1,
                          (unsigned int)&v39,
                          2,
                          0,
                          (__int64)v31);
      if ( OverridingChain >= 0 )
        goto LABEL_18;
      v22 = 1883LL;
    }
    else
    {
      v22 = 1882LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)OverridingChain,
      v27);
    return (unsigned int)OverridingChain;
  }
  v14 = 16 * v4;
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                       (__int64 *)this + 2 * v4 + 9,
                       &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) != -1
    || v12 == 4 )
  {
LABEL_14:
    if ( v12 > 0 )
    {
      if ( v12 <= 2 )
      {
        v32 = 0LL;
        v29 = *a3;
        v15 = SystemEffectDescriptor::CreateOverridingChain(
                Data1,
                (unsigned int)&v29,
                1,
                (unsigned int)&v39,
                2,
                0,
                (__int64)v31);
        if ( v15 < 0 )
        {
          v23 = 1903LL;
          goto LABEL_39;
        }
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                             (__int64 *)((char *)this + v14 + 72),
                             a3) == -1 )
        {
LABEL_18:
          if ( (v12 & 0xFFFFFFFB) == 0 )
          {
LABEL_20:
            v28 = 0LL;
            v17 = *((_QWORD *)this + 2);
            wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
              &v28,
              0LL);
            (*(void (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)v17 + 40LL))(v17, &v28);
            v39 = *a3;
            LogAecEffectPolicyInsertion(
              (const struct _AEC_POLICY_RESULTS *)v43,
              v28,
              &v39,
              (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v4);
            v18 = CEndpointCharacteristics::PersistAECPolicy(
                    this,
                    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v4,
                    &v40,
                    (const struct _AEC_POLICY_RESULTS *)v43);
            AECInsertionPolicy = v18;
            if ( v18 >= 0 )
            {
              if ( v28 )
                CoTaskMemFree(v28);
              return 0LL;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x7F2,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)(unsigned int)v18,
              v27);
            if ( v28 )
              CoTaskMemFree(v28);
            return (unsigned int)AECInsertionPolicy;
          }
LABEL_19:
          *(_OWORD *)((char *)&v44.m256i_u64[1] + 4) = *(_OWORD *)lambda_e86e403555f745251996716a8cfcb9a8_::operator()(
                                                                    v42.m256i_i64,
                                                                    (__int64)&v39);
          goto LABEL_20;
        }
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                             (char *)this + v14 + 1496,
                             v16) )
        {
          v26 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                  (__int64 *)((char *)this + v14 + 72),
                  a3);
          if ( v26 != -1 )
            ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAt((char *)this + v14 + 72, v26);
          goto LABEL_18;
        }
        AECInsertionPolicy = -2147024882;
        v20 = 1907LL;
LABEL_27:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)AECInsertionPolicy,
          v27);
        return (unsigned int)AECInsertionPolicy;
      }
      if ( v12 == 3 )
      {
        v25 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                (__int64 *)((char *)this + v14 + 72),
                a3);
        v32 = 0LL;
        v29 = *a3;
        AECInsertionPolicy = SystemEffectDescriptor::CreateOverridingChain(
                               Data1,
                               (unsigned int)&v29,
                               1,
                               (unsigned int)&v39,
                               1,
                               v25 != -1,
                               (__int64)v31);
        if ( AECInsertionPolicy >= 0 )
          goto LABEL_19;
        v20 = 1897LL;
        goto LABEL_27;
      }
      if ( v12 == 4 )
      {
        *(_QWORD *)&v29.Data1 = v31;
        v39 = *a3;
        IsConnectorModeSupported = CEndpointCharacteristics::IsConnectorModeSupported(this, (unsigned int)v4, &v39);
        *(_QWORD *)v34 = this;
        *(struct _tagpropertykey *)&v34[8] = v40;
        *(_OWORD *)&v34[28] = v43[0];
        *(_OWORD *)&v34[44] = v43[1];
        *(__m256i *)&v34[60] = v44;
        *(_DWORD *)&v34[92] = v45;
        v35 = *a3;
        *(_DWORD *)v36 = v4;
        *(__m256i *)&v36[8] = v41;
        *(__m256i *)&v36[40] = v42;
        v37[0] = *(_OWORD *)v34;
        v37[1] = *(_OWORD *)&v34[16];
        v37[2] = *(_OWORD *)&v34[32];
        v37[3] = *(_OWORD *)&v34[48];
        v37[4] = *(_OWORD *)((char *)v44.m256i_i64 + 4);
        v37[5] = *(_OWORD *)&v34[80];
        v37[6] = v35;
        v37[7] = *(_OWORD *)v36;
        v37[8] = *(_OWORD *)&v41.m256i_u64[1];
        v37[9] = *(_OWORD *)&v36[32];
        v37[10] = *(_OWORD *)&v42.m256i_u64[1];
        v38 = v42.m256i_i64[3];
        v32 = 0LL;
        v32 = std::_Global_new_std::_Func_impl_no_alloc__lambda_bf1bae6b7e2166dc9e61c759e3ea5164__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64___lambda_bf1bae6b7e2166dc9e61c759e3ea5164___(v37);
        v39 = *a3;
        AECInsertionPolicy = SystemEffectDescriptor::CreateOverridingChain(
                               Data1,
                               (unsigned int)&v39,
                               0,
                               0,
                               1,
                               IsConnectorModeSupported,
                               (__int64)v31);
        if ( AECInsertionPolicy >= 0 )
          goto LABEL_20;
        v20 = 2012LL;
        goto LABEL_27;
      }
    }
    AECInsertionPolicy = -2147418113;
    v20 = 2016LL;
    goto LABEL_27;
  }
  v15 = lambda_8ad65360e5e34d857e07ad4180363f05_::operator()(&v41);
  if ( v15 >= 0 )
  {
    Data1 = v29.Data1;
    goto LABEL_14;
  }
  v23 = 1890LL;
LABEL_39:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v23,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v15,
    v27);
  return (unsigned int)v15;
}
