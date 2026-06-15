/*
 * XREFs of _lambda_7015787212d530e04e17b0823ea9804b_::operator() @ 0x1800680D4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_7015787212d530e04e17b0823ea9804b__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Do_call @ 0x180068B00 (std--_Func_impl_no_alloc__lambda_7015787212d530e04e17b0823ea9804b__long_SystemEffec_ea_180068B00.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x18000B468 (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18000BBD4 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000C500 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??I?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180046E48 (--I-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?LogAecEffectPolicyInsertion@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180052DFC (-LogAecEffectPolicyInsertion@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioe.c)
 *     ?PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEBU_tagpropertykey@@PEBU_AEC_POLICY_RESULTS@@@Z @ 0x180052E9C (-PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     _lambda_e86e403555f745251996716a8cfcb9a8_::operator() @ 0x1800638DC (_lambda_e86e403555f745251996716a8cfcb9a8_--operator().c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _lambda_dafa27b10e800d3b9522ef34e8247ca2_::operator() @ 0x18006879C (_lambda_dafa27b10e800d3b9522ef34e8247ca2_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z @ 0x180119EC8 (-RemoveAt@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z.c)
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x18011DD80 (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_7015787212d530e04e17b0823ea9804b_::operator()(
        struct _GUID *a1,
        int *a2,
        struct CAudioSignalProcessingModeArray *a3)
{
  int DelayedAECInsertionPolicy; // ebx
  struct _AEC_POLICY_RESULTS *v7; // r12
  int v8; // ebx
  signed int Data1; // ecx
  GUID *v10; // rax
  int updated; // edi
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
  __int64 *v24; // rdi
  __int64 v25; // rbx
  void **v26; // rax
  PROPVARIANT pvar; // [rsp+30h] [rbp-50h] BYREF
  __int64 v28; // [rsp+38h] [rbp-48h]
  struct _AEC_POLICY_RESULTS *v29; // [rsp+40h] [rbp-40h]
  int v30; // [rsp+48h] [rbp-38h] BYREF
  LPVOID pv[2]; // [rsp+50h] [rbp-30h] BYREF
  struct _GUID v32; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  pv[1] = (LPVOID)-2LL;
  pvar = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  DelayedAECInsertionPolicy = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *, PROPVARIANT *))(**(_QWORD **)(*(_QWORD *)&a1->Data1 + 40LL)
                                                                                                  + 40LL))(
                                *(_QWORD *)(*(_QWORD *)&a1->Data1 + 40LL),
                                a1->Data4,
                                &pvar);
  if ( DelayedAECInsertionPolicy < 0 )
    goto LABEL_41;
  v7 = v29;
  if ( (_WORD)pvar != 65 || (_DWORD)v28 != 68 || *(_DWORD *)v29 != 5 )
    goto LABEL_40;
  v32 = a1[6];
  DelayedAECInsertionPolicy = EffectPolicy::GetDelayedAECInsertionPolicy(
                                *(struct CEndpointCharacteristics **)&a1->Data1,
                                *(struct IPropertyStore **)(*(_QWORD *)&a1->Data1 + 40LL),
                                (struct SystemEffectDescriptor *)a2,
                                &v32,
                                (enum INBOX_AEC_INSERTION_POLICY *)&v30,
                                v29);
  if ( DelayedAECInsertionPolicy >= 0 )
  {
    v8 = v30;
    Data1 = a1[7].Data1;
    if ( v30 == 2 )
    {
      v10 = &GUID_7ecead6d_6452_4ded_b567_7bb9947d7669;
      if ( Data1 != 3 )
        v10 = &GUID_73fb9979_623f_41a6_bf1c_ba817c519c4f;
    }
    else
    {
      v10 = &GUID_f82eff51_99fa_4393_a31d_6d5d9f3972c3;
    }
    v32 = *v10;
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         (__int64 *)(*(_QWORD *)&a1->Data1 + 72LL + 16LL * Data1),
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
    {
      if ( !v8 )
        goto LABEL_35;
      updated = lambda_dafa27b10e800d3b9522ef34e8247ca2_::operator()(a1[7].Data4);
      if ( updated < 0 )
      {
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x805,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)updated);
        return (unsigned int)updated;
      }
    }
    if ( !v8 )
      goto LABEL_35;
    if ( v8 > 0 )
    {
      if ( v8 <= 2 )
      {
        updated = SystemEffectDescriptor::UpdateEffectsInOverridingChain(
                    (SystemEffectDescriptor *)a2,
                    a3,
                    1u,
                    (__int64)&v32,
                    2u,
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
        *(struct _GUID *)((char *)v7 + 44) = *lambda_e86e403555f745251996716a8cfcb9a8_::operator()(
                                                (__int64)a1[9].Data4,
                                                &v32);
        pv[0] = 0LL;
        v24 = *(__int64 **)(*(_QWORD *)&a1->Data1 + 16LL);
        v25 = *v24;
        v26 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator&(pv);
        (*(void (__fastcall **)(__int64 *, void **))(v25 + 40))(v24, v26);
        v32 = a1[6];
        LogAecEffectPolicyInsertion(v7, (const unsigned __int16 *)pv[0], &v32, a1[7].Data1);
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
            (void *)0x805,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)DelayedAECInsertionPolicy);
        if ( pv[0] )
          CoTaskMemFree(pv[0]);
        return (unsigned int)DelayedAECInsertionPolicy;
      }
      if ( v8 == 3 )
      {
        v13 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                (__int64 *)(*(_QWORD *)&a1->Data1 + 72LL + 16LL * (int)a1[7].Data1),
                &a1[6].Data1);
        DelayedAECInsertionPolicy = SystemEffectDescriptor::UpdateEffectsInOverridingChain(
                                      (SystemEffectDescriptor *)a2,
                                      a3,
                                      1u,
                                      (__int64)&v32,
                                      1u,
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
    (void *)0x805,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)DelayedAECInsertionPolicy);
  return (unsigned int)DelayedAECInsertionPolicy;
}
