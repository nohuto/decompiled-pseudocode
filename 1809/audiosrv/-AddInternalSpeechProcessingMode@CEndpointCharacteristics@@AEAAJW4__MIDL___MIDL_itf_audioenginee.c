/*
 * XREFs of ?AddInternalSpeechProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004C940
 * Callers:
 *     ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x18004BC40 (-AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033B14 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z @ 0x18004DEDC (-AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18004DF8C (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18004EC60 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18004FC98 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     ?Add@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z @ 0x180108944 (-Add@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z.c)
 *     ?RemoveAt@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z @ 0x18010CBDC (-RemoveAt@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::AddInternalSpeechProcessingMode(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2)
{
  __int64 *v3; // rdi
  SystemEffectDescriptor *v4; // rdi
  int OverridingChain; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-98h]
  GUID v12; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v13[56]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v14; // [rsp+88h] [rbp-30h]
  struct _GUID v15; // [rsp+90h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  if ( *((_DWORD *)this + 39) != 1 )
    return 0LL;
  v3 = (__int64 *)((char *)this + 72);
  if ( !*((_DWORD *)this + 12) )
  {
    *((_DWORD *)this + 12) = 1;
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((char *)this + 72);
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                         v3,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
    {
      *((_DWORD *)this + 346) = 1;
      if ( (unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                           (char *)this + 1400,
                           v7,
                           &GUID_00000000_0000_0000_0000_000000000000) )
        goto LABEL_4;
      v8 = 1740LL;
    }
    else
    {
      v8 = 1736LL;
    }
LABEL_9:
    OverridingChain = -2147024882;
    goto LABEL_11;
  }
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                       (__int64 *)this + 9,
                       &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) != -1 )
    goto LABEL_4;
  v9 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
         v3,
         &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
  if ( v9 == -1 || !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAt(v3, v9) )
  {
    OverridingChain = -2147418113;
    v8 = 1748LL;
    goto LABEL_11;
  }
  if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                        v3,
                        &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
  {
    v8 = 1749LL;
    goto LABEL_9;
  }
  if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                        (char *)this + 1400,
                        v10,
                        &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
  {
    v8 = 1751LL;
    goto LABEL_9;
  }
LABEL_4:
  v14 = 0LL;
  v4 = (CEndpointCharacteristics *)((char *)this + 616);
  v15 = GUID_73fb9979_623f_41a6_bf1c_ba817c519c4f;
  v12 = GUID_8335b450_c436_4bb7_8639_f4bb0553e6e0;
  OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                      (int)this + 616,
                      (unsigned int)&v12,
                      1,
                      (unsigned int)&v15,
                      2,
                      0,
                      (__int64)v13);
  if ( OverridingChain < 0 )
  {
    v8 = 1757LL;
  }
  else
  {
    v15 = GUID_8335b450_c436_4bb7_8639_f4bb0553e6e0;
    OverridingChain = SystemEffectDescriptor::AddEnhancementsDisabledProcessingMode(v4, &v15);
    if ( OverridingChain >= 0 )
      return 0LL;
    v8 = 1760LL;
  }
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)OverridingChain,
    v11);
  return (unsigned int)OverridingChain;
}
