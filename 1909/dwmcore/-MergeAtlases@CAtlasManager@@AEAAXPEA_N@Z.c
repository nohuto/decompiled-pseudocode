/*
 * XREFs of ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x1801646D0
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x1800632A0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?erase@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801647EC (-erase@-$vector@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@std@@V-$a.c)
 *     ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z @ 0x1801648F4 (-CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z.c)
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x180164AA4 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 *     ?PurgeAndNotify@CAtlasTexture@@QEAAXXZ @ 0x180164BFC (-PurgeAndNotify@CAtlasTexture@@QEAAXXZ.c)
 */

void __fastcall CAtlasManager::MergeAtlases(CAtlasManager *this, bool *a2)
{
  __int64 v2; // r8
  bool v5; // bp
  unsigned int v6; // r10d
  __int64 i; // rax
  unsigned int v8; // r9d
  __int64 v9; // rbx
  int v10; // ecx
  CAtlasTexture **v11; // rdi
  int v12; // r14d
  CAtlasTexture **v13; // rsi
  void *v14; // rcx
  unsigned int v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  v5 = 0;
  v6 = *(_DWORD *)(**(_QWORD **)this + 24LL);
  for ( i = *(_QWORD *)this + 8LL; i != *((_QWORD *)this + 1); i += 8LL )
  {
    v8 = *(_DWORD *)(*(_QWORD *)i + 24LL);
    if ( v8 >= v6 )
    {
      if ( v8 == v6
        && v8 - *(_DWORD *)(*(_QWORD *)i + 28LL) < *(_DWORD *)(*(_QWORD *)v2 + 24LL) - *(_DWORD *)(*(_QWORD *)v2 + 28LL) )
      {
        v2 = i;
      }
    }
    else
    {
      v6 = *(_DWORD *)(*(_QWORD *)i + 24LL);
      v2 = i;
    }
  }
  v9 = *(_QWORD *)v2;
  *(_QWORD *)v2 = 0LL;
  std::vector<std::unique_ptr<CAtlasTexture>>::erase(this, &v15);
  v10 = *(_DWORD *)(v9 + 24);
  if ( v10 != *(_DWORD *)(v9 + 28) )
  {
    v11 = *(CAtlasTexture ***)this;
    v12 = v10 + 1;
    v13 = (CAtlasTexture **)*((_QWORD *)this + 1);
    v15 = 1;
    if ( v11 != v13 )
    {
      v5 = 1;
      do
      {
        CAtlasTexture::CopyFrom(*v11, (const struct CAtlasTexture *)v9, &v15);
        if ( v15 == v12 )
          break;
        ++v11;
      }
      while ( v11 != v13 );
    }
    CAtlasTexture::PurgeAndNotify((CAtlasTexture *)v9);
  }
  *a2 = v5;
  *(_QWORD *)v9 = &CAtlasTexture::`vftable';
  CAtlasTexture::DestroyResources((CAtlasTexture *)v9);
  v14 = *(void **)(v9 + 16);
  if ( v14 )
    operator delete(v14);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)(v9 + 8));
  operator delete((void *)v9);
}
