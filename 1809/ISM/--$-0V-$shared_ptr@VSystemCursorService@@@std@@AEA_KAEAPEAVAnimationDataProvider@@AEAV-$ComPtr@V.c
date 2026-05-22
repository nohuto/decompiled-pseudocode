/*
 * XREFs of ??$?0V?$shared_ptr@VSystemCursorService@@@std@@AEA_KAEAPEAVAnimationDataProvider@@AEAV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@?$_Ref_count_obj@VSystemCursorShape@@@std@@QEAA@$$QEAV?$shared_ptr@VSystemCursorService@@@1@AEA_KAEAPEAVAnimationDataProvider@@AEAV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z @ 0x18009821C
 * Callers:
 *     ?CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z @ 0x180095B94 (-CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z.c)
 *     ?CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z @ 0x180095F4C (-CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Ref_count_obj<SystemCursorShape>::_Ref_count_obj<SystemCursorShape>(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3,
        __int64 *a4,
        void (__fastcall ****a5)(_QWORD))
{
  void (__fastcall ***v9)(_QWORD); // rbp
  void (__fastcall ***v10)(_QWORD); // rbx
  volatile signed __int32 *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rdx
  void (__fastcall ***v15)(_QWORD); // [rsp+60h] [rbp+28h]

  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<SystemCursorShape>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  v9 = *a5;
  v10 = v9;
  v15 = *a5;
  if ( v9 )
    (**v9)(v9);
  v11 = (volatile signed __int32 *)a2[1];
  a2[1] = 0LL;
  v12 = *a2;
  *a2 = 0LL;
  v13 = *a4;
  *(_QWORD *)(a1 + 16) = *a3;
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( v11 )
  {
    _InterlockedIncrement(v11 + 3);
    v10 = v15;
  }
  *(_QWORD *)(a1 + 32) = v12;
  *(_QWORD *)(a1 + 40) = v11;
  *(_QWORD *)(a1 + 48) = v13;
  *(_QWORD *)(a1 + 56) = v10;
  if ( v9 )
    (**v10)(v10);
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
    v10 = v15;
  }
  if ( v9 )
    (*v10)[1](v10);
  return a1;
}
