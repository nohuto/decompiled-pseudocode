/*
 * XREFs of ??3@YAXPEAX@Z @ 0x1C0040EF0
 * Callers:
 *     NdisMRegisterWdiMiniportDriver @ 0x1C0128010 (NdisMRegisterWdiMiniportDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall operator delete(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
