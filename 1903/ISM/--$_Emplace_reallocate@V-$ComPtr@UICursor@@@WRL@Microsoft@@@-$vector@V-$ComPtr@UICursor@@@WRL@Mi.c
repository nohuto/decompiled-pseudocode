/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@UICursor@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180006370
 * Callers:
 *     ?GetCursors@DWMCursorBroker@@UEAA?AV?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@XZ @ 0x1800062B0 (-GetCursors@DWMCursorBroker@@UEAA-AV-$vector@V-$ComPtr@UICursor@@@WRL@Microsoft@@V-$allocator@V-.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C79C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<ICursor>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<ICursor>>(
        char **a1,
        char *a2,
        char *a3)
{
  char *v4; // r8
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // r13
  unsigned __int64 v13; // rdx
  char *v14; // rdi
  __int64 v15; // r15
  char *v16; // rcx
  char *v17; // rcx
  char *v18; // r8
  char *v19; // rsi
  __int64 v21; // rax
  size_t v22; // rcx
  void *v23; // rax
  __int64 v24; // rcx
  signed __int64 v25; // r10
  char *v26; // r9
  signed __int64 v27; // r10
  char *v28; // r10
  char *v29; // r12
  _QWORD *v30; // [rsp+20h] [rbp-48h]
  unsigned __int64 v31; // [rsp+70h] [rbp+8h]

  v4 = a2;
  v6 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) || (v11 = v10 + v9, v10 + v9 < v8) )
    v11 = v8;
  v31 = v11;
  v12 = 8 * v11;
  v13 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
  {
    v21 = -1LL;
    v13 = -1LL;
  }
  else
  {
    if ( v13 < 0x1000 )
    {
      if ( v13 )
      {
        v14 = (char *)operator new(8 * v11);
        v4 = a2;
      }
      else
      {
        v14 = 0LL;
      }
      goto LABEL_9;
    }
    v21 = -1LL;
  }
  v22 = v13 + 39;
  if ( v13 + 39 >= v13 )
    goto LABEL_20;
  while ( 1 )
  {
    v22 = v21;
LABEL_20:
    v23 = operator new(v22);
    if ( v23 )
      break;
    v21 = _o__invalid_parameter_noinfo_noreturn(v24);
  }
  v14 = (char *)(((unsigned __int64)v23 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
  *((_QWORD *)v14 - 1) = v23;
  v4 = a2;
LABEL_9:
  v15 = 8 * v6;
  v16 = &v14[8 * v6];
  v30 = v16 + 8;
  *(_QWORD *)v16 = 0LL;
  if ( v16 != a3 )
  {
    *(_QWORD *)v16 = *(_QWORD *)a3;
    *(_QWORD *)a3 = 0LL;
  }
  v17 = a1[1];
  if ( v4 == v17 )
  {
    v18 = *a1;
    if ( *a1 != v17 )
    {
      try
      {
        v25 = v14 - v18;
        do
        {
          *(_QWORD *)&v18[v25] = 0LL;
          if ( &v18[v25] != v18 )
          {
            *(_QWORD *)&v18[v25] = *(_QWORD *)v18;
            *(_QWORD *)v18 = 0LL;
          }
          v18 += 8;
        }
        while ( v18 != v17 );
      }
      catch ( ... )
      {
        std::vector<Microsoft::WRL::ComPtr<ICursor>>::_Destroy(v17, &v14[8 * v6], v30);
        std::_Deallocate<16,0>(v14, 8 * v31);
        throw;
      }
    }
  }
  else
  {
    v26 = *a1;
    if ( *a1 != v4 )
    {
      v27 = v14 - v26;
      do
      {
        *(_QWORD *)&v26[v27] = 0LL;
        if ( &v26[v27] != v26 )
        {
          *(_QWORD *)&v26[v27] = *(_QWORD *)v26;
          *(_QWORD *)v26 = 0LL;
        }
        v26 += 8;
      }
      while ( v26 != v4 );
      v17 = a1[1];
    }
    if ( v4 != v17 )
    {
      v28 = &v14[v15 - (_QWORD)v4 + 8];
      do
      {
        *(_QWORD *)&v4[(_QWORD)v28] = 0LL;
        if ( &v4[(_QWORD)v28] != v4 )
        {
          *(_QWORD *)&v4[(_QWORD)v28] = *(_QWORD *)v4;
          *(_QWORD *)v4 = 0LL;
        }
        v4 += 8;
      }
      while ( v4 != v17 );
    }
  }
  v19 = *a1;
  if ( *a1 )
  {
    v29 = a1[1];
    if ( v19 != v29 )
    {
      do
      {
        Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(v19);
        v19 += 8;
      }
      while ( v19 != v29 );
      v19 = *a1;
    }
    std::_Deallocate<16,0>(v19, (a1[2] - v19) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v14;
  a1[1] = &v14[8 * v8];
  a1[2] = &v14[v12];
  return (__int64)&(*a1)[v15];
}
