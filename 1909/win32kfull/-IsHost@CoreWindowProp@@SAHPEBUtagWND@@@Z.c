/*
 * XREFs of ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C001A39C
 * Callers:
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___ @ 0x1C00178F0 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6__.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0019FCC (zzzSetWindowCompositionCloak.c)
 *     ??$ForEachDescendantInComponentHierarchy@P6AXPEBUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AX0@Z@Z @ 0x1C010EAD0 (--$ForEachDescendantInComponentHierarchy@P6AXPEBUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AX0.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8___ @ 0x1C010EB00 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8__.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C012FA58 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C012FCE0 (-IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1C01F8234 (xxxSetBridgeWindowChild.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C001A3CC (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 */

__int64 __fastcall CoreWindowProp::IsHost(const struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>(a1, &v3) )
    return *(unsigned int *)(v3 + 16);
  return v1;
}
