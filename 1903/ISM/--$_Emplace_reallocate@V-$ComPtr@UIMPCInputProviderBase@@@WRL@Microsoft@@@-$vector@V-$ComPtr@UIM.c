/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180021B6C
 * Callers:
 *     ?AddInputProvider@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x180021944 (-AddInputProvider@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180021A00 (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000AD54 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>(
        char **a1,
        char *a2,
        char *a3)
{
  char *v4; // rdi
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  size_t v12; // rcx
  char *v13; // rsi
  __int64 v14; // r13
  char *v15; // rdx
  char *v16; // rdx
  char *v17; // rcx
  char *v18; // rdi
  signed __int64 v20; // r9
  signed __int64 v21; // r8
  char *v22; // r8
  char *v23; // r14
  __int64 v24; // rcx
  _QWORD *v25; // [rsp+20h] [rbp-58h]
  unsigned __int64 v26; // [rsp+88h] [rbp+10h]
  __int64 v27; // [rsp+98h] [rbp+20h]

  v4 = a2;
  v6 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v7 + 1;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  v26 = v11;
  v12 = 8 * v11;
  v27 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = 8 * v6;
  v15 = &v13[8 * v6];
  v25 = v15 + 8;
  *(_QWORD *)v15 = 0LL;
  if ( v15 != a3 )
  {
    *(_QWORD *)v15 = *(_QWORD *)a3;
    *(_QWORD *)a3 = 0LL;
  }
  v16 = a1[1];
  v17 = *a1;
  if ( v4 == v16 )
  {
    if ( v17 != v16 )
    {
      try
      {
        v20 = v13 - v17;
        do
        {
          *(_QWORD *)&v17[v20] = 0LL;
          if ( &v17[v20] != v17 )
          {
            *(_QWORD *)&v17[v20] = *(_QWORD *)v17;
            *(_QWORD *)v17 = 0LL;
          }
          v17 += 8;
        }
        while ( v17 != v16 );
      }
      catch ( ... )
      {
        std::vector<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy>>::_Destroy(v17, &v13[8 * v6], v25);
        std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(8 * v26));
        throw;
      }
    }
  }
  else
  {
    if ( v17 != v4 )
    {
      v21 = v13 - v17;
      do
      {
        *(_QWORD *)&v17[v21] = 0LL;
        if ( &v17[v21] != v17 )
        {
          *(_QWORD *)&v17[v21] = *(_QWORD *)v17;
          *(_QWORD *)v17 = 0LL;
        }
        v17 += 8;
      }
      while ( v17 != v4 );
      v16 = a1[1];
    }
    if ( v4 != v16 )
    {
      v22 = &v13[v14 - (_QWORD)v4 + 8];
      do
      {
        *(_QWORD *)&v4[(_QWORD)v22] = 0LL;
        if ( &v4[(_QWORD)v22] != v4 )
        {
          *(_QWORD *)&v4[(_QWORD)v22] = *(_QWORD *)v4;
          *(_QWORD *)v4 = 0LL;
        }
        v4 += 8;
      }
      while ( v4 != v16 );
    }
  }
  v18 = *a1;
  if ( *a1 )
  {
    v23 = a1[1];
    if ( v18 != v23 )
    {
      do
      {
        v24 = *(_QWORD *)v18;
        if ( *(_QWORD *)v18 )
        {
          *(_QWORD *)v18 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        }
        v18 += 8;
      }
      while ( v18 != v23 );
      v18 = *a1;
    }
    std::_Deallocate<16,0>(v18, (const struct std::nothrow_t *)((a1[2] - v18) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  *a1 = v13;
  a1[1] = &v13[8 * v8];
  a1[2] = &v13[v27];
  return (__int64)&(*a1)[v14];
}
