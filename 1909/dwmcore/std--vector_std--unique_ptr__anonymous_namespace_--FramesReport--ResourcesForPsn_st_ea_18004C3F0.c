/*
 * XREFs of std::vector_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______::_Emplace_reallocate_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_____ @ 0x18004C3F0
 * Callers:
 *     std::vector_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______::emplace_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_____ @ 0x18004C334 (std--vector_std--unique_ptr__anonymous_namespace_--FramesReport--ResourcesForPsn_std--default_de.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     std::vector_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______::_Change_array @ 0x18004C518 (std--vector_std--unique_ptr__anonymous_namespace_--FramesReport--ResourcesForPsn_st_ea_18004C518.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

unsigned __int64 __fastcall std::vector_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______::_Emplace_reallocate_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_____(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  __int64 *v6; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  SIZE_T v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // r14
  __int64 v16; // r10
  _QWORD *v17; // r8
  __int64 *v18; // rdx
  __int64 *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rax

  v4 = (unsigned __int64)a2 - *(_QWORD *)a1;
  v5 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  v6 = a2;
  if ( v5 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error((const char *)a1);
  v8 = v5 + 1;
  v9 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v5 + 1;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v5 + 1;
  }
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = *a3;
  v15 = v4 & 0xFFFFFFFFFFFFFFF8uLL;
  v16 = v13;
  *a3 = 0LL;
  v17 = (_QWORD *)v13;
  *(_QWORD *)(v15 + v13) = v14;
  v18 = *(__int64 **)(a1 + 8);
  v19 = *(__int64 **)a1;
  if ( v6 == v18 )
  {
    while ( v19 != v18 )
    {
      v21 = *v19;
      *v19++ = 0LL;
      *v17++ = v21;
    }
  }
  else
  {
    if ( v19 != v6 )
    {
      do
      {
        v20 = *v19;
        *v19++ = 0LL;
        *v17++ = v20;
      }
      while ( v19 != v6 );
      v18 = *(__int64 **)(a1 + 8);
    }
    if ( v6 != v18 )
    {
      v23 = v16 + v15 - (_QWORD)v6;
      do
      {
        v24 = *v6;
        *v6 = 0LL;
        *(__int64 *)((char *)v6++ + v23 + 8) = v24;
      }
      while ( v6 != v18 );
    }
  }
  std::vector_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______::_Change_array(
    a1,
    v16,
    v8,
    v11);
  return v15 + *(_QWORD *)a1;
}
