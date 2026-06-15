/*
 * XREFs of ?GetConnectedStreamGroups@CDeviceGraphStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F3080
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180004FE0 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180044928 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@PEAU32@@Z @ 0x1800D999C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800F1B98 (--$_Emplace_reallocate@AEBV-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@-$vector@V-$ComP.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDeviceGraphStore::GetConnectedStreamGroups(__int64 a1, __int64 a2)
{
  char *v4; // r15
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  const char *v6; // r9
  _QWORD *v7; // rbx
  char *v8; // rsi
  char *v9; // r14
  __int64 *v10; // r8
  __int64 v11; // rcx
  _QWORD *i; // rax
  char *j; // rbx
  int v14; // eax
  unsigned int v15; // edi
  char *k; // rbx
  __int64 v17; // rcx
  __int64 result; // rax
  char *m; // rbx
  __int64 v20; // rcx
  char *v21; // [rsp+28h] [rbp-40h] BYREF
  __int128 v22; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v7 = **(_QWORD ***)(a1 + 56);
  v8 = 0LL;
  v9 = 0LL;
  try
  {
    while ( v7 != *(_QWORD **)(a1 + 56) )
    {
      v10 = v7 + 8;
      if ( v8 == v9 )
      {
        std::vector<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore> const &>(
          &v21,
          v9,
          v10);
        v8 = (char *)*((_QWORD *)&v22 + 1);
        v9 = (char *)v22;
        v4 = v21;
      }
      else
      {
        *(_QWORD *)v9 = *v10;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)v9);
        v9 += 8;
        *(_QWORD *)&v22 = v9;
      }
      v11 = v7[2];
      if ( *(_BYTE *)(v11 + 25) )
      {
        for ( i = (_QWORD *)v7[1]; !*((_BYTE *)i + 25) && v7 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
          v7 = i;
      }
      else
      {
        i = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Min((_QWORD *)v11);
      }
      v7 = i;
    }
    if ( v5 )
      LeaveCriticalSection(v5);
    for ( j = v4; j != v9; j += 8 )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)j + 136LL))(*(_QWORD *)j, a2);
      v15 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x31A,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
          (const char *)(unsigned int)v14);
        if ( v4 )
        {
          for ( k = v4; k != v9; k += 8 )
          {
            v17 = *(_QWORD *)k;
            if ( *(_QWORD *)k )
            {
              *(_QWORD *)k = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
            }
          }
          std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)(8 * ((v8 - v4) >> 3)));
        }
        return v15;
      }
    }
    if ( v4 )
    {
      for ( m = v4; m != v9; m += 8 )
      {
        v20 = *(_QWORD *)m;
        if ( *(_QWORD *)m )
        {
          *(_QWORD *)m = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
      std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)(8 * ((v8 - v4) >> 3)));
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x31F,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                           v6);
  }
  return result;
}
