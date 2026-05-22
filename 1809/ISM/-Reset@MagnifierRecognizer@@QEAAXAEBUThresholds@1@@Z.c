/*
 * XREFs of ?Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z @ 0x1800D0004
 * Callers:
 *     ?OnHitTest@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800CEA70 (-OnHitTest@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInit.c)
 *     ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800CECD0 (-OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@PEAX@2@XZ @ 0x180049B1C (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$all.c)
 *     ??1?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1800CF9EC (--1-$_Tree@V-$_Tmap_traits@KUContactState@MagnifierRecognizer@@U-$less@K@std@@V-$allocator@U-$pa.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@2@@Z @ 0x1800CFA7C (-_Erase@-$_Tree@V-$_Tmap_traits@KUContactState@MagnifierRecognizer@@U-$less@K@std@@V-$allocator@.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MagnifierRecognizer::Reset(MagnifierRecognizer *this, const struct MagnifierRecognizer::Thresholds *a2)
{
  char *v4; // rbx
  __int64 v5; // rax
  void **v6; // rsi
  void **v7; // rdi
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  int v10; // [rsp+28h] [rbp-28h] BYREF
  int v11; // [rsp+2Ch] [rbp-24h]
  int v12; // [rsp+30h] [rbp-20h]
  _QWORD *v13; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h]

  memset_0(&v10, 0, 0x20uLL);
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v13 = std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>>>,0>>::_Buyheadnode();
  *(_DWORD *)this = v10;
  *((_DWORD *)this + 1) = v11;
  *((_DWORD *)this + 2) = v12;
  v4 = (char *)this + 16;
  if ( (_QWORD **)((char *)this + 16) != &v13 )
  {
    v5 = *(_QWORD *)v4;
    v6 = *(void ***)(*(_QWORD *)v4 + 8LL);
    v7 = v6;
    if ( !*((_BYTE *)v6 + 25) )
    {
      do
      {
        std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Erase(
          (__int64)this + 16,
          v7[2]);
        v7 = (void **)*v7;
        operator delete(v6, (const struct std::nothrow_t *)0x48);
        v6 = v7;
      }
      while ( !*((_BYTE *)v7 + 25) );
      v5 = *(_QWORD *)v4;
    }
    *(_QWORD *)(v5 + 8) = v5;
    **(_QWORD **)v4 = *(_QWORD *)v4;
    *(_QWORD *)(*(_QWORD *)v4 + 16LL) = *(_QWORD *)v4;
    *((_QWORD *)this + 3) = 0LL;
    v8 = *(_QWORD **)v4;
    *(_QWORD *)v4 = v13;
    v13 = v8;
    v9 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = v14;
    v14 = v9;
  }
  std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::~_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>((void **)&v13);
  *((_OWORD *)this + 2) = *(_OWORD *)a2;
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 1);
}
