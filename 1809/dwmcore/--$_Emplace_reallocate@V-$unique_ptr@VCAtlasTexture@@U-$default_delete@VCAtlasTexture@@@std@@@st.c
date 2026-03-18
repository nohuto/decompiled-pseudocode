/*
 * XREFs of ??$_Emplace_reallocate@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800069B0
 * Callers:
 *     ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x180004F8C (-AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z.c)
 * Callees:
 *     ?_Change_array@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@2@_K1@Z @ 0x180006AA8 (-_Change_array@-$vector@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@s.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall std::vector<std::unique_ptr<CAtlasTexture>>::_Emplace_reallocate<std::unique_ptr<CAtlasTexture>>(
        __int64 **a1,
        char *a2,
        __int64 *a3)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  __int64 *v6; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  SIZE_T v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // r14
  __int64 v16; // r10
  _QWORD *v17; // r8
  __int64 *v18; // rdx
  __int64 *v19; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a2 - (char *)*a1;
  v5 = a1[1] - *a1;
  v6 = (__int64 *)a2;
  if ( v5 == 0x1FFFFFFFFFFFFFFFLL )
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  v8 = v5 + 1;
  v9 = a1[2] - *a1;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v5 + 1;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v5 + 1;
  }
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = *a3;
  v15 = v4 & 0xFFFFFFFFFFFFFFF8uLL;
  v16 = v13;
  *a3 = 0LL;
  v17 = (_QWORD *)v13;
  *(_QWORD *)(v15 + v13) = v14;
  v18 = a1[1];
  v19 = *a1;
  if ( v6 == v18 )
  {
    while ( v19 != v18 )
    {
      v21 = *v19;
      *v19++ = 0LL;
      *v17++ = v21;
    }
  }
  else
  {
    if ( v19 != v6 )
    {
      do
      {
        v22 = *v19;
        *v19++ = 0LL;
        *v17++ = v22;
      }
      while ( v19 != v6 );
      v18 = a1[1];
    }
    if ( v6 != v18 )
    {
      v23 = v16 + v15 - (_QWORD)v6;
      do
      {
        v24 = *v6;
        *v6 = 0LL;
        *(__int64 *)((char *)v6++ + v23 + 8) = v24;
      }
      while ( v6 != v18 );
    }
  }
  std::vector<std::unique_ptr<CAtlasTexture>>::_Change_array(a1, v16, v8, v11);
  return (unsigned __int64)*a1 + v15;
}
