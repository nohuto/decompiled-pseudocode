/*
 * XREFs of std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Emplace_reallocate__anonymous_namespace_::FrameSequenceInfo_const_&_ @ 0x180034ED4
 * Callers:
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x18003B678 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 * Callees:
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Change_array @ 0x180035048 (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_name_ea_180035048.c)
 *     std::_Destroy_range1_std::allocator__anonymous_namespace_::FrameSequenceInfo___ @ 0x180038218 (std--_Destroy_range1_std--allocator__anonymous_namespace_--FrameSequenceInfo___.c)
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo @ 0x18003DB6C (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo_0 @ 0x180171028 (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo_0.c)
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
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // [rsp+60h] [rbp+8h]
  __int64 v25; // [rsp+68h] [rbp+10h]
  __int64 v26; // [rsp+78h] [rbp+20h]

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
  v24 = 480 * v8;
  v26 = v14 + 480 * v8;
  anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo(v26, a3);
  v15 = a1[1];
  v16 = v14;
  v17 = *a1;
  if ( a2 == v15 )
  {
    if ( v17 != v15 )
    {
      v18 = a1[1];
      do
      {
        anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo(v16, v17);
        v16 += 480LL;
        v17 += 480LL;
      }
      while ( v17 != v18 );
    }
    v19 = v16;
    v20 = v16;
  }
  else
  {
    while ( v17 != a2 )
    {
      anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo_0(v16, v17);
      v16 += 480LL;
      v17 += 480LL;
    }
    std::_Destroy_range1_std::allocator__anonymous_namespace_::FrameSequenceInfo___(v16, v16);
    v22 = v26 + 480;
    v25 = a1[1];
    if ( a2 != v25 )
    {
      v23 = v26 - v24 - v14 + a2;
      do
      {
        anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo_0(v22, v23);
        v22 += 480LL;
        v23 += 480LL;
      }
      while ( v23 != v25 );
    }
    v19 = v22;
    v20 = v22;
  }
  std::_Destroy_range1_std::allocator__anonymous_namespace_::FrameSequenceInfo___(v20, v19);
  std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Change_array(
    a1,
    v14,
    v9,
    v12);
  return v24 + *a1;
}
