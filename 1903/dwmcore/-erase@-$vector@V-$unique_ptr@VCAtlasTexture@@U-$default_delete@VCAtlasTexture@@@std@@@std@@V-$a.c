/*
 * XREFs of ?erase@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@@2@@Z @ 0x180165EDC
 * Callers:
 *     ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x180165DC0 (-MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x180166194 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 */

__int64 ***__fastcall std::vector<std::unique_ptr<CAtlasTexture>>::erase(__int64 a1, __int64 ***a2, __int64 **a3)
{
  __int64 **v3; // rbp
  __int64 **v4; // rdi
  __int64 **v8; // rax
  __int64 **v9; // rsi
  __int64 *v10; // rax
  __int64 *v11; // r14
  void *v12; // rcx
  __int64 *v13; // rdi
  CAtlasTexture *v14; // rcx
  void *v15; // rcx
  __int64 ***result; // rax

  v3 = *(__int64 ***)(a1 + 8);
  v4 = a3 + 1;
  v8 = v3;
  if ( a3 + 1 != v3 )
  {
    v9 = a3;
    do
    {
      if ( v9 != v4 )
      {
        v10 = *v4;
        *v4 = 0LL;
        v11 = *v9;
        *v9 = v10;
        if ( v11 )
        {
          *v11 = (__int64)&CAtlasTexture::`vftable';
          CAtlasTexture::DestroyResources((CAtlasTexture *)v11);
          v12 = (void *)v11[2];
          if ( v12 )
            operator delete(v12);
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v11 + 1);
          operator delete(v11);
        }
      }
      ++v4;
      ++v9;
    }
    while ( v4 != v3 );
    v3 = *(__int64 ***)(a1 + 8);
    v8 = v3;
  }
  v13 = *(v3 - 1);
  if ( v13 )
  {
    v14 = (CAtlasTexture *)*(v3 - 1);
    *v13 = (__int64)&CAtlasTexture::`vftable';
    CAtlasTexture::DestroyResources(v14);
    v15 = (void *)v13[2];
    if ( v15 )
      operator delete(v15);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v13 + 1);
    operator delete(v13);
    v8 = *(__int64 ***)(a1 + 8);
  }
  *(_QWORD *)(a1 + 8) = v8 - 1;
  result = a2;
  *a2 = a3;
  return result;
}
