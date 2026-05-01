/*
 * XREFs of ?_RemovePerApplicationData@ViewEventDispatcher@@AEAAXPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x180275CF4
 * Callers:
 *     wil::details::ScopeExitFn__lambda_a6abd2126dae86b9c3635cd950208394___::_ScopeExitFn__lambda_a6abd2126dae86b9c3635cd950208394___ @ 0x180268CC8 (wil--details--ScopeExitFn__lambda_a6abd2126dae86b9c3635cd950208394___--_ScopeExitFn__lambda_a6ab.c)
 *     ?_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x180273304 (-_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z @ 0x180275D88 (-_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memmove_0 @ 0x1800B0F63 (memmove_0.c)
 */

unsigned __int64 __fastcall ViewEventDispatcher::_RemovePerApplicationData(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rbx
  __int64 *i; // rcx
  __int64 v6; // rdx

  result = *(_QWORD *)(a1 + 560);
  v3 = 0LL;
  if ( result )
  {
    for ( i = *(__int64 **)(a1 + 552); a2 != *i; ++i )
    {
      if ( ++v3 >= result )
        return result;
    }
    if ( v3 < result )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(i);
      v6 = *(_QWORD *)(a1 + 560);
      if ( v3 != v6 - 1 )
      {
        memmove_0(
          (void *)(*(_QWORD *)(a1 + 552) + 8 * v3),
          (const void *)(*(_QWORD *)(a1 + 552) + 8 * v3 + 8),
          8 * (v6 - v3) - 8);
        v6 = *(_QWORD *)(a1 + 560);
      }
      result = v6 - 1;
      *(_QWORD *)(a1 + 560) = v6 - 1;
    }
  }
  return result;
}
