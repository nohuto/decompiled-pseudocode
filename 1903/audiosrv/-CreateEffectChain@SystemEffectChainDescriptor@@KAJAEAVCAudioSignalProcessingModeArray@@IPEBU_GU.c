/*
 * XREFs of ?CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@I1AEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x180057310
 * Callers:
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180056A74 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@@Z @ 0x18005729C (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180037F34 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003EA64 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800632A0 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SystemEffectChainDescriptor::CreateEffectChain(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        _QWORD *a6)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // r12
  unsigned int v13; // r14d
  unsigned int v14; // r15d
  void *v15; // rcx
  void *v16; // rcx
  unsigned int v17; // r12d
  std::_Ref_count_base *v18; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  std::_Ref_count_base *v22; // rcx
  std::_Ref_count_base *v23; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  ProcessHeap = GetProcessHeap();
  v9 = HeapAlloc(ProcessHeap, 0, 0x58uLL);
  v10 = v9;
  v11 = 0;
  if ( v9 )
  {
    v9[2] = 1;
    v9[3] = 1;
    *(_QWORD *)v9 = &std::_Ref_count_obj<SystemEffectChainDescriptor>::`vftable';
    *((_QWORD *)v9 + 4) = 0LL;
    *((_QWORD *)v9 + 2) = 0LL;
    *((_QWORD *)v9 + 3) = 0LL;
    v9[8] = 0;
    *((_BYTE *)v9 + 36) = 0;
    *((_QWORD *)v9 + 5) = 0LL;
    *((_QWORD *)v9 + 6) = 0LL;
    *((_QWORD *)v9 + 7) = 0LL;
    *((_QWORD *)v9 + 8) = 0LL;
    *((_QWORD *)v9 + 9) = 0LL;
    *((_QWORD *)v9 + 10) = 0LL;
  }
  else
  {
    try
    {
      v10 = 0LL;
    }
    catch ( std::bad_alloc )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)0x8007000ELL);
      v22 = v23;
      if ( !v23 )
        return 2147942414LL;
      goto LABEL_36;
    }
  }
  v12 = *a1;
  v13 = *((_DWORD *)a1 + 2);
  v14 = 0;
  if ( v13 )
  {
    while ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                            (__int64)(v10 + 4),
                            (_OWORD *)(v12 + 16LL * v14)) )
    {
      if ( ++v14 >= v13 )
        goto LABEL_4;
    }
    v20 = 49LL;
    goto LABEL_28;
  }
LABEL_4:
  v15 = (void *)*((_QWORD *)v10 + 7);
  if ( v15 )
  {
    free(v15);
    *((_QWORD *)v10 + 7) = 0LL;
  }
  *((_QWORD *)v10 + 8) = 0LL;
  v16 = (void *)*((_QWORD *)v10 + 9);
  if ( v16 )
  {
    free(v16);
    *((_QWORD *)v10 + 9) = 0LL;
  }
  *((_QWORD *)v10 + 10) = 0LL;
  v17 = 0;
  if ( a2 )
  {
    while ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                            (__int64)(v10 + 14),
                            (_OWORD *)(a3 + 16LL * v17)) )
    {
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                            (__int64)(v10 + 18),
                            (_OWORD *)(a3 + 16LL * v17)) )
      {
        v21 = 72LL;
        goto LABEL_27;
      }
      if ( ++v17 >= a2 )
        goto LABEL_9;
    }
    v21 = 70LL;
    goto LABEL_27;
  }
LABEL_9:
  if ( a4 )
  {
    while ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                            (__int64)(v10 + 18),
                            (_OWORD *)(a5 + 16LL * v11)) )
    {
      if ( ++v11 >= a4 )
        goto LABEL_10;
    }
    v21 = 77LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL);
    v20 = 50LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL);
    if ( !v10 )
      return 2147942414LL;
    v22 = (std::_Ref_count_base *)v10;
LABEL_36:
    std::_Ref_count_base::_Decref(v22);
    return 2147942414LL;
  }
LABEL_10:
  if ( v10 )
    _InterlockedIncrement(v10 + 2);
  *a6 = v10 + 4;
  v18 = (std::_Ref_count_base *)a6[1];
  a6[1] = v10;
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v10)(v10);
      std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v10);
    }
  }
  return 0LL;
}
