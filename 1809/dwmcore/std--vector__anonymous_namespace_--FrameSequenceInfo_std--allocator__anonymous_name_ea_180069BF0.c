/*
 * XREFs of std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Emplace_reallocate__anonymous_namespace_::FrameSequenceInfo_const_&___ptr64_ @ 0x180069BF0
 * Callers:
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x1800C3D90 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 * Callees:
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Change_array @ 0x180069D54 (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_name_ea_180069D54.c)
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo @ 0x1800C4BAC (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo_0 @ 0x180148360 (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo_0.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Emplace_reallocate__anonymous_namespace_::FrameSequenceInfo_const_____ptr64_(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // r9
  __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r14
  SIZE_T v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rbp
  __int64 v16; // rbx
  __int64 i; // rdi
  __int64 v18; // rbx
  __int64 v20; // r13
  __int64 v21; // r13
  void *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v23; // [rsp+60h] [rbp+8h]
  __int64 v24; // [rsp+68h] [rbp+10h]

  v3 = a2;
  v4 = a2 - *a1;
  v7 = a1[1] - *a1;
  v8 = v4 / 480;
  v24 = v7 / 480;
  if ( v7 / 480 == 0x88888888888888LL )
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
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
  v23 = 480 * v8;
  anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo(480 * v8 + v14, a3);
  v15 = a1[1];
  v16 = *a1;
  if ( v3 == v15 )
  {
    for ( i = v14; v16 != v15; v16 += 480LL )
    {
      anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo(i, v16);
      i += 480LL;
    }
LABEL_10:
    v18 = v23;
    goto LABEL_11;
  }
  v20 = v14;
  if ( v16 != v3 )
  {
    do
    {
      anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo_0(v20, v16);
      v20 += 480LL;
      v16 += 480LL;
    }
    while ( v16 != v3 );
    v15 = a1[1];
  }
  if ( v3 == v15 )
    goto LABEL_10;
  v18 = v23;
  v21 = v14 + v23 - v3 + 480;
  do
  {
    anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo_0(v3 + v21, v3);
    v3 += 480LL;
  }
  while ( v3 != v15 );
LABEL_11:
  std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Change_array(
    a1,
    v14,
    v24 + 1,
    v12);
  return v18 + *a1;
}
