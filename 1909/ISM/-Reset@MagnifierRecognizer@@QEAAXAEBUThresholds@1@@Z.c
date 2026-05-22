/*
 * XREFs of ?Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z @ 0x1801065E0
 * Callers:
 *     ?OnHitTest@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180105240 (-OnHitTest@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInit.c)
 *     ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180105420 (-OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ??0GestureState@MagnifierRecognizer@@QEAA@XZ @ 0x180104EA4 (--0GestureState@MagnifierRecognizer@@QEAA@XZ.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1801058C0 (-clear@-$_Tree@V-$_Tmap_traits@KUContactState@MagnifierRecognizer@@U-$less@K@std@@V-$allocator@U.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MagnifierRecognizer::Reset(MagnifierRecognizer *this, const struct MagnifierRecognizer::Thresholds *a2)
{
  MagnifierRecognizer::GestureState *v4; // rax
  __int64 *v5; // rbx
  __int64 *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx
  _BYTE v9[16]; // [rsp+28h] [rbp-30h] BYREF
  void *v10; // [rsp+38h] [rbp-20h] BYREF

  memset_0(v9, 0, 0x20uLL);
  v4 = MagnifierRecognizer::GestureState::GestureState((MagnifierRecognizer::GestureState *)v9);
  *(_BYTE *)this = *(_BYTE *)v4;
  *((_BYTE *)this + 1) = *((_BYTE *)v4 + 1);
  *((_BYTE *)this + 2) = *((_BYTE *)v4 + 2);
  *((_BYTE *)this + 3) = *((_BYTE *)v4 + 3);
  *((_DWORD *)this + 1) = *((_DWORD *)v4 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)v4 + 2);
  v5 = (__int64 *)((char *)this + 16);
  v6 = (__int64 *)((char *)v4 + 16);
  if ( (char *)this + 16 != (char *)v4 + 16 )
  {
    std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::clear((_QWORD *)this + 2);
    v7 = *v5;
    *v5 = *v6;
    *v6 = v7;
    v8 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = v6[1];
    v6[1] = v8;
  }
  std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::clear(&v10);
  std::_Deallocate<16,0>(v10, (const struct std::nothrow_t *)0x48);
  *((_OWORD *)this + 2) = *(_OWORD *)a2;
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 1);
}
