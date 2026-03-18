/*
 * XREFs of GreDeleteSemaphoreNonTracked @ 0x1C00D8E28
 * Callers:
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C00C3E6C (-MultiUserGreCleanupEngResources@@YAXXZ.c)
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
