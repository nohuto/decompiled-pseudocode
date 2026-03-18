/*
 * XREFs of ?_Change_array@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@2@_K1@Z @ 0x18001B8D4
 * Callers:
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x18001B7D4 (--$_Emplace_reallocate@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@st.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x180166194 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 */

__int64 __fastcall std::vector<std::unique_ptr<CAtlasTexture>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  CAtlasTexture **v4; // rbx
  __int64 result; // rax
  CAtlasTexture **v10; // rbp
  CAtlasTexture *v11; // rsi
  CAtlasTexture *v12; // rcx
  void *v13; // rcx

  v4 = *(CAtlasTexture ***)a1;
  if ( *(_QWORD *)a1 )
  {
    v10 = *(CAtlasTexture ***)(a1 + 8);
    if ( v4 != v10 )
    {
      do
      {
        v11 = *v4;
        if ( *v4 )
        {
          v12 = *v4;
          *(_QWORD *)v11 = &CAtlasTexture::`vftable';
          CAtlasTexture::DestroyResources(v12);
          v13 = (void *)*((_QWORD *)v11 + 2);
          if ( v13 )
            operator delete(v13);
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((char *)v11 + 8);
          operator delete(v11, 0x28uLL);
        }
        ++v4;
      }
      while ( v4 != v10 );
      v4 = *(CAtlasTexture ***)a1;
    }
    std::_Deallocate<16,0>(v4, (*(_QWORD *)(a1 + 16) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  *(_QWORD *)a1 = a2;
  return result;
}
