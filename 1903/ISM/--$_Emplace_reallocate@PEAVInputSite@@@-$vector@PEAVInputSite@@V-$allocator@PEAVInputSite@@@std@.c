/*
 * XREFs of ??$_Emplace_reallocate@PEAVInputSite@@@?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@QEAAPEAPEAVInputSite@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x180006088
 * Callers:
 *     ?CreateInputSiteFromId@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18002F204 (-CreateInputSiteFromId@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSite.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C79C (--2@YAPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18005287C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Ucopy@PEAW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAPEAW4_Button@@PEAW42@00@Z @ 0x1800666DC (--$_Ucopy@PEAW4_Button@@@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAAPEAW4_Butto.c)
 *     ?_Umove_if_noexcept1@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXPEAUColor@UI@Windows@@00U?$integral_constant@_N$00@2@@Z @ 0x180066738 (-_Umove_if_noexcept1@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEA.c)
 */

__int64 __fastcall std::vector<InputSite *>::_Emplace_reallocate<InputSite *>(void **a1, _BYTE *a2, _QWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // r12
  size_t v14; // rdx
  _QWORD *v15; // rbx
  _BYTE *v16; // r8
  void *v17; // rdx
  _BYTE *v18; // rcx
  const struct std::nothrow_t *v19; // rdx
  size_t v21; // rcx
  void *v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // [rsp+70h] [rbp+8h] BYREF
  void *v25; // [rsp+78h] [rbp+10h] BYREF

  v6 = (a2 - (_BYTE *)*a1) >> 3;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  v8 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v9 = v7 + 1;
  v10 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 > 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v12 = v7 + 1;
    goto LABEL_5;
  }
  v12 = v11 + v10;
  if ( v11 + v10 >= v9 )
    goto LABEL_5;
  while ( 1 )
  {
    v12 = v9;
LABEL_5:
    v25 = (void *)v12;
    v13 = v12;
    v14 = 8 * v12;
    if ( v12 > v8 )
      v14 = -1LL;
    if ( v14 < 0x1000 )
      break;
    v21 = v14 + 39;
    if ( v14 + 39 < v14 )
      v21 = -1LL;
    v22 = operator new(v21);
    if ( v22 )
    {
      v15 = (_QWORD *)(((unsigned __int64)v22 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v15 - 1) = v22;
      goto LABEL_26;
    }
    _o__invalid_parameter_noinfo_noreturn(v10);
  }
  if ( v14 )
    v15 = operator new(v14);
  else
    v15 = 0LL;
LABEL_26:
  try
  {
    v24 = (unsigned __int64)v15;
    v15[v6] = *a3;
    v16 = a1[1];
    v17 = *a1;
    if ( a2 == v16 )
    {
      std::vector<Windows::UI::Color>::_Umove_if_noexcept1(a1, v17, v16, v15, 0);
    }
    else
    {
      std::vector<enum _Button>::_Ucopy<enum _Button *>(v10, v17, a2, v15);
      std::vector<enum _Button>::_Ucopy<enum _Button *>(v23, a2, a1[1], &v15[v6 + 1]);
    }
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v24, 8LL * (_QWORD)v25);
    throw;
  }
  v18 = *a1;
  if ( *a1 )
  {
    v19 = (const struct std::nothrow_t *)(((_BYTE *)a1[2] - v18) & 0xFFFFFFFFFFFFFFF8uLL);
    v24 = (unsigned __int64)v19;
    v25 = v18;
    if ( (unsigned __int64)v19 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v25, &v24);
      v19 = (const struct std::nothrow_t *)v24;
      v18 = v25;
    }
    operator delete(v18, v19);
  }
  *a1 = v15;
  a1[1] = &v15[v9];
  a1[2] = &v15[v13];
  return (__int64)*a1 + 8 * v6;
}
