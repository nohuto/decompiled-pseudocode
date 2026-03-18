/*
 * XREFs of GreDeleteSemaphoreNonTracked @ 0x1C0060E4C
 * Callers:
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C0060CB4 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall GreDeleteSemaphoreNonTracked(struct _ERESOURCE *P)
{
  if ( P )
  {
    ExDeleteResourceLite(P);
    ExFreePoolWithTag(P, 0);
  }
}
