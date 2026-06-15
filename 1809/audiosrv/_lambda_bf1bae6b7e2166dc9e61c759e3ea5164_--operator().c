/*
 * XREFs of _lambda_bf1bae6b7e2166dc9e61c759e3ea5164_::operator() @ 0x180108154
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_bf1bae6b7e2166dc9e61c759e3ea5164__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Do_call @ 0x18010E140 (std--_Func_impl_no_alloc__lambda_bf1bae6b7e2166dc9e61c759e3ea5164__long_SystemEffec_ea_18010E140.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033B14 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     _lambda_e86e403555f745251996716a8cfcb9a8_::operator() @ 0x18004B348 (_lambda_e86e403555f745251996716a8cfcb9a8_--operator().c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004C07C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEBU_tagpropertykey@@PEBU_AEC_POLICY_RESULTS@@@Z @ 0x18004C0C0 (-PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?LogAecEffectPolicyInsertion@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004C1A4 (-LogAecEffectPolicyInsertion@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioe.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18004EC60 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x180052EA8 (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     _lambda_8ad65360e5e34d857e07ad4180363f05_::operator() @ 0x180107E0C (_lambda_8ad65360e5e34d857e07ad4180363f05_--operator().c)
 *     ?RemoveAt@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z @ 0x18010CBDC (-RemoveAt@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z.c)
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180111D90 (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_bf1bae6b7e2166dc9e61c759e3ea5164_::operator()(
        struct _GUID *a1,
        int *a2,
        struct CAudioSignalProcessingModeArray *a3)
{
  int DelayedAECInsertionPolicy; // ebx
  struct _AEC_POLICY_RESULTS *v7; // r12
  __int64 Data1; // rax
  int v9; // ebx
  GUID *v10; // rcx
  int updated; // r14d
  int v13; // eax
  struct CEndpointCharacteristics *v14; // rbx
  _OWORD *v15; // rdx
  __int64 v16; // r11
  unsigned int v17; // eax
  __int64 v18; // r11
  _OWORD *v19; // rdx
  __int64 v20; // r11
  unsigned int v21; // eax
  __int64 v22; // r11
  int v23; // eax
  __int64 v24; // rbx
  LPVOID pv; // [rsp+30h] [rbp-50h] BYREF
  PROPVARIANT pvar; // [rsp+38h] [rbp-48h] BYREF
  __int64 v27; // [rsp+40h] [rbp-40h]
  struct _AEC_POLICY_RESULTS *v28; // [rsp+48h] [rbp-38h]
  int v29; // [rsp+50h] [rbp-30h] BYREF
  __int64 v30; // [rsp+58h] [rbp-28h]
  struct _GUID v31; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v30 = -2LL;
  pvar = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  DelayedAECInsertionPolicy = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *, PROPVARIANT *))(**(_QWORD **)(*(_QWORD *)&a1->Data1 + 40LL)
                                                                                                  + 40LL))(
                                *(_QWORD *)(*(_QWORD *)&a1->Data1 + 40LL),
                                a1->Data4,
                                &pvar);
  if ( DelayedAECInsertionPolicy < 0 )
    goto LABEL_41;
  v7 = v28;
  if ( (_WORD)pvar != 65 || (_DWORD)v27 != 68 || *(_DWORD *)v28 != 5 )
    goto LABEL_40;
  v31 = a1[6];
  DelayedAECInsertionPolicy = EffectPolicy::GetDelayedAECInsertionPolicy(
                                *(struct CEndpointCharacteristics **)&a1->Data1,
                                *(struct IPropertyStore **)(*(_QWORD *)&a1->Data1 + 40LL),
                                (struct SystemEffectDescriptor *)a2,
                                &v31,
                                (enum INBOX_AEC_INSERTION_POLICY *)&v29,
                                v28);
  if ( DelayedAECInsertionPolicy >= 0 )
  {
    Data1 = (int)a1[7].Data1;
    v9 = v29;
    if ( v29 == 2 )
    {
      v10 = &GUID_7ecead6d_6452_4ded_b567_7bb9947d7669;
      if ( (_DWORD)Data1 != 3 )
        v10 = &GUID_73fb9979_623f_41a6_bf1c_ba817c519c4f;
    }
    else
    {
      v10 = &GUID_f82eff51_99fa_4393_a31d_6d5d9f3972c3;
    }
    v31 = *v10;
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         (__int64 *)(*(_QWORD *)&a1->Data1 + 72LL + 16 * Data1),
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
    {
      if ( !v9 )
        goto LABEL_35;
      updated = lambda_8ad65360e5e34d857e07ad4180363f05_::operator()((int *)a1[7].Data4);
      if ( updated < 0 )
      {
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          2012LL,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)updated);
        return (unsigned int)updated;
      }
    }
    if ( !v9 )
      goto LABEL_35;
    if ( v9 > 0 )
    {
      if ( v9 <= 2 )
      {
        updated = SystemEffectDescriptor::UpdateEffectsInOverridingChain(
                    (SystemEffectDescriptor *)a2,
                    a3,
                    1u,
                    (__int64)&v31,
                    2,
                    0);
        if ( updated < 0 )
        {
          PropVariantClear(&pvar);
          goto LABEL_15;
        }
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                             (__int64 *)(16LL * a2[12] + *(_QWORD *)&a1->Data1 + 72LL),
                             &a1[6].Data1) != -1 )
        {
          if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                                16LL * (int)a1[7].Data1 + v20 + 1496,
                                v19) )
            goto LABEL_23;
          v21 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                  (__int64 *)(*(_QWORD *)&a1->Data1 + 16LL * a2[12] + 72),
                  &a1[6].Data1);
          if ( v21 != -1 )
            ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAt(v22 + 72, v21);
        }
        if ( *((_DWORD *)v7 + 16) == 8 )
        {
          v23 = *(_DWORD *)(*(_QWORD *)&a1->Data1 + 8584LL);
          if ( v23 )
          {
            *(_DWORD *)(*(_QWORD *)&a1->Data1 + 8584LL) = v23 - 1;
            *((_DWORD *)a3 + 4) = 1;
          }
        }
LABEL_35:
        *(_OWORD *)((char *)v7 + 44) = *(_OWORD *)lambda_e86e403555f745251996716a8cfcb9a8_::operator()(
                                                    (__int64 *)a1[9].Data4,
                                                    (__int64)&v31);
        pv = 0LL;
        v24 = *(_QWORD *)(*(_QWORD *)&a1->Data1 + 16LL);
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
          &pv,
          0LL);
        (*(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v24 + 40LL))(v24, &pv);
        v31 = a1[6];
        LogAecEffectPolicyInsertion(v7, (const unsigned __int16 *)pv, &v31, a1[7].Data1);
        DelayedAECInsertionPolicy = CEndpointCharacteristics::PersistAECPolicy(
                                      *(CEndpointCharacteristics **)&a1->Data1,
                                      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a1[7].Data1,
                                      (const struct _tagpropertykey *)a1->Data4,
                                      v7);
        PropVariantClear(&pvar);
        if ( DelayedAECInsertionPolicy >= 0 )
          DelayedAECInsertionPolicy = 0;
        else
          wil::details::in1diag3::Return_Hr(
            retaddr,
            2012LL,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)DelayedAECInsertionPolicy);
        if ( pv )
          CoTaskMemFree(pv);
        return (unsigned int)DelayedAECInsertionPolicy;
      }
      if ( v9 == 3 )
      {
        v13 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                (__int64 *)(*(_QWORD *)&a1->Data1 + 72LL + 16LL * (int)a1[7].Data1),
                &a1[6].Data1);
        DelayedAECInsertionPolicy = SystemEffectDescriptor::UpdateEffectsInOverridingChain(
                                      (SystemEffectDescriptor *)a2,
                                      a3,
                                      1u,
                                      (__int64)&v31,
                                      1,
                                      v13 != -1);
        if ( DelayedAECInsertionPolicy < 0 )
          goto LABEL_6;
        v14 = *(struct CEndpointCharacteristics **)&a1->Data1;
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                             (__int64 *)(16LL * (int)a1[7].Data1 + *(_QWORD *)&a1->Data1 + 1496LL),
                             &a1[6].Data1) != -1 )
        {
          if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                                (__int64)v14 + v16 + 72,
                                v15) )
          {
LABEL_23:
            DelayedAECInsertionPolicy = -2147024882;
            goto LABEL_41;
          }
          v17 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                  (__int64 *)(*(_QWORD *)&a1->Data1 + 16LL * (int)a1[7].Data1 + 1496),
                  &a1[6].Data1);
          if ( v17 != -1 )
            ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAt(v18 + 1496, v17);
        }
        goto LABEL_35;
      }
    }
LABEL_40:
    PropVariantClear(&pvar);
    DelayedAECInsertionPolicy = -2147418113;
    goto LABEL_41;
  }
LABEL_6:
  PropVariantClear(&pvar);
LABEL_41:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    2012LL,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)DelayedAECInsertionPolicy);
  return (unsigned int)DelayedAECInsertionPolicy;
}
