/*
 * XREFs of _RmpClientCallbackCompareToCallback@8 @ 0x10011C90
 * Callers:
 *     <none>
 * Callees:
 *     _RmpClientCallbackHandleCompare@16 @ 0x10011D3B (_RmpClientCallbackHandleCompare@16.c)
 */

int __stdcall RmpClientCallbackCompareToCallback(int a1, int a2)
{
  return RmpClientCallbackHandleCompare(
           *(_DWORD *)(a1 + 24),
           *(_DWORD *)(a1 + 28),
           *(_DWORD *)(a2 + 24),
           *(_DWORD *)(a2 + 28));
}
