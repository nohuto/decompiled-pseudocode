/*
 * XREFs of ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1C023A574
 * Callers:
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___ @ 0x1C00178F0 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6__.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0019FCC (zzzSetWindowCompositionCloak.c)
 *     ??$ForEachDescendantInComponentHierarchy@P6AXPEBUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AX0@Z@Z @ 0x1C010EAD0 (--$ForEachDescendantInComponentHierarchy@P6AXPEBUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AX0.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8___ @ 0x1C010EB00 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8__.c)
 *     xxxSetBridgeWindowChild @ 0x1C01F8234 (xxxSetBridgeWindowChild.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C001A3CC (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 */

struct tagWND *__fastcall CoreWindowProp::GetNextComponentWindow(const struct tagWND *a1, const struct tagWND *a2)
{
  BOOL v3; // eax
  __int64 v4; // rcx
  const struct tagWND **v5; // r8
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = CWindowProp::GetProp<CoreWindowProp>((__int64)a1, &v7);
  v4 = 0LL;
  if ( !v3 )
    return 0LL;
  v5 = *(const struct tagWND ***)(v7 + 32);
  if ( a2 )
  {
    while ( v5 )
    {
      if ( a2 == v5[1] )
      {
        if ( *v5 )
          return (struct tagWND *)*((_QWORD *)*v5 + 1);
        return (struct tagWND *)v4;
      }
      v5 = (const struct tagWND **)*v5;
    }
    return 0LL;
  }
  if ( v5 )
    return v5[1];
  return (struct tagWND *)v4;
}
