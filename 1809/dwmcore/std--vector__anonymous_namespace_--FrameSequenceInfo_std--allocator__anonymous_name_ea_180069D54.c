/*
 * XREFs of std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Change_array @ 0x180069D54
 * Callers:
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Emplace_reallocate__anonymous_namespace_::FrameSequenceInfo_const_&___ptr64_ @ 0x180069BF0 (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_name_ea_180069BF0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo @ 0x1800DA124 (_anonymous_namespace_--FrameSequenceInfo--_FrameSequenceInfo.c)
 */

char *__fastcall std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Change_array(
        char **a1,
        char *a2,
        __int64 a3,
        __int64 a4)
{
  char *v4; // rbx
  char *v9; // rbp
  char *result; // rax

  v4 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    if ( v4 != v9 )
    {
      do
      {
        anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo(v4);
        v4 += 480;
      }
      while ( v4 != v9 );
      v4 = *a1;
    }
    std::_Deallocate<16,0>(v4, 480 * ((a1[2] - v4) / 480));
  }
  *a1 = a2;
  a1[1] = &a2[480 * a3];
  result = &a2[480 * a4];
  a1[2] = result;
  return result;
}
