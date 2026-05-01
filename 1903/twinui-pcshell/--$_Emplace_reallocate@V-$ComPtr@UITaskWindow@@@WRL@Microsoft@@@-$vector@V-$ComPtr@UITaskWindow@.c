/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1800151A0
 * Callers:
 *     ?OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x18001511C (-OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039948 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??_G?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x180042910 (--_G-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080B08 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<ITaskWindow>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<ITaskWindow>>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v4; // rdi
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r13
  _QWORD *v15; // rdx
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx
  _QWORD *v18; // rdi
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r8
  _QWORD *v23; // r14
  _QWORD *v24; // [rsp+20h] [rbp-58h]
  unsigned __int64 v25; // [rsp+88h] [rbp+10h]
  __int64 v26; // [rsp+98h] [rbp+20h]

  v4 = a2;
  v6 = ((__int64)a2 - *a1) >> 3;
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
  v25 = v11;
  v12 = 8 * v11;
  v26 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = 8 * v6;
  v15 = (_QWORD *)(v13 + 8 * v6);
  v24 = v15 + 1;
  *v15 = 0LL;
  if ( v15 != a3 )
  {
    *v15 = *a3;
    *a3 = 0LL;
  }
  v16 = (_QWORD *)a1[1];
  v17 = (_QWORD *)*a1;
  if ( v4 == v16 )
  {
    if ( v17 != v16 )
    {
      try
      {
        v20 = v13 - (_QWORD)v17;
        do
        {
          *(_QWORD *)((char *)v17 + v20) = 0LL;
          if ( (_QWORD *)((char *)v17 + v20) != v17 )
          {
            *(_QWORD *)((char *)v17 + v20) = *v17;
            *v17 = 0LL;
          }
          ++v17;
        }
        while ( v17 != v16 );
      }
      catch ( ... )
      {
        std::vector<Microsoft::WRL::ComPtr<ITaskWindow>>::_Destroy(v17, v13 + 8 * v6, v24);
        std::_Deallocate<16,0>(v13, 8 * v25);
        throw;
      }
    }
  }
  else
  {
    if ( v17 != v4 )
    {
      v21 = v13 - (_QWORD)v17;
      do
      {
        *(_QWORD *)((char *)v17 + v21) = 0LL;
        if ( (_QWORD *)((char *)v17 + v21) != v17 )
        {
          *(_QWORD *)((char *)v17 + v21) = *v17;
          *v17 = 0LL;
        }
        ++v17;
      }
      while ( v17 != v4 );
      v16 = (_QWORD *)a1[1];
    }
    if ( v4 != v16 )
    {
      v22 = v13 + v14 - (_QWORD)v4 + 8;
      do
      {
        *(_QWORD *)((char *)v4 + v22) = 0LL;
        if ( (_QWORD *)((char *)v4 + v22) != v4 )
        {
          *(_QWORD *)((char *)v4 + v22) = *v4;
          *v4 = 0LL;
        }
        ++v4;
      }
      while ( v4 != v16 );
    }
  }
  v18 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v23 = (_QWORD *)a1[1];
    if ( v18 != v23 )
    {
      do
        Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::`scalar deleting destructor'(v18++);
      while ( v18 != v23 );
      v18 = (_QWORD *)*a1;
    }
    std::_Deallocate<16,0>(v18, (a1[2] - (_QWORD)v18) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v13;
  a1[1] = v13 + 8 * v8;
  a1[2] = v13 + v26;
  return v14 + *a1;
}
