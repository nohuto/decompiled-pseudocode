/*
 * XREFs of ?AddInternalVoiceProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@W4EnhancementsDisabledSupport@@@Z @ 0x18005390C
 * Callers:
 *     ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180053820 (-AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18000BBD4 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18000BC94 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000C500 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180055130 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ?AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z @ 0x180063628 (-AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z @ 0x1801157B0 (-Add@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z.c)
 *     ?RemoveAt@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z @ 0x180119EC8 (-RemoveAt@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::AddInternalVoiceProcessingMode(
        __int64 a1,
        __int64 a2,
        struct _GUID *a3,
        int a4)
{
  __int64 *v8; // rcx
  SystemEffectDescriptor *v9; // rdi
  int OverridingChain; // ebx
  __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rdx
  _BYTE v15[56]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v16; // [rsp+88h] [rbp-30h]
  struct _GUID v17; // [rsp+90h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1) != 1 )
    return 0LL;
  v8 = (__int64 *)(a1 + 72);
  if ( !*(_DWORD *)(a1 + 48) )
  {
    *(_DWORD *)(a1 + 48) = 1;
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)v8);
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                         a1 + 72,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
    {
      *(_DWORD *)(a1 + 1384) = 1;
      if ( (unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                           a1 + 1400,
                           v11,
                           &GUID_00000000_0000_0000_0000_000000000000) )
        goto LABEL_5;
      v12 = 1778LL;
    }
    else
    {
      v12 = 1774LL;
    }
LABEL_11:
    OverridingChain = -2147024882;
    goto LABEL_12;
  }
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                       v8,
                       &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) != -1 )
    goto LABEL_5;
  v13 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
          (__int64 *)(a1 + 72),
          &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
  if ( v13 == -1 || !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAt(a1 + 72, v13) )
  {
    OverridingChain = -2147418113;
    v12 = 1786LL;
    goto LABEL_12;
  }
  if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                        a1 + 72,
                        &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
  {
    v12 = 1787LL;
    goto LABEL_11;
  }
  if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                        a1 + 1400,
                        v14,
                        &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
  {
    v12 = 1789LL;
    goto LABEL_11;
  }
LABEL_5:
  v16 = 0LL;
  v9 = (SystemEffectDescriptor *)(a1 + 616);
  v17 = GUID_73fb9979_623f_41a6_bf1c_ba817c519c4f;
  OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                      (SystemEffectDescriptor *)(a1 + 616),
                      2,
                      0,
                      (__int64)v15);
  if ( OverridingChain < 0 )
  {
    v12 = 1795LL;
  }
  else
  {
    if ( a4 )
      return 0LL;
    v17 = *a3;
    OverridingChain = SystemEffectDescriptor::AddEnhancementsDisabledProcessingMode(v9, &v17);
    if ( OverridingChain >= 0 )
      return 0LL;
    v12 = 1800LL;
  }
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)OverridingChain);
  return (unsigned int)OverridingChain;
}
