/*
 * XREFs of ?_Tidy@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800D9548
 * Callers:
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x18002436C (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x180166194 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 */

void __fastcall std::vector<std::unique_ptr<CAtlasTexture>>::_Tidy(__int64 a1)
{
  CAtlasTexture **v1; // rbx
  CAtlasTexture **v3; // rbp
  CAtlasTexture *v4; // rsi
  CAtlasTexture *v5; // rcx
  void *v6; // rcx

  v1 = *(CAtlasTexture ***)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(CAtlasTexture ***)(a1 + 8);
    if ( v1 != v3 )
    {
      do
      {
        v4 = *v1;
        if ( *v1 )
        {
          v5 = *v1;
          *(_QWORD *)v4 = &CAtlasTexture::`vftable';
          CAtlasTexture::DestroyResources(v5);
          v6 = (void *)*((_QWORD *)v4 + 2);
          if ( v6 )
            operator delete(v6);
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v4 + 1);
          operator delete(v4);
        }
        ++v1;
      }
      while ( v1 != v3 );
      v1 = *(CAtlasTexture ***)a1;
    }
    std::_Deallocate<16,0>(v1, (*(_QWORD *)(a1 + 16) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
