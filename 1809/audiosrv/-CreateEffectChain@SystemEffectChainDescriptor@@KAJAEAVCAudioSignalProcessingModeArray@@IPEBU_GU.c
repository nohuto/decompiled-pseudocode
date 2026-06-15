/*
 * XREFs of ?CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@I1AEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x18004EA90
 * Callers:
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18004E090 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@@Z @ 0x18004E930 (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004E2A0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18004EC60 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
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
  unsigned int v11; // esi
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
  int v23; // [rsp+20h] [rbp-38h]
  std::_Ref_count_base *v24; // [rsp+20h] [rbp-38h]
  std::_Ref_count_base *v25; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  ProcessHeap = GetProcessHeap();
  v9 = HeapAlloc(ProcessHeap, 0, 0x58uLL);
  v10 = v9;
  if ( v9 )
  {
    v9[2] = 1;
    v9[3] = 1;
    *(_QWORD *)v9 = &std::_Ref_count_obj<SystemEffectChainDescriptor>::`vftable';
    memset_0(v9 + 4, 0, 0x48uLL);
    v11 = 0;
    *((_QWORD *)v10 + 2) = 0LL;
    *((_QWORD *)v10 + 3) = 0LL;
    v10[8] = 0;
    *((_BYTE *)v10 + 36) = 0;
    *((_QWORD *)v10 + 5) = 0LL;
    *((_QWORD *)v10 + 6) = 0LL;
    *((_QWORD *)v10 + 7) = 0LL;
    *((_QWORD *)v10 + 8) = 0LL;
    *((_QWORD *)v10 + 9) = 0LL;
    *((_QWORD *)v10 + 10) = 0LL;
  }
  else
  {
    try
    {
      v11 = 0;
      v10 = 0LL;
    }
    catch ( std::bad_alloc )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)0x8007000ELL,
        v23);
      v22 = v24;
      if ( !v24 )
        return 2147942414LL;
      goto LABEL_37;
    }
  }
  LODWORD(v25) = (_DWORD)v10;
  v12 = *a1;
  v13 = *((_DWORD *)a1 + 2);
  v14 = 0;
  if ( v13 )
  {
    while ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(v10 + 4, v12 + 16LL * v14) )
    {
      if ( ++v14 >= v13 )
        goto LABEL_4;
    }
    v20 = 49LL;
    goto LABEL_27;
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
    while ( 1 )
    {
      v25 = (std::_Ref_count_base *)(a3 + 16LL * v17);
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(v10 + 14, v25) )
        break;
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(v10 + 18, v25) )
      {
        v21 = 72LL;
        goto LABEL_26;
      }
      if ( ++v17 >= a2 )
        goto LABEL_9;
    }
    v21 = 70LL;
    goto LABEL_26;
  }
LABEL_9:
  if ( a4 )
  {
    while ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(v10 + 18, a5 + 16LL * v11) )
    {
      if ( ++v11 >= a4 )
        goto LABEL_10;
    }
    v21 = 77LL;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL,
      (int)v25);
    v20 = 50LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL,
      (int)v25);
    if ( !v10 )
      return 2147942414LL;
    v22 = (std::_Ref_count_base *)v10;
LABEL_37:
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
  if ( v10 && _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(_DWORD *))v10)(v10);
    if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  return 0LL;
}
