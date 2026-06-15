/*
 * XREFs of ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180033920
 * Callers:
 *     ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x180012E8C (-GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MI.c)
 *     ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x180033470 (-GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z.c)
 *     ?GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18003DB60 (-GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingMode.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005F0FC (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18011112C (-GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W.c)
 * Callees:
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18004B290 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18004F8E0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
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
LABEL_39:
        RaiseException(0xC000008C, 1u, 0, 0LL);
        goto LABEL_40;
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
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL,
            -2);
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
        goto LABEL_39;
      if ( *((_BYTE *)*v13 + 20) )
      {
        v15 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                &v17,
                                                (unsigned int)v12);
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
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v16,
      -2);
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
LABEL_40:
          (**(void (__fastcall ***)(SystemEffectDescriptor *))v1)(v1);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v1 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(SystemEffectDescriptor *))(*(_QWORD *)v1 + 8LL))(v1);
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
