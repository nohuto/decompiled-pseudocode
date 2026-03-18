/*
 * XREFs of CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___ @ 0x1C00178F0
 * Callers:
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C00177A8 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___ @ 0x1C00178F0 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6__.c)
 * Callees:
 *     _lambda_febfd44819ec4f1448c7d434538d8b97_::operator() @ 0x1C0017748 (_lambda_febfd44819ec4f1448c7d434538d8b97_--operator().c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___ @ 0x1C00178F0 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6__.c)
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C001A39C (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1C023A574 (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z.c)
 */

void __fastcall CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___(
        const struct tagWND *a1,
        __int128 *a2)
{
  const struct tagWND *i; // rdx
  __int64 v5; // r8
  struct tagWND *NextComponentWindow; // rax
  struct tagWND *v7; // rdi
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 && (unsigned int)CoreWindowProp::IsHost(a1) )
  {
    for ( i = 0LL; ; i = v7 )
    {
      NextComponentWindow = CoreWindowProp::GetNextComponentWindow(a1, i);
      v7 = NextComponentWindow;
      if ( !NextComponentWindow )
        break;
      v5 = 0LL;
      if ( **((_DWORD **)a2 + 1) == 1 )
        v5 = -2LL;
      lambda_febfd44819ec4f1448c7d434538d8b97_::operator()(*(__int64 ***)a2, (__int64)NextComponentWindow, v5);
      v8 = *a2;
      CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___(v7, &v8);
    }
  }
}
