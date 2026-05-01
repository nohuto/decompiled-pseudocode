/*
 * XREFs of ?AddNotification@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXPEAV23456@W4ChainLinkEventTypeInternal@23456@@Z @ 0x180161968
 * Callers:
 *     ?RemoveFromChainInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAXAEAVChainLinkNotifier@12345@@Z @ 0x1801676B0 (-RemoveFromChainInternal@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAX.c)
 * Callees:
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x180160EF8 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::AddNotification(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v5; // rbx
  __int64 result; // rax

  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)(a1 + 8), a2);
  v5 = a1 + 64;
  result = v5 + 16;
  while ( v5 != result )
  {
    if ( !*(_BYTE *)(v5 + 4) )
    {
      *(_DWORD *)v5 = a3;
      *(_BYTE *)(v5 + 4) = 1;
      return result;
    }
    v5 += 8LL;
  }
  return result;
}
