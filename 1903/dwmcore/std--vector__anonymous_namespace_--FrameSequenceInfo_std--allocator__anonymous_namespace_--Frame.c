/*
 * XREFs of std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Emplace_reallocate__anonymous_namespace_::FrameSequenceInfo_const_&_ @ 0x1800C671C
 * Callers:
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x180075728 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 * Callees:
 *     std::_Destroy_range1_std::allocator__anonymous_namespace_::FrameSequenceInfo___ @ 0x1800726C4 (std--_Destroy_range1_std--allocator__anonymous_namespace_--FrameSequenceInfo___.c)
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo @ 0x180077E8C (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Change_array @ 0x1800C6890 (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_name_ea_1800C6890.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo_0 @ 0x180172778 (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo_0.c)
 */

__int64 __fastcall std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Emplace_reallocate__anonymous_namespace_::FrameSequenceInfo_const___(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r9
  __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbp
  SIZE_T v13; // rcx
  __int64 v14; // r14
  __int64 v15; // r8
  __int64 v16; // rax
  void **v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // r15
  void **v20; // rdx
  void **v21; // rcx
  void **v23; // rbx
  __int64 v24; // rsi
  __int64 v25; // [rsp+60h] [rbp+8h]
  __int64 v26; // [rsp+68h] [rbp+10h]
  __int64 v27; // [rsp+78h] [rbp+20h]

  v4 = a2 - *a1;
  v7 = a1[1] - *a1;
  v8 = v4 / 480;
  if ( v7 / 480 == 0x88888888888888LL )
    std::_Xlength_error((const char *)v7);
  v9 = v7 / 480 + 1;
  v10 = (a1[2] - *a1) / 480;
  v11 = v10 >> 1;
  if ( v10 > 0x88888888888888LL - (v10 >> 1) )
  {
    v12 = v9;
  }
  else
  {
    v12 = v11 + v10;
    if ( v11 + v10 < v9 )
      v12 = v9;
  }
  v13 = 480 * v12;
  if ( v12 > 0x88888888888888LL )
    v13 = -1LL;
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
  v25 = 480 * v8;
  v27 = v14 + 480 * v8;
  anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo(v27, a3);
  v16 = a1[1];
  v17 = (void **)v14;
  v18 = *a1;
  if ( a2 == v16 )
  {
    if ( v18 != v16 )
    {
      v19 = a1[1];
      do
      {
        anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo((__int64)v17, v18);
        v17 += 60;
        v18 += 480LL;
      }
      while ( v18 != v19 );
    }
    v20 = v17;
    v21 = v17;
  }
  else
  {
    while ( v18 != a2 )
    {
      anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo_0(v17, v18);
      v17 += 60;
      v18 += 480LL;
    }
    std::_Destroy_range1_std::allocator__anonymous_namespace_::FrameSequenceInfo___(v17, v17, v15);
    v23 = (void **)(v27 + 480);
    v26 = a1[1];
    if ( a2 != v26 )
    {
      v24 = v27 - v25 - v14 + a2;
      do
      {
        anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo_0(v23, v24);
        v23 += 60;
        v24 += 480LL;
      }
      while ( v24 != v26 );
    }
    v20 = v23;
    v21 = v23;
  }
  std::_Destroy_range1_std::allocator__anonymous_namespace_::FrameSequenceInfo___(v21, v20, v15);
  std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Change_array(
    a1,
    v14,
    v9,
    v12);
  return v25 + *a1;
}
