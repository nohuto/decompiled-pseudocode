/*
 * XREFs of CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8___ @ 0x1C010EB00
 * Callers:
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8___ @ 0x1C010EB00 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8__.c)
 *     ?TransitionForegroundPriority@PriorityBoostCUI@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C012F900 (-TransitionForegroundPriority@PriorityBoostCUI@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C001A39C (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8___ @ 0x1C010EB00 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8__.c)
 *     _anonymous_namespace_::RequestPriorityUpdate @ 0x1C012FDA8 (_anonymous_namespace_--RequestPriorityUpdate.c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1C023A574 (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z.c)
 */

void __fastcall CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8___(
        struct tagWND *a1)
{
  const struct tagWND *i; // rdx
  struct tagWND *NextComponentWindow; // rax
  struct tagWND *v4; // rdi

  if ( a1 && (unsigned int)CoreWindowProp::IsHost(a1) )
  {
    for ( i = 0LL; ; i = v4 )
    {
      NextComponentWindow = CoreWindowProp::GetNextComponentWindow(a1, i);
      v4 = NextComponentWindow;
      if ( !NextComponentWindow )
        break;
      if ( (*(_BYTE *)(*((_QWORD *)NextComponentWindow + 5) + 31LL) & 8) == 0 )
        anonymous_namespace_::RequestPriorityUpdate(*((_QWORD *)NextComponentWindow + 2), 0LL);
      CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8___(v4);
    }
  }
}
