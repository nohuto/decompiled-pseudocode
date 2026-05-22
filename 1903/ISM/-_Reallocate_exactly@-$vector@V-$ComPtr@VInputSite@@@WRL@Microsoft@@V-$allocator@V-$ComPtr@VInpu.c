/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x180001C70
 * Callers:
 *     ?GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x18000CFF0 (-GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA-AV-$vector@V-$ComPtr@VInputSite@@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C79C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Reallocate_exactly(char **a1, unsigned __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // rsi
  __int64 v5; // r15
  unsigned __int64 v6; // rax
  char *v7; // rdx
  char *v8; // rcx
  char *v9; // r14
  char *result; // rax
  size_t v11; // rcx
  void *v12; // rax
  __int64 v13; // rcx
  signed __int64 v14; // r9
  char *v15; // r12
  __int64 v16; // rcx
  _QWORD *v17; // [rsp+60h] [rbp+8h]

  v4 = (a1[1] - *a1) >> 3;
  v5 = a2;
  v6 = 8 * a2;
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
  {
    v6 = -1LL;
  }
  else if ( v6 < 0x1000 )
  {
    if ( v6 )
      v2 = operator new(8 * a2);
    else
      v2 = 0LL;
LABEL_5:
    v17 = v2;
    v7 = a1[1];
    v8 = *a1;
    if ( *a1 == v7 )
      goto LABEL_6;
    goto LABEL_29;
  }
  v11 = v6 + 39;
  if ( v6 + 39 < v6 )
    v11 = -1LL;
  v12 = operator new(v11);
  if ( v12 )
  {
    v2 = (_QWORD *)(((unsigned __int64)v12 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v2 - 1) = v12;
    goto LABEL_5;
  }
  _o__invalid_parameter_noinfo_noreturn(v13);
LABEL_29:
  try
  {
    v14 = (char *)v2 - v8;
    do
    {
      *(_QWORD *)&v8[v14] = 0LL;
      if ( &v8[v14] != v8 )
      {
        *(_QWORD *)&v8[v14] = *(_QWORD *)v8;
        *(_QWORD *)v8 = 0LL;
      }
      v8 += 8;
    }
    while ( v8 != v7 );
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v17, 8 * a2);
    throw;
  }
LABEL_6:
  v9 = *a1;
  if ( *a1 )
  {
    v15 = a1[1];
    if ( v9 != v15 )
    {
      do
      {
        v16 = *(_QWORD *)v9;
        if ( *(_QWORD *)v9 )
        {
          *(_QWORD *)v9 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        v9 += 8;
      }
      while ( v9 != v15 );
      v9 = *a1;
    }
    std::_Deallocate<16,0>(v9, (a1[2] - v9) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = (char *)v2;
  a1[1] = (char *)&v2[v4];
  result = (char *)&v2[v5];
  a1[2] = (char *)&v2[v5];
  return result;
}
