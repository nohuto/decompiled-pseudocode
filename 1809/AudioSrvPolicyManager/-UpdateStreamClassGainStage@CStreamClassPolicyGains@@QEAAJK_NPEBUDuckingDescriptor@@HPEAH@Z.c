/*
 * XREFs of ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z @ 0x18002E420
 * Callers:
 *     ?UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAH@Z @ 0x180025408 (-UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F84 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800104B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Det.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x18001AE0C (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ??$_Buynode@AEBV?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@?$_List_buy@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAU?$_List_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@1@PEAU21@0AEBV?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18002E72C (--$_Buynode@AEBV-$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003710C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStreamClassPolicyGains::UpdateStreamClassGainStage(
        LPCRITICAL_SECTION lpCriticalSection,
        char *a2,
        char a3,
        const struct DuckingDescriptor *a4,
        int a5,
        int *a6)
{
  unsigned int v7; // edi
  const char *v9; // r9
  int *v10; // r12
  _QWORD *v11; // r14
  _QWORD **v12; // rax
  _QWORD *i; // rbx
  _DWORD *v14; // rax
  _DWORD *v15; // rbx
  int v16; // edi
  signed __int32 v17; // eax
  _QWORD **v18; // rbx
  __int64 *v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 result; // rax
  volatile signed __int32 *v24; // rcx
  char *v25; // [rsp+28h] [rbp-70h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v7 = (unsigned int)a2;
  EnterCriticalSection(lpCriticalSection);
  v10 = a6;
  *a6 = 0;
  v11 = (PRTL_CRITICAL_SECTION_DEBUG *)((char *)&lpCriticalSection->DebugInfo + 16 * v7 + (a3 != 0 ? 376LL : 40LL));
  v12 = (_QWORD **)*v11;
  for ( i = *(_QWORD **)*v11; i != v12 && a4 != *(const struct DuckingDescriptor **)(i[2] + 56LL); i = (_QWORD *)*i )
    ;
  try
  {
    if ( a5 )
    {
      if ( i == v12 )
      {
        LODWORD(v25) = v7;
        wil::details::in1diag3::Log_HrMsg(
          retaddr,
          (void *)0x7E,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
          (const char *)0x8000FFFFLL,
          (__int64)"Category = %d, DescriptorGain = %f",
          v25,
          *(float *)a4);
      }
      else if ( _InterlockedExchangeAdd((volatile signed __int32 *)(i[2] + 36LL), 0xFFFFFFFF) == 1 )
      {
        *(_QWORD *)i[1] = *i;
        *(_QWORD *)(*i + 8LL) = i[1];
        --v11[1];
        v24 = (volatile signed __int32 *)i[2];
        if ( v24 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v24);
        operator delete(i, (const struct std::nothrow_t *)0x18);
        *v10 = *(float *)a4 != 0.0;
      }
      goto LABEL_29;
    }
    if ( i != v12 )
    {
      _InterlockedAdd((volatile signed __int32 *)(i[2] + 36LL), 1u);
LABEL_29:
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      return 0LL;
    }
    a6 = 0LL;
    v14 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    v15 = v14;
    if ( v14 )
    {
      *(_QWORD *)v14 = &CGainStage::`vftable';
      v16 = 1;
      v14[9] = 1;
      v14[13] = 1;
      *(_QWORD *)v14 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CGainStage>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *(_QWORD *)v15 = &CVolumeGainStage::`vftable';
      *((_QWORD *)v15 + 7) = a4;
      *((_OWORD *)v15 + 1) = StreamClassVolumePolicyGuid;
      *((_BYTE *)v15 + 32) = 0;
      *((_QWORD *)v15 + 5) = 0LL;
      do
        v17 = v15[13];
      while ( v17 != 0x7FFFFFFF && v17 != _InterlockedCompareExchange(v15 + 13, v17 + 1, v17) );
      a6 = v15;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v15);
      v18 = (_QWORD **)*v11;
      v19 = *(__int64 **)(*v11 + 8LL);
      v21 = std::_List_buy<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::_Buynode<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy> const &>(
              v20,
              *v11,
              v19,
              &a6);
      v22 = v11[1];
      if ( 0xAAAAAAAAAAAAAA9LL == v22 )
        std::_Xlength_error("list<T> too long");
      v11[1] = v22 + 1;
      v18[1] = (_QWORD *)v21;
      *v19 = v21;
      if ( *(float *)a4 == 0.0 )
        v16 = 0;
      *v10 = v16;
      if ( a6 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(a6);
      goto LABEL_29;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x69,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
      (const char *)0x8007000ELL);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    result = 2147942414LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x84,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
                           v9);
  }
  return result;
}
