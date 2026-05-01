/*
 * XREFs of ?GetLastActiveItem@HolographicViewHostItemLedger@@W7EAAJPEAPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1800A08B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HolographicViewHostItemLedger::GetLastActiveItem(
        __int64 a1,
        struct Windows::Internal::Shell::Holographic::IViewHostItem **a2)
{
  return HolographicViewHostItemLedger::GetLastActiveItem((HolographicViewHostItemLedger *)(a1 - 8), a2);
}
