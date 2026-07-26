/*
 * XREFs of ??3@YAXPEAX@Z @ 0x1C00267F4
 * Callers:
 *     ?RebalanceExtensions@@YAXXZ @ 0x1C00D1A74 (-RebalanceExtensions@@YAXXZ.c)
 *     NdisMRegisterWdiMiniportDriver @ 0x1C0107B70 (NdisMRegisterWdiMiniportDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall operator delete(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
