/*
 * XREFs of ?RemoveRenderTargetMapEntry@CWindowBackgroundTreatment@@QEAAXPEAVIRenderTarget@@@Z @ 0x1801C0338
 * Callers:
 *     ?RemoveAssociations@CBaseRenderTarget@@AEAAXXZ @ 0x1800DAED8 (-RemoveAssociations@CBaseRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@_K@Z @ 0x180017500 (-_End@-$_Hash@V-$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V-$_Uh.c)
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18005E3D8 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$list@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x1801C0438 (-erase@-$list@U-$pair@QEAVIRenderTarget@@V-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@s.c)
 */

void __fastcall CWindowBackgroundTreatment::RemoveRenderTargetMapEntry(
        CWindowBackgroundTreatment *this,
        struct IRenderTarget *a2)
{
  __int64 v4; // r10
  __int64 *i; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF
  struct IRenderTarget *v13; // [rsp+38h] [rbp+10h] BYREF

  v13 = a2;
  v4 = *((_QWORD *)this + 15) & std::_Hash_bytes((const unsigned __int8 *)&v13, 8uLL);
  for ( i = *(__int64 **)(*((_QWORD *)this + 12) + 16 * v4);
        i != (__int64 *)*std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_End(
                           (__int64)this + 72,
                           &v12,
                           v4);
        i = (__int64 *)*i )
  {
    if ( (struct IRenderTarget *)i[2] == a2 )
      goto LABEL_6;
  }
  i = (__int64 *)*((_QWORD *)this + 10);
LABEL_6:
  v6 = (_QWORD *)((char *)this + 80);
  if ( i != *((__int64 **)this + 10) )
  {
    v7 = i[3];
    if ( v7 )
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)(v7 + 96) + 32LL))(v7 + 96, (char *)this + 56);
    v8 = std::_Hash_bytes((const unsigned __int8 *)i + 16, 8uLL);
    v9 = *((_QWORD *)this + 12);
    v10 = 2 * (*((_QWORD *)this + 15) & v8);
    if ( *(__int64 **)(v9 + 16 * (*((_QWORD *)this + 15) & v8) + 8) == i )
    {
      if ( *(__int64 **)(v9 + 16 * (*((_QWORD *)this + 15) & v8)) == i )
      {
        *(_QWORD *)(v9 + 16 * (*((_QWORD *)this + 15) & v8)) = *v6;
        v9 = *((_QWORD *)this + 12);
        v11 = *v6;
      }
      else
      {
        v11 = i[1];
      }
      *(_QWORD *)(v9 + 8 * v10 + 8) = v11;
    }
    else if ( *(__int64 **)(v9 + 16 * (*((_QWORD *)this + 15) & v8)) == i )
    {
      *(_QWORD *)(v9 + 16 * (*((_QWORD *)this + 15) & v8)) = *i;
    }
    std::list<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>::erase(
      (char *)this + 80,
      &v12,
      i);
  }
}
