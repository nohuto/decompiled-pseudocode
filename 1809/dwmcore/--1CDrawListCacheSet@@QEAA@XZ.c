/*
 * XREFs of ??1CDrawListCacheSet@@QEAA@XZ @ 0x18004DD58
 * Callers:
 *     ??1CTreeData@@UEAA@XZ @ 0x180021BEC (--1CTreeData@@UEAA@XZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18004D570 (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ?clear@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180067248 (-clear@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCa.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CDrawListCacheSet::~CDrawListCacheSet(CDrawListCacheSet *this)
{
  _QWORD *v1; // rsi
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  _QWORD *v5; // rax
  _QWORD *v6; // rbp
  _QWORD *v7; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *(_QWORD **)this;
  if ( *(_QWORD *)this == -1LL )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  *(_QWORD *)this = -1LL;
  if ( v1 )
  {
    v3 = v1;
    do
    {
      if ( v3[2] )
      {
        detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear(v3 + 3);
        v4 = *v3;
        if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
          __fastfail(3u);
        *v5 = v4;
        *(_QWORD *)(v4 + 8) = v5;
      }
      v6 = v3;
      v3 = (_QWORD *)v3[10];
      detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear(v6 + 3);
      v7 = (_QWORD *)v6[3];
      v6[3] = 0LL;
      if ( v7 == v6 + 6 )
        v7 = 0LL;
      WPF::ProcessHeapImpl::Free(v7);
      operator delete(v6, 0x58uLL);
    }
    while ( v3 );
  }
  *(_QWORD *)this = v1;
}
