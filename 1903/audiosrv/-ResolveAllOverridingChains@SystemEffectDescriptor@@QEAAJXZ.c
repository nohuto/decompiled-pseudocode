/*
 * XREFs of ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x18000C350
 * Callers:
 *     ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x180006CA4 (-GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180007210 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18000B00C (-GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MI.c)
 *     ?GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000B1B4 (-GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__M.c)
 *     ?GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z @ 0x18000B340 (-GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000C208 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18000C26C (-GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingMode.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000AC94 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18003E8BC (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800632A0 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemEffectDescriptor::ResolveAllOverridingChains(SystemEffectDescriptor *this)
{
  SystemEffectDescriptor *v1; // rdi
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  SystemEffectDescriptor **v3; // rsi
  __int64 v4; // r14
  int v5; // ebp
  int v6; // r15d
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rax
  SystemEffectDescriptor **v10; // rcx
  __int64 v11; // rax
  int v12; // r15d
  SystemEffectDescriptor **v13; // r12
  SystemEffectChainDescriptor **v15; // rax
  int v16; // eax
  SystemEffectDescriptor **v17; // [rsp+28h] [rbp-40h] BYREF
  __int64 v18; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v1 = this;
  if ( !*((_BYTE *)this + 52) )
    return 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v3 = 0LL;
  v17 = 0LL;
  v4 = 0LL;
  v18 = 0LL;
  v5 = 0;
  v6 = 0;
  if ( *((int *)v1 + 10) > 0 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 < 0 || v6 >= *((_DWORD *)v1 + 10) )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x1800861BFLL);
      }
      v8 = *((_QWORD *)v1 + 4);
      if ( (_DWORD)v4 == v5 )
      {
        if ( v5 )
        {
          v5 = 2 * v4;
          if ( (v4 & 0x40000000) != 0 )
            goto LABEL_38;
        }
        else
        {
          v5 = 1;
        }
        if ( (unsigned __int64)v5 > 0x7FFFFFF || (v9 = _o__recalloc(v3, v5, 16LL)) == 0 )
        {
LABEL_38:
          v5 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F6,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL);
          goto LABEL_23;
        }
        HIDWORD(v18) = v5;
        v3 = (SystemEffectDescriptor **)v9;
        v17 = (SystemEffectDescriptor **)v9;
      }
      v10 = &v3[2 * (int)v4];
      if ( v10 )
      {
        *v10 = 0LL;
        v10[1] = 0LL;
        v11 = *(_QWORD *)(v8 + v7 + 8);
        if ( v11 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
          v5 = HIDWORD(v18);
          LODWORD(v4) = v18;
          v3 = v17;
        }
        *v10 = *(SystemEffectDescriptor **)(v8 + v7);
        v10[1] = *(SystemEffectDescriptor **)(v8 + v7 + 8);
      }
      v4 = (unsigned int)(v4 + 1);
      LODWORD(v18) = v4;
      ++v6;
      v7 += 16LL;
    }
    while ( v6 < *((_DWORD *)v1 + 10) );
  }
  v12 = 0;
  if ( (int)v4 <= 0 )
  {
LABEL_22:
    v5 = 0;
  }
  else
  {
    v13 = v3;
    while ( 1 )
    {
      if ( v12 < 0 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        goto LABEL_41;
      }
      if ( *((_BYTE *)*v13 + 20) )
      {
        v15 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                (__int64)&v17,
                                                v12);
        v16 = SystemEffectChainDescriptor::Resolve(*v15, v1);
        v5 = v16;
        if ( v16 < 0 )
          break;
      }
      ++v12;
      v13 += 2;
      if ( v12 >= (int)v4 )
        goto LABEL_22;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FC,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v16);
  }
LABEL_23:
  if ( v3 )
  {
    if ( (int)v4 > 0 )
    {
      ++v3;
      do
      {
        v1 = *v3;
        if ( *v3 && _InterlockedExchangeAdd((volatile signed __int32 *)v1 + 2, 0xFFFFFFFF) == 1 )
        {
LABEL_41:
          (**(void (__fastcall ***)(SystemEffectDescriptor *))v1)(v1);
          std::_Ref_count_base::_Decwref(v1);
        }
        v3 += 2;
        --v4;
      }
      while ( v4 );
      v3 = v17;
    }
    free(v3);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v5;
}
