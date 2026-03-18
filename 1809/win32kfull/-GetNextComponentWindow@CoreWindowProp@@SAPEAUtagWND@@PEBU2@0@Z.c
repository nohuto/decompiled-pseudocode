/*
 * XREFs of ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1C02224BC
 * Callers:
 *     zzzSetWindowCompositionCloak @ 0x1C0072E2C (zzzSetWindowCompositionCloak.c)
 *     ??$ForEachDescendantInComponentHierarchy@P6AXPEAUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AXPEAU1@@Z@Z @ 0x1C00CF014 (--$ForEachDescendantInComponentHierarchy@P6AXPEAUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AXP.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___ @ 0x1C01090E4 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6__.c)
 *     xxxSetBridgeWindowChild @ 0x1C01E21C4 (xxxSetBridgeWindowChild.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00723DC (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
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
