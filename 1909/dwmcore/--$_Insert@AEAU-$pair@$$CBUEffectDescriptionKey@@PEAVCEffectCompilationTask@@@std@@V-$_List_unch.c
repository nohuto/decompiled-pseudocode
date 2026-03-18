/*
 * XREFs of ??$_Insert@AEAU?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@1@@Z @ 0x1800C62DC
 * Callers:
 *     ?_Reinsert@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x18001F40C (-_Reinsert@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V-$_Uhash_.c)
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x1800C5EE8 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@_K@Z @ 0x18003F19C (-_End@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBVC.c)
 *     ??R?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@QEBA_NAEBUEffectDescriptionKey@@0@Z @ 0x1800C6470 (--R-$_Uhash_compare@UEffectDescriptionKey@@U-$hash@UEffectDescriptionKey@@@std@@U-$equal_to@UEff.c)
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x1800C64A8 (-_Check_size@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V-$_Uhas.c)
 *     ?erase@?$list@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@2@@Z @ 0x18018AD34 (-erase@-$list@U-$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@V-$allocator@.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::_Insert<std::pair<EffectDescriptionKey const,CEffectCompilationTask *> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>>>>(
        _QWORD *a1,
        __int64 a2,
        unsigned int *a3,
        __int64 *a4)
{
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 **v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  v8 = 2 * (*a3 & a1[6]);
  v10 = *std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_End(
           (__int64)a1,
           &v19,
           *a3 & a1[6]);
  v11 = v10;
  while ( 1 )
  {
    v12 = a1[3];
    if ( v11 == *(_QWORD *)(v12 + 8 * v8) )
      break;
    v10 = *(_QWORD *)(v10 + 8);
    v11 = v10;
    if ( !(unsigned __int8)std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>::operator()(
                             v9,
                             a3,
                             v10 + 16) )
    {
      std::list<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>::erase(a1 + 1, &v19, a4);
      *(_QWORD *)a2 = v10;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  v13 = *a4;
  if ( v11 != *a4 )
  {
    *(_QWORD *)a4[1] = v13;
    **(_QWORD **)(v13 + 8) = v11;
    **(_QWORD **)(v11 + 8) = a4;
    v14 = *(_QWORD *)(v11 + 8);
    *(_QWORD *)(v11 + 8) = *(_QWORD *)(v13 + 8);
    *(_QWORD *)(v13 + 8) = a4[1];
    a4[1] = v14;
    v12 = a1[3];
  }
  v15 = *(_QWORD *)(v12 + 8 * v8);
  if ( v15 == a1[1] )
  {
    *(_QWORD *)(v12 + 8 * v8) = a4;
    *(_QWORD *)(a1[3] + 8 * v8 + 8) = a4;
  }
  else if ( v15 == v11 )
  {
    *(_QWORD *)(v12 + 8 * v8) = a4;
  }
  else
  {
    v17 = *(__int64 ***)(v12 + 8 * v8 + 8);
    v18 = *v17;
    *(_QWORD *)(v12 + 8 * v8 + 8) = *v17;
    if ( v18 != a4 )
      *(_QWORD *)(a1[3] + 8 * v8 + 8) = *(_QWORD *)(*(_QWORD *)(a1[3] + 8 * v8 + 8) + 8LL);
  }
  std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::_Check_size(a1);
  *(_QWORD *)a2 = a4;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
