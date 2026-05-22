/*
 * XREFs of ??$?0V?$shared_ptr@VSystemCursorService@@@std@@AEA_KAEAV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@?$_Ref_count_obj@VSystemCursorShape@@@std@@QEAA@$$QEAV?$shared_ptr@VSystemCursorService@@@1@AEA_KAEAV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z @ 0x1800CB1E0
 * Callers:
 *     ??$make_shared@VSystemCursorShape@@V?$shared_ptr@VSystemCursorService@@@std@@AEA_KAEAV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@YA?AV?$shared_ptr@VSystemCursorShape@@@0@$$QEAV?$shared_ptr@VSystemCursorService@@@0@AEA_KAEAV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z @ 0x1800CB8D0 (--$make_shared@VSystemCursorShape@@V-$shared_ptr@VSystemCursorService@@@std@@AEA_KAEAV-$ComPtr@V.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AEA0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Ref_count_obj<SystemCursorShape>::_Ref_count_obj<SystemCursorShape>(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3,
        void (__fastcall ****a4)(_QWORD))
{
  void (__fastcall ***v6)(_QWORD); // rbp
  void (__fastcall ***v8)(_QWORD); // rbx
  volatile signed __int32 *v9; // rsi
  __int64 v10; // rcx
  void (__fastcall ***v12)(_QWORD); // [rsp+40h] [rbp+8h]

  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<SystemCursorShape>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  v6 = *a4;
  v8 = *a4;
  v12 = *a4;
  if ( *a4 )
    (**v6)(v6);
  v9 = (volatile signed __int32 *)a2[1];
  a2[1] = 0LL;
  v10 = *a2;
  *a2 = 0LL;
  *(_QWORD *)(a1 + 16) = *a3;
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( v9 )
  {
    _InterlockedIncrement(v9 + 3);
    v8 = v12;
  }
  *(_QWORD *)(a1 + 32) = v10;
  *(_QWORD *)(a1 + 40) = v9;
  *(_QWORD *)(a1 + 48) = v8;
  if ( v6 )
    (**v8)(v8);
  if ( v9 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v9);
  if ( v6 )
    (*v8)[1](v8);
  return a1;
}
