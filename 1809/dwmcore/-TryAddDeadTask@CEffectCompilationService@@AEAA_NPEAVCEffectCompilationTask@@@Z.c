/*
 * XREFs of ?TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z @ 0x1800E5168
 * Callers:
 *     ?Release@CEffectCompilationTask@@UEAAKXZ @ 0x1800E5120 (-Release@CEffectCompilationTask@@UEAAKXZ.c)
 * Callees:
 *     ?pop_front@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x18001827C (-pop_front@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCE.c)
 *     ?push_back@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@Z @ 0x1800E5264 (-push_back@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCE.c)
 *     std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_0ed9790c2b8c28f4d2acaca19c8b17ac___ @ 0x1800E533C (std--find_if_std--_Deque_iterator_std--_Deque_val_std--_Deque_simple_types_Microsoft--WRL--ComPt.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CEffectCompilationService::TryAddDeadTask(
        CEffectCompilationService *this,
        struct CEffectCompilationTask *a2)
{
  struct CEffectCompilationTask *v2; // rdi
  unsigned __int64 v4; // r14
  _QWORD *v5; // rsi
  __int64 v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-50h] BYREF
  __int64 v9; // [rsp+30h] [rbp-40h]
  __int128 v10; // [rsp+38h] [rbp-38h] BYREF
  __int64 v11; // [rsp+48h] [rbp-28h]
  _BYTE v12[32]; // [rsp+50h] [rbp-20h] BYREF
  struct CEffectCompilationTask *v13; // [rsp+A0h] [rbp+30h] BYREF
  struct CEffectCompilationTask *v14; // [rsp+A8h] [rbp+38h] BYREF

  v14 = a2;
  v2 = a2;
  if ( *((_BYTE *)this + 72) || *((_BYTE *)this + 216) )
    return 0;
  v4 = *((_QWORD *)this + 26);
  v5 = (_QWORD *)((char *)this + 176);
  v6 = *((_QWORD *)this + 25);
  v8 = 0LL;
  v9 = v6 + v4;
  if ( this != (CEffectCompilationService *)-176LL )
    *(_QWORD *)&v8 = *v5;
  v11 = v6;
  v10 = 0LL;
  if ( this != (CEffectCompilationService *)-176LL )
    *(_QWORD *)&v10 = *v5;
  if ( *(_QWORD *)(((__int64 (__fastcall *)(_BYTE *, __int128 *, __int128 *, struct CEffectCompilationTask **))std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_0ed9790c2b8c28f4d2acaca19c8b17ac___)(
                     v12,
                     &v10,
                     &v8,
                     &v14)
                 + 16) != v6 + v4 )
    return 0;
  if ( v4 > 0x40 )
  {
    *((_BYTE *)this + 216) = 1;
    std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::pop_front((_QWORD *)this + 22);
    v2 = v14;
    *((_BYTE *)this + 216) = 0;
  }
  v13 = v2;
  if ( v2 )
    (**(void (__fastcall ***)(struct CEffectCompilationTask *))v2)(v2);
  std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::push_back((char *)this + 176, &v13);
  if ( v13 )
    (*(void (__fastcall **)(struct CEffectCompilationTask *))(*(_QWORD *)v13 + 8LL))(v13);
  return 1;
}
