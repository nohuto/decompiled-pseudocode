/*
 * XREFs of GreDeleteSemaphoreNonTracked @ 0x1C00B373C
 * Callers:
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C00B3670 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
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
