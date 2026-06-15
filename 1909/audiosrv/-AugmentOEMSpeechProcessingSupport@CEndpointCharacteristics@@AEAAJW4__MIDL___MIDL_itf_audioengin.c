/*
 * XREFs of ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180053A40
 * Callers:
 *     ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180053820 (-AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18000BBD4 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000C500 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x18000DFA4 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003E870 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?GetAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180052CAC (-GetAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSy.c)
 *     ?LogAecEffectPolicyInsertion@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180052DFC (-LogAecEffectPolicyInsertion@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioe.c)
 *     ?PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEBU_tagpropertykey@@PEBU_AEC_POLICY_RESULTS@@@Z @ 0x180052E9C (-PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180055130 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     _lambda_e86e403555f745251996716a8cfcb9a8_::operator() @ 0x1800638DC (_lambda_e86e403555f745251996716a8cfcb9a8_--operator().c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     std::_Global_new_std::_Func_impl_no_alloc__lambda_7015787212d530e04e17b0823ea9804b__long_SystemEffectDescriptor___SystemEffectChainDescriptor_____lambda_7015787212d530e04e17b0823ea9804b___ @ 0x180067EDC (std--_Global_new_std--_Func_impl_no_alloc__lambda_7015787212d530e04e17b0823ea9804b__long_SystemE.c)
 *     _lambda_dafa27b10e800d3b9522ef34e8247ca2_::operator() @ 0x18006879C (_lambda_dafa27b10e800d3b9522ef34e8247ca2_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z @ 0x180119EC8 (-RemoveAt@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::AugmentOEMSpeechProcessingSupport(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3)
{
  __int64 v4; // r15
  struct _tagpropertykey *v6; // rcx
  __int64 v7; // rcx
  BOOL v8; // eax
  struct SystemEffectDescriptor *v9; // r13
  struct IPropertyStore *v10; // rdx
  int AECInsertionPolicy; // ebx
  __int64 v12; // rdx
  int v14; // ebx
  GUID *v15; // rax
  int OverridingChain; // r14d
  __int64 v17; // rdx
  __int64 v18; // r14
  int v19; // r13d
  __int64 v20; // rdx
  BOOL v21; // ebx
  int v22; // eax
  _OWORD *v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // rbx
  int v26; // eax
  unsigned __int16 *v27; // [rsp+48h] [rbp-C0h] BYREF
  struct _GUID v28; // [rsp+58h] [rbp-B0h]
  int v29; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v30[56]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-60h]
  __int64 v32; // [rsp+B0h] [rbp-58h]
  _BYTE v33[96]; // [rsp+B8h] [rbp-50h]
  struct _GUID v34; // [rsp+118h] [rbp+10h]
  _BYTE v35[72]; // [rsp+128h] [rbp+20h]
  _OWORD v36[11]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v37; // [rsp+228h] [rbp+120h]
  struct _GUID v38; // [rsp+238h] [rbp+130h] BYREF
  struct _tagpropertykey v39; // [rsp+248h] [rbp+140h] BYREF
  __m256i v40; // [rsp+260h] [rbp+158h] BYREF
  __m256i v41; // [rsp+280h] [rbp+178h] BYREF
  _OWORD v42[2]; // [rsp+2A8h] [rbp+1A0h] BYREF
  __m256i v43; // [rsp+2C8h] [rbp+1C0h]
  int v44; // [rsp+2E8h] [rbp+1E0h]
  wil::details::in1diag3 *retaddr; // [rsp+340h] [rbp+238h]

  v32 = -2LL;
  v4 = a2;
  if ( (*(unsigned int (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)this + 56LL))(this) == 1 )
  {
    if ( (_DWORD)v4 == 3 )
    {
      v6 = (struct _tagpropertykey *)&PKEY_KeywordSpeechAecPolicyResults;
    }
    else
    {
      v7 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data1;
      if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data1 )
        v7 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data4;
      v8 = v7 == 0;
      v6 = (struct _tagpropertykey *)&PKEY_SpeechAecPolicyResults;
      if ( !v8 )
        v6 = (struct _tagpropertykey *)&PKEY_CommunicationsAecPolicyResults;
    }
    v39 = *v6;
    v41.m256i_i64[0] = (__int64)this;
    v41.m256i_i32[2] = v4;
    *(struct _GUID *)((char *)&v41.m256i_u64[1] + 4) = *a3;
    v40.m256i_i32[0] = v4;
    *(_OWORD *)((char *)v40.m256i_i64 + 4) = *(_OWORD *)((char *)&v41.m256i_u64[1] + 4);
    v40.m256i_i64[3] = (__int64)this;
    memset_0(v42, 255, 0x44uLL);
    LODWORD(v42[0]) = 5;
    v38 = *a3;
    v9 = (CEndpointCharacteristics *)((char *)this + 96 * v4 + 616);
    *(_QWORD *)&v28.Data1 = v9;
    AECInsertionPolicy = EffectPolicy::GetAECInsertionPolicy(
                           this,
                           v10,
                           v9,
                           &v38,
                           (enum INBOX_AEC_INSERTION_POLICY *)&v29,
                           (struct _AEC_POLICY_RESULTS *)v42);
    if ( AECInsertionPolicy < 0 )
    {
      v12 = 1912LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)AECInsertionPolicy);
      return (unsigned int)AECInsertionPolicy;
    }
    v14 = v29;
    if ( !v29 )
      goto LABEL_45;
    if ( v29 == 2 )
    {
      v15 = &GUID_7ecead6d_6452_4ded_b567_7bb9947d7669;
      if ( (_DWORD)v4 != 3 )
        v15 = &GUID_73fb9979_623f_41a6_bf1c_ba817c519c4f;
    }
    else
    {
      v15 = &GUID_f82eff51_99fa_4393_a31d_6d5d9f3972c3;
    }
    v38 = *v15;
    if ( !*((_DWORD *)this + v4 + 12) )
    {
      OverridingChain = lambda_dafa27b10e800d3b9522ef34e8247ca2_::operator()(&v40);
      if ( OverridingChain < 0 )
      {
        v17 = 1923LL;
LABEL_21:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)OverridingChain);
        return (unsigned int)OverridingChain;
      }
      v31 = 0LL;
      v28 = *a3;
      OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                          (CEndpointCharacteristics *)((char *)this + 96 * v4 + 616),
                          2,
                          0,
                          (__int64)v30);
      if ( OverridingChain < 0 )
      {
        v17 = 1924LL;
        goto LABEL_21;
      }
LABEL_45:
      if ( (v14 & 0xFFFFFFFB) == 0 )
      {
LABEL_47:
        v27 = 0LL;
        v25 = *((_QWORD *)this + 2);
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          (void **)&v27,
          0LL);
        (*(void (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)v25 + 40LL))(v25, &v27);
        v38 = *a3;
        LogAecEffectPolicyInsertion((const struct _AEC_POLICY_RESULTS *)v42, v27, &v38, (unsigned int)v4);
        v26 = CEndpointCharacteristics::PersistAECPolicy(
                this,
                (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v4,
                &v39,
                (const struct _AEC_POLICY_RESULTS *)v42);
        AECInsertionPolicy = v26;
        if ( v26 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x81B,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v26);
          if ( v27 )
            CoTaskMemFree(v27);
          return (unsigned int)AECInsertionPolicy;
        }
        if ( v27 )
          CoTaskMemFree(v27);
        return 0LL;
      }
LABEL_46:
      *(_OWORD *)((char *)&v43.m256i_u64[1] + 4) = *(_OWORD *)lambda_e86e403555f745251996716a8cfcb9a8_::operator()(
                                                                &v41,
                                                                &v38);
      goto LABEL_47;
    }
    v18 = 16 * v4;
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         (__int64 *)this + 2 * v4 + 9,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1
      && v14 != 4 )
    {
      v19 = lambda_dafa27b10e800d3b9522ef34e8247ca2_::operator()(&v40);
      if ( v19 < 0 )
      {
        v20 = 1931LL;
        goto LABEL_28;
      }
      v9 = *(struct SystemEffectDescriptor **)&v28.Data1;
    }
    if ( v14 > 0 )
    {
      if ( v14 <= 2 )
      {
        v31 = 0LL;
        v28 = *a3;
        v19 = SystemEffectDescriptor::CreateOverridingChain(v9, 2, 0, (__int64)v30);
        if ( v19 >= 0 )
        {
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                               (__int64 *)((char *)this + v18 + 72),
                               a3) != -1 )
          {
            if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                                  (__int64)this + v18 + 1496,
                                  v23) )
            {
              AECInsertionPolicy = -2147024882;
              v12 = 1948LL;
              goto LABEL_10;
            }
            v24 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                    (__int64 *)((char *)this + v18 + 72),
                    a3);
            if ( v24 != -1 )
              ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAt((char *)this + v18 + 72, v24);
          }
          goto LABEL_45;
        }
        v20 = 1944LL;
LABEL_28:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v19);
        return (unsigned int)v19;
      }
      if ( v14 == 3 )
      {
        v22 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                (__int64 *)((char *)this + v18 + 72),
                a3);
        v31 = 0LL;
        v28 = *a3;
        AECInsertionPolicy = SystemEffectDescriptor::CreateOverridingChain(v9, 1, v22 != -1, (__int64)v30);
        if ( AECInsertionPolicy < 0 )
        {
          v12 = 1938LL;
          goto LABEL_10;
        }
        goto LABEL_46;
      }
      if ( v14 == 4 )
      {
        *(_QWORD *)&v28.Data1 = v30;
        v38 = *a3;
        v21 = CEndpointCharacteristics::IsConnectorModeSupported(this, (unsigned int)v4, &v38) != 0;
        *(_QWORD *)v33 = this;
        *(struct _tagpropertykey *)&v33[8] = v39;
        *(_OWORD *)&v33[28] = v42[0];
        *(_OWORD *)&v33[44] = v42[1];
        *(__m256i *)&v33[60] = v43;
        *(_DWORD *)&v33[92] = v44;
        v34 = *a3;
        *(_DWORD *)v35 = v4;
        *(__m256i *)&v35[8] = v40;
        *(__m256i *)&v35[40] = v41;
        v36[0] = *(_OWORD *)v33;
        v36[1] = *(_OWORD *)&v33[16];
        v36[2] = *(_OWORD *)&v33[32];
        v36[3] = *(_OWORD *)&v33[48];
        v36[4] = *(_OWORD *)((char *)v43.m256i_i64 + 4);
        v36[5] = *(_OWORD *)&v33[80];
        v36[6] = v34;
        v36[7] = *(_OWORD *)v35;
        v36[8] = *(_OWORD *)&v40.m256i_u64[1];
        v36[9] = *(_OWORD *)&v35[32];
        v36[10] = *(_OWORD *)&v41.m256i_u64[1];
        v37 = v41.m256i_i64[3];
        v31 = 0LL;
        v31 = std::_Global_new_std::_Func_impl_no_alloc__lambda_7015787212d530e04e17b0823ea9804b__long_SystemEffectDescriptor___SystemEffectChainDescriptor_____lambda_7015787212d530e04e17b0823ea9804b___(v36);
        v38 = *a3;
        AECInsertionPolicy = SystemEffectDescriptor::CreateOverridingChain(v9, 1, v21, (__int64)v30);
        if ( AECInsertionPolicy < 0 )
        {
          v12 = 2053LL;
          goto LABEL_10;
        }
        goto LABEL_47;
      }
    }
    AECInsertionPolicy = -2147418113;
    v12 = 2057LL;
    goto LABEL_10;
  }
  return 0LL;
}
