/*
 * XREFs of GreDeleteSemaphoreNonTracked @ 0x1C00B621C
 * Callers:
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C00B6150 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
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
