/*
 * XREFs of ?TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z @ 0x18002F68C
 * Callers:
 *     ?Release@CEffectCompilationTask@@UEAAKXZ @ 0x18002F5A0 (-Release@CEffectCompilationTask@@UEAAKXZ.c)
 * Callees:
 *     std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_b07e6d4d1a74fa50f03de8a08b13a0b6___ @ 0x18002F778 (std--find_if_std--_Deque_iterator_std--_Deque_val_std--_Deque_simple_types_Microsoft--WRL--ComPt.c)
 *     ?push_back@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@Z @ 0x1800300D4 (-push_back@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCE.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?pop_front@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x18018C460 (-pop_front@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCE.c)
 */

char __fastcall CEffectCompilationService::TryAddDeadTask(
        CEffectCompilationService *this,
        struct CEffectCompilationTask *a2)
{
  struct CEffectCompilationTask *v2; // rdi
  char *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx
  _QWORD v9[3]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v10[3]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v11[32]; // [rsp+50h] [rbp-20h] BYREF
  struct CEffectCompilationTask *v12; // [rsp+90h] [rbp+20h] BYREF
  struct CEffectCompilationTask *v13; // [rsp+98h] [rbp+28h] BYREF

  v13 = a2;
  v2 = a2;
  if ( *((_BYTE *)this + 72) )
    return 0;
  if ( *((_BYTE *)this + 216) )
    return 0;
  v9[1] = 0LL;
  v4 = (char *)this + 176;
  v5 = *((_QWORD *)this + 25);
  v6 = *((_QWORD *)this + 22);
  v7 = *((_QWORD *)this + 26);
  v10[1] = 0LL;
  v10[2] = v5;
  v9[2] = v5 + v7;
  v9[0] = v6;
  v10[0] = v6;
  if ( *(_QWORD *)(((__int64 (__fastcall *)(_BYTE *, _QWORD *, _QWORD *, struct CEffectCompilationTask **))std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_b07e6d4d1a74fa50f03de8a08b13a0b6___)(
                     v11,
                     v10,
                     v9,
                     &v13)
                 + 16) != v5 + v7 )
    return 0;
  if ( *((_QWORD *)this + 26) > 0x40uLL )
  {
    *((_BYTE *)this + 216) = 1;
    std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::pop_front(v4);
    v2 = v13;
    *((_BYTE *)this + 216) = 0;
  }
  v12 = v2;
  if ( v2 )
    (**(void (__fastcall ***)(struct CEffectCompilationTask *))v2)(v2);
  std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::push_back(v4, &v12);
  if ( v12 )
    (*(void (__fastcall **)(struct CEffectCompilationTask *))(*(_QWORD *)v12 + 8LL))(v12);
  return 1;
}
