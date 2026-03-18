/*
 * XREFs of ??D?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@details@gsl@@QEBAAEBW4ShaderLinkingArgument@@XZ @ 0x1800E2AE0
 * Callers:
 *     DiscoverSamplers @ 0x1800E29E8 (DiscoverSamplers.c)
 *     ??$find@V?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@details@gsl@@W4ShaderLinkingArgument@@@std@@YA?AV?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@details@gsl@@V123@V123@AEBW4ShaderLinkingArgument@@@Z @ 0x1800E3054 (--$find@V-$span_iterator@V-$span@$$CBW4ShaderLinkingArgument@@$0-0@gsl@@$0A@@details@gsl@@W4Shad.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall gsl::details::span_iterator<gsl::span<enum ShaderLinkingArgument const,-1>,0>::operator*(
        gsl::details *a1)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)a1 + 1);
  if ( v1 == **(_QWORD **)a1 )
  {
    gsl::details::terminate(a1);
    JUMPOUT(0x1800E2B02LL);
  }
  return *(_QWORD *)(*(_QWORD *)a1 + 8LL) + 2 * v1;
}
