/*
 * XREFs of CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8___ @ 0x1C0016F0C
 * Callers:
 *     ?TransitionForegroundPriority@PriorityBoostCUI@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0016590 (-TransitionForegroundPriority@PriorityBoostCUI@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8___ @ 0x1C0016F0C (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8__.c)
 * Callees:
 *     _anonymous_namespace_::RequestPriorityUpdate @ 0x1C0016A38 (_anonymous_namespace_--RequestPriorityUpdate.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8___ @ 0x1C0016F0C (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8__.c)
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C008BAAC (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1C023AB94 (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z.c)
 */

void __fastcall CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8___(
        const struct tagWND *a1,
        char a2)
{
  const struct tagWND *i; // rdx
  __int64 v5; // rdx
  struct tagWND *NextComponentWindow; // rax
  struct tagWND *v7; // rdi

  if ( a1 && (unsigned int)CoreWindowProp::IsHost(a1) )
  {
    for ( i = 0LL; ; i = v7 )
    {
      NextComponentWindow = CoreWindowProp::GetNextComponentWindow(a1, i);
      v7 = NextComponentWindow;
      if ( !NextComponentWindow )
        break;
      if ( (*(_BYTE *)(*((_QWORD *)NextComponentWindow + 5) + 31LL) & 8) == 0 )
        anonymous_namespace_::RequestPriorityUpdate(*((_QWORD *)NextComponentWindow + 2), 0);
      LOBYTE(v5) = a2;
      CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8___(v7, v5);
    }
  }
}
