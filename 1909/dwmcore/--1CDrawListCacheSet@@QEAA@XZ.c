/*
 * XREFs of ??1CDrawListCacheSet@@QEAA@XZ @ 0x180078800
 * Callers:
 *     ??1CTreeData@@UEAA@XZ @ 0x1800785F4 (--1CTreeData@@UEAA@XZ.c)
 *     ??1CProjectedShadow@@MEAA@XZ @ 0x1801EE360 (--1CProjectedShadow@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ?clear_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800651BC (-clear_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDra.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CDrawListCacheSet::~CDrawListCacheSet(void ***this, __int64 a2, __int64 a3)
{
  void **v3; // rdi
  void **v5; // rbx
  unsigned __int64 v6; // r8
  void **v7; // rax
  void ***v8; // rcx
  void **v9; // rbp
  void **v10; // r14
  void **v11; // rcx
  unsigned __int64 v12; // r8
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *this;
  if ( *this == (void **)-1LL )
    ModuleFailFastForHRESULT(2147549183LL, retaddr, a3);
  *this = (void **)-1LL;
  if ( v3 )
  {
    v5 = v3;
    do
    {
      if ( v5[2] )
      {
        v6 = ((_BYTE *)v5[4] - (_BYTE *)v5[3]) >> 4;
        if ( v6 )
          detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
            (__int64)(v5 + 3),
            a2,
            v6);
        v7 = (void **)*v5;
        if ( *((void ***)*v5 + 1) != v5 || (v8 = (void ***)v5[1], *v8 != v5) )
          __fastfail(3u);
        *v8 = v7;
        v7[1] = v8;
      }
      v9 = v5;
      v5 = (void **)v5[10];
      v10 = v9 + 3;
      v11 = (void **)v9[3];
      v12 = ((_BYTE *)v9[4] - (_BYTE *)v11) >> 4;
      if ( v12 )
      {
        detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
          (__int64)(v9 + 3),
          a2,
          v12);
        v11 = (void **)*v10;
      }
      *v10 = 0LL;
      if ( v11 == v9 + 6 )
        v11 = 0LL;
      operator delete(v11);
      operator delete(v9);
    }
    while ( v5 );
  }
  *this = v3;
}
