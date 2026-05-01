/*
 * XREFs of ??$MakeAndInitialize@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18024AE5C
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@$$V@wil@@YA?AV?$ComPtr@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x18024AFE4 (--$MakeAndInitializeOrThrow@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@$$V@w.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@QEAA@XZ @ 0x18024B294 (--0TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18024B960 (-InternalRelease@-$ComPtr@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@WRL@Mi.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker,Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker,>(
        __int64 *a1)
{
  unsigned int v2; // ebx
  Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker *v10; // [rsp+38h] [rbp+10h]

  v2 = 0;
  *a1 = 0LL;
  v3 = (Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker *)operator new(
                                                                             0xB0uLL,
                                                                             (const struct std::nothrow_t *)&std::nothrow);
  v10 = v3;
  if ( v3 )
  {
    v4 = Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker::TabTransferEventBroker(v3);
    v9 = v4;
    v5 = v4;
    if ( v4 )
    {
      v6 = *(_QWORD *)(v4 + 24);
      while ( v6 >= 0 )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 24), v6 + 1, v6);
        if ( v7 == v6 )
          goto LABEL_9;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v6 + 16));
    }
LABEL_9:
    *a1 = v5;
    Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker>::InternalRelease(&v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
