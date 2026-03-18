/*
 * XREFs of ??1CProjectedShadowCaster@@MEAA@XZ @ 0x1801ACDAC
 * Callers:
 *     ??_GCProjectedShadowCaster@@MEAAPEAXI@Z @ 0x1801ACEC0 (--_GCProjectedShadowCaster@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveVisual@CProjectedShadowCaster@@AEAAXXZ @ 0x1801ADF5C (-RemoveVisual@CProjectedShadowCaster@@AEAAXXZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@2@0@Z @ 0x1801AE6C8 (-erase@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$l.c)
 */

void __fastcall CProjectedShadowCaster::~CProjectedShadowCaster(CProjectedShadowCaster *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 *v4; // rbx
  __int64 *v5; // rsi
  __int64 v6; // rcx
  char v7; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CProjectedShadowCaster::`vftable';
  CProjectedShadowCaster::RemoveVisual(this);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 15));
  v2 = *((_QWORD *)this + 17);
  if ( v2 )
  {
    *((_QWORD *)this + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 16);
  v3 = *((_QWORD *)this + 14);
  if ( v3 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::erase(
    (char *)this + 96,
    &v7,
    **((_QWORD **)this + 12),
    *((_QWORD *)this + 12));
  std::_Deallocate<16,0>(*((void **)this + 12), 0x40uLL);
  v4 = (__int64 *)*((_QWORD *)this + 8);
  if ( v4 )
  {
    v5 = (__int64 *)*((_QWORD *)this + 9);
    if ( v4 != v5 )
    {
      do
      {
        v6 = *v4;
        if ( *v4 )
        {
          *v4 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        }
        ++v4;
      }
      while ( v4 != v5 );
      v4 = (__int64 *)*((_QWORD *)this + 8);
    }
    std::_Deallocate<16,0>(v4, (*((_QWORD *)this + 10) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
  }
  CResource::~CResource(this);
}
