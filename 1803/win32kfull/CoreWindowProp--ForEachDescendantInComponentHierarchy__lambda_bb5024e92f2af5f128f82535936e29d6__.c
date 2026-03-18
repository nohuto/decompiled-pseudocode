/*
 * XREFs of CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___ @ 0x1C00EEF80
 * Callers:
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C00EEE58 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___ @ 0x1C00EEF80 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6__.c)
 * Callees:
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006FE5C (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___ @ 0x1C00EEF80 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6__.c)
 *     _lambda_febfd44819ec4f1448c7d434538d8b97_::operator() @ 0x1C00EEFC0 (_lambda_febfd44819ec4f1448c7d434538d8b97_--operator().c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1C01F9DC4 (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z.c)
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
      lambda_febfd44819ec4f1448c7d434538d8b97_::operator()(*(_QWORD *)a2, NextComponentWindow, v5);
      v8 = *a2;
      CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___(v7, &v8);
    }
  }
}
