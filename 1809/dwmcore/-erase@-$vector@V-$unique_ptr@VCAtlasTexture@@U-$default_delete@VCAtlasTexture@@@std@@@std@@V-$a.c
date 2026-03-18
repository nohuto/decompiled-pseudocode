/*
 * XREFs of ?erase@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@@2@@Z @ 0x180205A20
 * Callers:
 *     ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x180205908 (-MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x180205CF0 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
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
            WPF::ProcessHeapImpl::Free(v12);
          Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v11 + 1);
          WPF::ProcessHeapImpl::Free(v11);
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
      WPF::ProcessHeapImpl::Free(v15);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v13 + 1);
    WPF::ProcessHeapImpl::Free(v13);
    v8 = *(__int64 ***)(a1 + 8);
  }
  *(_QWORD *)(a1 + 8) = v8 - 1;
  result = a2;
  *a2 = a3;
  return result;
}
