/*
 * XREFs of std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Tidy @ 0x180069B5C
 * Callers:
 *     _anonymous_namespace_::FramesReport::_FramesReport @ 0x18006C2A4 (_anonymous_namespace_--FramesReport--_FramesReport.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo @ 0x1800DA124 (_anonymous_namespace_--FrameSequenceInfo--_FrameSequenceInfo.c)
 */

void __fastcall std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Tidy(
        char **a1)
{
  char *v1; // rbx
  char *v3; // rsi

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v1 != v3 )
    {
      do
      {
        anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo(v1);
        v1 += 480;
      }
      while ( v1 != v3 );
      v1 = *a1;
    }
    std::_Deallocate<16,0>(v1, 480 * ((a1[2] - v1) / 480));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
